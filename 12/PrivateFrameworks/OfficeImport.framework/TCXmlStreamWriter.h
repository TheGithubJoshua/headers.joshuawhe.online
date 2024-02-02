<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>TCXmlStreamWriter.h</title>
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

/PrivateFrameworks/OfficeImport.framework/TCXmlStreamWriter.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport (257.9)
 */

@interface TCXmlStreamWriter : NSObject {
    NSMutableSet * mAddedIds;
    bool  mContentAdded;
    unsigned int  mCurrentDepth;
    struct _xmlTextWriter { } * mStreamAPI;
}

+ (bool)cleanUpXmlTextWriter:(struct _xmlTextWriter { }*)arg1;
+ (struct _xmlTextWriter { }*)createXmlTextWriterAtEntry:(id)arg1 inOutputStream:(id)arg2 isCompressed:(bool)arg3;
+ (struct _xmlTextWriter { }*)createXmlTextWriterWithBuffer:(struct _xmlOutputBuffer { void *x1; int (*x2)(); int (*x3)(); struct _xmlCharEncodingHandler {} *x4; struct _xmlBuf {} *x5; struct _xmlBuf {} *x6; int x7; int x8; }*)arg1;
+ (struct _xmlTextWriter { }*)createXmlTextWriterWithContext:(id)arg1;
+ (bool)endElementInStream:(struct _xmlTextWriter { }*)arg1;
+ (void)resetElementIds;
+ (bool)startElementInStream:(struct _xmlTextWriter { }*)arg1 name:(id)arg2 prefix:(id)arg3 ns:(const char *)arg4;
+ (bool)startPlainElementInStream:(struct _xmlTextWriter { }*)arg1 name:(id)arg2;
+ (bool)writeAnchorTargetToStream:(struct _xmlTextWriter { }*)arg1 name:(id)arg2;
+ (bool)writeAttributeToStream:(struct _xmlTextWriter { }*)arg1 name:(id)arg2 content:(id)arg3 prefix:(id)arg4 ns:(const char *)arg5;
+ (bool)writeDtdToStream:(struct _xmlTextWriter { }*)arg1 name:(id)arg2 pubid:(id)arg3 sysid:(id)arg4 subset:(id)arg5;
+ (bool)writeNamespaceToStream:(struct _xmlTextWriter { }*)arg1 prefix:(id)arg2 uri:(const char *)arg3;
+ (bool)writePlainAttributeToStream:(struct _xmlTextWriter { }*)arg1 name:(id)arg2 content:(id)arg3;
+ (bool)writeStringToStream:(struct _xmlTextWriter { }*)arg1 text:(id)arg2;

- (bool)contentAdded;
- (void)dealloc;
- (bool)endElement;
- (bool)endElementsToBase;
- (id)initWithTextWriter:(struct _xmlTextWriter { }*)arg1;
- (bool)startElement:(id)arg1 prefix:(id)arg2 ns:(const char *)arg3;
- (bool)startPlainElement:(id)arg1;
- (struct _xmlTextWriter { }*)textWriter;
- (bool)writeAnchorTarget:(id)arg1;
- (bool)writeAttribute:(id)arg1 boolContent:(bool)arg2 prefix:(id)arg3 ns:(const char *)arg4;
- (bool)writeAttribute:(id)arg1 content:(id)arg2 prefix:(id)arg3 ns:(const char *)arg4;
- (bool)writeAttribute:(id)arg1 doubleContent:(double)arg2 prefix:(id)arg3 ns:(const char *)arg4;
- (bool)writeAttribute:(id)arg1 enumContent:(int)arg2 map:(id)arg3 prefix:(id)arg4 ns:(const char *)arg5;
- (bool)writeAttribute:(id)arg1 intContent:(long long)arg2 prefix:(id)arg3 ns:(const char *)arg4;
- (bool)writeDtd:(id)arg1 pubid:(id)arg2 sysid:(id)arg3 subset:(id)arg4;
- (bool)writeElementId:(id)arg1;
- (bool)writeNamespace:(id)arg1 uri:(const char *)arg2;
- (bool)writePlainAttribute:(id)arg1 boolContent:(bool)arg2;
- (bool)writePlainAttribute:(id)arg1 content:(id)arg2;
- (bool)writePlainAttribute:(id)arg1 doubleContent:(double)arg2;
- (bool)writePlainAttribute:(id)arg1 enumContent:(int)arg2 map:(id)arg3;
- (bool)writePlainAttribute:(id)arg1 intContent:(long long)arg2;
- (bool)writeString:(id)arg1;

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