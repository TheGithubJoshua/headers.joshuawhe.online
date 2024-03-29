<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>AXEventProcessor.h</title>
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

/PrivateFrameworks/AccessibilityUtilities.framework/AXEventProcessor.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities (1.0)
 */

@interface AXEventProcessor : NSObject {
    unsigned long long  _HIDEventFilterMask;
    id /* block */  _HIDEventHandler;
    NSThread * _HIDEventReceiveThread;
    NSString * _HIDEventTapIdentifier;
    int  _HIDEventTapPriority;
    bool  _handlingHIDEvents;
    bool  _handlingSystemEvents;
    NSMutableArray * _hidActualEventTapEnabledReasons;
    bool  _ignoreAllSystemEvents;
    bool  _shouldNotifyUserEventOccurred;
    bool  _shouldRunHIDReceiveThreadRunloop;
    NSMutableArray * _systemActualEventTapEnabledReasons;
    id /* block */  _systemEventHandler;
    NSString * _systemEventTapIdentifier;
    int  _systemEventTapPriority;
}

@property (nonatomic) unsigned long long HIDEventFilterMask;
@property (nonatomic, copy) id /* block */ HIDEventHandler;
@property (nonatomic, retain) NSThread *HIDEventReceiveThread;
@property (nonatomic, retain) NSString *HIDEventTapIdentifier;
@property (nonatomic) int HIDEventTapPriority;
@property (getter=isHandlingHIDEvents, nonatomic) bool handlingHIDEvents;
@property (getter=isHandlingSystemEvents, nonatomic) bool handlingSystemEvents;
@property (nonatomic, retain) NSMutableArray *hidActualEventTapEnabledReasons;
@property (nonatomic, readonly) NSArray *hidEventTapEnabledReasons;
@property (nonatomic) bool ignoreAllSystemEvents;
@property (nonatomic) bool shouldNotifyUserEventOccurred;
@property (nonatomic, retain) NSMutableArray *systemActualEventTapEnabledReasons;
@property (nonatomic, copy) id /* block */ systemEventHandler;
@property (nonatomic, readonly) NSArray *systemEventTapEnabledReasons;
@property (nonatomic, retain) NSString *systemEventTapIdentifier;
@property (nonatomic) int systemEventTapPriority;

- (void).cxx_destruct;
- (unsigned long long)HIDEventFilterMask;
- (id /* block */)HIDEventHandler;
- (id)HIDEventReceiveThread;
- (id)HIDEventTapIdentifier;
- (int)HIDEventTapPriority;
- (void)_installHIDEventFilter;
- (void)_installSystemEventFilter;
- (void)_runHIDEventReceiveThread;
- (void)_uninstallHIDEventFilter;
- (void)_uninstallSystemEventFilter;
- (void)beginHandlingHIDEventsForReason:(id)arg1;
- (void)beginHandlingSystemEventsForReason:(id)arg1;
- (void)endHandlingHIDEventsForReason:(id)arg1;
- (void)endHandlingSystemEventsForReason:(id)arg1;
- (id)hidActualEventTapEnabledReasons;
- (id)hidEventTapEnabledReasons;
- (bool)ignoreAllSystemEvents;
- (id)init;
- (id)initWithHIDTapIdentifier:(id)arg1 HIDEventTapPriority:(int)arg2 systemEventTapIdentifier:(id)arg3 systemEventTapPriority:(int)arg4;
- (bool)isHandlingHIDEvents;
- (bool)isHandlingSystemEvents;
- (void)raiseHIDEventTapPriorityToMaximum;
- (void)raiseSystemEventTapPriorityToMaximum;
- (void)restoreHIDEventTapPriorityToDefault;
- (void)restoreSystemEventTapPriorityToDefault;
- (void)setHIDEventFilterMask:(unsigned long long)arg1;
- (void)setHIDEventHandler:(id /* block */)arg1;
- (void)setHIDEventReceiveThread:(id)arg1;
- (void)setHIDEventTapIdentifier:(id)arg1;
- (void)setHIDEventTapPriority:(int)arg1;
- (void)setHandlingHIDEvents:(bool)arg1;
- (void)setHandlingSystemEvents:(bool)arg1;
- (void)setHidActualEventTapEnabledReasons:(id)arg1;
- (void)setIgnoreAllSystemEvents:(bool)arg1;
- (void)setShouldNotifyUserEventOccurred:(bool)arg1;
- (void)setSystemActualEventTapEnabledReasons:(id)arg1;
- (void)setSystemEventHandler:(id /* block */)arg1;
- (void)setSystemEventTapIdentifier:(id)arg1;
- (void)setSystemEventTapPriority:(int)arg1;
- (bool)shouldNotifyUserEventOccurred;
- (id)systemActualEventTapEnabledReasons;
- (id /* block */)systemEventHandler;
- (id)systemEventTapEnabledReasons;
- (id)systemEventTapIdentifier;
- (int)systemEventTapPriority;

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
