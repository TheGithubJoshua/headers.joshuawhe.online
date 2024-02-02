<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>KNAnimatedSlideModel.h</title>
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

/PrivateFrameworks/iWorkImport.framework/KNAnimatedSlideModel.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport (440)
 */

@interface KNAnimatedSlideModel : NSObject {
    KNAnimatedSlideView * _ASV;
    NSMutableSet * _ambientBuildRenderers;
    NSMapTable * _animatedBuildToRendererMap;
    NSMutableArray * _animatedBuilds;
    NSMutableArray * _buildEvents;
    NSMapTable * _infoToArrayOfAnimatedBuildsMap;
    NSArray * _infos;
    bool  _isMetalSlide;
    unsigned long long  _numberOfAddedEvents;
    KNPlaybackSession * _session;
    KNTransitionRenderer * _transitionRenderer;
}

@property (nonatomic, readonly) NSSet *ambientBuildRenderers;
@property (nonatomic, readonly) NSArray *animatedBuilds;
@property (getter=isFirstBuildEventAutomatic, nonatomic, readonly) bool firstBuildEventAutomatic;
@property (nonatomic, readonly) bool isMetalSlide;
@property (nonatomic) unsigned long long numberOfAddedEvents;
@property (nonatomic) KNPlaybackSession *session;
@property (nonatomic, readonly) KNTransitionRenderer *transitionRenderer;

- (void).cxx_destruct;
- (id)actionEffectForDrawable:(id)arg1 atBeginningOfEvent:(long long)arg2;
- (id)ambientBuildRenderers;
- (id)animatedBuildForInfo:(id)arg1 aroundEvent:(long long)arg2 isAtEndOfBuild:(bool*)arg3;
- (id)animatedBuildForInfo:(id)arg1 atEvent:(long long)arg2;
- (id)animatedBuilds;
- (id)buildChunksForEventRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (unsigned long long)buildEventCount;
- (void)dealloc;
- (id)description;
- (double)durationForEventIndexes:(id)arg1;
- (void)enumerateAnimatedBuildsAndTimeRangesAtIndex:(unsigned long long)arg1 ignoreInitialDelay:(bool)arg2 usingBlock:(id /* block */)arg3;
- (void)enumerateAnimatedBuildsAndTimeRangesAtIndex:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (id)eventsAtIndex:(unsigned long long)arg1;
- (id)finalActionEffectForDrawable:(id)arg1;
- (id)firstAnimatedBuildForInfo:(id)arg1;
- (long long)inEventForInfo:(id)arg1;
- (bool)info:(id)arg1 isVisibleDuringEvent:(long long)arg2;
- (id)init;
- (id)initWithBuildChunks:(id)arg1 infos:(id)arg2 session:(id)arg3 animatedSlideView:(id)arg4;
- (double)initialDelayForEventIndex:(unsigned long long)arg1;
- (bool)isFirstBuildEventAutomatic;
- (bool)isMetalSlide;
- (id)lastAnimatedBuildForInfo:(id)arg1;
- (double)maxScaleFactorForDrawable:(id)arg1;
- (id)nextRendererAfterRenderer:(id)arg1;
- (unsigned long long)numberOfAddedEvents;
- (long long)outEventForInfo:(id)arg1;
- (void)p_addAmbientBuildRenderer:(id)arg1;
- (id)p_animatedBuildForInfo:(id)arg1 event:(long long)arg2 buildIn:(bool)arg3;
- (id)p_animatedBuildsForInfo:(id)arg1 animationType:(long long)arg2 duringEvent:(long long)arg3 time:(double)arg4;
- (id)p_applyThemeCurvesToBuildAttributes:(id)arg1;
- (void)p_checkIfSlideIsMetalCapableWithBuildChunks:(id)arg1 andInfos:(id)arg2;
- (void)p_convertToBuildEvents:(id)arg1;
- (id)p_createBuildAnimationRecords:(id)arg1 info:(id)arg2 event:(long long)arg3 start:(double)arg4 eventStart:(double)arg5 animateAtEndOfPreviousBuild:(bool)arg6 previousAnimatedBuild:(id)arg7 parentBuild:(id)arg8;
- (bool)p_determineVisiblityOfInfo:(id)arg1 inOverloadedEvent:(long long)arg2 duringEvent:(long long)arg3;
- (long long)p_eventNumberForInfo:(id)arg1 animationType:(long long)arg2 defaultResult:(long long)arg3;
- (id)p_getCurrentDocumentRoot;
- (void)p_insertInitialAmbientAnimations;
- (bool)p_isInfoInvalidWithImplicitAmbientAnimations:(id)arg1;
- (id)p_newImplicitAmbientBuildRendererWithDrawable:(id)arg1 stageIndex:(long long)arg2 buildChunk:(id)arg3 startTime:(double)arg4 eventStartTime:(double)arg5 event:(long long)arg6 animateAtEndOfPreviousBuild:(bool)arg7;
- (id)p_newTransition;
- (id)p_previousAnimatedBuildOfType:(long long)arg1 forInfo:(id)arg2 priorToBuild:(id)arg3;
- (Class)p_rendererClassForBuildChunk:(id)arg1 parentBuild:(id)arg2 effectClass:(Class*)arg3;
- (void)p_setRenderer:(id)arg1 forAnimatedBuild:(id)arg2;
- (void)p_sortAnimatedBuilds;
- (void)p_updatePreviousAndFinalAttributes;
- (void)p_updateVisibilityOnAnimatedBuild:(id)arg1;
- (id)previousAnimatedBuildForInfo:(id)arg1 priorToBuild:(id)arg2;
- (id)previousBuildInForInfo:(id)arg1 priorToBuild:(id)arg2;
- (id)previousContentBuildForInfo:(id)arg1 priorToBuild:(id)arg2;
- (id)previousRendererBeforeRenderer:(id)arg1;
- (id)rendererForAnimatedBuild:(id)arg1;
- (id)session;
- (void)setNumberOfAddedEvents:(unsigned long long)arg1;
- (void)setSession:(id)arg1;
- (id)sortRenderers:(id)arg1;
- (id)transitionRenderer;

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