<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>BKUIPearlCrossHairsRenderingView.h</title>
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

/PrivateFrameworks/BiometricKitUI.framework/BKUIPearlCrossHairsRenderingView.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/BiometricKitUI.framework/BiometricKitUI (1)
 */

@interface BKUIPearlCrossHairsRenderingView : MTKView {
    void _axis;
    MTLSPathBufferData * _checkMarkData;
    MTLSAnimatablePathCollection * _checkMarkPathCollection;
    <MTLCommandQueue> * _commandQueue;
    MTLSPathBufferData * _crosshairsData;
    BKUIPearlCrossHairsManager * _crosshairsInstanceManager;
    MTLSAnimatablePathCollection * _crosshairsPathCollection;
    NSObject<OS_dispatch_semaphore> * _inFlightSemaphore;
    float  _pathBlend;
    float  _pathBlendDest;
    MTLSplineRenderer * _renderer;
    unsigned long long  _state;
    double  _time;
}

@property void axis;
@property (retain) MTLSPathBufferData *checkMarkData;
@property (retain) MTLSAnimatablePathCollection *checkMarkPathCollection;
@property (retain) MTLSPathBufferData *crosshairsData;
@property (retain) BKUIPearlCrossHairsManager *crosshairsInstanceManager;
@property (retain) MTLSAnimatablePathCollection *crosshairsPathCollection;
@property (nonatomic) bool grayscale;
@property (retain) MTLSplineRenderer *renderer;
@property (nonatomic) unsigned long long state;

- (void).cxx_destruct;
- (void)axis;
- (id)checkMarkData;
- (id)checkMarkPathCollection;
- (id)crosshairsData;
- (id)crosshairsInstanceManager;
- (id)crosshairsPathCollection;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (unsigned long long)getState;
- (bool)grayscale;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 device:(id)arg2;
- (id)renderer;
- (void)setAxis;
- (void)setAxis:(void *)arg1 animated:(void *)arg2; // needs 2 arg types, found 1: bool
- (void)setCheckMarkData:(id)arg1;
- (void)setCheckMarkPathCollection:(id)arg1;
- (void)setCrosshairsData:(id)arg1;
- (void)setCrosshairsInstanceManager:(id)arg1;
- (void)setCrosshairsPathCollection:(id)arg1;
- (void)setGrayscale:(bool)arg1;
- (void)setRenderer:(id)arg1;
- (void)setSampleCount:(unsigned long long)arg1;
- (void)setState:(unsigned long long)arg1;
- (unsigned long long)state;

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