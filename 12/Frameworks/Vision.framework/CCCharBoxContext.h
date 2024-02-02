<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CCCharBoxContext.h</title>
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

/Frameworks/Vision.framework/CCCharBoxContext.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/Vision.framework/Vision (2.0.70)
 */

@interface CCCharBoxContext : NSObject {
    unsigned int  allocationSize;
    float  bBottom;
    float  bTop;
    unsigned long long * charBoxFlags;
    unsigned short * charboxROIFullVectorHeight2;
    unsigned short * charboxROIFullVectorRowStart;
    unsigned short  filterWalkUpDownCount;
    float * floatVectorSumProd;
    short  loopBigBox;
    short  loopBigBoxPrev;
    float  mBottom;
    float  mTop;
    unsigned short  medianHeightBottom;
    unsigned short  medianHeightTop;
    float  posLL;
    float  posLR;
    float  posUL;
    float  posUR;
    char * pulseVectorHeightCharBox;
    char * pulseVectorHeightCharBoxAdaptive;
}

@property unsigned int allocationSize;
@property float bBottom;
@property float bTop;
@property unsigned long long*charBoxFlags;
@property unsigned short*charboxROIFullVectorHeight2;
@property unsigned short*charboxROIFullVectorRowStart;
@property unsigned short filterWalkUpDownCount;
@property float*floatVectorSumProd;
@property short loopBigBox;
@property short loopBigBoxPrev;
@property float mBottom;
@property float mTop;
@property unsigned short medianHeightBottom;
@property unsigned short medianHeightTop;
@property float posLL;
@property float posLR;
@property float posUL;
@property float posUR;
@property char *pulseVectorHeightCharBox;
@property char *pulseVectorHeightCharBoxAdaptive;

- (unsigned int)allocationSize;
- (float)bBottom;
- (float)bTop;
- (unsigned long long*)charBoxFlags;
- (unsigned short*)charboxROIFullVectorHeight2;
- (unsigned short*)charboxROIFullVectorRowStart;
- (unsigned int)checkFlag:(unsigned long long)arg1 atIndex:(unsigned int)arg2;
- (void)clearFlag:(unsigned long long)arg1 atIndex:(unsigned int)arg2;
- (void)copyFlagValue:(unsigned long long)arg1 toTarget:(unsigned long long)arg2 atIndex:(unsigned int)arg3;
- (void)dealloc;
- (unsigned short)filterWalkUpDownCount;
- (float*)floatVectorSumProd;
- (short)loopBigBox;
- (short)loopBigBoxPrev;
- (float)mBottom;
- (float)mTop;
- (bool)makeAllocationsForWidth:(unsigned long long)arg1;
- (unsigned short)medianHeightBottom;
- (unsigned short)medianHeightTop;
- (float)posLL;
- (float)posLR;
- (float)posUL;
- (float)posUR;
- (char *)pulseVectorHeightCharBox;
- (char *)pulseVectorHeightCharBoxAdaptive;
- (void)releaseAllocations;
- (void)resetBoxBounds;
- (void)setAllocationSize:(unsigned int)arg1;
- (void)setBBottom:(float)arg1;
- (void)setBTop:(float)arg1;
- (void)setCharBoxFlags:(unsigned long long*)arg1;
- (void)setCharboxROIFullVectorHeight2:(unsigned short*)arg1;
- (void)setCharboxROIFullVectorRowStart:(unsigned short*)arg1;
- (void)setFilterWalkUpDownCount:(unsigned short)arg1;
- (void)setFlag:(unsigned long long)arg1 atIndex:(unsigned int)arg2;
- (void)setFloatVectorSumProd:(float*)arg1;
- (void)setLoopBigBox:(short)arg1;
- (void)setLoopBigBoxPrev:(short)arg1;
- (void)setMBottom:(float)arg1;
- (void)setMTop:(float)arg1;
- (void)setMedianHeightBottom:(unsigned short)arg1;
- (void)setMedianHeightTop:(unsigned short)arg1;
- (void)setPosLL:(float)arg1;
- (void)setPosLR:(float)arg1;
- (void)setPosUL:(float)arg1;
- (void)setPosUR:(float)arg1;
- (void)setPulseVectorHeightCharBox:(char *)arg1;
- (void)setPulseVectorHeightCharBoxAdaptive:(char *)arg1;

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