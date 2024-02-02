<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PUTiltWheel.h</title>
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

/PrivateFrameworks/PhotosEditUI.framework/PUTiltWheel.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI (1)
 */

@interface PUTiltWheel : UIView {
    NSDictionary * __dotsByDegree;
    NSDictionary * __labelsByDegree;
    unsigned long long  __numericIndicatorDegreeStep;
    int  __tiltWheelOrientation;
    <PUTiltWheelDataSource> * _dataSource;
}

@property (setter=_setDotsByDegree:, nonatomic, copy) NSDictionary *_dotsByDegree;
@property (setter=_setLabelsByDegree:, nonatomic, copy) NSDictionary *_labelsByDegree;
@property (setter=_setNumericIndicatorDegreeStep:, nonatomic) unsigned long long _numericIndicatorDegreeStep;
@property (setter=_setTiltWheelOrientation:, nonatomic) int _tiltWheelOrientation;
@property (nonatomic) <PUTiltWheelDataSource> *dataSource;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })_baseViewCenterForRadius:(double)arg1 aroundCenter:(struct CGPoint { double x1; double x2; })arg2;
- (unsigned long long)_countOfIndicatorsFrom:(double)arg1 to:(double)arg2 step:(unsigned long long)arg3;
- (double)_dotIndicatorSizeForDegree:(long long)arg1;
- (double)_dotLayoutRadius;
- (id)_dotsByDegree;
- (id)_labelsByDegree;
- (void)_layoutDots;
- (void)_layoutLabels;
- (void)_layoutViewsByDegree:(id)arg1 aroundRadius:(double)arg2;
- (id)_makeDotForDegree:(long long)arg1;
- (id)_makeLabelForDegree:(long long)arg1;
- (unsigned long long)_numericIndicatorDegreeStep;
- (void)_purgeCachedIndicators;
- (void)_setDotsByDegree:(id)arg1;
- (void)_setLabelsByDegree:(id)arg1;
- (void)_setNumericIndicatorDegreeStep:(unsigned long long)arg1;
- (void)_setTiltWheelOrientation:(int)arg1;
- (int)_tiltWheelOrientation;
- (id)dataSource;
- (void)layoutSubviews;
- (void)reloadData;
- (void)setDataSource:(id)arg1;

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