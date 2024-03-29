<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>_UIDruidSourceConnection.h</title>
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

/PrivateFrameworks/UIKitCore.framework/_UIDruidSourceConnection.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore (61000)
 */

@interface _UIDruidSourceConnection : NSObject <_DUIClientSessionSource, _DUIClientSource, _UIDruidSourceConnection> {
    id /* block */  _canHandOffCancelledItemsBlock;
    bool  _cancelled;
    NSXPCConnection * _connection;
    id /* block */  _dataTransferFinishedBlock;
    id /* block */  _dragCompletionBlock;
    id /* block */  _handOffCancelledItemsBlock;
    id /* block */  _itemDetailProviderBlock;
    id /* block */  _itemImageProviderBlock;
    id /* block */  _itemUpdateBlock;
    <_DUIServerSessionSource> * _serverSession;
}

@property (nonatomic, copy) id /* block */ canHandOffCancelledItemsBlock;
@property (getter=isCancelled, nonatomic, readonly) bool cancelled;
@property (nonatomic, copy) id /* block */ dataTransferFinishedBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ dragCompletionBlock;
@property (nonatomic, copy) id /* block */ handOffCancelledItemsBlock;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ itemDetailProviderBlock;
@property (nonatomic, copy) id /* block */ itemImageProviderBlock;
@property (nonatomic, copy) id /* block */ itemUpdateBlock;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_internalDragFailed;
- (id)addItems:(id)arg1 withOldItemCollection:(id)arg2;
- (void)beginDragWithTouches:(id)arg1 touchRoutingPolicy:(id)arg2 items:(id)arg3 sourceDataOwner:(long long)arg4 accessibilityEndpoint:(id)arg5 centroid:(struct CGPoint { double x1; double x2; })arg6 completion:(id /* block */)arg7;
- (id /* block */)canHandOffCancelledItemsBlock;
- (void)cancelDrag;
- (oneway void)checkCanHandOffCancelledItemsWithReply:(id /* block */)arg1;
- (id /* block */)dataTransferFinishedBlock;
- (oneway void)dataTransferSessionFinished;
- (void)dirtyItems:(id)arg1;
- (id /* block */)dragCompletionBlock;
- (void)dragDidExitApp;
- (oneway void)dragEndedWithOperation:(unsigned long long)arg1;
- (oneway void)dragFailed;
- (oneway void)handOffCancelledItems:(id)arg1 withFence:(id)arg2;
- (id /* block */)handOffCancelledItemsBlock;
- (id)init;
- (bool)isCancelled;
- (id /* block */)itemDetailProviderBlock;
- (id /* block */)itemImageProviderBlock;
- (id /* block */)itemUpdateBlock;
- (oneway void)requestDetailForItemIndex:(unsigned long long)arg1 reply:(id /* block */)arg2;
- (oneway void)requestImageForItemIndex:(unsigned long long)arg1 reply:(id /* block */)arg2;
- (void)setCanHandOffCancelledItemsBlock:(id /* block */)arg1;
- (void)setDataTransferFinishedBlock:(id /* block */)arg1;
- (void)setDragCompletionBlock:(id /* block */)arg1;
- (void)setHandOffCancelledItemsBlock:(id /* block */)arg1;
- (void)setItemDetailProviderBlock:(id /* block */)arg1;
- (void)setItemImageProviderBlock:(id /* block */)arg1;
- (void)setItemUpdateBlock:(id /* block */)arg1;
- (void)takeOperationMasksInsideApp:(unsigned long long)arg1 outsideApp:(unsigned long long)arg2 prefersFullSizePreview:(bool)arg3;
- (oneway void)updateDetail:(id)arg1 forItemIndex:(unsigned long long)arg2;

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
