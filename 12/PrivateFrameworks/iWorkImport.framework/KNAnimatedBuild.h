<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>KNAnimatedBuild.h</title>
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

/PrivateFrameworks/iWorkImport.framework/KNAnimatedBuild.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport (440)
 */

@interface KNAnimatedBuild : NSObject {
    bool  _animateAtEndOfPreviousBuild;
    KNBuildAttributes * _attributes;
    bool  _automatic;
    long long  _buildType;
    NSArray * _childBuilds;
    unsigned long long  _deliveryOption;
    unsigned long long  _deliveryStyle;
    unsigned long long  _direction;
    double  _duration;
    NSString * _effectIdentifier;
    double  _endTime;
    double  _eventEndTime;
    long long  _eventIndex;
    double  _eventStartTime;
    NSDictionary * _finalAttributes;
    bool  _isInitialAmbientBuild;
    bool  _isVisibleAtBeginning;
    bool  _isVisibleAtEnd;
    KNAnimatedBuild * _parentBuild;
    Class  _pluginClass;
    NSDictionary * _previousAttributes;
    long long  _stageIndex;
    double  _startTime;
}

@property (nonatomic) bool animateAtEndOfPreviousBuild;
@property (nonatomic, readonly) KNBuildAttributes *attributes;
@property (nonatomic, readonly) bool automatic;
@property (nonatomic, readonly) long long buildType;
@property (nonatomic, readonly) NSArray *childBuilds;
@property (nonatomic, readonly) unsigned long long deliveryOption;
@property (nonatomic, readonly) unsigned long long deliveryStyle;
@property (nonatomic, readonly) unsigned long long direction;
@property (nonatomic) double duration;
@property (nonatomic, readonly) double durationWithChildren;
@property (nonatomic, readonly) NSString *effectIdentifier;
@property (nonatomic, readonly) double endTime;
@property (nonatomic, readonly) double eventEndTime;
@property (nonatomic) long long eventIndex;
@property (nonatomic, readonly) double eventStartTime;
@property (nonatomic, copy) NSDictionary *finalAttributes;
@property (nonatomic, readonly) double finalScale;
@property (nonatomic, readonly) bool hasPreviousActionRotate;
@property (nonatomic, readonly) bool hasPreviousActionScale;
@property (nonatomic, readonly) double initialScale;
@property (nonatomic, readonly) bool isActionBuild;
@property (nonatomic, readonly) bool isActionMotionPath;
@property (nonatomic, readonly) bool isActionOpacity;
@property (nonatomic, readonly) bool isActionRotation;
@property (nonatomic, readonly) bool isActionScale;
@property (nonatomic, readonly) bool isBuildIn;
@property (nonatomic, readonly) bool isBuildOut;
@property (nonatomic, readonly) bool isChildBuild;
@property (nonatomic, readonly) bool isContentBuild;
@property (nonatomic, readonly) bool isDriftBuild;
@property (nonatomic, readonly) bool isEmphasisBuild;
@property (nonatomic, readonly) bool isImplicitlyVisibleAtBeginning;
@property (nonatomic) bool isInitialAmbientBuild;
@property (nonatomic, readonly) bool isLineDrawBuild;
@property (nonatomic, readonly) bool isMagicChartBuild;
@property (nonatomic, readonly) bool isParentBuild;
@property (nonatomic) bool isVisibleAtBeginning;
@property (nonatomic) bool isVisibleAtEnd;
@property (nonatomic, readonly) double maxScale;
@property (nonatomic) KNAnimatedBuild *parentBuild;
@property (nonatomic, readonly) Class pluginClass;
@property (nonatomic, copy) NSDictionary *previousAttributes;
@property (nonatomic, readonly) NSArray *requiredScales;
@property (nonatomic, readonly) long long stageIndex;
@property (nonatomic, readonly) double startTime;

- (void).cxx_destruct;
- (void)addChildBuild:(id)arg1;
- (bool)animateAtEndOfPreviousBuild;
- (id)attributes;
- (bool)automatic;
- (long long)buildType;
- (id)childBuilds;
- (unsigned long long)deliveryOption;
- (unsigned long long)deliveryStyle;
- (id)description;
- (unsigned long long)direction;
- (double)duration;
- (double)durationWithChildren;
- (id)effectIdentifier;
- (double)endTime;
- (double)eventEndTime;
- (long long)eventIndex;
- (double)eventStartTime;
- (id)finalAttributes;
- (double)finalScale;
- (bool)hasPreviousActionRotate;
- (bool)hasPreviousActionScale;
- (id)initWithBuildType:(long long)arg1 effectIdentifier:(id)arg2 attributes:(id)arg3 pluginClass:(Class)arg4 deliveryStyle:(unsigned long long)arg5 eventIndex:(long long)arg6 stageIndex:(long long)arg7 startTime:(double)arg8 eventStartTime:(double)arg9 duration:(double)arg10 direction:(unsigned long long)arg11 automatic:(bool)arg12 animateAtEndOfPreviousBuild:(bool)arg13 parentBuild:(id)arg14;
- (double)initialScale;
- (bool)isActionBuild;
- (bool)isActionMotionPath;
- (bool)isActionOpacity;
- (bool)isActionRotation;
- (bool)isActionScale;
- (bool)isBuildIn;
- (bool)isBuildOut;
- (bool)isChildBuild;
- (bool)isContentBuild;
- (bool)isDriftBuild;
- (bool)isEmphasisBuild;
- (bool)isImplicitlyVisibleAtBeginning;
- (bool)isInitialAmbientBuild;
- (bool)isLineDrawBuild;
- (bool)isMagicChartBuild;
- (bool)isParentBuild;
- (bool)isRelatedTo:(id)arg1;
- (bool)isSiblingTo:(id)arg1;
- (bool)isVisibleAtBeginning;
- (bool)isVisibleAtEnd;
- (double)maxScale;
- (bool)p_isActionEffect:(id)arg1;
- (id)parentBuild;
- (Class)pluginClass;
- (id)previousAttributes;
- (id)requiredScales;
- (void)setAnimateAtEndOfPreviousBuild:(bool)arg1;
- (void)setDuration:(double)arg1;
- (void)setEventIndex:(long long)arg1;
- (void)setFinalAttributes:(id)arg1;
- (void)setIsInitialAmbientBuild:(bool)arg1;
- (void)setIsVisibleAtBeginning:(bool)arg1;
- (void)setIsVisibleAtEnd:(bool)arg1;
- (void)setParentBuild:(id)arg1;
- (void)setPreviousAttributes:(id)arg1;
- (long long)stageIndex;
- (double)startTime;

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
