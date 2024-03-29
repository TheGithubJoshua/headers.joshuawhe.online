<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>OADTextBodyProperties.h</title>
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

/PrivateFrameworks/OfficeImport.framework/OADTextBodyProperties.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport (257.9)
 */

@interface OADTextBodyProperties : OADProperties {
    OADTextBodyAutoFit * mAutoFit;
    float  mBottomInset;
    unsigned short  mColumnCount;
    float  mColumnSpacing;
    unsigned char  mFlowType;
    unsigned int  mHasBottomInset;
    unsigned int  mHasColumnCount;
    unsigned int  mHasColumnSpacing;
    unsigned int  mHasFlowType;
    unsigned int  mHasHorizontalOverflowType;
    unsigned int  mHasIsAnchorCenter;
    unsigned int  mHasIsLeftToRightColumns;
    unsigned int  mHasIsUpright;
    unsigned int  mHasLeftInset;
    unsigned int  mHasRepectFirstLastParagraphSpacing;
    unsigned int  mHasRightInset;
    unsigned int  mHasRotation;
    unsigned int  mHasTextAnchorType;
    unsigned int  mHasTextBodyId;
    unsigned int  mHasTopInset;
    unsigned int  mHasVerticalOverflowType;
    unsigned int  mHasWrapType;
    unsigned char  mHorizontalOverflowType;
    unsigned int  mIsAnchorCenter;
    unsigned int  mIsLeftToRightColumns;
    unsigned int  mIsUpright;
    float  mLeftInset;
    unsigned int  mRepectFirstLastParagraphSpacing;
    float  mRightInset;
    float  mRotation;
    unsigned char  mTextAnchorType;
    unsigned short  mTextBodyId;
    OADTextWarp * mTextWarp;
    float  mTopInset;
    unsigned char  mVerticalOverflowType;
    unsigned char  mWrapType;
}

+ (id)defaultEscherWordArtProperties;
+ (id)defaultProperties;

- (id)autoFit;
- (float)bottomInset;
- (int)columnCount;
- (float)columnSpacing;
- (void)dealloc;
- (id)description;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1;
- (unsigned char)flowType;
- (bool)hasAutoFit;
- (bool)hasBottomInset;
- (bool)hasColumnCount;
- (bool)hasColumnSpacing;
- (bool)hasFlowType;
- (bool)hasHorizontalOverflowType;
- (bool)hasIsAnchorCenter;
- (bool)hasIsLeftToRightColumns;
- (bool)hasIsUpright;
- (bool)hasLeftInset;
- (bool)hasRespectLastFirstLineSpacing;
- (bool)hasRightInset;
- (bool)hasRotation;
- (bool)hasTextAnchorType;
- (bool)hasTextBodyId;
- (bool)hasTextWarp;
- (bool)hasTopInset;
- (bool)hasVerticalOverflowType;
- (bool)hasWrapType;
- (unsigned long long)hash;
- (unsigned char)horizontalOverflowType;
- (id)init;
- (id)initWithDefaults;
- (bool)isAnchorCenter;
- (bool)isEqual:(id)arg1;
- (bool)isLeftToRightColumns;
- (bool)isUpright;
- (bool)isWarped;
- (float)leftInset;
- (void)removeUnnecessaryOverrides;
- (bool)respectLastFirstLineSpacing;
- (float)rightInset;
- (float)rotation;
- (void)setAutoFit:(id)arg1;
- (void)setBottomInset:(float)arg1;
- (void)setColumnCount:(int)arg1;
- (void)setColumnSpacing:(float)arg1;
- (void)setFlowType:(unsigned char)arg1;
- (void)setHorizontalOverflowType:(unsigned char)arg1;
- (void)setIsAnchorCenter:(bool)arg1;
- (void)setIsLeftToRightColumns:(bool)arg1;
- (void)setIsUpright:(bool)arg1;
- (void)setLeftInset:(float)arg1;
- (void)setRespectLastFirstLineSpacing:(bool)arg1;
- (void)setRightInset:(float)arg1;
- (void)setRotation:(float)arg1;
- (void)setTextAnchorType:(unsigned char)arg1;
- (void)setTextBodyId:(int)arg1;
- (void)setTextWarp:(id)arg1;
- (void)setTopInset:(float)arg1;
- (void)setVerticalOverflowType:(unsigned char)arg1;
- (void)setWrapType:(unsigned char)arg1;
- (unsigned char)textAnchorType;
- (int)textBodyId;
- (id)textWarp;
- (float)topInset;
- (unsigned char)verticalOverflowType;
- (unsigned char)wrapType;

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
