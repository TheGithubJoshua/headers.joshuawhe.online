<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>NPTuscanyEdge.h</title>
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

/PrivateFrameworks/NetworkServiceProxy.framework/NPTuscanyEdge.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy (1)
 */

@interface NPTuscanyEdge : NSObject <NSSecureCoding> {
    NSDictionary * _currentOnRampIndexList;
    double  _distance;
    unsigned long long  _index;
    NSString * _label;
    NSDate * _lastUsed;
    NPLocation * _location;
    NWEndpoint * _onRampEndpoint;
    NSDictionary * _onRampLists;
    NPWaldo * _parentWaldo;
    NWEndpoint * _probeEndpoint;
    bool  _probePending;
    bool  _reResolve;
    NWEndpoint * _savedEndpoint;
}

@property (retain) NSDictionary *currentOnRampIndexList;
@property double distance;
@property unsigned long long index;
@property (readonly) NSString *label;
@property (retain) NSDate *lastUsed;
@property (readonly) NPLocation *location;
@property (readonly) NWEndpoint *onRampEndpoint;
@property (retain) NSDictionary *onRampLists;
@property NPWaldo *parentWaldo;
@property (readonly) NWEndpoint *probeEndpoint;
@property bool probePending;
@property bool reResolve;
@property (retain) NWEndpoint *savedEndpoint;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)compareByDistance:(id)arg1;
- (long long)currentIndex:(id)arg1;
- (id)currentOnRampIndexList;
- (id)description;
- (double)distance;
- (void)encodeWithCoder:(id)arg1;
- (id)getCurrentOnRamp:(id)arg1;
- (id)getOnRamp:(long long)arg1 addressFamily:(id)arg2;
- (id)getPortFromEndpoint:(id)arg1 defaultPort:(id)arg2;
- (unsigned long long)hash;
- (unsigned long long)index;
- (id)initWithCoder:(id)arg1;
- (id)initWithLabel:(id)arg1 index:(unsigned long long)arg2 onRampEndpoint:(id)arg3 probeEndpoint:(id)arg4 location:(id)arg5;
- (bool)isEqual:(id)arg1;
- (void)iterateOnRampsForAddressFamily:(id)arg1 withBlock:(id /* block */)arg2;
- (id)label;
- (id)lastUsed;
- (void)linkWithOnRampsRetainMissingAddressFamilies:(bool)arg1;
- (id)location;
- (id)nextOnRampForLatency:(id)arg1 outIndex:(long long*)arg2;
- (id)onRampEndpoint;
- (id)onRampLists;
- (id)parentWaldo;
- (id)probeEndpoint;
- (bool)probePending;
- (bool)reResolve;
- (void)resolveWithCompletionHandler:(id /* block */)arg1;
- (id)savedEndpoint;
- (void)setCurrentIndex:(long long)arg1 addressFamily:(id)arg2;
- (void)setCurrentOnRampIndexList:(id)arg1;
- (void)setDistance:(double)arg1;
- (void)setIndex:(unsigned long long)arg1;
- (void)setLastUsed:(id)arg1;
- (void)setOnRampLists:(id)arg1;
- (void)setParentWaldo:(id)arg1;
- (void)setProbePending:(bool)arg1;
- (void)setReResolve:(bool)arg1;
- (void)setSavedEndpoint:(id)arg1;
- (id)unsynthesizeAddresses:(id)arg1;

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
