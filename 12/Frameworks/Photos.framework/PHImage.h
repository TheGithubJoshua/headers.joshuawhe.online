<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PHImage.h</title>
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

/Frameworks/Photos.framework/PHImage.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/Photos.framework/Photos (1)
 */

@interface PHImage : NSObject {
    unsigned long long  _bytesPerRow;
    NSData * _data;
    unsigned long long  _dataHeight;
    unsigned long long  _dataOffset;
    unsigned long long  _dataWidth;
    int  _format;
    unsigned long long  _height;
    bool  _isPlaceholder;
    UIImage * _uiImage;
    unsigned long long  _width;
}

@property (nonatomic, readonly) unsigned long long bytesPerRow;
@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) unsigned long long dataHeight;
@property (nonatomic, readonly) unsigned long long dataOffset;
@property (nonatomic, readonly) unsigned long long dataWidth;
@property (nonatomic, readonly) int format;
@property (nonatomic, readonly) unsigned long long height;
@property (nonatomic, readonly) bool isPlaceholder;
@property (nonatomic, readonly) UIImage *uiImage;
@property (nonatomic, readonly) unsigned long long width;

+ (id)imageWithData:(id)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 bytesPerRow:(unsigned long long)arg4 dataWidth:(unsigned long long)arg5 dataHeight:(unsigned long long)arg6 dataOffset:(unsigned long long)arg7 format:(int)arg8 isPlaceholder:(bool)arg9;
+ (id)imageWithUIImage:(id)arg1 format:(int)arg2 isPlaceholder:(bool)arg3;

- (void).cxx_destruct;
- (unsigned long long)bytesPerRow;
- (id)data;
- (unsigned long long)dataHeight;
- (unsigned long long)dataOffset;
- (unsigned long long)dataWidth;
- (id)description;
- (int)format;
- (unsigned long long)height;
- (id)initWithData:(id)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 bytesPerRow:(unsigned long long)arg4 dataWidth:(unsigned long long)arg5 dataHeight:(unsigned long long)arg6 dataOffset:(unsigned long long)arg7 format:(int)arg8 isPlaceholder:(bool)arg9;
- (id)initWithUIImage:(id)arg1 format:(int)arg2 isPlaceholder:(bool)arg3;
- (bool)isPlaceholder;
- (id)uiImage;
- (unsigned long long)width;

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
