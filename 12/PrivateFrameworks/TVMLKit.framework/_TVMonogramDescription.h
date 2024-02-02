<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>_TVMonogramDescription.h</title>
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

/PrivateFrameworks/TVMLKit.framework/_TVMonogramDescription.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit (1)
 */

@interface _TVMonogramDescription : NSObject <NSCopying> {
    UIColor * _backgroundColor;
    UIColor * _borderColor;
    double  _borderWidth;
    double  _cornerRadius;
    UIColor * _fillColor;
    NSString * _firstName;
    UIFont * _font;
    NSURL * _imageURL;
    NSString * _lastName;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _padding;
    <IKNetworkRequestLoader> * _requestLoader;
    long long  _scaleMode;
    bool  _shouldFallBackToSilhouette;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    NSString * _text;
    UIColor * _textColor;
    double  _upscaleAdjustment;
}

@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic, retain) UIColor *borderColor;
@property (nonatomic) double borderWidth;
@property (nonatomic) double cornerRadius;
@property (nonatomic, retain) UIColor *fillColor;
@property (nonatomic, readonly, copy) NSString *firstName;
@property (nonatomic, readonly, copy) UIFont *font;
@property (nonatomic, readonly, copy) NSURL *imageURL;
@property (nonatomic, readonly, copy) NSString *lastName;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } padding;
@property (nonatomic) <IKNetworkRequestLoader> *requestLoader;
@property (nonatomic) long long scaleMode;
@property (nonatomic) bool shouldFallBackToSilhouette;
@property (nonatomic) struct CGSize { double x1; double x2; } size;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, retain) UIColor *textColor;
@property (nonatomic) double upscaleAdjustment;

- (void).cxx_destruct;
- (id)backgroundColor;
- (id)borderColor;
- (double)borderWidth;
- (id)copyWithType:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)cornerRadius;
- (id)fillColor;
- (id)firstName;
- (id)font;
- (unsigned long long)hash;
- (id)imageURL;
- (id)init;
- (id)initWithFirstName:(id)arg1 lastName:(id)arg2 imageURL:(id)arg3 font:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)lastName;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })padding;
- (unsigned long long)preferedMonogramType;
- (id)requestLoader;
- (long long)scaleMode;
- (void)setBackgroundColor:(id)arg1;
- (void)setBorderColor:(id)arg1;
- (void)setBorderWidth:(double)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setFillColor:(id)arg1;
- (void)setPadding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setRequestLoader:(id)arg1;
- (void)setScaleMode:(long long)arg1;
- (void)setShouldFallBackToSilhouette:(bool)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setText:(id)arg1;
- (void)setTextColor:(id)arg1;
- (void)setUpscaleAdjustment:(double)arg1;
- (bool)shouldFallBackToSilhouette;
- (struct CGSize { double x1; double x2; })size;
- (id)text;
- (id)textColor;
- (double)upscaleAdjustment;

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