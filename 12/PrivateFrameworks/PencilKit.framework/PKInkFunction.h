<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PKInkFunction.h</title>
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

/PrivateFrameworks/PencilKit.framework/PKInkFunction.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit (1)
 */

@interface PKInkFunction : NSObject {
    NSMutableArray * _controlPoints;
    unsigned long long  _deviceMask;
    unsigned long long  _functionType;
    unsigned long long  _inkInput;
    unsigned long long  _inkProperty;
    unsigned long long  _inputMask;
    NSMutableArray * _inputPoints;
    NSMutableArray * _outputPoints;
}

@property (nonatomic, retain) NSMutableArray *controlPoints;
@property (nonatomic) unsigned long long deviceMask;
@property (nonatomic) unsigned long long functionType;
@property (nonatomic) unsigned long long inkInput;
@property (nonatomic) unsigned long long inkProperty;
@property (nonatomic) unsigned long long inputMask;
@property (nonatomic, retain) NSMutableArray *inputPoints;
@property (nonatomic, retain) NSMutableArray *outputPoints;

+ (id)inkFunctionForProperty:(unsigned long long)arg1 input:(unsigned long long)arg2 inputMask:(unsigned long long)arg3 deviceMask:(unsigned long long)arg4 inputPoints:(id)arg5 outputPoints:(id)arg6 functionType:(unsigned long long)arg7;

- (void).cxx_destruct;
- (id)controlPoints;
- (id)description;
- (unsigned long long)deviceMask;
- (unsigned long long)functionType;
- (id)initWithProperty:(unsigned long long)arg1 input:(unsigned long long)arg2 inputMask:(unsigned long long)arg3 deviceMask:(unsigned long long)arg4 inputPoints:(id)arg5 outputPoints:(id)arg6 functionType:(unsigned long long)arg7;
- (unsigned long long)inkInput;
- (unsigned long long)inkProperty;
- (unsigned long long)inputMask;
- (id)inputPoints;
- (id)outputPoints;
- (void)setControlPoints:(id)arg1;
- (void)setDeviceMask:(unsigned long long)arg1;
- (void)setFunctionType:(unsigned long long)arg1;
- (void)setInkInput:(unsigned long long)arg1;
- (void)setInkProperty:(unsigned long long)arg1;
- (void)setInputMask:(unsigned long long)arg1;
- (void)setInputPoints:(id)arg1;
- (void)setOutputPoints:(id)arg1;

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
