<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>VCUIManageVoiceShortcutConfirmationView.h</title>
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

/PrivateFrameworks/VoiceShortcutsUI.framework/VCUIManageVoiceShortcutConfirmationView.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/VoiceShortcutsUI.framework/VoiceShortcutsUI ()
 */

@interface VCUIManageVoiceShortcutConfirmationView : VCUIManageVoiceShortcutView {
    VCUIAlternativeTranscriptionsView * _alternativeTranscriptionsView;
    UIButton * _deleteButton;
    VCUIActionDonationDetailView * _donationDetailView;
    UIButton * _editButton;
    NSLayoutConstraint * _headlineScreenCenteringConstraint;
    VCUIHeadlineView * _headlineView;
    NSLayoutConstraint * _minDeleteSpacingConstraint;
    NSLayoutConstraint * _minHeightConstraint;
    UILabel * _phraseRestrictedLabel;
    UIButton * _rerecordPhraseButton;
}

@property (nonatomic, retain) VCUIAlternativeTranscriptionsView *alternativeTranscriptionsView;
@property (nonatomic, retain) UIButton *deleteButton;
@property (nonatomic, retain) VCUIActionDonationDetailView *donationDetailView;
@property (nonatomic, retain) UIButton *editButton;
@property (nonatomic, retain) NSLayoutConstraint *headlineScreenCenteringConstraint;
@property (nonatomic, retain) VCUIHeadlineView *headlineView;
@property (nonatomic, retain) NSLayoutConstraint *minDeleteSpacingConstraint;
@property (nonatomic, retain) NSLayoutConstraint *minHeightConstraint;
@property (nonatomic, retain) UILabel *phraseRestrictedLabel;
@property (nonatomic, retain) UIButton *rerecordPhraseButton;

- (void).cxx_destruct;
- (void)addDeleteButton;
- (void)addEditButton;
- (void)addRerecordPhraseButton;
- (id)alternativeTranscriptionsView;
- (id)deleteButton;
- (void)didTapEdit;
- (id)donationDetailView;
- (id)editButton;
- (id)existingIdentifierFromError:(id)arg1;
- (id)headlineScreenCenteringConstraint;
- (id)headlineView;
- (id)initWithController:(id)arg1 options:(id)arg2;
- (id)minDeleteSpacingConstraint;
- (id)minHeightConstraint;
- (id)phraseRestrictedLabel;
- (id)rerecordPhraseButton;
- (void)setAlternativeTranscriptionsView:(id)arg1;
- (void)setDeleteButton:(id)arg1;
- (void)setDonationDetailView:(id)arg1;
- (void)setEditButton:(id)arg1;
- (void)setHeadlineScreenCenteringConstraint:(id)arg1;
- (void)setHeadlineView:(id)arg1;
- (void)setMinDeleteSpacingConstraint:(id)arg1;
- (void)setMinHeightConstraint:(id)arg1;
- (void)setPhraseRestrictedLabel:(id)arg1;
- (void)setRerecordPhraseButton:(id)arg1;
- (bool)showRecordingButtonOverlay;
- (bool)showRecordingButtonOverlayDescription;
- (void)updatePhraseRestrictedText:(id)arg1;
- (void)updateScrollViewHeight:(double)arg1;
- (void)updateSpacingConstraints;
- (id)validationResultForPhrase:(id)arg1 fromResults:(id)arg2;

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
