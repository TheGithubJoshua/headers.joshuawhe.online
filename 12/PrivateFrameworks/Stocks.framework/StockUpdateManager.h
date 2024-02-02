<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>StockUpdateManager.h</title>
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

/PrivateFrameworks/Stocks.framework/StockUpdateManager.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks ()
 */

@interface StockUpdateManager : NSObject <StockUpdaterDelegate> {
    NSMutableArray * _activeUpdaters;
    NSMutableArray * _inactiveUpdaters;
    bool  _postingRemoteUpdateNotification;
    NSHashTable * _updateObservers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_enumerateObserversRespondingToSelector:(SEL)arg1 usingBlock:(id /* block */)arg2;
- (void)_kickoffUpdater:(id)arg1 forStocks:(id)arg2 comprehensive:(bool)arg3 forceUpdate:(bool)arg4 completion:(id /* block */)arg5;
- (void)_stocksDidReload;
- (void)_updateStocksBasic:(id)arg1 forced:(bool)arg2 withCompletion:(id /* block */)arg3;
- (void)_updaterDidCancelOrFinish:(id)arg1;
- (void)addUpdateObserver:(id)arg1;
- (id)availableStockUpdater;
- (void)cancel;
- (void)dealloc;
- (void)failWithError:(id)arg1;
- (bool)hadError;
- (id)init;
- (bool)isLoading;
- (void)removeUpdateObserver:(id)arg1;
- (void)reset;
- (void)resetUpdaters;
- (void)stockUpdater:(id)arg1 didFailWithError:(id)arg2 whileUpdatingStocks:(id)arg3 comprehensive:(bool)arg4;
- (void)stockUpdater:(id)arg1 didRequestUpdateForStocks:(id)arg2 isComprehensive:(bool)arg3;
- (void)stockUpdater:(id)arg1 didUpdateStocks:(id)arg2 isComprehensive:(bool)arg3;
- (void)stocksDidUpdateRemotely;
- (void)updateAllStocksBasic;
- (void)updateAllStocksBasic:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)updateAllStocksBasicWithCompletion:(id /* block */)arg1;
- (void)updateStaleStocksBasicWithCompletion:(id /* block */)arg1;
- (void)updateStockBasicWithCompletion:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)updateStockComprehensive:(id)arg1;
- (void)updateStockComprehensive:(id)arg1 forced:(bool)arg2 withCompletion:(id /* block */)arg3;
- (void)updateStockComprehensive:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)updateStocksComprehensive:(id)arg1;

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