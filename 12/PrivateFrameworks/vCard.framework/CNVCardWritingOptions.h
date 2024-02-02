<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CNVCardWritingOptions.h</title>
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

/PrivateFrameworks/vCard.framework/CNVCardWritingOptions.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/vCard.framework/vCard ()
 */

@interface CNVCardWritingOptions : NSObject {
    NSArray * _availableEncodings;
    bool  _compressPhotos;
    bool  _includeNotes;
    bool  _includePhotos;
    bool  _includePrivateBundleIdentifiers;
    bool  _includePrivateFields;
    bool  _includeUserSettings;
    unsigned long long  _maximumEncodingLength;
    unsigned long long  _maximumImageEncodingLength;
    struct CGSize { 
        double width; 
        double height; 
    }  _maximumImageSize;
    unsigned long long  _outputVersion;
    bool  _prefersUncroppedPhotos;
    NSArray * _treatAsUnknownProperties;
    bool  _usePhotoReferencesIfAvailable;
}

@property (copy) NSArray *availableEncodings;
@property bool compressPhotos;
@property bool includeNotes;
@property bool includePhotos;
@property bool includePrivateBundleIdentifiers;
@property bool includePrivateFields;
@property bool includeUserSettings;
@property unsigned long long maximumEncodingLength;
@property unsigned long long maximumImageEncodingLength;
@property struct CGSize { double x1; double x2; } maximumImageSize;
@property unsigned long long outputVersion;
@property bool prefersUncroppedPhotos;
@property (copy) NSArray *treatAsUnknownProperties;
@property bool usePhotoReferencesIfAvailable;

+ (id)optionsFromPreferences;

- (void).cxx_destruct;
- (id)availableEncodings;
- (bool)compressPhotos;
- (id)description;
- (bool)includeNotes;
- (bool)includePhotos;
- (bool)includePrivateBundleIdentifiers;
- (bool)includePrivateFields;
- (bool)includeUserSettings;
- (id)init;
- (unsigned long long)maximumEncodingLength;
- (unsigned long long)maximumImageEncodingLength;
- (struct CGSize { double x1; double x2; })maximumImageSize;
- (unsigned long long)outputVersion;
- (bool)prefersUncroppedPhotos;
- (void)setAvailableEncodings:(id)arg1;
- (void)setCompressPhotos:(bool)arg1;
- (void)setIncludeNotes:(bool)arg1;
- (void)setIncludePhotos:(bool)arg1;
- (void)setIncludePrivateBundleIdentifiers:(bool)arg1;
- (void)setIncludePrivateFields:(bool)arg1;
- (void)setIncludeUserSettings:(bool)arg1;
- (void)setMaximumEncodingLength:(unsigned long long)arg1;
- (void)setMaximumImageEncodingLength:(unsigned long long)arg1;
- (void)setMaximumImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setOutputVersion:(unsigned long long)arg1;
- (void)setPrefersUncroppedPhotos:(bool)arg1;
- (void)setTreatAsUnknownProperties:(id)arg1;
- (void)setUsePhotoReferencesIfAvailable:(bool)arg1;
- (id)treatAsUnknownProperties;
- (bool)usePhotoReferencesIfAvailable;

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