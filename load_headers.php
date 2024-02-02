<?php
include 'list_files.php';

$offset = isset($_GET['offset']) ? intval($_GET['offset']) : 0;
$limit = isset($_GET['limit']) ? intval($_GET['limit']) : 20;
$search = $_GET['search'] ?? '';

$headers = listHeaderFiles(); // Retrieve the full list of headers

if ($search !== '') {
    $headers = array_filter($headers, function($header) use ($search) {
        return stripos($header, $search) !== false;
    });
}

$headers = array_slice($headers, $offset, $limit); // Get the subset of headers

if (!empty($headers)) {
    echo '<ul>';
    foreach ($headers as $header) {
        echo '<li><a href="view_file.php?file=' . urlencode($header) . '">' . htmlspecialchars($header) . '</a></li>';
    }
    echo '</ul>';
} else {
    // No more headers to load
    echo '';
}

