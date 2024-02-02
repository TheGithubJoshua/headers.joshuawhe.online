<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CHDDataLabel.h</title>
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

/PrivateFrameworks/OfficeImport.framework/CHDDataLabel.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport (257.9)
 */

@interface CHDDataLabel : NSObject {
    bool  mContentFormatDerived;
    unsigned long long  mContentFormatId;
    bool  mDeleted;
    bool  mExtensionDetected;
    OADGraphicProperties * mGraphicProperties;
    bool  mIsPositionAffineTransform;
    int  mPosition;
    EDResources * mResources;
    double  mRotation;
    bool  mShowBubbleSize;
    bool  mShowCategoryName;
    bool  mShowLeaderLines;
    bool  mShowLegendKey;
    bool  mShowPercent;
    bool  mShowSeriesName;
    bool  mShowValue;
    unsigned long long  mStringIndex;
}

+ (id)dataLabelWithResources:(id)arg1;

- (id)contentFormat;
- (unsigned long long)contentFormatId;
- (void)dealloc;
- (id)description;
- (id)graphicProperties;
- (id)initWithResources:(id)arg1;
- (bool)isContentFormatDerivedFromDataPoints;
- (bool)isCustomLabelBlockingVisibility;
- (bool)isDeleted;
- (bool)isExtensionDetected;
- (bool)isPositionAffineTransform;
- (bool)isShowBubbleSize;
- (bool)isShowCategoryName;
- (bool)isShowLeaderLines;
- (bool)isShowLegendKey;
- (bool)isShowPercent;
- (bool)isShowSeriesName;
- (bool)isShowValue;
- (int)position;
- (double)rotationAngle;
- (void)setContentFormat:(id)arg1;
- (void)setContentFormatId:(unsigned long long)arg1;
- (void)setDeleted:(bool)arg1;
- (void)setExtensionDetected:(bool)arg1;
- (void)setGraphicProperties:(id)arg1;
- (void)setIsContentFormatDerivedFromDataPoints:(bool)arg1;
- (void)setIsPositionAffineTransform:(bool)arg1;
- (void)setPosition:(int)arg1;
- (void)setRotationAngle:(double)arg1;
- (void)setShowBubbleSize:(bool)arg1;
- (void)setShowCategoryName:(bool)arg1;
- (void)setShowLeaderLines:(bool)arg1;
- (void)setShowLegendKey:(bool)arg1;
- (void)setShowPercent:(bool)arg1;
- (void)setShowSeriesName:(bool)arg1;
- (void)setShowValue:(bool)arg1;
- (void)setString:(id)arg1;
- (void)setStringIndex:(unsigned long long)arg1;
- (id)string;
- (unsigned long long)stringIndex;

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