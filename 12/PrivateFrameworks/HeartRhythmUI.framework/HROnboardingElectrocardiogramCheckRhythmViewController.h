<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>HROnboardingElectrocardiogramCheckRhythmViewController.h</title>
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

/PrivateFrameworks/HeartRhythmUI.framework/HROnboardingElectrocardiogramCheckRhythmViewController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI ()
 */

@interface HROnboardingElectrocardiogramCheckRhythmViewController : HROnboardingBaseViewController <HRStackedButtonViewDelegate, UITextFieldDelegate> {
    HKHeartRhythmAvailability * _availability;
    HKSeparatorLineView * _birthdayBottomSeparator;
    UIStackView * _birthdayEntryView;
    UILabel * _birthdayFooterLabel;
    UILabel * _birthdayPromptLabel;
    HKCaretOptionalTextField * _birthdayTextField;
    HKSeparatorLineView * _birthdayTopSeparator;
    UILabel * _bodyLabel;
    NSLayoutConstraint * _contentViewBottomConstraint;
    NSDateFormatter * _dateFormatter;
    NSDate * _dateOfBirth;
    UIDatePicker * _datePicker;
    UIView * _heroView;
    UILabel * _locationFooterLabel;
    NSString * _productType;
    HRStackedButtonView * _stackedButtonView;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) HKHeartRhythmAvailability *availability;
@property (nonatomic, retain) HKSeparatorLineView *birthdayBottomSeparator;
@property (nonatomic, retain) UIStackView *birthdayEntryView;
@property (nonatomic, retain) UILabel *birthdayFooterLabel;
@property (nonatomic, retain) UILabel *birthdayPromptLabel;
@property (nonatomic, retain) HKCaretOptionalTextField *birthdayTextField;
@property (nonatomic, retain) HKSeparatorLineView *birthdayTopSeparator;
@property (nonatomic, retain) UILabel *bodyLabel;
@property (nonatomic, retain) NSLayoutConstraint *contentViewBottomConstraint;
@property (nonatomic, retain) NSDateFormatter *dateFormatter;
@property (nonatomic, retain) NSDate *dateOfBirth;
@property (nonatomic, retain) UIDatePicker *datePicker;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIView *heroView;
@property (nonatomic, retain) UILabel *locationFooterLabel;
@property (nonatomic, retain) NSString *productType;
@property (nonatomic, retain) HRStackedButtonView *stackedButtonView;
@property (readonly) Class superclass;
@property (nonatomic, retain) UILabel *titleLabel;

- (void).cxx_destruct;
- (bool)_activeWatchNeedsLocationCheck;
- (double)_ageEntryLastBaselineToBottomSeparator;
- (id)_ageEntryTitleFont;
- (double)_ageEntryTopSeparatorToFirstBaseline;
- (double)_agePromptLastBaselineToAgeEntryTop;
- (double)_assetImageBottomToTitleFirstBaseline;
- (double)_birthdayFooterLastBaselineToContinueButton;
- (id)_bodyFont;
- (id)_bodyFontTextStyle;
- (double)_bodyLastBaselineToAgePromptFirstBaseline;
- (double)_bottomSeparatorToBirthdayFooterFirstBaseline;
- (id)_dateOfBirthDatePicker;
- (void)_dateOfBirthTapped:(id)arg1;
- (void)_datePickerValueChanged:(id)arg1;
- (id)_footnoteFont;
- (id)_footnoteTextStyle;
- (void)_keyboardFrameChanged:(id)arg1;
- (bool)_meetsAgeRequirement;
- (void)_setupBirthdayEntryView;
- (id)_titleFont;
- (id)_titleFontTextStyle;
- (double)_titleLastBaselineToBodyFirstBaseline;
- (void)_trackElectrocardiogramOnboardingStepIfNeeded:(long long)arg1 countryCode:(id)arg2;
- (void)_updateDateOfBirthDisplay;
- (id)ageIneligiblePromptAckButtonString;
- (id)ageIneligiblePromptBodyString;
- (id)ageIneligiblePromptTitleString;
- (id)ageLimit;
- (id)ageWithDate:(id)arg1;
- (id)availability;
- (id)birthdayBottomSeparator;
- (id)birthdayEntryView;
- (id)birthdayFooterLabel;
- (id)birthdayFooterString;
- (id)birthdayPromptLabel;
- (id)birthdayTextField;
- (id)birthdayTopSeparator;
- (id)bodyLabel;
- (id)bodyString;
- (id)buttonTitleString;
- (id)contentViewBottomConstraint;
- (id)createHeroView;
- (id)createLearnMoreExpandedView;
- (id)dateFormatter;
- (id)dateOfBirth;
- (id)datePicker;
- (id)deviceNotSupportedBodyString;
- (id)disclaimerString;
- (id)featureDisabledBodyString;
- (id)heroView;
- (id)initForOnboarding:(bool)arg1;
- (id)learnMoreString;
- (id)locationFeatureIneligiblePromptBodyString;
- (id)locationFooterLabel;
- (id)locationFooterString;
- (id)locationNotFoundPromptBodyString;
- (id)productType;
- (void)setAvailability:(id)arg1;
- (void)setBirthdayBottomSeparator:(id)arg1;
- (void)setBirthdayEntryView:(id)arg1;
- (void)setBirthdayFooterLabel:(id)arg1;
- (void)setBirthdayPromptLabel:(id)arg1;
- (void)setBirthdayTextField:(id)arg1;
- (void)setBirthdayTopSeparator:(id)arg1;
- (void)setBodyLabel:(id)arg1;
- (void)setContentViewBottomConstraint:(id)arg1;
- (void)setDateFormatter:(id)arg1;
- (void)setDateOfBirth:(id)arg1;
- (void)setDatePicker:(id)arg1;
- (void)setHeroView:(id)arg1;
- (void)setLocationFooterLabel:(id)arg1;
- (void)setProductType:(id)arg1;
- (void)setStackedButtonView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setUpConstraints;
- (void)setUpUI;
- (id)stackedButtonView;
- (void)stackedButtonView:(id)arg1 didTapButtonAtIndex:(long long)arg2;
- (bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementString:(id)arg3;
- (id)titleLabel;
- (id)titleString;
- (void)viewDidLoad;
- (id)watchOSVersionTooLowBodyString;

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