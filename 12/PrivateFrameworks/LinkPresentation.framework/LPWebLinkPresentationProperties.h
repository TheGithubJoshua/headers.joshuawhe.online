<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>LPWebLinkPresentationProperties.h</title>
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

/PrivateFrameworks/LinkPresentation.framework/LPWebLinkPresentationProperties.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation (59.46)
 */

@interface LPWebLinkPresentationProperties : NSObject <LPLinkPresentationPropertyProvider> {
    UIColor * _backgroundColor;
    LPCaptionBarPresentationProperties * _captionBar;
    LPiTunesPlaybackInformation * _iTunesPlaybackInformation;
    LPImage * _image;
    LPCaptionBarPresentationProperties * _mediaBottomCaptionBar;
    LPCaptionBarPresentationProperties * _mediaTopCaptionBar;
    NSNumber * _minimumHeight;
    bool  _preliminary;
    NSString * _quotedText;
    long long  _style;
    LPVideo * _video;
}

@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic, retain) LPCaptionBarPresentationProperties *captionBar;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) LPiTunesPlaybackInformation *iTunesPlaybackInformation;
@property (nonatomic, retain) LPImage *image;
@property (nonatomic, retain) LPCaptionBarPresentationProperties *mediaBottomCaptionBar;
@property (nonatomic, retain) LPCaptionBarPresentationProperties *mediaTopCaptionBar;
@property (nonatomic, retain) NSNumber *minimumHeight;
@property (getter=isPreliminary, nonatomic) bool preliminary;
@property (nonatomic, copy) NSString *quotedText;
@property (nonatomic) long long style;
@property (readonly) Class superclass;
@property (nonatomic, retain) LPVideo *video;

- (void).cxx_destruct;
- (id)backgroundColor;
- (id)captionBar;
- (id)iTunesPlaybackInformation;
- (id)image;
- (bool)isPreliminary;
- (id)mediaBottomCaptionBar;
- (id)mediaTopCaptionBar;
- (id)minimumHeight;
- (id)quotedText;
- (void)setBackgroundColor:(id)arg1;
- (void)setCaptionBar:(id)arg1;
- (void)setITunesPlaybackInformation:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setMediaBottomCaptionBar:(id)arg1;
- (void)setMediaTopCaptionBar:(id)arg1;
- (void)setMinimumHeight:(id)arg1;
- (void)setPreliminary:(bool)arg1;
- (void)setQuotedText:(id)arg1;
- (void)setStyle:(long long)arg1;
- (void)setVideo:(id)arg1;
- (long long)style;
- (id)video;

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