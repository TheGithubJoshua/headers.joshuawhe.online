<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>MLBayesianProbitRegression.h</title>
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

/Frameworks/CoreML.framework/MLBayesianProbitRegression.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/CoreML.framework/CoreML (1)
 */

@interface MLBayesianProbitRegression : MLRegressor <MLModelSpecificationLoader, MLModelSpecificationSaver, MLSupervisedOnlineUpdatable> {
    NSString * _meanOutputFeatureName;
    struct shared_ptr<CoreML::BayesianProbitRegression::BayesianProbitRegression> { 
        struct BayesianProbitRegression {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _model;
    NSString * _optimismInputFeatureName;
    NSString * _pessimisticProbabilityOutputFeatureName;
    NSString * _regressionInputFeatureName;
    NSString * _sampledProbabilityOutputFeatureName;
    NSString * _samplingScaleInputFeatureName;
    NSString * _samplingTruncationInputFeatureName;
    NSString * _varianceOutputFeatureName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)loadModelFromSpecification:(struct _MLModelSpecification { struct shared_ptr<CoreML::Specification::Model> { struct Model {} *x_1_1_1; struct __shared_weak_count {} *x_1_1_2; } x1; }*)arg1 configuration:(id)arg2 error:(id*)arg3;
+ (id)modelWithContentsOfURL:(id)arg1 error:(id*)arg2;
+ (bool)setFeatureName:(id*)arg1 to:(id)arg2 descriptions:(id)arg3;
+ (bool)validateModelDescription:(id)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)FeatureCount;
- (bool)convertOutputFeatureToPredictionValues:(id)arg1 event:(bool*)arg2 importance:(double*)arg3 error:(id*)arg4;
- (void)createCheckpoint;
- (id)createRegressorResult:(struct Prediction { double x1; double x2; double x3; double x4; double x5; bool x6; }*)arg1;
- (id)getArrayFeatureValue:(id)arg1;
- (double)getFeatureValue:(id)arg1 forName:(id)arg2 withType:(long long)arg3;
- (struct shared_ptr<CoreML::BayesianProbitRegression::FeatureValues> { struct FeatureValues {} *x1; struct __shared_weak_count {} *x2; })getOneHotFeatureValues:(id)arg1 error:(id*)arg2;
- (double)getOptimism:(id)arg1;
- (double)getSamplingScale:(id)arg1;
- (double)getSamplingTruncation:(id)arg1;
- (id)initWithDescription:(id)arg1 numberOfFeatures:(long long)arg2 priorMean:(id)arg3;
- (id)initWithDescription:(id)arg1 numberOfFeatures:(long long)arg2 priorMean:(id)arg3 regressionInputName:(id)arg4 optimismInputName:(id)arg5 samplingScaleInputName:(id)arg6 samplingTruncationInputName:(id)arg7 meanOutputName:(id)arg8 varianceOutputName:(id)arg9 pessimisticProbabilityOutputName:(id)arg10 sampledProbabilityOutputName:(id)arg11;
- (id)initWithSpecification:(struct _MLModelSpecification { struct shared_ptr<CoreML::Specification::Model> { struct Model {} *x_1_1_1; struct __shared_weak_count {} *x_1_1_2; } x1; }*)arg1 configuration:(id)arg2 error:(id*)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToBopr:(id)arg1;
- (struct shared_ptr<CoreML::BayesianProbitRegression::BayesianProbitRegression> { struct BayesianProbitRegression {} *x1; struct __shared_weak_count {} *x2; })model;
- (id)regress:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (void)reset;
- (void)resetToLastCheckpointBeforeDate:(id)arg1;
- (struct _MLModelSpecification { struct shared_ptr<CoreML::Specification::Model> { struct Model {} *x_1_1_1; struct __shared_weak_count {} *x_1_1_2; } x1; }*)saveModelToSpecification:(id*)arg1;
- (bool)setFeatureCount:(unsigned long long)arg1;
- (bool)setInputFeatureName:(id*)arg1 to:(id)arg2;
- (bool)setOutputFeatureName:(id*)arg1 to:(id)arg2;
- (void)updateModelFromFeatures:(id)arg1 toTarget:(id)arg2 error:(id*)arg3;
- (void)updateModelFromFeatures:(id)arg1 toTarget:(id)arg2 options:(id)arg3 error:(id*)arg4;

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