<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>OSLogEventMessageArgument.h</title>
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

/PrivateFrameworks/LoggingSupport.framework/OSLogEventMessageArgument.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport (906.260.1)
 */

@interface OSLogEventMessageArgument : NSObject {
    OSLogEventDecomposedMessage * _decomposedMessage;
    struct os_log_fmt_raw_placeholder { void *x1; struct os_log_fmt_cspec_s { char *x_2_1_1; unsigned short x_2_1_2; unsigned char x_2_1_3; unsigned short x_2_1_4; unsigned short x_2_1_5; unsigned short x_2_1_6; int x_2_1_7; int x_2_1_8; char *x_2_1_9; char *x_2_1_10; } x2; union { long long x_3_1_1; unsigned long long x_3_1_2; double x_3_1_3; long doublex_3_1_4; } x3; unsigned char x4; unsigned char x5; unsigned short x6; unsigned long long x7; bool x8; } * _rawArg;
    unsigned long long  _sizeofLong;
}

@property (nonatomic, readonly) unsigned long long availability;
@property (nonatomic, readonly) unsigned long long category;
@property (nonatomic, readonly) double doubleValue;
@property (nonatomic, readonly) long long int64Value;
@property (nonatomic, readonly) long double longDoubleValue;
@property (nonatomic, readonly) NSObject *objectRepresentation;
@property (nonatomic, readonly) unsigned long long privacy;
@property (nonatomic, readonly) const void*rawBytes;
@property (nonatomic, readonly) unsigned short rawBytesLength;
@property (nonatomic, readonly) unsigned long long scalarCategory;
@property (nonatomic, readonly) unsigned long long scalarType;
@property (nonatomic, readonly) unsigned long long unsignedInt64Value;

- (unsigned long long)availability;
- (unsigned long long)category;
- (double)doubleValue;
- (id)initWithProxy:(id)arg1 index:(unsigned long long)arg2;
- (long long)int64Value;
- (long double)longDoubleValue;
- (id)objectRepresentation;
- (unsigned long long)privacy;
- (const void*)rawBytes;
- (unsigned short)rawBytesLength;
- (unsigned long long)scalarCategory;
- (unsigned long long)scalarType;
- (unsigned long long)unsignedInt64Value;

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
