<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>DEUtils.h</title>
    <meta name="viewport" content="width=device-width">
    <style>
    body { margin: 1em; }
    pre { font: 11pt/1.25 ui-monospace, "SF Mono", Menlo, monospace; }
    a { color: #af52de; }
    pre { white-space: pre-wrap; }
    header, footer { color: #8e8e93; }
    header { white-space: pre; }
    footer { max-width: 700px; }
    hr { border: 0; border-top: 1px solid #c6c6c8; }
    .download { text-decoration: none; }
    @media (prefers-color-scheme: dark) {
        body { background: black; color: white; }
        a { color: #bf5af2; }
        hr { border-top-color: #333335; }
    }
    </style>
</head>
<body>
<pre><header>
 ___          _   _             ___
| _ \_  _ _ _| |_(_)_ __  ___  | _ )_ _ _____ __ _____ ___ _ _
|   / || | ' \  _| | '  \/ -_) | _ \ '_/ _ \ V  V (_-// -_) '_|
|_|_\\_,_|_||_\__|_|_|_|_\___| |___/_| \___/\_/\_//__/\___|_|


</header><hr>

/PrivateFrameworks/DiagnosticExtensions.framework/DEUtils.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/DiagnosticExtensions.framework/DiagnosticExtensions (1)
 */

@interface DEUtils : NSObject

+ (bool)copyAllFilesFromDir:(id)arg1 toDir:(id)arg2;
+ (bool)copyAllFilesFromDir:(id)arg1 toDir:(id)arg2 keepSourceDir:(bool)arg3;
+ (id)copyAndReturn:(id)arg1 toDir:(id)arg2;
+ (id)copyAndReturn:(id)arg1 toDir:(id)arg2 withNewFileName:(id)arg3;
+ (bool)copyFile:(id)arg1 toDir:(id)arg2;
+ (id)copyItem:(id)arg1 toDestinationDir:(id)arg2 zipped:(bool)arg3;
+ (id)copyPath:(id)arg1 toDestinationDir:(id)arg2 zipped:(bool)arg3;
+ (id)copyPaths:(id)arg1 toDestinationDir:(id)arg2 withZipName:(id)arg3;
+ (id)createUserOwnedDirectoryAtUrl:(id)arg1;
+ (id)dirForTarGz:(id)arg1;
+ (id)enumeratorForAllItems:(id)arg1;
+ (void)excludeFromBackup:(id)arg1;
+ (id)findAllItems:(id)arg1 includeDirs:(bool)arg2;
+ (id)findAllfiles:(id)arg1;
+ (id)findEntriesInDirectory:(id)arg1 createdAfter:(id)arg2 matchingPattern:(id)arg3;
+ (unsigned long long)getDirectorySize:(id)arg1;
+ (unsigned long long)getFileSystemItemSize:(id)arg1;
+ (bool)isValidDirectory:(id)arg1;
+ (id)lsDir:(id)arg1;
+ (id)lsDir:(id)arg1 sorted:(bool)arg2;
+ (id)processErrorResponse:(id)arg1;
+ (void)removeFile:(id)arg1;
+ (id)tarGzForDirectoryUrl:(id)arg1;
+ (id)tarGzForDirectoryUrl:(id)arg1 validatesUrl:(bool)arg2;
+ (id)uniqueDateString;
+ (id)urlByRemovingComponentsBefore:(id)arg1 source:(id)arg2 keepComponent:(bool)arg3;
+ (id)userFileAttributes;
+ (id)userLibraryDirectoryForApp:(id)arg1;

@end


<hr><footer>
Source code: <a href="https://github.com/hbang/RuntimeBrowser">https://github.com/hbang/RuntimeBrowser</a>

Authors:
  Ezra Epstein (eepstein@prajna.com)
  Nicolas Seriot (nicolas@seriot.ch)
  HASHBANG Productions

Copyright &copy; 2002 by Prajna IT Consulting
Copyright &copy; 2015 by <a href="http://www.seriot.ch">Nicolas Seriot</a>
Copyright &copy; 2021 by <a href="https://hashbang.productions">HASHBANG Productions</a>

THIS PROGRAM AND THIS CODE COME WITH ABSOLUTELY NO WARRANTY. THIS CODE HAS BEEN PROVIDED "AS IS" AND THE RESPONSIBILITY FOR ITS OPERATIONS IS 100% YOURS.

RuntimeBrowser is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation; either version 2 of the License, or (at your option) any later version.

RuntimeBrowser is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License along with RuntimeBrowser (in a file called "COPYING.txt"); if not, write to the Free Software Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA</footer></pre>
</body>
</html>
