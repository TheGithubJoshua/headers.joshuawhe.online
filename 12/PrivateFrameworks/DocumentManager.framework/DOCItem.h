<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>DOCItem.h</title>
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

/PrivateFrameworks/DocumentManager.framework/DOCItem.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/DocumentManager.framework/DocumentManager (68.100.44)
 */

@interface DOCItem : NSObject <NSSecureCoding> {
    NSString * _bookmarkableString;
    NSString * _contentType;
    FPItem * _fileProviderItem;
    NSURL * _fileURL;
    bool  _needsToBeImported;
    FPSandboxingURLWrapper * _wrapper;
}

@property (retain) NSString *bookmarkableString;
@property (nonatomic, copy) NSString *contentType;
@property (retain) FPItem *fileProviderItem;
@property (nonatomic, copy) NSURL *fileURL;

+ (id)documentsURLsForItems:(id)arg1;
+ (bool)isAnyItemAFault:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bookmarkableString;
- (id)contentType;
- (id)coordinatedFileURL;
- (void)copyURLToInbox:(id)arg1 completion:(id /* block */)arg2;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)fileProviderItem;
- (id)fileURL;
- (id)fileURLForUploading;
- (id)initWithBookmarkableString:(id)arg1 fileProviderItem:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1 fileProviderItem:(id)arg2;
- (bool)needsToBeImported;
- (void)prepareForMode:(unsigned long long)arg1 usingBookmark:(bool)arg2 completionBlock:(id /* block */)arg3;
- (void)setBookmarkableString:(id)arg1;
- (void)setContentType:(id)arg1;
- (void)setFileProviderItem:(id)arg1;
- (void)setFileURL:(id)arg1;
- (void)setNeedsToBeImported:(bool)arg1;

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