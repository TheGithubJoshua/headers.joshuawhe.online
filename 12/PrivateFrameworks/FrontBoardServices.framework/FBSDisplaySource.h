<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>FBSDisplaySource.h</title>
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

/PrivateFrameworks/FrontBoardServices.framework/FBSDisplaySource.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices (486.52)
 */

@interface FBSDisplaySource : NSObject <BSDescriptionProviding, BSInvalidatable> {
    NSObject<OS_dispatch_queue> * _callOutQueue;
    CADisplay * _display;
    unsigned int  _displayID;
    int  _evlock_attachment;
    FBSDisplayConfiguration * _evlock_configuration;
    FBSDisplayConfiguration * _evlock_reportedConfiguration;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _externallyVisibleLock;
    bool  _initialized;
    unsigned int  _instanceID;
    BSAtomicSignal * _invalidated;
    bool  _isMain;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    int  _lock_attachment;
    FBSDisplayConfiguration * _lock_configuration;
    unsigned int  _lock_debounceToken;
    FBSDisplayMonitor * _lock_monitor;
    FBSDisplayConfiguration * _lock_reportedConfiguration;
    bool  _observing;
}

@property (nonatomic, readonly, copy) FBSDisplayConfiguration *connectedConfiguration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned int displayID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_initWithDisplay:(id)arg1 monitor:(id)arg2 isMain:(bool)arg3;
- (void)_lock_noteConnected;
- (void)_lock_noteDisconnecting;
- (void)_lock_noteUpdated;
- (void)_lock_setAttachment:(int)arg1;
- (void)_lock_setConfiguration:(id)arg1;
- (id)_lock_setReportedConfiguration:(id)arg1;
- (void)_lock_update;
- (id)connectedConfiguration;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (unsigned int)displayID;
- (id)init;
- (id)initWithMainDisplay:(id)arg1 monitor:(id)arg2;
- (id)initWithNonMainDisplay:(id)arg1 monitor:(id)arg2;
- (void)invalidate;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

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