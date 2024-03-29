<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>MKMultiPartLabel.h</title>
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

/Frameworks/MapKit.framework/MKMultiPartLabel.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/MapKit.framework/MapKit (1.0)
 */

@interface MKMultiPartLabel : UIView {
    NSDictionary * _cachedTextAttributes;
    _MKMultiPartLabelMetrics * _data;
    UIFont * _font;
    MKMultiPartAttributedString * _multiPartString;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _previousBounds;
    long long  _textAlignment;
    UIColor * _textColor;
    UITextView * _textView;
}

@property (nonatomic, retain) _MKMultiPartLabelMetrics *data;
@property (nonatomic, retain) UIFont *font;
@property (nonatomic) long long lineBreakMode;
@property (nonatomic, retain) MKMultiPartAttributedString *multiPartString;
@property (nonatomic) unsigned long long numberOfLines;
@property (nonatomic, retain) NSString *text;
@property (nonatomic) long long textAlignment;
@property (nonatomic, retain) UIColor *textColor;

+ (id)_formattedStringsCache;

- (void).cxx_destruct;
- (id)_addDefaultAttributesToAttributedString:(id)arg1;
- (id)_attributedAjudstedMultiPartStringFromString:(id)arg1;
- (void)_setupTextView;
- (id)_textAttributes;
- (void)_updateStrings;
- (void)_updateTextViewTextAndInvalidateLayout:(id)arg1;
- (id)data;
- (id)font;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (long long)lineBreakMode;
- (id)multiPartString;
- (unsigned long long)numberOfLines;
- (void)setContentCompressionResistancePriority:(float)arg1 forAxis:(long long)arg2;
- (void)setContentHuggingPriority:(float)arg1 forAxis:(long long)arg2;
- (void)setData:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setLineBreakMode:(long long)arg1;
- (void)setMultiPartString:(id)arg1;
- (void)setNumberOfLines:(unsigned long long)arg1;
- (void)setText:(id)arg1;
- (void)setTextAlignment:(long long)arg1;
- (void)setTextColor:(id)arg1;
- (id)text;
- (long long)textAlignment;
- (id)textColor;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;

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
