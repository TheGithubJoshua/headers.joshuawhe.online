<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>_UIRemoteViewController_ViewControllerOperatorInterface.h</title>
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

/protocols/_UIRemoteViewController_ViewControllerOperatorInterface.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
 */

@protocol _UIRemoteViewController_ViewControllerOperatorInterface

@required

- (void)__dismissTextServiceSessionAnimated:(bool)arg1;
- (void)__handleFocusMovementAction:(UIFocusMovementAction *)arg1;
- (void)__setSupportedInterfaceOrientations:(NSArray *)arg1;
- (void)__setViewServiceIsDisplayingPopover:(bool)arg1;
- (void)__showEditAlertViewWithToken:(long long)arg1 canUndo:(bool)arg2 canRedo:(bool)arg3;
- (void)__showServiceForText:(void *)arg1 selectedTextRangeValue:(void *)arg2 type:(void *)arg3 fromRectValue:(void *)arg4 replyHandler:(void *)arg5; // needs 5 arg types, found 11: NSString *, NSValue *, long long, NSValue *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, NSError *, void*
- (void)__showServiceForText:(void *)arg1 type:(void *)arg2 fromRectValue:(void *)arg3 replyHandler:(void *)arg4; // needs 4 arg types, found 10: NSString *, long long, NSValue *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, NSError *, void*
- (void)__showServiceForType:(void *)arg1 withContext:(void *)arg2 replyHandler:(void *)arg3; // needs 3 arg types, found 9: long long, _UITextServiceSessionContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, NSError *, void*
- (void)__trampolineButtonPressData:(NSData *)arg1 canceled:(bool)arg2;
- (void)__viewServiceDidPromoteFirstResponder;
- (void)__viewServiceDidRegisterScrollToTopView;
- (void)__viewServiceDidUnregisterScrollToTopView;
- (void)__viewServiceDidUpdatePreferredScreenEdgesDeferringSystemGestures:(long long)arg1;
- (void)__viewServiceDidUpdatePreferredStatusBarStyle:(long long)arg1 preferredStatusBarVisibility:(int)arg2 updateAnimation:(long long)arg3 currentAnimationSettings:(BSAnimationSettings *)arg4;
- (void)__viewServiceDidUpdatePreferredUserInterfaceStyle:(long long)arg1;
- (void)__viewServiceDidUpdatePreferredWhitePointAdaptationStyle:(long long)arg1 animationSettings:(BSAnimationSettings *)arg2;
- (void)__viewServiceDidUpdatePrefersHomeIndicatorAutoHidden:(bool)arg1;
- (void)__viewServiceDidUpdateTintColor:(UIColor *)arg1 duration:(double)arg2;
- (void)__viewServiceInstrinsicContentSizeDidChange:(struct CGSize { double x1; double x2; })arg1 fence:(BKSAnimationFenceHandle *)arg2;
- (void)__viewServicePopoverDidChangeContentSize:(void *)arg1 animated:(void *)arg2 fence:(void *)arg3 withReplyHandler:(void *)arg4; // needs 4 arg types, found 9: struct CGSize { double x1; double x2; }, bool, BKSAnimationFenceHandle *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, struct CGSize { double x1; double x2; }, void*
- (void)__viewServicePopoverDidSetUseToolbarShine:(bool)arg1;
- (void)__viewServicePreferredContentSizeDidChange:(struct CGSize { double x1; double x2; })arg1 fence:(BKSAnimationFenceHandle *)arg2;

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
