<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>MLOneHotEncoder.h</title>
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

/Frameworks/CoreML.framework/MLOneHotEncoder.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/CoreML.framework/CoreML (1)
 */

@interface MLOneHotEncoder : MLModel <MLModelSpecificationLoader, MLModeling> {
    NSOrderedSet * _featureEncoding;
    bool  _handleUnknown;
    bool  _ouputSparse;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSOrderedSet *featureEncoding;
@property (nonatomic, readonly) bool handleUnknown;
@property (readonly) unsigned long long hash;
@property (readonly) MLModelInterface *interface;
@property (readonly) MLModelMetadata *metadata;
@property (nonatomic, readonly) MLModelDescription *modelDescription;
@property (nonatomic, readonly) bool ouputSparse;
@property (readonly) Class superclass;

+ (id)featureEncoderFrom:(id)arg1 dataTransformerName:(id)arg2 ouputSparse:(bool)arg3 handleUnknown:(bool)arg4 inputDescription:(id)arg5 outputDescription:(id)arg6 orderedInputFeatureNames:(id)arg7 orderedOutputFeatureNames:(id)arg8;
+ (id)featureEncoderFrom:(id)arg1 inputDescription:(id)arg2 orderedInputFeatureNames:(id)arg3;
+ (id)featureEncoderFrom:(id)arg1 inputDescription:(id)arg2 outputDescription:(id)arg3 orderedInputFeatureNames:(id)arg4 orderedOutputFeatureNames:(id)arg5;
+ (id)loadModelFromSpecification:(struct _MLModelSpecification { struct shared_ptr<CoreML::Specification::Model> { struct Model {} *x_1_1_1; struct __shared_weak_count {} *x_1_1_2; } x1; }*)arg1 configuration:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (id)encodeFeatureValue:(id)arg1;
- (id)encodeFeatureValueIntString:(unsigned long long)arg1;
- (id)featureEncoding;
- (bool)handleUnknown;
- (id)initWith:(id)arg1 dataTransformerName:(id)arg2 ouputSparse:(bool)arg3 handleUnknown:(bool)arg4 inputDescription:(id)arg5 outputDescription:(id)arg6 orderedInputFeatureNames:(id)arg7 orderedOutputFeatureNames:(id)arg8 configuration:(id)arg9;
- (bool)ouputSparse;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)unknownDenseVector;

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