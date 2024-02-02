<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>BDSCoalescingCallBlock.h</title>
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

/PrivateFrameworks/BookDataStore.framework/BDSCoalescingCallBlock.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore (4053)
 */

@interface BDSCoalescingCallBlock : NSObject {
    NSMutableArray * _callbacks;
    double  _coalescingDelay;
    NSObject<OS_dispatch_group> * _group;
    bool  _isInvoking;
    double  _maximumDelay;
    unsigned long long  _nextCoalescingTime;
    unsigned long long  _nextMaxTime;
    id /* block */  _notifyBlock;
    NSString * _notifyBlockDescription;
    id /* block */  _notifyTimeoutBlock;
    unsigned short  _notifyTimeoutDurationSeconds;
    bool  _pending;
    NSObject<OS_dispatch_queue> * _sync;
}

@property (nonatomic) double coalescingDelay;
@property (nonatomic) double maximumDelay;

- (void).cxx_destruct;
- (void)_coalescingTimeExpired:(unsigned long long)arg1;
- (void)_invoke;
- (void)_invokeIfNotInProgress;
- (void)_maxTimeExpired:(unsigned long long)arg1;
- (double)coalescingDelay;
- (id)initWithNotifyBlock:(id /* block */)arg1;
- (id)initWithNotifyBlock:(id /* block */)arg1 notifyTimeout:(unsigned short)arg2 blockDescription:(id)arg3 notifyTimeoutBlock:(id /* block */)arg4;
- (id)initWithNotifyBlock:(id /* block */)arg1 notifyTimeout:(unsigned short)arg2 notifyTimeoutBlock:(id /* block */)arg3;
- (double)maximumDelay;
- (void)setCoalescingDelay:(double)arg1;
- (void)setMaximumDelay:(double)arg1;
- (void)signalWithCompletion:(id /* block */)arg1;

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