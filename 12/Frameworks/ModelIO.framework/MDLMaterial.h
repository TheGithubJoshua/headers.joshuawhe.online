<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>MDLMaterial.h</title>
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

/Frameworks/ModelIO.framework/MDLMaterial.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/ModelIO.framework/ModelIO (1)
 */

@interface MDLMaterial : NSObject <MDLNamed, NSFastEnumeration> {
    MDLMaterial * _baseMaterial;
    NSMutableArray * _builtinProperties;
    unsigned long long  _materialFace;
    NSString * _name;
    MDLScatteringFunction * _scatteringFunction;
    NSMutableArray * _userProperties;
}

@property (nonatomic, retain) MDLMaterial *baseMaterial;
@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic) unsigned long long materialFace;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly, retain) MDLScatteringFunction *scatteringFunction;

// Image: /System/Library/Frameworks/ModelIO.framework/ModelIO

- (void).cxx_destruct;
- (id)baseMaterial;
- (struct BidirectionalScatteringDistributionFunction { int (**x1)(); struct BSDFMaterialValues { struct CGColor {} *x_2_1_1; float x_2_1_2; struct CGColor {} *x_2_1_3; float x_2_1_4; float x_2_1_5; float x_2_1_6; float x_2_1_7; float x_2_1_8; float x_2_1_9; float x_2_1_10; float x_2_1_11; float x_2_1_12; float x_2_1_13; float x_2_1_14; float x_2_1_15; float x_2_1_16; } x2; }*)bsdf;
- (void)conformToMatProperties;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (id)init;
- (id)initWithName:(id)arg1 physicallyPlausibleBSDF:(struct PhysicallyPlausibleDistribution { int (**x1)(); struct BSDFMaterialValues { struct CGColor {} *x_2_1_1; float x_2_1_2; struct CGColor {} *x_2_1_3; float x_2_1_4; float x_2_1_5; float x_2_1_6; float x_2_1_7; float x_2_1_8; float x_2_1_9; float x_2_1_10; float x_2_1_11; float x_2_1_12; float x_2_1_13; float x_2_1_14; float x_2_1_15; float x_2_1_16; } x2; }*)arg2;
- (id)initWithName:(id)arg1 scatteringFunction:(id)arg2;
- (void)loadTexturesUsingArchiveAssetResolver:(id)arg1 cache:(id)arg2;
- (void)loadTexturesUsingResolver:(id)arg1;
- (void)loadTexturesUsingResolver:(id)arg1 cache:(id)arg2;
- (unsigned long long)materialFace;
- (id)name;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)propertiesWithSemantic:(unsigned long long)arg1;
- (id)propertyNamed:(id)arg1;
- (id)propertyWithSemantic:(unsigned long long)arg1;
- (void)removeAllProperties;
- (void)removeProperty:(id)arg1;
- (void)resolveTexturesWithResolver:(id)arg1;
- (id)scatteringFunction;
- (void)setBaseMaterial:(id)arg1;
- (void)setMaterialFace:(unsigned long long)arg1;
- (void)setName:(id)arg1;
- (void)setProperty:(id)arg1;
- (void)setScatteringFunction:(id)arg1;

// Image: /System/Library/Frameworks/SceneKit.framework/SceneKit

+ (id)materialWithSCNMaterial:(id)arg1;

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
