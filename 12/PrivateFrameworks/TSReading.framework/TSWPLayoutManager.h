<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>TSWPLayoutManager.h</title>
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

/PrivateFrameworks/TSReading.framework/TSWPLayoutManager.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport (440)
 */

@interface TSWPLayoutManager : NSObject <TSKChangeSourceObserver, TSWPStorageObserver> {
    TSWPMutableDirtyRangeArray * _dirtyRanges;
    TSWPMutableTopicNumberHints * _initialTopicNumbers;
    bool  _isObservingStorage;
    bool  _layoutFinished;
    <TSWPLayoutOwner> * _owner;
    bool  _shouldClearTypesetterCache;
    TSWPStorage * _storage;
    TSWPCTTypesetterCache * _typesetterCache;
    bool  _useLigatures;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) TSWPDirtyRangeArray *dirtyRanges;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSObject<TSWPTopicNumberHints> *initialTopicNumberHints;
@property (nonatomic, readonly) bool layoutFinished;
@property (nonatomic, readonly) <TSWPLayoutOwner> *owner;
@property (nonatomic, readonly) TSWPStorage *storage;
@property (readonly) Class superclass;
@property (nonatomic, readonly) TSWPCTTypesetterCache *typesetterCache;

+ (void)fixColumnBoundsForTarget:(id)arg1 storage:(id)arg2 charIndex:(unsigned long long)arg3 firstColumnIndex:(unsigned long long)arg4 precedingHeight:(double)arg5 height:(double)arg6 alreadyHasMargins:(bool)arg7 styleProvider:(id)arg8;
+ (void)setTransformForColumn:(id)arg1 andInvalidateWPRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 inTarget:(id)arg3;
+ (void)setTransformForColumn:(id)arg1 inTarget:(id)arg2 metrics:(id)arg3;

- (void).cxx_destruct;
- (void)clearOwner;
- (void)clearTypesetterCache;
- (void)dealloc;
- (void)deflateTarget:(id)arg1 intoHints:(inout id)arg2 childHints:(inout id)arg3 anchoredDrawablePositions:(id*)arg4 startingPartitionedAttachments:(out id*)arg5 topicNumbers:(out id*)arg6 layoutState:(void*)arg7;
- (void)destroyLayoutState:(void*)arg1;
- (id)dirtyRanges;
- (void)inflateTarget:(id)arg1 fromHints:(id)arg2 childHint:(id)arg3 anchoredDrawablePositions:(id)arg4 topicNumbers:(id)arg5;
- (id)initWithStorage:(id)arg1 owner:(id)arg2;
- (id)initialTopicNumberHints;
- (bool)layoutFinished;
- (void*)layoutIntoTarget:(id)arg1 withLayoutState:(void*)arg2 outSync:(bool*)arg3;
- (id)layoutMetricsCache;
- (void*)layoutStateForLayoutAfterHint:(id)arg1 childHint:(id)arg2 topicNumbers:(id)arg3;
- (void*)layoutStateForLayoutWithHint:(id)arg1 topicNumbers:(id)arg2;
- (bool)needsLayoutInColumn:(id)arg1;
- (id)owner;
- (unsigned long long)p_layoutConfigFlagsForTarget:(id)arg1;
- (void)removeDirtyRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)resetDirtyRange;
- (void)setInitialTopicNumberHints:(id)arg1;
- (id)storage;
- (void)storage:(id)arg1 didChangeRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 delta:(long long)arg3 broadcastKind:(int)arg4;
- (id)styleProvider;
- (id)typesetterCache;
- (void)willRemoveAttachmentLayout:(id)arg1;

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
