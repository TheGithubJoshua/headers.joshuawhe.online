<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>VMUObjectGraph.h</title>
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

/PrivateFrameworks/Symbolication.framework/VMUObjectGraph.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication (64492.3)
 */

@interface VMUObjectGraph : VMUDirectedGraph {
    id * _classInfos;
    unsigned int  _classInfosCount;
    unsigned int  _internalizedCount;
    struct _VMUBlockNode { unsigned long long x1; unsigned int x2 : 3; unsigned int x3 : 2; unsigned int x4 : 36; unsigned int x5 : 23; } * _internalizedNodes;
    VMUClassInfoMap * _knownClassInfos;
    id /* block */  _nodeProvider;
    VMUObjectGraph * _referenceGraph;
    unsigned int  _referenceGraphEdgeNamespaceSize;
    unsigned int  _referenceGraphNodeNamespaceSize;
    struct _VMUObjectGraphEdge { union { struct { unsigned int x_1_2_1 : 24; unsigned int x_1_2_2 : 2; unsigned int x_1_2_3 : 5; unsigned int x_1_2_4 : 1; } x_1_1_1; struct { unsigned int x_2_2_1 : 31; unsigned int x_2_2_2 : 1; } x_1_1_2; } x1; } * _referenceTable;
    unsigned int  _referenceTableCapacity;
    struct _VMUObjectGraphEdgeLarge { unsigned int x1 : 56; unsigned int x2 : 8; unsigned int x3 : 56; unsigned int x4 : 8; } * _referenceTableLarge;
    unsigned int  _referenceTableLargeCapacity;
    unsigned int  _referenceTableLargeCount;
    int  _referencingCount;
}

@property (nonatomic, retain) VMUClassInfoMap *indexedClassInfos;

- (void).cxx_destruct;
- (void*)_compareWithGraph:(id)arg1 andMarkOnMatch:(bool)arg2;
- (void)_modifyDerivativeGraphCount:(int)arg1;
- (struct { unsigned long long x1; unsigned int x2; unsigned long long x3; })_rawReferenceInfoWithName:(unsigned int)arg1;
- (void)_refineTypesWithOverlay:(id)arg1;
- (void)_renameWithNodeMap:(unsigned int*)arg1 nodeNamespace:(unsigned int)arg2 edgeMap:(unsigned int*)arg3 edgeNamespace:(unsigned int)arg4;
- (unsigned int)addEdgeFromNode:(unsigned int)arg1 sourceOffset:(unsigned long long)arg2 withScanType:(unsigned int)arg3 toNode:(unsigned int)arg4 destinationOffset:(unsigned long long)arg5;
- (unsigned int)addEdgeFromNode:(unsigned int)arg1 toNode:(unsigned int)arg2;
- (void)archiveDictionaryRepresentation:(id)arg1 options:(unsigned long long)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void*)createMapForIntersectGraph:(id)arg1;
- (void*)createMapForMinusGraph:(id)arg1;
- (void)dealloc;
- (unsigned int)enumerateMarkedObjects:(void*)arg1 withBlock:(id /* block */)arg2;
- (unsigned int)enumerateObjectsContainedInCollection:(unsigned int)arg1 withBlock:(id /* block */)arg2;
- (unsigned int)enumerateObjectsOfGroupNode:(unsigned int)arg1 withBlock:(id /* block */)arg2;
- (unsigned int)enumerateObjectsWithBlock:(id /* block */)arg1;
- (unsigned int)enumerateReferencesOfNode:(unsigned int)arg1 withBlock:(id /* block */)arg2;
- (unsigned int)enumerateReferencesWithBlock:(id /* block */)arg1;
- (id)indexedClassInfos;
- (id)initWithArchived:(id)arg1 version:(long long)arg2 options:(unsigned long long)arg3;
- (id)initWithNodeCount:(unsigned int)arg1 nodeProvider:(id /* block */)arg2;
- (id)initWithNodesNoCopy:(struct _VMUBlockNode { unsigned long long x1; unsigned int x2 : 3; unsigned int x3 : 2; unsigned int x4 : 36; unsigned int x5 : 23; }*)arg1 nodeCount:(unsigned int)arg2;
- (void)internalizeNodes;
- (struct { unsigned long long x1; unsigned int x2 : 60; unsigned int x3 : 4; id x4; })nodeDetails:(unsigned int)arg1;
- (unsigned int)nodeForAddress:(unsigned long long)arg1;
- (unsigned int)nodeReferencedFromSourceNode:(unsigned int)arg1 byIvarWithName:(id)arg2;
- (struct { unsigned long long x1; unsigned int x2; unsigned long long x3; })referenceInfoWithName:(unsigned int)arg1;
- (unsigned int)scanTypeOfReferenceWithName:(unsigned int)arg1;
- (void)setIndexedClassInfos:(id)arg1;
- (void)stronglyConnectedComponentSearch:(unsigned int)arg1 withRecorder:(id /* block */)arg2;
- (id)subgraphWithShortestPathsFromNode:(unsigned int)arg1 toNodes:(void*)arg2;
- (id)subgraphWithUniquePathsFromNode:(unsigned int)arg1 toNodes:(void*)arg2;

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
