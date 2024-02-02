<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>UIDictationController.h</title>
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

/PrivateFrameworks/UIKitCore.framework/UIDictationController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore (61000)
 */

@interface UIDictationController : NSObject <UIDictationConnectionDelegate, UIDictationConnectionTokenFilterProtocol, _UITouchPhaseChangeDelegate> {
    NSString * _activationIdentifier;
    bool  _connectionWasAlreadyAliveForStatisticsLogging;
    UIKeyboardInputMode * _currentInputModeForDictation;
    bool  _deferredCancellationRequested;
    UIAlertView * _dictationAvailableSoonAlert;
    UIDictationConnection * _dictationConnection;
    UIWindow * _dictationPresenterWindow;
    _UIDictationPrivacySheetController * _dictationPrivacySheetController;
    bool  _didUseOfflineDictation;
    bool  _discardNextHypothesis;
    id /* block */  _finalResultsOperation;
    bool  _hasPreheated;
    bool  _ignoreFinalizePhrases;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _insertionRange;
    bool  _isOfflineMetricsSessionActive;
    UIKeyboardInputMode * _keyboardInputModeToReturn;
    NSString * _language;
    double  _lastAnimationUpdateTimeStamp;
    id  _lastCorrectionIdentifier;
    NSString * _lastHypothesis;
    NSString * _lastMessageKeyboardLanguage;
    long long  _lastOfflineDictationMetricEvent;
    NSString * _lastRecognitionText;
    _UIDictationTelephonyMonitor * _monitor;
    NSMutableArray * _pendingEdits;
    bool  _performingStreamingEditingOperation;
    NSString * _postfixTextForStart;
    UIDictationConnectionPreferences * _preferences;
    NSString * _prefixTextForStart;
    NSString * _previousHypothesis;
    unsigned long long  _reasonType;
    bool  _recievingResults;
    NSTimer * _recordingLimitTimer;
    NSString * _selectionTextForStart;
    bool  _streamingAnimationActive;
    CADisplayLink * _streamingAnimationDisplayLink;
    UIDictationStreamingOperations * _streamingOperations;
    NSString * _targetHypothesis;
    long long  _updatingDocument;
    bool  _wantsAvailabilityMonitoringWhenAppActive;
    bool  cancelledByWaitingForLocalResults;
}

@property (nonatomic, copy) NSString *activationIdentifier;
@property (nonatomic, retain) UIKeyboardInputMode *currentInputModeForDictation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIWindow *dictationPresenterWindow;
@property (nonatomic, retain) _UIDictationPrivacySheetController *dictationPrivacySheetController;
@property (nonatomic) bool discardNextHypothesis;
@property (nonatomic) bool hasPreheated;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } insertionRange;
@property (nonatomic, retain) UIKeyboardInputMode *keyboardInputModeToReturn;
@property (nonatomic, copy) id lastCorrectionIdentifier;
@property (nonatomic, copy) NSString *lastHypothesis;
@property (nonatomic, copy) NSString *lastMessageKeyboardLanguage;
@property (nonatomic, copy) NSString *lastRecognitionText;
@property (nonatomic, retain) NSMutableArray *pendingEdits;
@property (nonatomic) bool performingStreamingEditingOperation;
@property (nonatomic, copy) NSString *previousHypothesis;
@property (nonatomic) unsigned long long reasonType;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *targetHypothesis;
@property (nonatomic) bool wantsAvailabilityMonitoringWhenAppActive;

+ (id)UIDictationStartStopReasonTypeDescription:(unsigned long long)arg1;
+ (bool)_applicationIsActive;
+ (id)activeConnection;
+ (id)activeInstance;
+ (void)applicationDidBecomeActive;
+ (void)applicationDidEnterBackgroundNotification;
+ (void)applicationWillResignActive;
+ (id)bestInterpretationForDictationResult:(id)arg1;
+ (bool)checkTraitsSupportDictation:(id)arg1;
+ (bool)dictationInfoIsOnScreen;
+ (bool)dictationIsFunctional;
+ (void)didBeginEditingInTextView:(id)arg1;
+ (void)didOneFingerTapInTextView:(id)arg1;
+ (bool)fetchCurrentInputModeSupportsDictation;
+ (id)interpretation:(id)arg1 forPhraseIndex:(unsigned long long)arg2 isShiftLocked:(bool)arg3 autocapitalizationType:(long long)arg4 useServerCapitalization:(bool)arg5;
+ (bool)isRunning;
+ (bool)isTextViewOnStarkScreen:(id)arg1;
+ (void)keyboardDidUpdateOnScreenStatus;
+ (void)keyboardWillChangeFromDelegate:(id)arg1 toDelegate:(id)arg2;
+ (void)logCorrectionStatisticsForDelegate:(id)arg1;
+ (void)logDictationString:(id)arg1;
+ (void)performOperations:(id /* block */)arg1 keyboardShifted:(bool)arg2;
+ (void)poppedLastStreamingOperation;
+ (bool)remoteCanDictateCurrentInputMode;
+ (id)serializedDictationPhrases:(id)arg1;
+ (id)serializedInterpretationFromTokens:(id)arg1 transform:(struct __CFString { }*)arg2;
+ (id)serializedInterpretationFromTokens:(id)arg1 transform:(struct __CFString { }*)arg2 autocapitalization:(long long)arg3 capitalization:(unsigned long long)arg4;
+ (id)serializedInterpretationFromTokens:(id)arg1 transform:(struct __CFString { }*)arg2 capitalization:(unsigned long long)arg3;
+ (double)serverManualEndpointingThreshold;
+ (id)sharedInstance;
+ (bool)shouldDeleteBackwardInInputDelegate:(id)arg1;
+ (bool)shouldHideCursorForTextView:(id)arg1;
+ (bool)shouldHideSelectionUIForTextView:(id)arg1;
+ (bool)shouldInsertText:(id)arg1 inInputDelegate:(id)arg2;
+ (void)siriPreferencesChanged;
+ (bool)starkScreenExists;
+ (id)streamingHypothesisForPhrases:(id)arg1;
+ (id)stringForState:(int)arg1;
+ (id)stringForViewMode:(int)arg1;
+ (bool)takesPressesBegan:(id)arg1 forTextView:(id)arg2;
+ (bool)takesPressesChanged:(id)arg1 forTextView:(id)arg2;
+ (bool)takesPressesEnded:(id)arg1 forTextView:(id)arg2;
+ (void)updateLandingView;
+ (bool)usingServerManualEndpointingThreshold;
+ (bool)usingTypeAndTalk;
+ (int)viewMode;

- (id)_assistantCompatibleLanguageCodeForInputMode:(id)arg1;
- (void)_beginEnableDictationPrompt;
- (void)_beginOfflineMetricsSession;
- (void)_clearExistingText;
- (void)_completeStartDictationWithContinuation:(id /* block */)arg1;
- (id)_containingSearchBarForView:(id)arg1;
- (void)_createDictationPresenterWindowIfNecessary;
- (id)_currentLanguageForOfflineDictationMetrics;
- (void)_deleteBackwardIntoText;
- (void)_displayLinkFired:(id)arg1;
- (void)_displaySecureContentsAsPlainText:(bool)arg1 afterDelay:(double)arg2;
- (void)_endEnableDictationPromptAnimated:(bool)arg1;
- (void)_endOfflineMetricsSession;
- (id)_getBestHypothesisRangeGivenHintRange:(id)arg1 inputDelegate:(id)arg2 hypothesisRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg3 documentTextInRange:(id*)arg4;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_getRangeOfString:(id)arg1 inDocumentText:(id)arg2;
- (id)_hypothesisRangeFromSelectionRange:(id)arg1 inputDelegate:(id)arg2;
- (void)_markOfflineDictationInputMetricEvent;
- (void)_presentOptInAlertForDictationInputMode;
- (void)_presentOptInAlertWithCompletion:(id /* block */)arg1;
- (void)_presentPrivacySheetWithCompletion:(id /* block */)arg1;
- (id)_rangeByExtendingRange:(id)arg1 backward:(long long)arg2 forward:(long long)arg3 inputDelegate:(id)arg4;
- (void)_restartDictation;
- (void)_runFinalizeOperation;
- (void)_runFinalizeOperation:(bool)arg1;
- (void)_setFinalResultHandler:(id /* block */)arg1;
- (void)_setupHypothesisAsFinalResults;
- (bool)_shouldDeleteBackwardInInputDelegate:(id)arg1;
- (bool)_shouldInsertText:(id)arg1 inInputDelegate:(id)arg2;
- (void)_startDictation;
- (void)_startStreamingAnimations;
- (void)_stopStreamingAnimation;
- (bool)_systemLanguageSupportsDictation;
- (void)_touchPhaseChangedForTouch:(id)arg1;
- (void)_updateFromSelectedTextRange:(id)arg1 withNewHypothesis:(id)arg2;
- (id)activationIdentifier;
- (float)audioLevel;
- (void)cancelDictation;
- (void)cancelDictationForTextStoreChangesInResponder:(id)arg1;
- (void)cancelRecordingLimitTimer;
- (void)clearTextFieldPlaceholder;
- (void)completeStartConnection;
- (void)completeStartConnectionForFileAtURL:(id)arg1 forInputModeIdentifier:(id)arg2;
- (id)connectionForStatisticsLogging;
- (id)currentInputModeForDictation;
- (void)dealloc;
- (id /* block */)dictationBlockForToken:(id)arg1;
- (id)dictationConnection;
- (void)dictationConnection:(id)arg1 didFailRecognitionWithError:(id)arg2;
- (void)dictationConnection:(id)arg1 didFailRecordingWithError:(id)arg2;
- (void)dictationConnection:(id)arg1 didFilterTokensWithFilterState:(id)arg2 forFinalize:(bool)arg3;
- (void)dictationConnection:(id)arg1 didReceiveSearchResults:(id)arg2 recognizedText:(id)arg3 stable:(bool)arg4 final:(bool)arg5;
- (void)dictationConnection:(id)arg1 filterState:(id)arg2 processFilteredToken:(id)arg3 forFinalize:(bool)arg4;
- (bool)dictationConnection:(id)arg1 filterState:(id)arg2 shouldCheckpointAtToken:(id)arg3;
- (void)dictationConnection:(id)arg1 finalizePhrases:(id)arg2 languageModel:(id)arg3 correctionIdentifier:(id)arg4 secureInput:(bool)arg5;
- (void)dictationConnection:(id)arg1 receivedInterpretation:(id)arg2 languageModel:(id)arg3 secureInput:(bool)arg4;
- (void)dictationConnection:(id)arg1 updateOptions:(id)arg2;
- (id)dictationConnection:(id)arg1 willFilterTokensWithLanguageModel:(id)arg2 forFinalize:(bool)arg3;
- (void)dictationConnectionDidCancel:(id)arg1;
- (void)dictationConnectionDidCancelRecording:(id)arg1;
- (void)dictationConnectionDidEndRecording:(id)arg1;
- (void)dictationConnectionDidFinish:(id)arg1;
- (void)dictationConnectionDidStartRecording:(id)arg1;
- (void)dictationConnectionWillStartRecording:(id)arg1;
- (void)dictationConnnectionDidChangeAvailability:(id)arg1;
- (bool)dictationEnabled;
- (bool)dictationIsModifyingText;
- (id)dictationPresenterWindow;
- (id)dictationPrivacySheetController;
- (void)didShowAlternatives:(id)arg1;
- (bool)disabledDueToTelephonyActivity;
- (bool)discardNextHypothesis;
- (void)dismissDictationView:(id)arg1;
- (void)endSessionIfNecessaryForTransitionFromState:(int)arg1 toState:(int)arg2;
- (void)errorAnimationDidFinish;
- (id)fieldIdentifierInputDelegate:(id)arg1;
- (void)finishDictationRecognitionWithPhrases:(id)arg1 languageModel:(id)arg2 correctionIdentifier:(id)arg3 secureInput:(bool)arg4;
- (bool)hasPreheated;
- (id)init;
- (void)insertSerializedDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })insertionRange;
- (bool)isIgnoringDocumentChanges;
- (bool)isRecievingResults;
- (id)keyboardInputModeToReturn;
- (id)language;
- (id)languageCodeForAssistantLanguageCode:(id)arg1;
- (id)lastCorrectionIdentifier;
- (id)lastHypothesis;
- (id)lastMessageKeyboardLanguage;
- (id)lastRecognitionText;
- (void)logAlternativeSelected:(id)arg1 correctionIdentifier:(id)arg2;
- (void)logDidAcceptDictationResult:(id)arg1 reasonType:(unsigned long long)arg2;
- (void)markKeyboardDeleteMetricEvent;
- (void)markKeyboardDidReset;
- (void)markKeyboardInputMetricEvent;
- (id)pendingEdits;
- (void)performIgnoringDocumentChanges:(id /* block */)arg1;
- (bool)performingStreamingEditingOperation;
- (id)postfixTextForInputDelegate:(id)arg1;
- (id)prefixTextForInputDelegate:(id)arg1;
- (void)preheatIfNecessary;
- (void)presentOptInAlertWithCompletion:(id /* block */)arg1;
- (id)previousHypothesis;
- (unsigned long long)reasonType;
- (void)releaseConnection;
- (void)releaseConnectionAfterDictationRequest;
- (void)releaseConnectionAfterStatisticsLogging;
- (void)restartDictationForTypeAndTalk;
- (struct __CFString { }*)resultTransformForLanguageModel:(id)arg1;
- (id)resultWithTrailingSpace:(id)arg1;
- (id)selectedTextForInputDelegate:(id)arg1;
- (void)setActivationIdentifier:(id)arg1;
- (void)setCurrentInputModeForDictation:(id)arg1;
- (void)setDictationInfoOnScreenNotifyKey:(bool)arg1;
- (void)setDictationInputMode:(id)arg1;
- (void)setDictationPresenterWindow:(id)arg1;
- (void)setDictationPrivacySheetController:(id)arg1;
- (void)setDiscardNextHypothesis:(bool)arg1;
- (void)setHasPreheated:(bool)arg1;
- (void)setInsertionRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setKeyboardInputModeToReturn:(id)arg1;
- (void)setLanguage:(id)arg1;
- (void)setLastCorrectionIdentifier:(id)arg1;
- (void)setLastHypothesis:(id)arg1;
- (void)setLastMessageKeyboardLanguage:(id)arg1;
- (void)setLastRecognitionText:(id)arg1;
- (void)setPendingEdits:(id)arg1;
- (void)setPerformingStreamingEditingOperation:(bool)arg1;
- (void)setPreviousHypothesis:(id)arg1;
- (void)setReasonType:(unsigned long long)arg1;
- (void)setState:(int)arg1;
- (void)setTargetHypothesis:(id)arg1;
- (void)setWantsAvailabilityMonitoringWhenAppActive:(bool)arg1;
- (void)setupForDictationStart;
- (void)setupForStreamingDictationStart;
- (void)setupToInsertResultForNewHypothesis:(id)arg1;
- (bool)shouldPresentOptInAlert;
- (void)startConnection;
- (void)startDictation;
- (void)startDictationForFileAtURL:(id)arg1 forInputModeIdentifier:(id)arg2;
- (void)startHelpMessageDisplay;
- (void)startRecordingLimitTimer;
- (int)state;
- (void)stopDictation;
- (void)stopDictation:(bool)arg1;
- (void)stopDictationByTimer;
- (void)stopDictationIgnoreFinalizePhrases;
- (void)stopHelpMessageDisplay;
- (id)streamingOperations;
- (bool)supportsDictationLanguage:(id)arg1 error:(id*)arg2;
- (bool)supportsInputMode:(id)arg1 error:(id*)arg2;
- (void)switchToDictationInputMode;
- (void)switchToDictationInputModeWithTouch:(id)arg1;
- (void)switchToDictationInputModeWithTouch:(id)arg1 withKeyboardInputMode:(id)arg2;
- (void)switchToDictationLanguage:(id)arg1;
- (id)targetHypothesis;
- (bool)wantsAvailabilityMonitoringWhenAppActive;

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