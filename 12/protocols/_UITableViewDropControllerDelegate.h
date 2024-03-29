<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>_UITableViewDropControllerDelegate.h</title>
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

/protocols/_UITableViewDropControllerDelegate.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
 */

@protocol _UITableViewDropControllerDelegate <NSObject>

@required

- (<UIDragSession> *)_activeSourceDragSession;
- (void)_beginAnimatingDropIntoCell:(UITableViewCell *)arg1;
- (_UITableViewDropAnimationContainerView *)_beginAnimatingDropOfCell:(UITableViewCell *)arg1 isCanceling:(bool)arg2;
- (bool)_canHandleDropSession:(id <UIDropSession>)arg1;
- (bool)_commitPlaceholderInsertionWithContext:(void *)arg1 dataSourceUpdates:(void *)arg2; // needs 2 arg types, found 7: _UITableViewDropPlaceholderContextImpl *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSIndexPath *, void*
- (long long)_dataOwnerForDropSession:(id <UIDropSession>)arg1 atIndexPath:(NSIndexPath *)arg2;
- (NSIndexPath *)_deletePlaceholderForContext:(_UITableViewDropPlaceholderContextImpl *)arg1;
- (void)_dropEnded:(id <UIDropSession>)arg1;
- (void)_dropEntered:(id <UIDropSession>)arg1;
- (void)_dropExited:(id <UIDropSession>)arg1;
- (UIDragPreviewParameters *)_dropPreviewParametersForIndexPath:(NSIndexPath *)arg1;
- (void)_endAnimatingDropIntoCell:(UITableViewCell *)arg1;
- (void)_endAnimatingDropOfCell:(UITableViewCell *)arg1;
- (NSIndexPath *)_insertPlaceholderAtIndexPath:(NSIndexPath *)arg1 withContext:(_UITableViewDropPlaceholderContextImpl *)arg2;
- (void)_performDrop:(id <UIDropSession>)arg1 withDropCoordinator:(_UITableViewDropCoordinatorImpl *)arg2 forceHandleAsReorder:(bool)arg3;
- (void)_removeDropTargetAndResetAppearance;
- (bool)_shouldAllowInternalDrop;
- (NSIndexPath *)_targetIndexPathForDrop:(id <UIDropSession>)arg1;
- (void)_updateDropTargetAppearanceWithTargetIndexPath:(NSIndexPath *)arg1 dropProposal:(UITableViewDropProposal *)arg2 dropSession:(id <UIDropSession>)arg3;
- (UITableViewDropProposal *)_updatedDropProposalForIndexPath:(NSIndexPath *)arg1 dropSession:(id <UIDropSession>)arg2 withDefaultProposal:(UITableViewDropProposal *)arg3;

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
