<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>TSWPTextHostRep.h</title>
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

/PrivateFrameworks/TSReading.framework/TSWPTextHostRep.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport (440)
 */

@interface TSWPTextHostRep : TSDRep <TSDContainerRep> {
    TSWPShapeRep * _editingRep;
    NSObject<TSKSearchReference> * _primaryFindResultSearchReference;
    NSArray * _searchReferences;
    bool  _useFindOverlayers;
}

@property (nonatomic, readonly) NSArray *childReps;
@property (nonatomic, readonly) NSObject<TSDContainerInfo> *containerInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<TSKSearchReference> *primaryFindResultSearchReference;
@property (nonatomic, retain) NSArray *searchReferences;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool useFindOverlayers;

- (void).cxx_destruct;
- (void)addAdditionalChildLayersToArray:(id)arg1;
- (bool)canSelectChildRep:(id)arg1;
- (id)childReps;
- (id)containerInfo;
- (void)dealloc;
- (void)drawTextBackground:(struct CGContext { }*)arg1 insetRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 pulsating:(bool)arg3;
- (void)drawTextBackground:(struct CGContext { }*)arg1 insetRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 pulsating:(bool)arg3 shouldTint:(bool)arg4;
- (void)finishInit;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;
- (id)primaryFindResultSearchReference;
- (void)recursivelyPerformSelector:(SEL)arg1;
- (void)recursivelyPerformSelector:(SEL)arg1 withObject:(id)arg2;
- (void)recursivelyPerformSelectorIfImplemented:(SEL)arg1;
- (void)recursivelyPerformSelectorIfImplemented:(SEL)arg1 withObject:(id)arg2;
- (id)searchReferences;
- (void)selectChildRep:(id)arg1 extendingSelection:(bool)arg2;
- (void)setPrimaryFindResultSearchReference:(id)arg1;
- (void)setPulseControllerActive:(bool)arg1 autohide:(bool)arg2;
- (void)setSearchReferences:(id)arg1;
- (void)updateChildrenFromLayout;
- (bool)useFindOverlayers;
- (void)willBeRemoved;

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