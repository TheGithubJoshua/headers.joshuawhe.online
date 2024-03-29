<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>NSFileAttributes.h</title>
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

/Frameworks/Foundation.framework/NSFileAttributes.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/Foundation.framework/Foundation (1575.23)
 */

@interface NSFileAttributes : NSDictionary {
    struct { 
        bool extensionHidden; 
        NSDate *creationDate; 
        struct _fields { 
            unsigned int extensionHidden : 1; 
            unsigned int creationDate : 1; 
            unsigned int reserved : 30; 
        } validFields; 
    }  catInfo;
    NSMutableDictionary * dict;
    NSDictionary * extendedAttrs;
    int  fileProtectionClass;
    struct stat { 
        int st_dev; 
        unsigned short st_mode; 
        unsigned short st_nlink; 
        unsigned long long st_ino; 
        unsigned int st_uid; 
        unsigned int st_gid; 
        int st_rdev; 
        struct timespec { 
            long long tv_sec; 
            long long tv_nsec; 
        } st_atimespec; 
        struct timespec { 
            long long tv_sec; 
            long long tv_nsec; 
        } st_mtimespec; 
        struct timespec { 
            long long tv_sec; 
            long long tv_nsec; 
        } st_ctimespec; 
        struct timespec { 
            long long tv_sec; 
            long long tv_nsec; 
        } st_birthtimespec; 
        long long st_size; 
        long long st_blocks; 
        int st_blksize; 
        unsigned int st_flags; 
        unsigned int st_gen; 
        int st_lspare; 
        long long st_qspare[2]; 
    }  statInfo;
}

+ (id)_attributesAtPath:(id)arg1 partialReturn:(bool)arg2 filterResourceFork:(bool)arg3 error:(id*)arg4;
+ (id)_attributesAtURL:(id)arg1 partialReturn:(bool)arg2 filterResourceFork:(bool)arg3 error:(id*)arg4;
+ (id)attributesAtPath:(id)arg1 traverseLink:(bool)arg2;
+ (id)attributesWithStat:(struct stat { int x1; unsigned short x2; unsigned short x3; unsigned long long x4; unsigned int x5; unsigned int x6; int x7; struct timespec { long long x_8_1_1; long long x_8_1_2; } x8; struct timespec { long long x_9_1_1; long long x_9_1_2; } x9; struct timespec { long long x_10_1_1; long long x_10_1_2; } x10; struct timespec { long long x_11_1_1; long long x_11_1_2; } x11; long long x12; long long x13; int x14; unsigned int x15; unsigned int x16; int x17; long long x18[2]; }*)arg1;

- (unsigned long long)count;
- (void)dealloc;
- (id)fileGroupOwnerAccountName;
- (unsigned long long)fileGroupOwnerAccountNumber;
- (id)fileModificationDate;
- (id)fileOwnerAccountName;
- (unsigned long long)fileOwnerAccountNumber;
- (unsigned long long)filePosixPermissions;
- (unsigned long long)fileSize;
- (unsigned long long)fileSystemFileNumber;
- (long long)fileSystemNumber;
- (id)fileType;
- (unsigned long long)hash;
- (bool)isDirectory;
- (bool)isEqual:(id)arg1;
- (id)keyEnumerator;
- (id)objectForKey:(id)arg1;

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
