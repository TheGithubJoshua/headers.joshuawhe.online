<?php
function listHeaderFiles($directory = './16/') {
    $headerFiles = [];

    $iterator = new RecursiveIteratorIterator(new RecursiveDirectoryIterator($directory));

    foreach ($iterator as $file) {
        if ($file->isDir()) {
            continue;
        }

        if (strtolower($file->getExtension()) === 'h') {
            $headerFiles[] = str_replace($directory, '', $file->getPathname());
        }
    }

    return $headerFiles;
}
?>
