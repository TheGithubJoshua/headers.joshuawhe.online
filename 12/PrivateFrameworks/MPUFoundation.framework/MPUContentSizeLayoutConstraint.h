<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>MPUContentSizeLayoutConstraint.h</title>
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

/PrivateFrameworks/MPUFoundation.framework/MPUContentSizeLayoutConstraint.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation (1)
 */

@interface MPUContentSizeLayoutConstraint : NSLayoutConstraint {
    double  _defaultSizeConstant;
    double  _fontSizeMultiplier;
    bool  _isBaselineConstraint;
    bool  _isLineNumberConstraint;
    unsigned long long  _numberOfLines;
    MPUNotificationObserver * _preferredContentSizeDidChangeObserver;
    UILabel * _targetLabel;
    NSString * _textStyle;
    double  _textStyleDefaultLeading;
}

@property (nonatomic) double defaultSizeConstant;
@property (nonatomic) double fontSizeMultiplier;
@property (nonatomic, copy) NSString *textStyle;

+ (id)constraintWithAutoupdatingBaselineOfView:(id)arg1 relation:(long long)arg2 toView:(id)arg3 attribute:(long long)arg4 withTextStyle:(id)arg5 multiplier:(double)arg6 nonStandardLeading:(double)arg7;
+ (id)constraintWithAutoupdatingBaselineOfView:(id)arg1 relation:(long long)arg2 toView:(id)arg3 attribute:(long long)arg4 withTextStyle:(id)arg5 nonStandardLeading:(double)arg6;
+ (id)constraintWithAutoupdatingBaselineOfView:(id)arg1 toView:(id)arg2 attribute:(long long)arg3 withTextStyle:(id)arg4 nonStandardLeading:(double)arg5;
+ (id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6 autoupdatingConstantFromLabel:(id)arg7 textStyle:(id)arg8 numberOfLines:(unsigned long long)arg9;
+ (id)contentSizeAutoupdatingConstraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6 textStyle:(id)arg7 defaultSizeConstant:(double)arg8;

- (void).cxx_destruct;
- (void)_updatePreferredContentSize;
- (double)defaultSizeConstant;
- (double)fontSizeMultiplier;
- (void)setDefaultSizeConstant:(double)arg1;
- (void)setFontSizeMultiplier:(double)arg1;
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
