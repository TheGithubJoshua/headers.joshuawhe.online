<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>DOCAppearance.h</title>
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

/PrivateFrameworks/DocumentManager.framework/DOCAppearance.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/DocumentManager.framework/DocumentManager (68.100.44)
 */

@interface DOCAppearance : NSObject <NSCopying, NSSecureCoding> {
    bool  _alwaysEnableScrollInSourceView;
    unsigned long long  _browserUserInterfaceStyle;
    NSString * _collectionCreateButtonTitle;
    double  _compactHorizontalTableStackSpacing;
    double  _createButtonAspectRatio;
    bool  _forceClearBackground;
    double  _fullHorizontalTableStackSpacing;
    bool  _isInfoInPopoverMode;
    UIColor * _largeTitleColor;
    double  _regularHorizontalTableStackSpacing;
    bool  _showsCreateButton;
}

@property (readonly) long long activityIndicatorViewStyle;
@property bool alwaysEnableScrollInSourceView;
@property (readonly) UIColor *backgroundColor;
@property (readonly) NSArray *backgroundGradientColors;
@property (nonatomic) unsigned long long browserUserInterfaceStyle;
@property (retain) NSString *collectionCreateButtonTitle;
@property double compactHorizontalTableStackSpacing;
@property (readonly) UIColor *createBackgroundColor;
@property double createButtonAspectRatio;
@property (readonly) UIColor *dimmingViewColor;
@property bool forceClearBackground;
@property double fullHorizontalTableStackSpacing;
@property bool isInfoInPopoverMode;
@property (nonatomic, retain) UIColor *largeTitleColor;
@property (readonly) long long preferredBarStyle;
@property (readonly) long long preferredStatusBarStyle;
@property (readonly) UIColor *primaryTextColor;
@property (readonly) UIColor *progressViewInactiveStrokeColor;
@property double regularHorizontalTableStackSpacing;
@property (readonly) UIColor *searchBarTextColor;
@property (readonly) bool searchBarWantsDarkBackdropStyleOnly;
@property (readonly) UIColor *secondaryTextColor;
@property (readonly) UIColor *selectedBackgroundColor;
@property (readonly) UIColor *separatorColor;
@property bool showsCreateButton;

+ (id)documentsPickerAppearance;
+ (id)recentsPopoverAppearance;
+ (id)recentsWidgetAppearance;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)activityIndicatorViewStyle;
- (bool)alwaysEnableScrollInSourceView;
- (void)applyAppearanceOnNavigationBar:(id)arg1;
- (void)applyAppearanceOnPalette:(id)arg1;
- (void)applyAppearanceOnTabBar:(id)arg1;
- (void)applyAppearanceOnToolbar:(id)arg1;
- (id)backgroundColor;
- (id)backgroundGradientColors;
- (unsigned long long)browserUserInterfaceStyle;
- (id)collectionCreateButtonTitle;
- (double)compactHorizontalTableStackSpacing;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createBackgroundColor;
- (double)createButtonAspectRatio;
- (id)darkModeDefaultTintColor;
- (id)dimmingViewColor;
- (void)encodeWithCoder:(id)arg1;
- (bool)forceClearBackground;
- (double)fullHorizontalTableStackSpacing;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isInfoInPopoverMode;
- (id)largeTitleColor;
- (long long)preferredBarStyle;
- (long long)preferredStatusBarStyle;
- (id)primaryTextColor;
- (id)progressViewInactiveStrokeColor;
- (double)regularHorizontalTableStackSpacing;
- (id)searchBarTextColor;
- (bool)searchBarWantsDarkBackdropStyleOnly;
- (id)secondaryTextColor;
- (id)selectedBackgroundColor;
- (id)separatorColor;
- (void)setAlwaysEnableScrollInSourceView:(bool)arg1;
- (void)setBrowserUserInterfaceStyle:(unsigned long long)arg1;
- (void)setCollectionCreateButtonTitle:(id)arg1;
- (void)setCompactHorizontalTableStackSpacing:(double)arg1;
- (void)setCreateButtonAspectRatio:(double)arg1;
- (void)setForceClearBackground:(bool)arg1;
- (void)setFullHorizontalTableStackSpacing:(double)arg1;
- (void)setIsInfoInPopoverMode:(bool)arg1;
- (void)setLargeTitleColor:(id)arg1;
- (void)setRegularHorizontalTableStackSpacing:(double)arg1;
- (void)setShowsCreateButton:(bool)arg1;
- (bool)showsCreateButton;

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