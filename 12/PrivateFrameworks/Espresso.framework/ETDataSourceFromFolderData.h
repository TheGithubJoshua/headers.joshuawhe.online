<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>ETDataSourceFromFolderData.h</title>
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

/PrivateFrameworks/Espresso.framework/ETDataSourceFromFolderData.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/Espresso.framework/Espresso (120)
 */

@interface ETDataSourceFromFolderData : NSObject <ETDataSource> {
    bool  _balanceClassesForTraining;
    NSMutableArray * _classNames;
    NSMutableDictionary * _folderToImages;
    NSArray * _imageFileNames;
    NSString * _imagesDir;
    int  _numberOfClasses;
    NSMutableDictionary * _pathToClassIndex;
}

@property bool balanceClassesForTraining;
@property (nonatomic, retain) NSMutableArray *classNames;
@property (nonatomic, retain) NSMutableDictionary *folderToImages;
@property (nonatomic, retain) NSArray *imageFileNames;
@property (nonatomic, retain) NSString *imagesDir;
@property int numberOfClasses;
@property (nonatomic, retain) NSMutableDictionary *pathToClassIndex;

- (void).cxx_destruct;
- (bool)balanceClassesForTraining;
- (struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })bufferWithPath:(id)arg1;
- (id)classNames;
- (id)dataPointAtIndex:(int)arg1;
- (id)folderToImages;
- (id)imageFileNames;
- (id)imagesDir;
- (id)initWithFolder:(id)arg1 balanceClassesForTraining:(bool)arg2;
- (int)numberOfClasses;
- (int)numberOfDataPoints;
- (id)pathToClassIndex;
- (void)setBalanceClassesForTraining:(bool)arg1;
- (void)setClassNames:(id)arg1;
- (void)setFolderToImages:(id)arg1;
- (void)setImageFileNames:(id)arg1;
- (void)setImagesDir:(id)arg1;
- (void)setNumberOfClasses:(int)arg1;
- (void)setPathToClassIndex:(id)arg1;

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
