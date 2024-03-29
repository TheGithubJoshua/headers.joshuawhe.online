<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PVSceneTaxonomyNode.h</title>
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

/PrivateFrameworks/PhotoVision.framework/PVSceneTaxonomyNode.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/PhotoVision.framework/PhotoVision (3462.12.130)
 */

@interface PVSceneTaxonomyNode : NSObject {
    NSMutableSet * _childNodes;
    double  _highPrecisionThreshold;
    double  _highRecallThreshold;
    bool  _indexed;
    NSString * _name;
    NSMutableSet * _parentNodes;
    unsigned int  _sceneClassId;
    PVSceneTaxonomy * _taxonomy;
    double  _threshold;
}

@property (retain) NSMutableSet *childNodes;
@property (readonly, copy) NSSet *children;
@property (readonly) double highPrecisionThreshold;
@property (readonly) double highRecallThreshold;
@property (getter=isIndexed, readonly) bool indexed;
@property (readonly, copy) NSString *name;
@property (retain) NSMutableSet *parentNodes;
@property (readonly, copy) NSSet *parents;
@property (getter=isRoot, readonly) bool root;
@property (readonly) unsigned int sceneClassId;
@property (readonly) PVSceneTaxonomy *taxonomy;
@property (readonly) double threshold;

+ (id)localizedStringForKey:(id)arg1 localizationBundle:(id)arg2 tableName:(id)arg3;

- (void).cxx_destruct;
- (void)addChildNode:(id)arg1;
- (id)childNodes;
- (id)children;
- (id)description;
- (unsigned long long)hash;
- (double)highPrecisionThreshold;
- (double)highRecallThreshold;
- (id)initWithSceneClassId:(unsigned int)arg1 name:(id)arg2 indexed:(bool)arg3 threshold:(double)arg4 highRecallThreshold:(double)arg5 highPrecisionThreshold:(double)arg6 taxonomy:(id)arg7;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToNode:(id)arg1;
- (bool)isIndexed;
- (bool)isRoot;
- (id)localizedLabel;
- (id)localizedSynonyms;
- (id)name;
- (id)parentNodes;
- (id)parents;
- (void)recursivelyReleaseParents;
- (unsigned int)sceneClassId;
- (void)setChildNodes:(id)arg1;
- (void)setParentNodes:(id)arg1;
- (id)taxonomy;
- (double)threshold;
- (void)traverse:(long long)arg1 visitor:(id /* block */)arg2;

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
