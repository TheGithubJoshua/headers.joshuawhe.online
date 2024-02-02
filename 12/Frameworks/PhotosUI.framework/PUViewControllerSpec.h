<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PUViewControllerSpec.h</title>
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

/Frameworks/PhotosUI.framework/PUViewControllerSpec.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI (1)
 */

@interface PUViewControllerSpec : NSObject {
    long long  __changeCount;
    NSHashTable * __changeObservers;
    bool  __needsUpdateLayoutStyle;
    PUViewControllerSpecChange * _currentChange;
    long long  _currentLayoutStyle;
    struct CGSize { 
        double width; 
        double height; 
    }  _layoutReferenceSize;
    bool  _prefersCompactLayoutForSplitScreen;
    bool  _presentedForSecondScreen;
    struct CGSize { 
        double width; 
        double height; 
    }  _secondScreenSize;
    UITraitCollection * _traitCollection;
}

@property (setter=_setChangeCount:, nonatomic) long long _changeCount;
@property (nonatomic, readonly) NSHashTable *_changeObservers;
@property (setter=_setNeedsUpdateLayoutStyle:, nonatomic) bool _needsUpdateLayoutStyle;
@property (nonatomic, readonly) PUViewControllerSpecChange *currentChange;
@property (nonatomic, readonly) long long currentLayoutStyle;
@property (nonatomic) struct CGSize { double x1; double x2; } layoutReferenceSize;
@property (nonatomic) bool prefersCompactLayoutForSplitScreen;
@property (getter=isPresentedForSecondScreen, nonatomic) bool presentedForSecondScreen;
@property (nonatomic) struct CGSize { double x1; double x2; } secondScreenSize;
@property (nonatomic, retain) UITraitCollection *traitCollection;
@property (getter=isValid, nonatomic, readonly) bool valid;

- (void).cxx_destruct;
- (long long)_changeCount;
- (id)_changeObservers;
- (void)_didChange;
- (void)_invalidateLayoutStyle;
- (bool)_needsUpdateLayoutStyle;
- (struct CGSize { double x1; double x2; })_portraitOrientedSizeForSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_publishChange:(id)arg1;
- (void)_setChangeCount:(long long)arg1;
- (void)_setCurrentChange:(id)arg1;
- (void)_setCurrentLayoutStyle:(long long)arg1;
- (void)_setNeedsUpdateLayoutStyle:(bool)arg1;
- (void)_updateCurrentLayoutStyleIfNeeded;
- (void)_willChange;
- (void)assertInsideChangesBlock;
- (id)currentChange;
- (long long)currentLayoutStyle;
- (id)init;
- (bool)isPresentedForSecondScreen;
- (bool)isValid;
- (struct CGSize { double x1; double x2; })layoutReferenceSize;
- (id)newSpecChange;
- (void)performChanges:(id /* block */)arg1;
- (bool)prefersCompactLayoutForSplitScreen;
- (void)registerChangeObserver:(id)arg1;
- (struct CGSize { double x1; double x2; })secondScreenSize;
- (void)setLayoutReferenceSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPrefersCompactLayoutForSplitScreen:(bool)arg1;
- (void)setPresentedForSecondScreen:(bool)arg1;
- (void)setSecondScreenSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setTraitCollection:(id)arg1;
- (id)traitCollection;
- (void)unregisterChangeObserver:(id)arg1;
- (void)updateIfNeeded;

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