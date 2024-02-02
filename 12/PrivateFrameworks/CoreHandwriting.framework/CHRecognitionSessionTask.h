<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CHRecognitionSessionTask.h</title>
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

/PrivateFrameworks/CoreHandwriting.framework/CHRecognitionSessionTask.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting (1.2)
 */

@interface CHRecognitionSessionTask : NSObject {
    CHRecognitionSessionResult * __inputResult;
    NSObject<OS_dispatch_queue> * __recognizersQueue;
    bool  _cancelled;
    <CHRecognitionSessionTaskDelegate> * _delegate;
    NSArray * _locales;
    CHRecognitionSessionResult * _outputResult;
    NSArray * _preferredLocales;
    bool  _saveInputDrawings;
    long long  _status;
    <CHStrokeProvider> * _strokeProvider;
}

@property (nonatomic, readonly, retain) CHRecognitionSessionResult *_inputResult;
@property (nonatomic, readonly, retain) NSObject<OS_dispatch_queue> *_recognizersQueue;
@property bool cancelled;
@property (nonatomic) <CHRecognitionSessionTaskDelegate> *delegate;
@property (nonatomic, readonly, copy) NSArray *locales;
@property (setter=_setOutputResult:, nonatomic, retain) CHRecognitionSessionResult *outputResult;
@property (nonatomic, readonly, copy) NSArray *preferredLocales;
@property (nonatomic) bool saveInputDrawings;
@property (setter=_setStatus:, nonatomic) long long status;
@property (nonatomic, readonly, retain) <CHStrokeProvider> *strokeProvider;

- (void)_filterResultsByLocale:(id)arg1 fitnessByLocale:(id)arg2;
- (id)_inputResult;
- (bool)_isTransitionValidFromStatus:(long long)arg1 toStatus:(long long)arg2;
- (void)_logResultsIfAppropriateWithStrokeProvider:(id)arg1;
- (id)_recognitionResultsForStrokeGroup:(id)arg1 groupingStrategy:(id)arg2;
- (id)_recognizersQueue;
- (void)_setOutputResult:(id)arg1;
- (void)_setStatus:(long long)arg1;
- (void)cancel;
- (bool)cancelled;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)initWithLocales:(id)arg1 preferredLocales:(id)arg2 strokeProvider:(id)arg3 inputResult:(id)arg4 recognitionQOSClass:(unsigned int)arg5;
- (id)locales;
- (void)main;
- (id)outputResult;
- (id)preferredLocales;
- (bool)saveInputDrawings;
- (void)setCancelled:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSaveInputDrawings:(bool)arg1;
- (long long)status;
- (id)strokeProvider;

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