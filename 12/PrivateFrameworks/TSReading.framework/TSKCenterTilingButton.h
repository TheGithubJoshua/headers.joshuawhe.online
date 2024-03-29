<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>TSKCenterTilingButton.h</title>
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

/PrivateFrameworks/TSReading.framework/TSKCenterTilingButton.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading (261)
 */

@interface TSKCenterTilingButton : UIButton {
    UIImage * mCenterTileImage_Active;
    UIImage * mCenterTileImage_ActiveSelected;
    UIImage * mCenterTileImage_Disabled;
    UIImage * mCenterTileImage_Normal;
    UIImage * mCenterTileImage_Selected;
    UIImage * mLeftCapImage_Active;
    UIImage * mLeftCapImage_ActiveSelected;
    UIImage * mLeftCapImage_Disabled;
    UIImage * mLeftCapImage_Normal;
    UIImage * mLeftCapImage_Selected;
    UIImage * mLeftCenterTileImage_Active;
    UIImage * mLeftCenterTileImage_ActiveSelected;
    UIImage * mLeftCenterTileImage_Disabled;
    UIImage * mLeftCenterTileImage_Normal;
    UIImage * mLeftCenterTileImage_Selected;
    UIImage * mRightCapImage_Active;
    UIImage * mRightCapImage_ActiveSelected;
    UIImage * mRightCapImage_Disabled;
    UIImage * mRightCapImage_Normal;
    UIImage * mRightCapImage_Selected;
    UIImage * mRightCenterTileImage_Active;
    UIImage * mRightCenterTileImage_ActiveSelected;
    UIImage * mRightCenterTileImage_Disabled;
    UIImage * mRightCenterTileImage_Normal;
    UIImage * mRightCenterTileImage_Selected;
    int  mTilingType;
}

- (id)centerTileImageForState:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 andTilingType:(int)arg2;
- (id)leftCapImageForState:(unsigned long long)arg1;
- (id)leftCenterTileImageForState:(unsigned long long)arg1;
- (void)p_resetBackgroundImageForState:(unsigned long long)arg1;
- (void)p_tileButtedToCapLtoR:(id)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)p_tileButtedToCapRtoL:(id)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)p_tileHorizCenterOutwardwithLeft:(id)arg1 andRight:(id)arg2 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)p_tileSimple:(id)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)rightCapImageForState:(unsigned long long)arg1;
- (id)rightCenterTileImageForState:(unsigned long long)arg1;
- (void)setCenterTileImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setLeftCapImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setLeftCenterTileImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setRightCapImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setRightCenterTileImage:(id)arg1 forState:(unsigned long long)arg2;

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
