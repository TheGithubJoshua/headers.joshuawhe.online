<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>TIKeyboardApplicationStateMonitor.h</title>
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

/PrivateFrameworks/TextInputCore.framework/TIKeyboardApplicationStateMonitor.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore ()
 */

@interface TIKeyboardApplicationStateMonitor : NSObject {
    NSString * _activeAppBundleID;
    NSDate * _activeAppStartDate;
    double  _activeAppStartTime;
    double  _activeKeyboardStartTime;
    NSLock * _activeStateDataLock;
    NSDictionary * _applicationStateDatabase;
    BKSApplicationStateMonitor * _applicationStateMonitor;
    NSLock * _databaseInUseLock;
    NSObject<TIKeyboardApplicationStateResponses> * _delegate;
    NSMutableSet * _foregroundApps;
    NSMutableSet * _imSuppressingBundleIDs;
    NSMutableArray * _keyboardUsageTimes;
    NSCalendar * _utcCalendar;
}

@property (nonatomic, retain) NSString *activeAppBundleID;
@property (nonatomic, retain) NSDate *activeAppStartDate;
@property (nonatomic) double activeAppStartTime;
@property (nonatomic) double activeKeyboardStartTime;
@property (nonatomic, retain) NSLock *activeStateDataLock;
@property (nonatomic, retain) NSDictionary *applicationStateDatabase;
@property (nonatomic, retain) BKSApplicationStateMonitor *applicationStateMonitor;
@property (nonatomic, retain) NSLock *databaseInUseLock;
@property (nonatomic) NSObject<TIKeyboardApplicationStateResponses> *delegate;
@property (nonatomic, retain) NSMutableSet *foregroundApps;
@property (nonatomic, retain) NSMutableSet *imSuppressingBundleIDs;
@property (nonatomic, retain) NSMutableArray *keyboardUsageTimes;
@property (nonatomic, retain) NSCalendar *utcCalendar;

- (void).cxx_destruct;
- (id)activeAppBundleID;
- (id)activeAppStartDate;
- (double)activeAppStartTime;
- (double)activeKeyboardStartTime;
- (id)activeStateDataLock;
- (id)applicationStateDatabase;
- (id)applicationStateMonitor;
- (void)applicationUninstalled:(id)arg1;
- (id)databaseInUseLock;
- (id)databaseLocation;
- (void)dealloc;
- (id)delegate;
- (id)foregroundApps;
- (void)handleApplicationStateChange:(id)arg1;
- (bool)ignoreAppExtension:(id)arg1;
- (id)imSuppressingBundleIDs;
- (id)init;
- (void)keyboardInUse;
- (void)keyboardNoLongerInUse;
- (id)keyboardUsageTimes;
- (void)logOutKeyboardActivity:(double)arg1;
- (void)setActiveAppBundleID:(id)arg1;
- (void)setActiveAppStartDate:(id)arg1;
- (void)setActiveAppStartTime:(double)arg1;
- (void)setActiveKeyboardStartTime:(double)arg1;
- (void)setActiveStateDataLock:(id)arg1;
- (void)setApplicationStateDatabase:(id)arg1;
- (void)setApplicationStateMonitor:(id)arg1;
- (void)setDatabaseInUseLock:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setForegroundApps:(id)arg1;
- (void)setImSuppressingBundleIDs:(id)arg1;
- (void)setKeyboardUsageTimes:(id)arg1;
- (void)setUtcCalendar:(id)arg1;
- (void)startANewKeyboardActivity:(id)arg1;
- (id)utcCalendar;

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
