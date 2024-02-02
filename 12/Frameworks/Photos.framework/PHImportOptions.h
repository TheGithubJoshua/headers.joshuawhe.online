<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PHImportOptions.h</title>
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

/Frameworks/Photos.framework/PHImportOptions.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/Photos.framework/Photos (1)
 */

@interface PHImportOptions : NSObject {
    PHAssetCollection * _destinationAlbum;
    PHImportSource * _importSource;
    PHPhotoLibrary * _library;
    struct options_bits { 
        unsigned int preserveFolderStructure : 1; 
        unsigned int hideProgress : 1; 
        unsigned int skipAlertWhenFinished : 1; 
        unsigned int referencedImport : 1; 
        unsigned int allowDuplicates : 1; 
        unsigned int skipDiskSpaceCheck : 1; 
        unsigned int deleteAfterImport : 1; 
        unsigned int metadataAddMode : 1; 
        unsigned int omitImportComplete : 1; 
        unsigned int allowUnsupported : 1; 
        unsigned int fileOperation : 3; 
        unsigned int importedBy : 8; 
    }  _options_bits;
    NSString * _personId;
    NSString * _rootSourcePath;
    NSSortDescriptor * _sortDescriptor;
}

@property (nonatomic) bool allowDuplicates;
@property (nonatomic) bool deleteAfterImport;
@property (nonatomic, retain) PHAssetCollection *destinationAlbum;
@property (nonatomic) unsigned char fileOperation;
@property (nonatomic) bool hideProgress;
@property (nonatomic, retain) PHImportSource *importSource;
@property (nonatomic, retain) PHPhotoLibrary *library;
@property (nonatomic, retain) NSString *personId;
@property (nonatomic) bool preserveFolderStructure;
@property (nonatomic) bool referencedImport;
@property (nonatomic, retain) NSString *rootSourcePath;
@property (nonatomic) bool skipAlertWhenFinished;
@property (nonatomic) bool skipDiskSpaceCheck;
@property (nonatomic, retain) NSSortDescriptor *sortDescriptor;

- (void).cxx_destruct;
- (bool)allowDuplicates;
- (bool)allowUnsupported;
- (bool)deleteAfterImport;
- (id)destinationAlbum;
- (unsigned char)fileOperation;
- (bool)hideProgress;
- (id)importSource;
- (short)importedBy;
- (id)init;
- (id)initWithLibrary:(id)arg1 importSource:(id)arg2;
- (id)library;
- (unsigned char)metadataAddMode;
- (bool)omitImportComplete;
- (id)personId;
- (bool)preserveFolderStructure;
- (bool)referencedImport;
- (id)rootSourcePath;
- (void)setAllowDuplicates:(bool)arg1;
- (void)setAllowUnsupported:(bool)arg1;
- (void)setDeleteAfterImport:(bool)arg1;
- (void)setDestinationAlbum:(id)arg1;
- (void)setFileOperation:(unsigned char)arg1;
- (void)setHideProgress:(bool)arg1;
- (void)setImportSource:(id)arg1;
- (void)setImportedBy:(short)arg1;
- (void)setLibrary:(id)arg1;
- (void)setMetadataAddMode:(unsigned char)arg1;
- (void)setOmitImportComplete:(bool)arg1;
- (void)setPersonId:(id)arg1;
- (void)setPreserveFolderStructure:(bool)arg1;
- (void)setReferencedImport:(bool)arg1;
- (void)setRootSourcePath:(id)arg1;
- (void)setSkipAlertWhenFinished:(bool)arg1;
- (void)setSkipDiskSpaceCheck:(bool)arg1;
- (void)setSortDescriptor:(id)arg1;
- (bool)skipAlertWhenFinished;
- (bool)skipDiskSpaceCheck;
- (id)sortDescriptor;

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