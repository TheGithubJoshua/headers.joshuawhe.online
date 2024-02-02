<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>SKUIMediaComponent.h</title>
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

/PrivateFrameworks/StoreKitUI.framework/SKUIMediaComponent.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI (1)
 */

@interface SKUIMediaComponent : SKUIPageComponent <SSMetricsEventFieldProvider> {
    NSString * _accessibilityLabel;
    long long  _alignment;
    double  _duration;
    SKUILink * _link;
    long long  _mediaAppearance;
    long long  _mediaIdentifier;
    long long  _mediaType;
    NSString * _mediaURLString;
    <SKUIArtworkProviding> * _thumbnailArtworkProvider;
    NSString * _title;
    float  _titleFontSize;
    long long  _titleFontWeight;
}

@property (nonatomic, readonly) NSString *accessibilityLabel;
@property (nonatomic, readonly) long long alignment;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double duration;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SKUILink *link;
@property (nonatomic, readonly) long long mediaAppearance;
@property (nonatomic, readonly) long long mediaIdentifier;
@property (nonatomic, readonly) long long mediaType;
@property (nonatomic, readonly) NSString *mediaURLString;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <SKUIArtworkProviding> *thumbnailArtworkProvider;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) float titleFontSize;
@property (nonatomic, readonly) long long titleFontWeight;

- (void).cxx_destruct;
- (id)accessibilityLabel;
- (long long)alignment;
- (id)bestThumbnailArtwork;
- (id)bestThumbnailForWidth:(double)arg1;
- (long long)componentType;
- (double)duration;
- (id)initWithArtwork:(id)arg1;
- (id)initWithArtworkProvider:(id)arg1;
- (id)initWithArtworkProvider:(id)arg1 appearance:(long long)arg2;
- (id)initWithCustomPageContext:(id)arg1;
- (id)initWithFeaturedContentContext:(id)arg1 kind:(long long)arg2;
- (id)link;
- (long long)mediaAppearance;
- (long long)mediaIdentifier;
- (long long)mediaType;
- (id)mediaURLString;
- (id)metricsElementName;
- (id)thumbnailArtworkProvider;
- (id)title;
- (float)titleFontSize;
- (long long)titleFontWeight;
- (id)valueForMetricsField:(id)arg1;

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