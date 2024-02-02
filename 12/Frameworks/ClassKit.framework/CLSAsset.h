<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CLSAsset.h</title>
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

/Frameworks/ClassKit.framework/CLSAsset.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/ClassKit.framework/ClassKit (144.0.27)
 */

@interface CLSAsset : CLSObject <CLSRelationable> {
    NSString * _brItemID;
    NSString * _brOwnerName;
    NSString * _brShareName;
    NSString * _brZoneName;
    bool  _original;
    NSString * _ownerPersonID;
    NSString * _relativePathWithinContainer;
    NSString * _ubiquitousContainerName;
    bool  _uploaded;
    NSURL * _url;
}

@property (nonatomic, retain) NSString *brItemID;
@property (nonatomic, retain) NSString *brOwnerName;
@property (nonatomic, retain) NSString *brShareName;
@property (nonatomic, retain) NSString *brZoneName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSURL *fileURL;
@property (readonly) unsigned long long hash;
@property (getter=isOriginal, nonatomic) bool original;
@property (nonatomic, retain) NSString *ownerPersonID;
@property (nonatomic, retain) NSString *relativePathWithinContainer;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *ubiquitousContainerName;
@property (getter=isUploaded, nonatomic) bool uploaded;
@property (nonatomic, retain) NSURL *url;

+ (id)relations;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_deleteFileAtURL:(id)arg1 error:(id*)arg2;
- (id)_init;
- (id)_initWithFileURL:(id)arg1;
- (id)brItemID;
- (id)brOwnerName;
- (id)brShareName;
- (id)brZoneName;
- (void)createShareIfNeeded:(id /* block */)arg1;
- (bool)deleteFile:(id*)arg1;
- (void)deleteFileWithCompletion:(id /* block */)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)fetchUsersAndAddToShare:(id)arg1 completion:(id /* block */)arg2;
- (id)fileURL;
- (id)initWithCoder:(id)arg1;
- (id)initWithFileURL:(id)arg1;
- (id)initWithFileURL:(id)arg1 withOwnerPersonID:(id)arg2;
- (id)initWithURL:(id)arg1;
- (bool)isOriginal;
- (bool)isUploaded;
- (void)mergeWithObject:(id)arg1;
- (id)ownerPersonID;
- (id)relativePathWithinContainer;
- (void)setBrItemID:(id)arg1;
- (void)setBrOwnerName:(id)arg1;
- (void)setBrShareName:(id)arg1;
- (void)setBrZoneName:(id)arg1;
- (void)setOriginal:(bool)arg1;
- (void)setOwnerPersonID:(id)arg1;
- (void)setRelativePathWithinContainer:(id)arg1;
- (void)setUbiquitousContainerName:(id)arg1;
- (void)setUploaded:(bool)arg1;
- (void)setUrl:(id)arg1;
- (id)ubiquitousContainerName;
- (id)uploadFileIfNeeded:(id*)arg1;
- (id)url;
- (void)urlSuitableForOpeningWithCompletion:(id /* block */)arg1;
- (bool)validateObject:(id*)arg1;
- (void)willSaveObject;

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