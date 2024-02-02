<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>KenBurnsClip.h</title>
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

/PrivateFrameworks/Memories.framework/KenBurnsClip.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories (4267.0.31)
 */

@interface KenBurnsClip : KonaClip <KonaClipMiroAutoEditAdditions> {
    unsigned long long  _animationStyle;
    bool  _conformToInputAspect;
    PVEffect * _kbGeneratorEffect;
}

@property (nonatomic) unsigned long long animationStyle;
@property (nonatomic) bool conformToInputAspect;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PVEffect *kbEffect;
@property (nonatomic, readonly) PVEffect *kbGeneratorEffect;
@property (nonatomic, retain) KenBurnsInfo *kbInfo;
@property (readonly) Class superclass;

+ (id)kenBurnsClipWithAssetRepresentation:(id)arg1;
+ (id)kenBurnsClipWithMovie:(id)arg1;
+ (id)kenBurnsClipWithPath:(id)arg1;
+ (id)kenBurnsClipWithURL:(id)arg1;

- (id)animationEffectID;
- (unsigned long long)animationStyle;
- (double)aspectRatio;
- (double)autoEditLongestDurationWithBlueprint:(id)arg1;
- (double)autoEditShortestDurationWithBlueprint:(id)arg1;
- (double)autoEditShortestIdealDurationWithBlueprint:(id)arg1;
- (int)clipType;
- (bool)conformToInputAspect;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (bool)hasPhotoCharacteristic;
- (bool)hasVisualCharacteristic;
- (id)init;
- (bool)isLandscape;
- (bool)isPano;
- (bool)isPortrait;
- (bool)isSquare;
- (bool)isTall;
- (id)kbEffect;
- (id)kbGeneratorEffect;
- (id)kbInfo;
- (double)mediaAspectRatio;
- (double)panoDurationMultiplier;
- (id)plistRepresentationFromProject:(id)arg1;
- (void)setAnimationStyle:(unsigned long long)arg1;
- (void)setConformToInputAspect:(bool)arg1;
- (void)setContentsFromPlist:(id)arg1 inProject:(id)arg2;
- (void)setKbInfo:(id)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transform:(struct CGSize { double x1; double x2; })arg1 fillDest:(bool)arg2;
- (void)validateEffectRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1 inProject:(id)arg2;

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