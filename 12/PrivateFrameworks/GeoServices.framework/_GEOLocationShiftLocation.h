<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>_GEOLocationShiftLocation.h</title>
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

/PrivateFrameworks/GeoServices.framework/_GEOLocationShiftLocation.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices (1364.36.4.19.8)
 */

@interface _GEOLocationShiftLocation : NSObject {
    double  _accuracy;
    GEOApplicationAuditToken * _auditToken;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    id /* block */  _completionHandler;
    id /* block */  _errorHandler;
    id /* block */  _functionHandler;
    GEOLatLng * _latLng;
    id /* block */  _mustGoToNetworkCallback;
    bool  _recordCacheInfo;
    struct __CFRunLoop { } * _runLoop;
}

@property (nonatomic, readonly) double accuracy;
@property (nonatomic, readonly) GEOApplicationAuditToken *auditToken;
@property (nonatomic, readonly) GEOLatLng *latLng;

- (void).cxx_destruct;
- (id)_initWithLatLng:(id)arg1 accuracy:(double)arg2 completionHandler:(id /* block */)arg3 errorHandler:(id /* block */)arg4 mustGoToNetworkCallback:(id /* block */)arg5;
- (void)_performOnCallbackQueue:(id /* block */)arg1;
- (double)accuracy;
- (id)auditToken;
- (void)dealloc;
- (id)initWithLatLng:(id)arg1 accuracy:(double)arg2 completionHandler:(id /* block */)arg3 errorHandler:(id /* block */)arg4 mustGoToNetworkCallback:(id /* block */)arg5 callbackQueue:(id)arg6;
- (id)initWithLatLng:(id)arg1 accuracy:(double)arg2 completionHandler:(id /* block */)arg3 errorHandler:(id /* block */)arg4 mustGoToNetworkCallback:(id /* block */)arg5 callbackQueue:(id)arg6 auditToken:(id)arg7;
- (id)initWithLatLng:(id)arg1 accuracy:(double)arg2 completionHandler:(id /* block */)arg3 errorHandler:(id /* block */)arg4 mustGoToNetworkCallback:(id /* block */)arg5 callbackRunLoop:(struct __CFRunLoop { }*)arg6;
- (id)initWithLatLng:(id)arg1 auditToken:(id)arg2 functionHandler:(id /* block */)arg3 errorHandler:(id /* block */)arg4 callbackQueue:(id)arg5;
- (id)latLng;
- (void)performCompletionHandlerWithShiftedCoordinate:(struct { double x1; double x2; })arg1 accuracy:(double)arg2 function:(id)arg3 wasFunctionCached:(bool)arg4;
- (void)performErrorHandler:(id)arg1;
- (void)performMustGoToNetwork;

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
