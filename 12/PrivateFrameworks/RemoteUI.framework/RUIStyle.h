<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>RUIStyle.h</title>
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

/PrivateFrameworks/RemoteUI.framework/RUIStyle.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI (1)
 */

@interface RUIStyle : NSObject {
    UIColor * _backgroundColor;
    UIColor * _buttonRowTextColor;
    UIColor * _detailHeaderLabelTextColor;
    UIColor * _focusedRowTextColor;
    long long  _footerLabelAlignment;
    UIColor * _footerLabelTextColor;
    long long  _footerLinkAlignment;
    long long  _headerLabelAlignment;
    UIColor * _headerLabelTextColor;
    long long  _labelRowTextAlignment;
    UIColor * _labelRowTextColor;
    UIColor * _radioGroupSelectedColor;
    UIColor * _selectPageDetailTextColor;
    long long  _subHeaderLabelAlignment;
    UIColor * _subHeaderLabelTextColor;
    UIColor * _tintColor;
    UIColor * _titleLabelTextColor;
}

@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic, retain) UIColor *buttonRowTextColor;
@property (nonatomic, retain) UIColor *detailHeaderLabelTextColor;
@property (nonatomic, retain) UIColor *focusedRowTextColor;
@property (nonatomic) long long footerLabelAlignment;
@property (nonatomic, retain) UIColor *footerLabelTextColor;
@property (nonatomic) long long footerLinkAlignment;
@property (nonatomic) long long headerLabelAlignment;
@property (nonatomic, retain) UIColor *headerLabelTextColor;
@property (nonatomic) long long labelRowTextAlignment;
@property (nonatomic, retain) UIColor *labelRowTextColor;
@property (nonatomic, readonly) long long navBarActivityIndicatorStyle;
@property (nonatomic, retain) UIColor *radioGroupSelectedColor;
@property (nonatomic, retain) UIColor *selectPageDetailTextColor;
@property (nonatomic) long long subHeaderLabelAlignment;
@property (nonatomic, retain) UIColor *subHeaderLabelTextColor;
@property (nonatomic, retain) UIColor *tintColor;
@property (nonatomic, retain) UIColor *titleLabelTextColor;

+ (id)defaultStyle;
+ (id)frontRowStyle;
+ (id)setupAssistantModalStyle;
+ (id)setupAssistantStyle;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)applyToLabel:(id)arg1;
- (void)applyToNavigationController:(id)arg1;
- (void)applyToObjectModel:(id)arg1;
- (id)backgroundColor;
- (id)buttonRowTextColor;
- (id)detailHeaderLabelTextColor;
- (id)focusedRowTextColor;
- (long long)footerLabelAlignment;
- (id)footerLabelTextColor;
- (long long)footerLinkAlignment;
- (long long)headerLabelAlignment;
- (id)headerLabelTextColor;
- (id)init;
- (long long)labelRowTextAlignment;
- (id)labelRowTextColor;
- (long long)navBarActivityIndicatorStyle;
- (id)radioGroupSelectedColor;
- (id)selectPageDetailTextColor;
- (void)setBackgroundColor:(id)arg1;
- (void)setButtonRowTextColor:(id)arg1;
- (void)setDetailHeaderLabelTextColor:(id)arg1;
- (void)setFocusedRowTextColor:(id)arg1;
- (void)setFooterLabelAlignment:(long long)arg1;
- (void)setFooterLabelTextColor:(id)arg1;
- (void)setFooterLinkAlignment:(long long)arg1;
- (void)setHeaderLabelAlignment:(long long)arg1;
- (void)setHeaderLabelTextColor:(id)arg1;
- (void)setLabelRowTextAlignment:(long long)arg1;
- (void)setLabelRowTextColor:(id)arg1;
- (void)setRadioGroupSelectedColor:(id)arg1;
- (void)setSelectPageDetailTextColor:(id)arg1;
- (void)setSubHeaderLabelAlignment:(long long)arg1;
- (void)setSubHeaderLabelTextColor:(id)arg1;
- (void)setTintColor:(id)arg1;
- (void)setTitleLabelTextColor:(id)arg1;
- (long long)subHeaderLabelAlignment;
- (id)subHeaderLabelTextColor;
- (id)tintColor;
- (id)titleLabelTextColor;

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
