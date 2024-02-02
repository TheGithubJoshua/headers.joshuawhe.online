<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PKDrawing.h</title>
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

/PrivateFrameworks/PencilKit.framework/PKDrawing.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit (1)
 */

@interface PKDrawing : NSObject <CHQueryDelegate, NSCopying> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _bounds;
    struct _PKStrokeID { 
        unsigned int clock; 
        unsigned char replicaUUID[16]; 
        unsigned int subclock; 
    }  _boundsVersion;
    NSArray * _forcedRecognitionLocales;
    NSMapTable * _ongoingQueries;
    long long  _orientation;
    struct _PKStrokeID { 
        unsigned int clock; 
        unsigned char replicaUUID[16]; 
        unsigned int subclock; 
    }  _orientationVersion;
    bool  _recognitionEnabled;
    CHRecognitionSession * _recognitionSession;
    NSUUID * _replicaUUID;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _strokeBounds;
    NSMutableOrderedSet * _strokes;
    NSUUID * _uuid;
    PKVectorTimestamp * _version;
    NSMutableArray * _visibleStrokes;
    PKVisualizationManager * _visualizationManager;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (nonatomic) struct _PKStrokeID { unsigned int x1; unsigned char x2[16]; unsigned int x3; } boundsVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long imageOrientation;
@property (nonatomic, retain) NSMapTable *ongoingQueries;
@property (nonatomic) long long orientation;
@property (nonatomic) struct _PKStrokeID { unsigned int x1; unsigned char x2[16]; unsigned int x3; } orientationVersion;
@property (nonatomic, retain) CHRecognitionSession *recognitionSession;
@property (nonatomic, readonly) NSUUID *replicaUUID;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } strokeBounds;
@property (nonatomic, readonly) NSOrderedSet *strokes;
@property (readonly) Class superclass;
@property (setter=_setUUID:, nonatomic, retain) NSUUID *uuid;
@property (nonatomic, retain) PKVectorTimestamp *version;
@property (nonatomic, readonly) NSMutableArray *visibleStrokes;
@property (nonatomic, retain) PKVisualizationManager *visualizationManager;

+ (id)_drawingWithUnzippedData:(id)arg1;
+ (id)_enabledLocales;
+ (struct CGSize { double x1; double x2; })defaultPixelSize;
+ (struct CGSize { double x1; double x2; })defaultSize;
+ (id)drawingWithData:(id)arg1;
+ (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })orientationTransform:(long long)arg1 size:(struct CGSize { double x1; double x2; })arg2;
+ (void)sortStrokes:(id)arg1;

- (void).cxx_destruct;
- (id)CHDrawing;
- (id)_ascii;
- (bool*)_newAsciiBitfield;
- (void)_setUUID:(id)arg1;
- (void)_teardownRecognitionObjects;
- (void)_updateRecognitionSession;
- (id)addNewGeneratedStroke:(id)arg1;
- (void)addNewStroke:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (struct _PKStrokeID { unsigned int x1; unsigned char x2[16]; unsigned int x3; })boundsVersion;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })calculateStrokeBounds;
- (void)cancelOngoingRecognitionRequests;
- (id)copyAndAddStroke:(id)arg1 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataRepresentationForStrokeIdentifier:(id)arg1;
- (id)dataRepresentationForStrokeProviderVersion:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)didMergeWithDrawing:(id)arg1;
- (id)forcedRecognitionLocales;
- (unsigned long long)hash;
- (long long)imageOrientation;
- (id)indexableContent;
- (id)init;
- (id)initWithArchive:(const struct Drawing { int (**x1)(); struct unique_ptr<drawing::Rectangle, std::__1::default_delete<drawing::Rectangle> > { struct __compressed_pair<drawing::Rectangle *, std::__1::default_delete<drawing::Rectangle> > { struct Rectangle {} *x_1_2_1; } x_2_1_1; } x2; struct unique_ptr<drawing::StrokeID, std::__1::default_delete<drawing::StrokeID> > { struct __compressed_pair<drawing::StrokeID *, std::__1::default_delete<drawing::StrokeID> > { struct StrokeID {} *x_1_2_1; } x_3_1_1; } x3; struct PtrVector<drawing::Ink> { struct vector<std::__1::unique_ptr<drawing::Ink, std::__1::default_delete<drawing::Ink> >, std::__1::allocator<std::__1::unique_ptr<drawing::Ink, std::__1::default_delete<drawing::Ink> > > > { struct unique_ptr<drawing::Ink, std::__1::default_delete<drawing::Ink> > {} *x_1_2_1; struct unique_ptr<drawing::Ink, std::__1::default_delete<drawing::Ink> > {} *x_1_2_2; struct __compressed_pair<std::__1::unique_ptr<drawing::Ink, std::__1::default_delete<drawing::Ink> > *, std::__1::allocator<std::__1::unique_ptr<drawing::Ink, std::__1::default_delete<drawing::Ink> > > > { struct unique_ptr<drawing::Ink, std::__1::default_delete<drawing::Ink> > {} *x_3_3_1; } x_1_2_3; } x_4_1_1; } x4; }*)arg1 version:(unsigned int)arg2;
- (id)initWithData:(id)arg1 andReplicaID:(id)arg2;
- (id)initWithData:(id)arg1 version:(unsigned int)arg2;
- (id)initWithDrawing:(id)arg1;
- (id)initWithLegacyArchive:(const struct Drawing { int (**x1)(); struct PtrVector<legacy_drawing::Command> { struct vector<std::__1::unique_ptr<legacy_drawing::Command, std::__1::default_delete<legacy_drawing::Command> >, std::__1::allocator<std::__1::unique_ptr<legacy_drawing::Command, std::__1::default_delete<legacy_drawing::Command> > > > { struct unique_ptr<legacy_drawing::Command, std::__1::default_delete<legacy_drawing::Command> > {} *x_1_2_1; struct unique_ptr<legacy_drawing::Command, std::__1::default_delete<legacy_drawing::Command> > {} *x_1_2_2; struct __compressed_pair<std::__1::unique_ptr<legacy_drawing::Command, std::__1::default_delete<legacy_drawing::Command> > *, std::__1::allocator<std::__1::unique_ptr<legacy_drawing::Command, std::__1::default_delete<legacy_drawing::Command> > > > { struct unique_ptr<legacy_drawing::Command, std::__1::default_delete<legacy_drawing::Command> > {} *x_3_3_1; } x_1_2_3; } x_2_1_1; } x2; double x3; struct unique_ptr<legacy_drawing::VectorTimestamp, std::__1::default_delete<legacy_drawing::VectorTimestamp> > { struct __compressed_pair<legacy_drawing::VectorTimestamp *, std::__1::default_delete<legacy_drawing::VectorTimestamp> > { struct VectorTimestamp {} *x_1_2_1; } x_4_1_1; } x4; }*)arg1 version:(unsigned int)arg2;
- (id)initWithLegacyData:(id)arg1 version:(unsigned int)arg2;
- (id)initWithStrokes:(id)arg1 fromDrawing:(id)arg2;
- (id)insertNewTestStroke;
- (void)invalidateStrokeBounds;
- (bool)isEqual:(id)arg1;
- (unsigned long long)mergeWithDrawing:(id)arg1;
- (id)mutableStrokes;
- (struct _PKStrokeID { unsigned int x1; unsigned char x2[16]; unsigned int x3; })newStrokeIDGreaterThan:(struct _PKStrokeID { unsigned int x1; unsigned char x2[16]; unsigned int x3; })arg1;
- (id)ongoingQueries;
- (long long)orientation;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })orientationTransform;
- (struct _PKStrokeID { unsigned int x1; unsigned char x2[16]; unsigned int x3; })orientationVersion;
- (void)performSearchQuery:(id)arg1 withBlock:(id /* block */)arg2;
- (void)queryDidUpdateResult:(id)arg1;
- (bool)recognitionEnabled;
- (id)recognitionSession;
- (id)replicaUUID;
- (unsigned int)saveToArchive:(struct Drawing { int (**x1)(); struct unique_ptr<drawing::Rectangle, std::__1::default_delete<drawing::Rectangle> > { struct __compressed_pair<drawing::Rectangle *, std::__1::default_delete<drawing::Rectangle> > { struct Rectangle {} *x_1_2_1; } x_2_1_1; } x2; struct unique_ptr<drawing::StrokeID, std::__1::default_delete<drawing::StrokeID> > { struct __compressed_pair<drawing::StrokeID *, std::__1::default_delete<drawing::StrokeID> > { struct StrokeID {} *x_1_2_1; } x_3_1_1; } x3; struct PtrVector<drawing::Ink> { struct vector<std::__1::unique_ptr<drawing::Ink, std::__1::default_delete<drawing::Ink> >, std::__1::allocator<std::__1::unique_ptr<drawing::Ink, std::__1::default_delete<drawing::Ink> > > > { struct unique_ptr<drawing::Ink, std::__1::default_delete<drawing::Ink> > {} *x_1_2_1; struct unique_ptr<drawing::Ink, std::__1::default_delete<drawing::Ink> > {} *x_1_2_2; struct __compressed_pair<std::__1::unique_ptr<drawing::Ink, std::__1::default_delete<drawing::Ink> > *, std::__1::allocator<std::__1::unique_ptr<drawing::Ink, std::__1::default_delete<drawing::Ink> > > > { struct unique_ptr<drawing::Ink, std::__1::default_delete<drawing::Ink> > {} *x_3_3_1; } x_1_2_3; } x_4_1_1; } x4; }*)arg1 withPathData:(bool)arg2;
- (id)serialize;
- (id)serializeTransiently;
- (id)serializeWithPathData:(bool)arg1;
- (id)serializeWithPathData:(bool)arg1 toVersion:(unsigned int*)arg2;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setBoundsVersion:(struct _PKStrokeID { unsigned int x1; unsigned char x2[16]; unsigned int x3; })arg1;
- (void)setForcedRecognitionLocales:(id)arg1;
- (void)setNeedsRecognitionUpdate;
- (void)setOngoingQueries:(id)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setOrientationVersion:(struct _PKStrokeID { unsigned int x1; unsigned char x2[16]; unsigned int x3; })arg1;
- (void)setRecognitionEnabled:(bool)arg1;
- (void)setRecognitionSession:(id)arg1;
- (id)setStroke:(id)arg1 applyTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2;
- (id)setStroke:(id)arg1 hidden:(bool)arg2;
- (id)setStroke:(id)arg1 hidden:(bool)arg2 ink:(id)arg3;
- (id)setStroke:(id)arg1 hidden:(bool)arg2 ink:(id)arg3 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg4;
- (id)setStroke:(id)arg1 hidden:(bool)arg2 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3;
- (void)setStrokeIDForInsertion:(id)arg1;
- (void)setVersion:(id)arg1;
- (void)setVisualizationManager:(id)arg1;
- (void)sortStrokes;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })strokeBounds;
- (id)strokeForIdentifier:(id)arg1;
- (struct _PKStrokeID { unsigned int x1; unsigned char x2[16]; unsigned int x3; })strokeIDForNewStroke;
- (id)strokeIdentifierFromData:(id)arg1;
- (id)strokeProviderSnapshot;
- (id)strokeProviderVersionFromData:(id)arg1;
- (struct _PKStrokeID { unsigned int x1; unsigned char x2[16]; unsigned int x3; })strokeVersionForUpdatedStroke:(id)arg1;
- (id)strokes;
- (id)strokesIntersectedByPoint:(struct CGPoint { double x1; double x2; })arg1 prevPoint:(struct CGPoint { double x1; double x2; })arg2 minThreshold:(double)arg3 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg4 onscreenVisibleStrokes:(id)arg5;
- (id)strokesIntersectedByPoint:(struct CGPoint { double x1; double x2; })arg1 prevPoint:(struct CGPoint { double x1; double x2; })arg2 onscreenVisibleStrokes:(id)arg3;
- (void)takeOrientationFrom:(id)arg1;
- (id)uuid;
- (id)version;
- (id)visibleStrokeForInsertingStroke:(id)arg1;
- (id)visibleStrokeForInsertingStroke:(id)arg1 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2;
- (id)visibleStrokes;
- (id)visualizationManager;
- (void)willMergeWithDrawing:(id)arg1;

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