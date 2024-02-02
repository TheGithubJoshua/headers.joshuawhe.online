<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>IKImageElement.h</title>
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

/PrivateFrameworks/ITMLKit.framework/IKImageElement.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit (1)
 */

@interface IKImageElement : IKViewElement {
    double  _aspectRatio;
    IKSrcSetRule * _bestRule;
    IKImageElement * _fallbackImageElement;
    unsigned long long  _imageType;
    NSURL * _resolvedURL;
    double  _srcHeight;
    double  _srcWidth;
    NSDictionary * _srcset;
    NSArray * _srcsetRules;
}

@property (nonatomic, readonly) double aspectRatio;
@property (nonatomic, retain) IKSrcSetRule *bestRule;
@property (nonatomic, readonly) UIColor *borderColor;
@property (nonatomic, readonly) IKImageElement *fallbackImageElement;
@property (nonatomic, readonly) long long fill;
@property (nonatomic, readonly) double height;
@property (nonatomic, readonly) unsigned long long imageType;
@property (nonatomic, readonly, retain) NSURL *placeholderURL;
@property (nonatomic, readonly) unsigned long long position;
@property (nonatomic, readonly) long long reflect;
@property (nonatomic, retain) NSURL *resolvedURL;
@property (nonatomic, readonly, retain) NSDictionary *srcset;
@property (nonatomic, retain) NSArray *srcsetRules;
@property (nonatomic, readonly) TVImageProxy *tv_imageProxy;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } tv_imageScaleToSize;
@property (nonatomic, readonly) long long tv_imageType;
@property (nonatomic, readonly) bool tv_isResource;
@property (nonatomic, readonly) UIImage *tv_resourceImage;
@property (nonatomic, readonly) NSURL *url;
@property (nonatomic, readonly) bool vui_hasValidImage;
@property (nonatomic, readonly) double width;

// Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit

+ (unsigned long long)_imageTypeForTagName:(id)arg1;
+ (bool)shouldParseChildDOMElements;

- (void).cxx_destruct;
- (void)_initCommon;
- (void)_parseSrcset:(id)arg1;
- (void)_resolveURL;
- (void)appDocumentDidMarkStylesDirty;
- (double)aspectRatio;
- (id)bestRule;
- (id)borderColor;
- (id)fallbackImageElement;
- (long long)fill;
- (double)height;
- (unsigned long long)imageType;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)initWithOriginalElement:(id)arg1;
- (id)initWithPrototypeElement:(id)arg1 parent:(id)arg2 appDataItem:(id)arg3;
- (id)placeholderURL;
- (unsigned long long)position;
- (long long)reflect;
- (id)resolvedURL;
- (void)setBestRule:(id)arg1;
- (void)setResolvedURL:(id)arg1;
- (void)setSrcsetRules:(id)arg1;
- (id)srcset;
- (id)srcsetRules;
- (id)url;
- (double)width;

// Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit

- (id)tv_associatedViewElement;
- (id)tv_imageProxy;
- (id)tv_imageProxyWithLayout:(id)arg1;
- (struct CGSize { double x1; double x2; })tv_imageScaleToSize;
- (long long)tv_imageType;
- (bool)tv_isResource;
- (id)tv_resourceImage;
- (id)tv_urlWithLayout:(id)arg1;
- (id)tv_urlWithSize:(struct CGSize { double x1; double x2; })arg1 focusSizeIncrease:(double)arg2;
- (id)tv_urlWithSize:(struct CGSize { double x1; double x2; })arg1 focusSizeIncrease:(double)arg2 centerGrowth:(bool)arg3 cropCode:(id)arg4;

// Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI

- (long long)accessoryType;
- (id)artworkCatalog;
- (id)bestURL;
- (id)cachePath;
- (id)resourceImage;
- (bool)vui_hasValidImage;

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