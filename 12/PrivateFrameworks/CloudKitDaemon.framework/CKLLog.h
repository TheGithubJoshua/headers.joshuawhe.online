<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CKLLog.h</title>
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

/PrivateFrameworks/CloudKitDaemon.framework/CKLLog.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon (736.235)
 */

@interface CKLLog : NSObject <OSActivityStreamDelegate, OSLogPersistenceDelegate> {
    NSDate * _absoluteStartDate;
    OSLogPersistence * _archiveSource;
    bool  _colorOutput;
    id /* block */  _completionHandler;
    NSString * _processName;
    unsigned long long  _source;
    double  _startTimeOffset;
    NSMutableArray * _streamObservers;
    OSActivityStream * _streamSource;
}

@property (nonatomic, retain) NSDate *absoluteStartDate;
@property (nonatomic, retain) OSLogPersistence *archiveSource;
@property (nonatomic) bool colorOutput;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *processName;
@property (nonatomic) unsigned long long source;
@property (nonatomic) double startTimeOffset;
@property (nonatomic, retain) NSMutableArray *streamObservers;
@property (nonatomic, retain) OSActivityStream *streamSource;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_configureStreamSource:(id)arg1;
- (id)_init;
- (id)absoluteStartDate;
- (bool)activityStream:(id)arg1 results:(id)arg2;
- (void)addStreamObserver:(id)arg1;
- (id)archiveSource;
- (bool)colorOutput;
- (id /* block */)completionHandler;
- (id)initForHost;
- (id)initForSimulator;
- (id)initWithArchiveAtURL:(id)arg1;
- (id)initWithRemoteDevice:(id)arg1;
- (bool)persistence:(id)arg1 results:(id)arg2 error:(id)arg3;
- (void)persistenceDidFinishReadingForStartDate:(id)arg1 endDate:(id)arg2;
- (id)processName;
- (void)setAbsoluteStartDate:(id)arg1;
- (void)setArchiveSource:(id)arg1;
- (void)setColorOutput:(bool)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setProcessName:(id)arg1;
- (void)setSource:(unsigned long long)arg1;
- (void)setStartTimeOffset:(double)arg1;
- (void)setStreamObservers:(id)arg1;
- (void)setStreamSource:(id)arg1;
- (unsigned long long)source;
- (double)startTimeOffset;
- (void)streamDidFail:(id)arg1 error:(id)arg2;
- (void)streamDidStop:(id)arg1;
- (void)streamLogsWithCompletion:(id /* block */)arg1;
- (id)streamObservers;
- (id)streamSource;

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