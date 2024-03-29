<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>_CNUICachingLikenessRenderer.h</title>
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

/PrivateFrameworks/ContactsUICore.framework/_CNUICachingLikenessRenderer.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore (999.9.9)
 */

@interface _CNUICachingLikenessRenderer : NSObject <CNUILikenessRendering> {
    CNQueue * _evictionQueue;
    CNCache * _imageCache;
    <CNSchedulerProvider> * _mainThreadSchedulerProvider;
    NSObject<OS_dispatch_source> * _memoryMonitoringSource;
    _CNUILikenessRenderer * _renderer;
    <CNSchedulerProvider> * _schedulerProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CNQueue *evictionQueue;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CNCache *imageCache;
@property (nonatomic, retain) <CNSchedulerProvider> *mainThreadSchedulerProvider;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *memoryMonitoringSource;
@property (nonatomic, readonly) _CNUILikenessRenderer *renderer;
@property (nonatomic, readonly) <CNSchedulerProvider> *schedulerProvider;
@property (readonly) Class superclass;

+ (id)_cacheKeyForContacts:(id)arg1 scope:(id)arg2;
+ (id)createMainThreadSchedulerProviderWithSchedulerProvider:(id)arg1;
+ (id)descriptorForRequiredKeys;

- (void).cxx_destruct;
- (void)dealloc;
- (void)emptyCache:(id)arg1;
- (id)evictionQueue;
- (id)imageCache;
- (id)initWithLikenessRenderer:(id)arg1 schedulerProvider:(id)arg2;
- (id)initWithLikenessRenderer:(id)arg1 schedulerProvider:(id)arg2 capacity:(unsigned long long)arg3;
- (id)initialRenderedLikenessesForContacts:(id)arg1 scope:(id)arg2;
- (id)loadingPlaceholderForContactCount:(unsigned long long)arg1 scope:(id)arg2;
- (id)mainThreadSchedulerProvider;
- (id)memoryMonitoringSource;
- (void)refreshCacheKey:(id)arg1;
- (id)renderedBasicMonogramFromString:(id)arg1 scope:(id)arg2;
- (id)renderedLikenessesForContacts:(id)arg1 scope:(id)arg2;
- (id)renderer;
- (id)resizeCacheEntry:(id)arg1 withScope:(id)arg2;
- (id)schedulerProvider;
- (void)setEvictionQueue:(id)arg1;
- (void)setImageCache:(id)arg1;
- (void)setMainThreadSchedulerProvider:(id)arg1;
- (void)setMemoryMonitoringSource:(id)arg1;
- (id)startCacheEntryWithObservable:(id)arg1 contacts:(id)arg2 scope:(id)arg3;

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
