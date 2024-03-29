<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>SKUIMetricsPageRenderEvent.h</title>
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

/PrivateFrameworks/StoreKitUI.framework/SKUIMetricsPageRenderEvent.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI (1)
 */

@interface SKUIMetricsPageRenderEvent : SSMetricsBaseEvent <SKUIInspectableObject> {
    NSMutableArray * _domChanges;
    NSDictionary * _metricsBase;
    NSMutableArray * _requests;
}

@property (nonatomic, retain) NSString *clientCorrelationKey;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSArray *domChanges;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *launchCorrelationKey;
@property (nonatomic, copy) NSDictionary *metricsBase;
@property (nonatomic) double pageAppearTime;
@property (nonatomic) double pageDisappearTime;
@property (nonatomic) double pageRequestedTime;
@property (nonatomic) double pageUserReadyTime;
@property (nonatomic) double platformJsonParseEndTime;
@property (nonatomic) double platformJsonParseStartTime;
@property (nonatomic) double platformRequestStartTime;
@property (nonatomic) double platformResponseEndTime;
@property (nonatomic) double platformResponseStartTime;
@property (nonatomic) bool platformResponseWasCached;
@property (getter=isReadyForSubmission, nonatomic, readonly) bool readyForSubmission;
@property (nonatomic, readonly, copy) NSArray *requests;
@property (nonatomic) double resourceRequestEndTime;
@property (nonatomic) double resourceRequestOnScreenEndTime;
@property (nonatomic) double resourceRequestStartTime;
@property (readonly) Class superclass;
@property (setter=setXPSamplingForced:, nonatomic) bool xpSamplingForced;
@property (setter=setXPSamplingPercentageUsers:, nonatomic) double xpSamplingPercentageUsers;
@property (setter=setXPSessionDuration:, nonatomic) double xpSessionDuration;

+ (double)_randomDouble;
+ (id)_sampleWindowStartTime;
+ (void)_setSampleWindowStartTime:(id)arg1;
+ (bool)shouldCollectPageRenderData;
+ (bool)shouldCollectPageRenderDataForDocument:(id)arg1;

- (void).cxx_destruct;
- (void)addDOMChange:(id)arg1;
- (void)addRequest:(id)arg1;
- (void)appendMetricsBaseProperties:(id)arg1;
- (void)appendPropertiesToBody:(id)arg1;
- (void)appendSamplingPropertiesFromClientContext:(id)arg1;
- (id)clientCorrelationKey;
- (id)description;
- (id)domChanges;
- (id)init;
- (bool)isReadyForSubmission;
- (id)launchCorrelationKey;
- (id)metricsBase;
- (double)pageAppearTime;
- (double)pageDisappearTime;
- (double)pageRequestedTime;
- (double)pageUserReadyTime;
- (double)platformJsonParseEndTime;
- (double)platformJsonParseStartTime;
- (double)platformRequestStartTime;
- (double)platformResponseEndTime;
- (double)platformResponseStartTime;
- (bool)platformResponseWasCached;
- (void)populateObjectInspector:(id)arg1;
- (id)requests;
- (double)resourceRequestEndTime;
- (double)resourceRequestOnScreenEndTime;
- (double)resourceRequestStartTime;
- (void)setClientCorrelationKey:(id)arg1;
- (void)setLaunchCorrelationKey:(id)arg1;
- (void)setMetricsBase:(id)arg1;
- (void)setPageAppearTime:(double)arg1;
- (void)setPageDisappearTime:(double)arg1;
- (void)setPageRequestedTime:(double)arg1;
- (void)setPageUserReadyTime:(double)arg1;
- (void)setPlatformJsonParseEndTime:(double)arg1;
- (void)setPlatformJsonParseStartTime:(double)arg1;
- (void)setPlatformRequestStartTime:(double)arg1;
- (void)setPlatformResponseEndTime:(double)arg1;
- (void)setPlatformResponseStartTime:(double)arg1;
- (void)setPlatformResponseWasCached:(bool)arg1;
- (void)setResourceRequestEndTime:(double)arg1;
- (void)setResourceRequestOnScreenEndTime:(double)arg1;
- (void)setResourceRequestStartTime:(double)arg1;
- (void)setXPSamplingForced:(bool)arg1;
- (void)setXPSamplingPercentageUsers:(double)arg1;
- (void)setXPSessionDuration:(double)arg1;
- (bool)xpSamplingForced;
- (double)xpSamplingPercentageUsers;
- (double)xpSessionDuration;

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
