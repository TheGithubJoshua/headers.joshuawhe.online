<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>MLSVMEngine.h</title>
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

/Frameworks/CoreML.framework/MLSVMEngine.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/CoreML.framework/CoreML (1)
 */

@interface MLSVMEngine : NSObject <MLModelSpecificationLoader> {
    NSArray * _classLabels;
    bool  _freeModelOnDealloc;
    unsigned long long  _inputSize;
    bool  _isInputSizeLowerBoundOnly;
    struct svm_model { struct svm_parameter { int x_1_1_1; int x_1_1_2; int x_1_1_3; double x_1_1_4; double x_1_1_5; double x_1_1_6; double x_1_1_7; double x_1_1_8; int x_1_1_9; int *x_1_1_10; double *x_1_1_11; double x_1_1_12; double x_1_1_13; int x_1_1_14; int x_1_1_15; } x1; int x2; int x3; struct svm_node {} **x4; double **x5; double *x6; double *x7; double *x8; int *x9; int *x10; int *x11; int x12; } * _model;
}

@property (nonatomic, retain) NSArray *classLabels;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property bool freeModelOnDealloc;
@property (readonly) unsigned long long hash;
@property unsigned long long inputSize;
@property bool isInputSizeLowerBoundOnly;
@property struct svm_model { struct svm_parameter { int x_1_1_1; int x_1_1_2; int x_1_1_3; double x_1_1_4; double x_1_1_5; double x_1_1_6; double x_1_1_7; double x_1_1_8; int x_1_1_9; int *x_1_1_10; double *x_1_1_11; double x_1_1_12; double x_1_1_13; int x_1_1_14; int x_1_1_15; } x1; int x2; int x3; struct svm_node {} **x4; double **x5; double *x6; double *x7; double *x8; int *x9; int *x10; int *x11; int x12; }*model;
@property (nonatomic, readonly) unsigned long long numberOfClasses;
@property (readonly) Class superclass;

+ (id)loadModelFromSpecification:(struct _MLModelSpecification { struct shared_ptr<CoreML::Specification::Model> { struct Model {} *x_1_1_1; struct __shared_weak_count {} *x_1_1_2; } x1; }*)arg1 configuration:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (struct svm_node { int x1; double x2; }*)allocSVMNodeVector:(unsigned long long)arg1;
- (id)classLabels;
- (void)dealloc;
- (void)deallocSVMNodeVector:(struct svm_node { int x1; double x2; }*)arg1;
- (void)fillSVMNodeVector:(struct svm_node { int x1; double x2; }*)arg1 values:(double*)arg2 count:(unsigned long long)arg3;
- (bool)freeModelOnDealloc;
- (bool)hasProbabilityPredictionEnabled;
- (id)initWithLibSVMFile:(id)arg1 classLabels:(id)arg2;
- (id)initWithSVMModel:(struct svm_model { struct svm_parameter { int x_1_1_1; int x_1_1_2; int x_1_1_3; double x_1_1_4; double x_1_1_5; double x_1_1_6; double x_1_1_7; double x_1_1_8; int x_1_1_9; int *x_1_1_10; double *x_1_1_11; double x_1_1_12; double x_1_1_13; int x_1_1_14; int x_1_1_15; } x1; int x2; int x3; struct svm_node {} **x4; double **x5; double *x6; double *x7; double *x8; int *x9; int *x10; int *x11; int x12; }*)arg1 freeOnDealloc:(bool)arg2 isInputSizeLowerBoundOnly:(bool)arg3 inputSize:(unsigned long long)arg4 classLabels:(id)arg5;
- (unsigned long long)inputSize;
- (bool)isInputSizeLowerBoundOnly;
- (struct svm_model { struct svm_parameter { int x_1_1_1; int x_1_1_2; int x_1_1_3; double x_1_1_4; double x_1_1_5; double x_1_1_6; double x_1_1_7; double x_1_1_8; int x_1_1_9; int *x_1_1_10; double *x_1_1_11; double x_1_1_12; double x_1_1_13; int x_1_1_14; int x_1_1_15; } x1; int x2; int x3; struct svm_node {} **x4; double **x5; double *x6; double *x7; double *x8; int *x9; int *x10; int *x11; int x12; }*)model;
- (unsigned long long)numberOfClasses;
- (id)predict:(id)arg1;
- (void)predictProbabilities:(id)arg1 probabilities:(double*)arg2;
- (void)setClassLabels:(id)arg1;
- (void)setFreeModelOnDealloc:(bool)arg1;
- (void)setInputSize:(unsigned long long)arg1;
- (void)setIsInputSizeLowerBoundOnly:(bool)arg1;
- (void)setModel:(struct svm_model { struct svm_parameter { int x_1_1_1; int x_1_1_2; int x_1_1_3; double x_1_1_4; double x_1_1_5; double x_1_1_6; double x_1_1_7; double x_1_1_8; int x_1_1_9; int *x_1_1_10; double *x_1_1_11; double x_1_1_12; double x_1_1_13; int x_1_1_14; int x_1_1_15; } x1; int x2; int x3; struct svm_node {} **x4; double **x5; double *x6; double *x7; double *x8; int *x9; int *x10; int *x11; int x12; }*)arg1;

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