<?php
// Replace '/path/to/12/' with the actual path to your server's directory
$baseDir = '/path/to/12/';

function listFrameworkDirs($baseDir)
{
    $frameworkDirs = [];
    $dirIterator = new RecursiveDirectoryIterator($baseDir, FilesystemIterator::SKIP_DOTS);
    $iterator = new RecursiveIteratorIterator($dirIterator, RecursiveIteratorIterator::SELF_FIRST);

    foreach ($iterator as $file) {
        if ($file->isDir() && strpos($file->getFilename(), '.framework') !== false) {
            // Store the relative path from the baseDir
            $relativePath = str_replace($baseDir, '', $file->getPathname());
            $frameworkDirs[] = $relativePath;
        }
    }

    return $frameworkDirs;
}

$frameworks = listFrameworkDirs($baseDir);
?>
<?php