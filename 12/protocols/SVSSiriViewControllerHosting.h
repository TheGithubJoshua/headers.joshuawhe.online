<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>SVSSiriViewControllerHosting.h</title>
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

/protocols/SVSSiriViewControllerHosting.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
 */

@protocol SVSSiriViewControllerHosting <NSObject>

@required

- (void)getScreenshotWithReplyHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, void*
- (void)handlePasscodeUnlockWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (void)notifyOnNextUserInteraction;
- (void)pulseHelpButton;
- (void)serviceBulletinWithIdentifier:(void *)arg1 replyHandler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AFBulletin *, void*
- (void)serviceDidDetectAudioRoutePickerTap;
- (void)serviceDidDetectMicButtonLongPressBegan;
- (void)serviceDidDetectMicButtonLongPressEnded;
- (void)serviceDidDetectMicButtonTap;
- (void)serviceDidDismissViewControllerWithStatusBarStyle:(long long)arg1;
- (void)serviceDidEndTaptoEdit;
- (void)serviceDidEnterUITrackingMode;
- (void)serviceDidExitUITrackingMode;
- (void)serviceDidFinishTest:(NSString *)arg1;
- (void)serviceDidPresentConversationFromBreadcrumb;
- (void)serviceDidPresentUserInterface;
- (void)serviceDidPresentViewControllerWithStatusBarStyle:(long long)arg1;
- (void)serviceDidReadBulletinWithIdentifier:(NSString *)arg1;
- (void)serviceDidRequestCurrentTextInput:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*
- (void)serviceDidRequestKeyboard:(bool)arg1;
- (void)serviceDidRequestKeyboard:(bool)arg1 minimized:(bool)arg2;
- (void)serviceDidResetTextInput;
- (void)serviceFailTest:(NSString *)arg1 withReason:(NSString *)arg2;
- (void)serviceLaunchApplicationWithBundleIdentifier:(void *)arg1 withURL:(void *)arg2 launchOptions:(void *)arg3 replyHandler:(void *)arg4; // needs 4 arg types, found 9: NSString *, NSURL *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)serviceOpenURL:(NSURL *)arg1 appBundleID:(NSString *)arg2 allowSiriDismissal:(bool)arg3;
- (void)serviceOpenURL:(void *)arg1 delaySessionEndForTTS:(void *)arg2 replyHandler:(void *)arg3; // needs 3 arg types, found 8: NSURL *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)servicePresentationDidChangePeekMode:(unsigned long long)arg1;
- (void)serviceRequestsActivationSourceWithReplyHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (void)serviceRequestsDismissalWithDelayForTTS:(bool)arg1 userInfo:(NSDictionary *)arg2;
- (void)serviceStartGuidedAccess;
- (void)serviceStartRequestWithOptions:(AFUIRequestOptions *)arg1;
- (void)serviceUserRelevantEventDidOccur;
- (void)serviceWillBeginTapToEdit;
- (void)serviceWillDismissViewControllerWithStatusBarStyle:(long long)arg1;
- (void)serviceWillPresentViewControllerWithStatusBarStyle:(long long)arg1;
- (void)serviceWillStartTest:(NSString *)arg1;
- (void)setBugReportingAvailable:(bool)arg1;
- (void)setCarDisplayGatekeeperVisible:(bool)arg1;
- (void)setCarDisplaySnippetVisible:(bool)arg1;
- (void)setHelpButtonEmphasized:(bool)arg1;
- (void)setStatusBarHidden:(bool)arg1 animated:(bool)arg2;
- (void)setStatusBarHidden:(void *)arg1 animated:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: bool, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)setStatusViewDisabled:(bool)arg1;
- (void)setStatusViewHidden:(bool)arg1;
- (void)setStatusViewUserInteractionEnabled:(bool)arg1;
- (void)siriIdleAndQuietStatusDidChange:(bool)arg1;

@optional

- (void)serviceDidDismissBugReporter;
- (void)serviceDidPresentBugReporter;
- (void)setTypeToSiriViewHidden:(bool)arg1;

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