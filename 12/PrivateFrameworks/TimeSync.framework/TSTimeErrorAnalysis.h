<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>TSTimeErrorAnalysis.h</title>
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

/PrivateFrameworks/TimeSync.framework/TSTimeErrorAnalysis.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync (740.2)
 */

@interface TSTimeErrorAnalysis : NSObject {
    double  _averagePeriod;
    bool  _calculated;
    long long  _calculatedStepSize;
    long long  _highestWindowSize;
    long long  _lowestWindowSize;
    long long  _numberOfErrors;
    double * _timeErrors;
    double * _timestamps;
}

@property (nonatomic, readonly) long long analysisLimit;
@property (nonatomic, readonly) double averagePeriod;
@property (nonatomic, readonly) bool calculated;
@property (nonatomic, readonly) long long calculatedStepSize;
@property (nonatomic, readonly) long long highestWindowSize;
@property (nonatomic, readonly) long long lowestWindowSize;
@property (nonatomic, readonly) long long numberOfErrors;
@property (nonatomic, readonly) long long threadingLimit;
@property (nonatomic, readonly) long long threadingSegment;
@property (nonatomic, readonly) double*timeErrors;
@property (nonatomic, readonly) double*timestamps;

+ (id)additionalScriptInitialization;
+ (id)additionalScriptPlots:(id)arg1;
+ (id)additionalScriptRecords;
+ (id)generatePythonScriptWithOutputPath:(id)arg1 fileName:(id)arg2 titleName:(id)arg3 plotPath:(id)arg4 showPlot:(bool)arg5;
+ (id)keyPathsForValuesAffectingAnalysisLimit;
+ (id)plotSize;
+ (id)plotTitle;
+ (id)plotYLabel;
+ (id)plotYLimits:(id)arg1;
+ (id)variableName;

- (void)_performAnalysisFromWindowSize:(long long)arg1 toWindowSize:(long long)arg2 stepSize:(long long)arg3;
- (long long)analysisLimit;
- (double)averagePeriod;
- (bool)calculated;
- (long long)calculatedStepSize;
- (void)dealloc;
- (bool)exportAnalysisToDirectoryURL:(id)arg1;
- (bool)exportAnalysisToDirectoryURL:(id)arg1 withFilename:(id)arg2;
- (bool)exportAnalysisToDirectoryURL:(id)arg1 withFilename:(id)arg2 fromStartWindowSize:(long long)arg3 toEndWindowSize:(long long)arg4 stepSize:(long long)arg5;
- (bool)exportTimeErrorsToDirectoryURL:(id)arg1;
- (bool)exportTimeErrorsToDirectoryURL:(id)arg1 withFilename:(id)arg2;
- (long long)highestWindowSize;
- (id)initWithTimeErrorValues:(id)arg1;
- (long long)lowestWindowSize;
- (long long)numberOfErrors;
- (void)performAnalysis;
- (void)performAnalysisFromStartWindowSize:(long long)arg1 toEndWindowSize:(long long)arg2 stepSize:(long long)arg3;
- (void)performAnalysisFromStartWindowSize:(long long)arg1 toEndWindowSize:(long long)arg2 stepSize:(long long)arg3 withThreadingOption:(long long)arg4;
- (void)performAnalysisWithThreadingOption:(long long)arg1;
- (long long)threadingLimit;
- (long long)threadingSegment;
- (double*)timeErrors;
- (double*)timestamps;

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
