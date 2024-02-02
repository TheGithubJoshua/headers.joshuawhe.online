<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>QLPreviewControllerPrivateDelegate.h</title>
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

/protocols/QLPreviewControllerPrivateDelegate.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
 */

@protocol QLPreviewControllerPrivateDelegate <QLPreviewControllerDelegate>

@optional

- (NSArray *)dismissActionsForPreviewController:(QLPreviewController *)arg1;
- (NSArray *)excludedActivityTypesForPreviewController:(QLPreviewController *)arg1;
- (bool)previewController:(QLPreviewController *)arg1 canEditItem:(id <QLPreviewItem>)arg2;
- (bool)previewController:(QLPreviewController *)arg1 canShareItem:(id <QLPreviewItem>)arg2;
- (NSString *)previewController:(QLPreviewController *)arg1 customActionButtonTittleForPreviewItem:(id <QLPreviewItem>)arg2;
- (void)previewController:(QLPreviewController *)arg1 customActionButtonWasTappedForPreviewItem:(id <QLPreviewItem>)arg2;
- (void)previewController:(QLPreviewController *)arg1 didDismissPreviewItemAtIndex:(unsigned long long)arg2;
- (void)previewController:(QLPreviewController *)arg1 didFailToSaveEditedItem:(id <QLPreviewItem>)arg2 withError:(NSError *)arg3;
- (void)previewController:(QLPreviewController *)arg1 didFinishPlayingPreviewItem:(id <QLPreviewItem>)arg2;
- (void)previewController:(QLPreviewController *)arg1 didLoadPreviewItemAtIndex:(unsigned long long)arg2 withError:(NSError *)arg3;
- (void)previewController:(QLPreviewController *)arg1 didPresentPreviewItemAtIndex:(unsigned long long)arg2;
- (void)previewController:(QLPreviewController *)arg1 didTransitionToState:(long long)arg2;
- (bool)previewController:(QLPreviewController *)arg1 shouldSaveEditedItem:(id <QLPreviewItem>)arg2;
- (UIView *)previewController:(QLPreviewController *)arg1 transitionViewForPreviewItem:(id <QLPreviewItem>)arg2 uncroppedSourceFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg3;
- (UIView *)previewController:(QLPreviewController *)arg1 transitionViewForPreviewItem:(id <QLPreviewItem>)arg2 uncroppedSourceFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg3 realSize:(struct CGSize { double x1; double x2; }*)arg4;
- (void)previewController:(QLPreviewController *)arg1 updatedContentsURL:(NSURL *)arg2 forEditedItem:(id <QLPreviewItem>)arg3;
- (void)previewController:(QLPreviewController *)arg1 willLoadPreviewItemAtIndex:(unsigned long long)arg2;
- (void)previewController:(QLPreviewController *)arg1 willPresentPreviewItemAtIndex:(unsigned long long)arg2;
- (void)previewController:(QLPreviewController *)arg1 willSaveEditedItem:(id <QLPreviewItem>)arg2;
- (void)previewController:(QLPreviewController *)arg1 willTransitionToState:(long long)arg2;
- (bool)shouldAppendDefaultDismissActionsForPreviewController:(QLPreviewController *)arg1;
- (bool)shouldPresentDismissActionsWithoutEditedItemsForPreviewController:(QLPreviewController *)arg1;

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