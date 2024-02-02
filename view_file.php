
<?php
$filename = $_GET['file'] ?? '';
$directory = './12/'; // Ensure this is the correct relative path to your headers directory
$fullPath = $directory . $filename;

// Removed the security check here
// Ensure you understand the risks of doing so

$content = htmlspecialchars(file_get_contents($fullPath));
?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Viewing <?php echo htmlspecialchars($filename); ?></title>
    <style>
        pre {
            white-space: pre-wrap;
            word-wrap: break-word;
        }
    </style>
</head>
<body>
    <h1><?php echo htmlspecialchars($filename); ?></h1>
    <pre><?php echo $content; ?></pre>
</body>
</html>
