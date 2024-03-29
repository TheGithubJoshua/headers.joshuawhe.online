<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>AVTAvatarActionsModelDelegate.h</title>
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

/protocols/AVTAvatarActionsModelDelegate.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
 */

@protocol AVTAvatarActionsModelDelegate <NSObject>

@required

- (void)actionsModel:(AVTAvatarActionsModel *)arg1 didAddRecord:(id <AVTAvatarRecord>)arg2;
- (void)actionsModel:(AVTAvatarActionsModel *)arg1 didCancelEditingRecord:(id <AVTAvatarRecord>)arg2;
- (void)actionsModel:(void *)arg1 didDeleteRecord:(void *)arg2 withRecordUpdate:(void *)arg3 completionBlock:(void *)arg4; // needs 4 arg types, found 8: AVTAvatarActionsModel *, <AVTAvatarRecord> *, AVTAvatarActionsRecordUpdate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)actionsModel:(void *)arg1 didDuplicateToRecord:(void *)arg2 completionBlock:(void *)arg3; // needs 3 arg types, found 7: AVTAvatarActionsModel *, <AVTAvatarRecord> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)actionsModel:(AVTAvatarActionsModel *)arg1 didEditRecord:(id <AVTAvatarRecord>)arg2;
- (AVTAvatarActionsRecordUpdate *)actionsModel:(AVTAvatarActionsModel *)arg1 recordUpdateForDeletingRecord:(id <AVTAvatarRecord>)arg2;
- (void)actionsModel:(void *)arg1 shouldDeleteRecord:(void *)arg2 resultBlock:(void *)arg3; // needs 3 arg types, found 8: AVTAvatarActionsModel *, <AVTAvatarRecord> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)actionsModelDidFinish:(AVTAvatarActionsModel *)arg1;
- (void)actionsModelDidUpdateInlineActionButtons:(AVTAvatarActionsModel *)arg1;
- (void)dismissEditorViewController:(void *)arg1 forActionsModel:(void *)arg2 wasCreate:(void *)arg3 didEdit:(void *)arg4 animated:(void *)arg5 completion:(void *)arg6; // needs 6 arg types, found 10: AVTAvatarEditorViewController *, AVTAvatarActionsModel *, bool, bool, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)presentEditorViewController:(AVTAvatarEditorViewController *)arg1 forActionsModel:(AVTAvatarActionsModel *)arg2 isCreate:(bool)arg3;

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
