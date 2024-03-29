<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>NAUIContentSizeLayoutConstraint.h</title>
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

/PrivateFrameworks/NetAppsUtilitiesUI.framework/NAUIContentSizeLayoutConstraint.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/NetAppsUtilitiesUI.framework/NetAppsUtilitiesUI (1)
 */

@interface NAUIContentSizeLayoutConstraint : NSLayoutConstraint {
    double  _additionalConstant;
    bool  _allowsAccessibilityTextStyleSizes;
    bool  _autoUpdatingConstantShrinks;
    id  _autoitem;
    id /* block */  _constantLoadingBlock;
    double  _defaultConstant;
    NAUITextStyleDescriptor * _dynamicTextStyleDescriptor;
    bool  _isConstantUpdatingConstraint;
    id  _preferredContentSizeDidChangeObserver;
    NSString * _textStyle;
    double  _textStyleDefaultBodyLeading;
}

@property (nonatomic) double additionalConstant;
@property (nonatomic) bool autoUpdatingConstantShrinks;
@property (nonatomic, copy) id /* block */ constantLoadingBlock;
@property (nonatomic) double defaultConstant;
@property (nonatomic, copy) NSString *textStyle;

+ (id)_constraintForAutoitem:(id)arg1 constrainedItem:(id)arg2 attribute:(long long)arg3 relatedBy:(long long)arg4 toItem:(id)arg5 attribute:(long long)arg6 multiplier:(double)arg7 defaultConstant:(double)arg8 additionalConstant:(double)arg9 initialize:(bool)arg10;
+ (double)_maximumWidthOfStrings:(id)arg1 withFont:(id)arg2;
+ (id)baselineConstraintForAutoitem:(id)arg1 relation:(long long)arg2 toView:(id)arg3 attribute:(long long)arg4 defaultConstant:(double)arg5;
+ (id)baselineConstraintForView:(id)arg1 attribute:(long long)arg2 relation:(long long)arg3 toAutoitem:(id)arg4 defaultConstant:(double)arg5;
+ (id)constraintForAutoitem:(id)arg1 additionalConstant:(double)arg2 constantLoadingBlock:(id /* block */)arg3;
+ (id)constraintForAutoitem:(id)arg1 additionalConstant:(double)arg2 constantWidthSizingStringsLoadingBlock:(id /* block */)arg3;
+ (id)constraintForAutoitem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6 defaultConstant:(double)arg7;
+ (id)constraintForAutoitem:(id)arg1 constrainedItem:(id)arg2 attribute:(long long)arg3 relatedBy:(long long)arg4 toItem:(id)arg5 attribute:(long long)arg6 multiplier:(double)arg7 defaultConstant:(double)arg8;

- (void).cxx_destruct;
- (double)_defaultConstantByFixingUpDefaultConstant:(double)arg1;
- (void)_forceUpdatePreferredContentSize;
- (void)_reloadPreferredContentSize:(bool)arg1;
- (void)_updatePreferredContentSize;
- (double)additionalConstant;
- (bool)autoUpdatingConstantShrinks;
- (id /* block */)constantLoadingBlock;
- (void)dealloc;
- (double)defaultConstant;
- (void)setAdditionalConstant:(double)arg1;
- (void)setAutoUpdatingConstantShrinks:(bool)arg1;
- (void)setConstantLoadingBlock:(id /* block */)arg1;
- (void)setDefaultConstant:(double)arg1;
- (void)setTextStyle:(id)arg1;
- (id)textStyle;

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
