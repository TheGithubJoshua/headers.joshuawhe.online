<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>GEORoutePreloader.h</title>
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

/PrivateFrameworks/GeoServices.framework/GEORoutePreloader.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices (1364.36.4.19.8)
 */

@interface GEORoutePreloader : NSObject <GEOResourceManifestTileGroupObserver, GEORoutePreloadSession> {
    id /* block */  _batteryHandler;
    double  _currentRoutePosition;
    <GEORoutePreloadSessionDelegate> * _delegate;
    struct GEOOnce_s { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } lock; 
        bool didRun; 
    }  _didTearDown;
    int  _downloadState;
    bool  _enabled;
    bool  _fullDebuggingEnabled;
    bool  _loggingEnabled;
    bool  _minimalDebuggingEnabled;
    unsigned long long  _networkQuality;
    bool  _paused;
    GEOComposedRoute * _route;
    double  _stepSizeInMeters;
    id /* block */  _tileKeyIsDownloadedPredicate;
    NSMutableDictionary * _tileSetStyles;
    GEOApplicationAuditToken * _token;
}

@property (nonatomic, copy) id /* block */ batteryHandler;
@property (readonly, copy) NSString *debugDescription;
@property <GEORoutePreloadSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long networkQuality;
@property (nonatomic, readonly) NSObject<OS_os_log> *preloaderLog;
@property (nonatomic, readonly) GEOComposedRoute *route;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) id /* block */ tileKeyIsDownloadedPredicate;

+ (id)preloaderForRoute:(id)arg1;

- (void).cxx_destruct;
- (void)_cancelPreloadTasks;
- (void)_retryFailuresWithErrorsReset:(bool)arg1;
- (void)_start;
- (void)addTileSetStyle:(int)arg1 betweenZoom:(unsigned int)arg2 andZoom:(unsigned int)arg3;
- (id /* block */)batteryHandler;
- (void)beginLoading;
- (void)dealloc;
- (id)delegate;
- (bool)fullDebuggingEnabled;
- (void)getPreloadSetCoordinates:(struct { double x1; double x2; }*)arg1 maxLength:(unsigned long long)arg2 actualLength:(unsigned long long*)arg3;
- (id)init;
- (id)initWithRoute:(id)arg1 loggingEnabled:(bool)arg2 minimalDebugging:(bool)arg3 fullDebugging:(bool)arg4 batteryHandler:(id /* block */)arg5;
- (bool)isSufficientlyLoaded;
- (bool)loggingEnabled;
- (bool)minimalDebuggingEnabled;
- (unsigned long long)networkQuality;
- (void)performTearDown;
- (int)preloadStateForTile:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (id)preloaderLog;
- (void)reachabilityChanged:(id)arg1;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;
- (id)route;
- (void)setBatteryHandler:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)setNetworkQuality:(unsigned long long)arg1;
- (void)setTraits:(id)arg1;
- (void)start;
- (void)stop;
- (void)stopLoading;
- (void)tearDown;
- (id /* block */)tileKeyIsDownloadedPredicate;
- (void)tilesChanged;
- (void)updateWithRouteMatch:(id)arg1;

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
