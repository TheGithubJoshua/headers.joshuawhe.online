<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>ATXNotificationsSuggestionLRInput.h</title>
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

/PrivateFrameworks/AppPredictionInternal.framework/ATXNotificationsSuggestionLRInput.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal (1)
 */

@interface ATXNotificationsSuggestionLRInput : NSObject <MLFeatureProvider> {
    double  _appPopularity;
    double  _app_bias;
    double  _cleared;
    double  _defaultActions;
    double  _engage_rate;
    double  _engaged;
    double  _ignored;
    double  _orbs;
    double  _received;
    double  _suppActions;
    double  _tapCoalesce;
    double  _totalLaunches;
}

@property (nonatomic) double appPopularity;
@property (nonatomic) double app_bias;
@property (nonatomic) double cleared;
@property (nonatomic) double defaultActions;
@property (nonatomic) double engage_rate;
@property (nonatomic) double engaged;
@property (nonatomic, readonly) NSSet *featureNames;
@property (nonatomic) double ignored;
@property (nonatomic) double orbs;
@property (nonatomic) double received;
@property (nonatomic) double suppActions;
@property (nonatomic) double tapCoalesce;
@property (nonatomic) double totalLaunches;

- (double)appPopularity;
- (double)app_bias;
- (double)cleared;
- (double)defaultActions;
- (double)engage_rate;
- (double)engaged;
- (id)featureNames;
- (id)featureValueForName:(id)arg1;
- (double)ignored;
- (id)initWithAppPopularity:(double)arg1 totalLaunches:(double)arg2 received:(double)arg3 ignored:(double)arg4 cleared:(double)arg5 engaged:(double)arg6 defaultActions:(double)arg7 orbs:(double)arg8 suppActions:(double)arg9 tapCoalesce:(double)arg10 engage_rate:(double)arg11 app_bias:(double)arg12;
- (double)orbs;
- (double)received;
- (void)setAppPopularity:(double)arg1;
- (void)setApp_bias:(double)arg1;
- (void)setCleared:(double)arg1;
- (void)setDefaultActions:(double)arg1;
- (void)setEngage_rate:(double)arg1;
- (void)setEngaged:(double)arg1;
- (void)setIgnored:(double)arg1;
- (void)setOrbs:(double)arg1;
- (void)setReceived:(double)arg1;
- (void)setSuppActions:(double)arg1;
- (void)setTapCoalesce:(double)arg1;
- (void)setTotalLaunches:(double)arg1;
- (double)suppActions;
- (double)tapCoalesce;
- (double)totalLaunches;

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