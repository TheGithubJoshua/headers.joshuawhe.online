<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PRSModel.h</title>
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

/PrivateFrameworks/SpotlightServices.framework/PRSModel.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices (1191.57)
 */

@interface PRSModel : NSObject {
    NSString * _configFilePath;
    NSObject<OS_dispatch_queue> * _corePredictionQueue;
    NSArray * _featureSet;
    NSString * _modelDBFilePath;
    NSString * _modelName;
    CPMLModel * _predictionModel;
    NSString * _trainingDBFilePath;
    CPMLDB * _trainingModel;
}

@property (retain) NSString *configFilePath;
@property (retain) NSObject<OS_dispatch_queue> *corePredictionQueue;
@property (retain) NSArray *featureSet;
@property (retain) NSString *modelDBFilePath;
@property (retain) NSString *modelName;
@property (retain) CPMLModel *predictionModel;
@property (retain) NSString *trainingDBFilePath;
@property (retain) CPMLDB *trainingModel;

- (void).cxx_destruct;
- (void)addResultToTrainingData:(id)arg1 query:(id)arg2;
- (id)configFilePath;
- (id)corePredictionQueue;
- (id)featureSet;
- (id)getConfigFilePath;
- (id)getTopHitForQuery:(id)arg1 results:(id)arg2;
- (void)initPredictionModel;
- (id)initWithTrainingDBFilePath:(id)arg1 modelDBFilePath:(id)arg2 className:(id)arg3;
- (id)modelDBFilePath;
- (id)modelName;
- (id)predictionModel;
- (void)purgeAllData;
- (void)purgeDataOlderThanTime:(double)arg1;
- (void)setConfigFilePath:(id)arg1;
- (void)setCorePredictionQueue:(id)arg1;
- (void)setFeatureSet:(id)arg1;
- (void)setModelDBFilePath:(id)arg1;
- (void)setModelName:(id)arg1;
- (void)setPredictionModel:(id)arg1;
- (void)setTrainingDBFilePath:(id)arg1;
- (void)setTrainingModel:(id)arg1;
- (id)trainingDBFilePath;
- (id)trainingModel;
- (void)updateModel;

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
