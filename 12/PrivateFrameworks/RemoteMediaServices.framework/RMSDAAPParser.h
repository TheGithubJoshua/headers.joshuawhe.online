<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>RMSDAAPParser.h</title>
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

/PrivateFrameworks/RemoteMediaServices.framework/RMSDAAPParser.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices (1)
 */

@interface RMSDAAPParser : NSObject

+ (id)objectWithData:(id)arg1;
+ (id)objectWithData:(id)arg1 error:(id*)arg2;
+ (id)sharedInstance;
+ (id)typeForDRCPValueType:(int)arg1;

- (void)enumerateDAAPChunksInBytes:(const char *)arg1 length:(unsigned int)arg2 usingBlock:(id /* block */)arg3;
- (id)parseBrowseResults:(const char *)arg1 length:(unsigned int)arg2;
- (id)parseContentCodes:(const char *)arg1 length:(unsigned int)arg2;
- (id)parseContentCollectionDict:(const char *)arg1 length:(unsigned int)arg2;
- (id)parseControlPromptCollection:(const char *)arg1 length:(unsigned int)arg2;
- (id)parseControlPromptResponse:(const char *)arg1 length:(unsigned int)arg2;
- (id)parseDACPPropertyResponse:(const char *)arg1 length:(unsigned int)arg2;
- (id)parseGetSpeakersResponse:(const char *)arg1 length:(unsigned int)arg2;
- (id)parseListingCollection:(const char *)arg1 length:(unsigned int)arg2 capacity:(int)arg3 sectionHeaders:(id*)arg4;
- (id)parseListingHeader:(const char *)arg1 length:(unsigned int)arg2;
- (id)parseListingItem:(const char *)arg1 length:(unsigned int)arg2;
- (id)parseLogin:(const char *)arg1 length:(unsigned int)arg2;
- (id)parseMACAddressListing:(const char *)arg1 length:(unsigned int)arg2;
- (id)parseQueueSectionItems:(const char *)arg1 length:(unsigned int)arg2;
- (id)parseServerInfo:(const char *)arg1 length:(unsigned int)arg2;
- (id)parseUTF8String:(const char *)arg1 length:(unsigned int)arg2;
- (id)parseUnicodeCharacter:(const char *)arg1 length:(unsigned int)arg2;
- (id)parseXMLContent:(const char *)arg1 length:(unsigned int)arg2;
- (id)processResponseCode:(unsigned int)arg1 bytes:(const char *)arg2 length:(unsigned int)arg3;
- (void)setBool:(const char *)arg1 size:(unsigned int)arg2 inDict:(id)arg3 forKey:(id)arg4;
- (void)setDate:(const char *)arg1 size:(unsigned int)arg2 inDict:(id)arg3 forKey:(id)arg4;
- (void)setFloat32:(const char *)arg1 size:(unsigned int)arg2 inDict:(id)arg3 forKey:(id)arg4;
- (void)setSInt16:(const char *)arg1 size:(unsigned int)arg2 inDict:(id)arg3 forKey:(id)arg4;
- (void)setSInt8:(const char *)arg1 size:(unsigned int)arg2 inDict:(id)arg3 forKey:(id)arg4;
- (void)setString:(const char *)arg1 size:(unsigned int)arg2 inDict:(id)arg3 forKey:(id)arg4;
- (void)setUInt16:(const char *)arg1 size:(unsigned int)arg2 inDict:(id)arg3 forKey:(id)arg4;
- (void)setUInt32:(const char *)arg1 size:(unsigned int)arg2 inDict:(id)arg3 forKey:(id)arg4;
- (void)setUInt64:(const char *)arg1 size:(unsigned int)arg2 inDict:(id)arg3 forKey:(id)arg4;
- (void)setUInt8:(const char *)arg1 size:(unsigned int)arg2 inDict:(id)arg3 forKey:(id)arg4;
- (void)unknownChunk:(struct RSDAAPChunk { struct RSDAAPChunkHeader { unsigned int x_1_1_1; unsigned int x_1_1_2; } x1; char *x2; })arg1;

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
