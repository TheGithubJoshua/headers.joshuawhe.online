<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>_NSSharedKeySetS.h</title>
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

/Frameworks/CoreFoundation.framework/_NSSharedKeySetS.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation (1575.23)
 */

@interface _NSSharedKeySetS : NSObject <NSCopying> {
    unsigned int  _M;
    double  _c;
    unsigned char * _ckeys;
    unsigned int  _factor;
    char * _g;
    unsigned int  _keyLen;
    unsigned short * _keys1;
    unsigned short * _keys2;
    unsigned short * _keys3;
    unsigned int  _numKey;
    void * _rankTable;
    unsigned int * _seeds;
    unsigned char  _select;
    _NSSharedKeySetS * _subSharedKeySet;
    unsigned int  _type;
}

@property unsigned int M;
@property double c;
@property unsigned char*ckeys;
@property unsigned int factor;
@property char *g;
@property unsigned int keyLen;
@property unsigned short*keys1;
@property unsigned short*keys2;
@property unsigned short*keys3;
@property unsigned int numKey;
@property void*rankTable;
@property unsigned int*seeds;
@property unsigned char select;
@property (retain) _NSSharedKeySetS *subSharedKeySet;
@property unsigned int type;

- (unsigned int)M;
- (id)allKeys;
- (char *)bytesAtIndex:(unsigned long long)arg1;
- (double)c;
- (unsigned char*)ckeys;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)count;
- (void)dealloc;
- (unsigned int)factor;
- (char *)g;
- (unsigned long long)hash;
- (unsigned long long)indexForBytes:(char *)arg1 length:(unsigned long long)arg2;
- (unsigned long long)indexForKey:(unsigned short*)arg1 length:(unsigned long long)arg2;
- (id)init;
- (id)initWithKeys:(void**)arg1 keyLenghtInBytes:(unsigned int)arg2 count:(unsigned int)arg3 type:(unsigned int)arg4;
- (bool)isEmpty;
- (bool)isEqual:(id)arg1;
- (unsigned short*)keyAtIndex:(unsigned long long)arg1;
- (unsigned int)keyLen;
- (unsigned int)keySetCount;
- (unsigned short*)keys1;
- (unsigned short*)keys2;
- (unsigned short*)keys3;
- (unsigned int)maximumIndex;
- (id)newKeySetWithKeys:(id)arg1 encoding:(unsigned int)arg2;
- (unsigned int)numKey;
- (void*)rankTable;
- (unsigned int*)seeds;
- (unsigned char)select;
- (void)setC:(double)arg1;
- (void)setCkeys:(unsigned char*)arg1;
- (void)setFactor:(unsigned int)arg1;
- (void)setG:(char *)arg1;
- (void)setKeyLen:(unsigned int)arg1;
- (void)setKeys1:(unsigned short*)arg1;
- (void)setKeys2:(unsigned short*)arg1;
- (void)setKeys3:(unsigned short*)arg1;
- (void)setM:(unsigned int)arg1;
- (void)setNumKey:(unsigned int)arg1;
- (void)setRankTable:(void*)arg1;
- (void)setSeeds:(unsigned int*)arg1;
- (void)setSelect:(unsigned char)arg1;
- (void)setSubSharedKeySet:(id)arg1;
- (void)setType:(unsigned int)arg1;
- (id)subSharedKeySet;
- (unsigned int)type;

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
