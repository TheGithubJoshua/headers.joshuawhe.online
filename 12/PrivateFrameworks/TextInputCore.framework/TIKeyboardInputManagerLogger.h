<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>TIKeyboardInputManagerLogger.h</title>
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

/PrivateFrameworks/TextInputCore.framework/TIKeyboardInputManagerLogger.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore ()
 */

@interface TIKeyboardInputManagerLogger : NSObject <TIKeyboardInputManagerLogging> {
    NSString * _inputModeIdentifier;
    TITypologyLog * _typologyLog;
    TITypologyStatistic * _typologyStatistic;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *inputModeIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, retain) TITypologyLog *typologyLog;
@property (nonatomic, retain) TITypologyStatistic *typologyStatistic;

+ (id)generateStructuredDataReportForTypologyLog:(id)arg1;
+ (void)pruneTypologyLogsToMaxNumBytes:(long long)arg1 satisfyingPredicate:(id /* block */)arg2;
+ (bool)shouldSubmitStructuredDataReportForTypologyLog:(id)arg1;
+ (void)submitAggregrateDictionaryReport:(id)arg1 inputModeIdentifier:(id)arg2;
+ (void)submitStructuredDataReportForTypologyLog:(id)arg1;
+ (void)writeHumanReadableTraceForTypologyLog:(id)arg1;
+ (id)writePropertyList:(id)arg1 withFilename:(id)arg2;
+ (id)writeToFileWithTypologyLog:(id)arg1;

- (void).cxx_destruct;
- (void)backgroundWriteLogsAndSubmitReport;
- (void)dealloc;
- (void)disableTypologyLogIfNecessaryForKeyboardState:(id)arg1;
- (id)init;
- (id)inputModeIdentifier;
- (void)logAutocorrections:(id)arg1 forKeyboardState:(id)arg2 requestToken:(id)arg3;
- (void)logCandidateResultSet:(id)arg1 forKeyboardState:(id)arg2;
- (void)logHitKeyCode:(long long)arg1 forTouchEvent:(id)arg2 keyboardState:(id)arg3;
- (void)logKeyboardConfig:(id)arg1 forAdjustedPhraseBoundaryInForwardDirection:(bool)arg2 granularity:(int)arg3 keyboardState:(id)arg4;
- (void)logKeyboardConfig:(id)arg1 forSyncToKeyboardState:(id)arg2;
- (void)logKeyboardConfig:(id)arg1 textToCommit:(id)arg2 forAcceptedCandidate:(id)arg3 keyboardState:(id)arg4;
- (void)logKeyboardOutput:(id)arg1 keyboardConfiguration:(id)arg2 forKeyboardInput:(id)arg3 keyboardState:(id)arg4;
- (void)logReceivedCandidateRejected:(id)arg1;
- (void)logReceivedLastAcceptedCandidateCorrected;
- (void)logReceivedSetOriginalInput:(id)arg1;
- (void)logReceivedSkipHitTestForTouchEvent:(id)arg1 forKeyboardState:(id)arg2;
- (void)logReceivedTextAccepted:(id)arg1;
- (void)logRefinements:(id)arg1 forCandidate:(id)arg2 keyboardState:(id)arg3;
- (void)logReplacements:(id)arg1 forString:(id)arg2 keyLayout:(id)arg3;
- (void)logToHumanReadableTrace:(id)arg1;
- (void)setConfig:(id)arg1;
- (void)setInputModeIdentifier:(id)arg1;
- (void)setTypologyLog:(id)arg1;
- (void)setTypologyStatistic:(id)arg1;
- (bool)shouldWriteToSyslogForKeyboardState:(id)arg1;
- (bool)shouldWriteToTypologyLogForKeyboardState:(id)arg1;
- (id)typologyLog;
- (id)typologyStatistic;
- (id)writeToFile;

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