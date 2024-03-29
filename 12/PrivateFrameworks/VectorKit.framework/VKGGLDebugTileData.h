<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>VKGGLDebugTileData.h</title>
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

/PrivateFrameworks/VectorKit.framework/VKGGLDebugTileData.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit (1360.35.12.18.4)
 */

@interface VKGGLDebugTileData : NSObject {
    unsigned long long  _coastLineCount;
    struct unique_ptr<ggl::Debug::BaseMesh, std::__1::default_delete<ggl::Debug::BaseMesh> > { 
        struct __compressed_pair<ggl::Debug::BaseMesh *, std::__1::default_delete<ggl::Debug::BaseMesh> > { 
            struct BaseMesh {} *__value_; 
        } __ptr_; 
    }  _coastLineMesh;
    unsigned long long  _coastLineVertCount;
    unsigned long long  _junctionCount;
    struct unique_ptr<ggl::DebugPoints::BaseMesh, std::__1::default_delete<ggl::DebugPoints::BaseMesh> > { 
        struct __compressed_pair<ggl::DebugPoints::BaseMesh *, std::__1::default_delete<ggl::DebugPoints::BaseMesh> > { 
            struct BaseMesh {} *__value_; 
        } __ptr_; 
    }  _junctionsPointsMesh;
    unsigned long long  _namedLineCount;
    struct unique_ptr<ggl::Debug::BaseMesh, std::__1::default_delete<ggl::Debug::BaseMesh> > { 
        struct __compressed_pair<ggl::Debug::BaseMesh *, std::__1::default_delete<ggl::Debug::BaseMesh> > { 
            struct BaseMesh {} *__value_; 
        } __ptr_; 
    }  _namedLineMesh;
    unsigned long long  _namedLineVertCount;
    unsigned long long  _overpassCount;
    struct unique_ptr<ggl::DebugPoints::BaseMesh, std::__1::default_delete<ggl::DebugPoints::BaseMesh> > { 
        struct __compressed_pair<ggl::DebugPoints::BaseMesh *, std::__1::default_delete<ggl::DebugPoints::BaseMesh> > { 
            struct BaseMesh {} *__value_; 
        } __ptr_; 
    }  _overpassPointsMesh;
    unsigned long long  _poiCount;
    struct unique_ptr<ggl::DebugPoints::BaseMesh, std::__1::default_delete<ggl::DebugPoints::BaseMesh> > { 
        struct __compressed_pair<ggl::DebugPoints::BaseMesh *, std::__1::default_delete<ggl::DebugPoints::BaseMesh> > { 
            struct BaseMesh {} *__value_; 
        } __ptr_; 
    }  _poiPointsMesh;
    unsigned long long  _polygonCount;
    struct unique_ptr<ggl::Debug::BaseMesh, std::__1::default_delete<ggl::Debug::BaseMesh> > { 
        struct __compressed_pair<ggl::Debug::BaseMesh *, std::__1::default_delete<ggl::Debug::BaseMesh> > { 
            struct BaseMesh {} *__value_; 
        } __ptr_; 
    }  _polygonLineMesh;
    unsigned long long  _polygonVertCount;
    struct unique_ptr<ggl::DebugPoints::BaseMesh, std::__1::default_delete<ggl::DebugPoints::BaseMesh> > { 
        struct __compressed_pair<ggl::DebugPoints::BaseMesh *, std::__1::default_delete<ggl::DebugPoints::BaseMesh> > { 
            struct BaseMesh {} *__value_; 
        } __ptr_; 
    }  _realTransitNodesMesh;
    unsigned long long  _unnamedLineCount;
    struct unique_ptr<ggl::Debug::BaseMesh, std::__1::default_delete<ggl::Debug::BaseMesh> > { 
        struct __compressed_pair<ggl::Debug::BaseMesh *, std::__1::default_delete<ggl::Debug::BaseMesh> > { 
            struct BaseMesh {} *__value_; 
        } __ptr_; 
    }  _unnamedLineMesh;
    unsigned long long  _unnamedLineVertCount;
    struct unique_ptr<ggl::Debug::BaseMesh, std::__1::default_delete<ggl::Debug::BaseMesh> > { 
        struct __compressed_pair<ggl::Debug::BaseMesh *, std::__1::default_delete<ggl::Debug::BaseMesh> > { 
            struct BaseMesh {} *__value_; 
        } __ptr_; 
    }  _venueBuildingOutlineMesh;
    struct unique_ptr<ggl::Debug::BaseMesh, std::__1::default_delete<ggl::Debug::BaseMesh> > { 
        struct __compressed_pair<ggl::Debug::BaseMesh *, std::__1::default_delete<ggl::Debug::BaseMesh> > { 
            struct BaseMesh {} *__value_; 
        } __ptr_; 
    }  _venueOutlineMesh;
    unsigned long long  _venueOutlinesCount;
    unsigned long long  _vertexCount;
    struct unique_ptr<ggl::DebugPoints::BaseMesh, std::__1::default_delete<ggl::DebugPoints::BaseMesh> > { 
        struct __compressed_pair<ggl::DebugPoints::BaseMesh *, std::__1::default_delete<ggl::DebugPoints::BaseMesh> > { 
            struct BaseMesh {} *__value_; 
        } __ptr_; 
    }  _verticesPointsMesh;
}

@property (nonatomic, readonly) unsigned long long coastLineCount;
@property (nonatomic, readonly) struct BaseMesh { int (**x1)(); char *x2; int (**x3)(); struct ResourceManager {} *x4; struct RenderResource {} *x5; struct MeshCReflection {} *x6; /* Warning: unhandled struct encoding: '{vector<std::__1::shared_ptr<ggl::VertexData>' */ struct x7; }*coastLineMesh; /* unknown property attribute:  ggl::Allocator>=^{Allocator}}}}{shared_ptr<ggl::IndexData>=^{IndexData}^{__shared_weak_count}}} */
@property (nonatomic, readonly) unsigned long long coastLineVertCount;
@property (nonatomic, readonly) unsigned long long junctionCount;
@property (nonatomic, readonly) struct BaseMesh { int (**x1)(); char *x2; int (**x3)(); struct ResourceManager {} *x4; struct RenderResource {} *x5; struct MeshCReflection {} *x6; /* Warning: unhandled struct encoding: '{vector<std::__1::shared_ptr<ggl::VertexData>' */ struct x7; }*junctionsPointsMesh; /* unknown property attribute:  ggl::Allocator>=^{Allocator}}}}{shared_ptr<ggl::IndexData>=^{IndexData}^{__shared_weak_count}}} */
@property (nonatomic, readonly) unsigned long long namedLineCount;
@property (nonatomic, readonly) struct BaseMesh { int (**x1)(); char *x2; int (**x3)(); struct ResourceManager {} *x4; struct RenderResource {} *x5; struct MeshCReflection {} *x6; /* Warning: unhandled struct encoding: '{vector<std::__1::shared_ptr<ggl::VertexData>' */ struct x7; }*namedLineMesh; /* unknown property attribute:  ggl::Allocator>=^{Allocator}}}}{shared_ptr<ggl::IndexData>=^{IndexData}^{__shared_weak_count}}} */
@property (nonatomic, readonly) unsigned long long namedLineVertCount;
@property (nonatomic, readonly) unsigned long long overpassCount;
@property (nonatomic, readonly) struct BaseMesh { int (**x1)(); char *x2; int (**x3)(); struct ResourceManager {} *x4; struct RenderResource {} *x5; struct MeshCReflection {} *x6; /* Warning: unhandled struct encoding: '{vector<std::__1::shared_ptr<ggl::VertexData>' */ struct x7; }*overpassPointsMesh; /* unknown property attribute:  ggl::Allocator>=^{Allocator}}}}{shared_ptr<ggl::IndexData>=^{IndexData}^{__shared_weak_count}}} */
@property (nonatomic, readonly) unsigned long long poiCount;
@property (nonatomic, readonly) struct BaseMesh { int (**x1)(); char *x2; int (**x3)(); struct ResourceManager {} *x4; struct RenderResource {} *x5; struct MeshCReflection {} *x6; /* Warning: unhandled struct encoding: '{vector<std::__1::shared_ptr<ggl::VertexData>' */ struct x7; }*poiPointsMesh; /* unknown property attribute:  ggl::Allocator>=^{Allocator}}}}{shared_ptr<ggl::IndexData>=^{IndexData}^{__shared_weak_count}}} */
@property (nonatomic, readonly) unsigned long long polygonCount;
@property (nonatomic, readonly) struct BaseMesh { int (**x1)(); char *x2; int (**x3)(); struct ResourceManager {} *x4; struct RenderResource {} *x5; struct MeshCReflection {} *x6; /* Warning: unhandled struct encoding: '{vector<std::__1::shared_ptr<ggl::VertexData>' */ struct x7; }*polygonLineMesh; /* unknown property attribute:  ggl::Allocator>=^{Allocator}}}}{shared_ptr<ggl::IndexData>=^{IndexData}^{__shared_weak_count}}} */
@property (nonatomic, readonly) unsigned long long polygonVertCount;
@property (nonatomic, readonly) struct BaseMesh { int (**x1)(); char *x2; int (**x3)(); struct ResourceManager {} *x4; struct RenderResource {} *x5; struct MeshCReflection {} *x6; /* Warning: unhandled struct encoding: '{vector<std::__1::shared_ptr<ggl::VertexData>' */ struct x7; }*realTransitNodesMesh; /* unknown property attribute:  ggl::Allocator>=^{Allocator}}}}{shared_ptr<ggl::IndexData>=^{IndexData}^{__shared_weak_count}}} */
@property (nonatomic, readonly) unsigned long long unnamedLineCount;
@property (nonatomic, readonly) struct BaseMesh { int (**x1)(); char *x2; int (**x3)(); struct ResourceManager {} *x4; struct RenderResource {} *x5; struct MeshCReflection {} *x6; /* Warning: unhandled struct encoding: '{vector<std::__1::shared_ptr<ggl::VertexData>' */ struct x7; }*unnamedLineMesh; /* unknown property attribute:  ggl::Allocator>=^{Allocator}}}}{shared_ptr<ggl::IndexData>=^{IndexData}^{__shared_weak_count}}} */
@property (nonatomic, readonly) unsigned long long unnamedLineVertCount;
@property (nonatomic, readonly) struct BaseMesh { int (**x1)(); char *x2; int (**x3)(); struct ResourceManager {} *x4; struct RenderResource {} *x5; struct MeshCReflection {} *x6; /* Warning: unhandled struct encoding: '{vector<std::__1::shared_ptr<ggl::VertexData>' */ struct x7; }*venueBuildingOutlineMesh; /* unknown property attribute:  ggl::Allocator>=^{Allocator}}}}{shared_ptr<ggl::IndexData>=^{IndexData}^{__shared_weak_count}}} */
@property (nonatomic, readonly) struct BaseMesh { int (**x1)(); char *x2; int (**x3)(); struct ResourceManager {} *x4; struct RenderResource {} *x5; struct MeshCReflection {} *x6; /* Warning: unhandled struct encoding: '{vector<std::__1::shared_ptr<ggl::VertexData>' */ struct x7; }*venueOutlineMesh; /* unknown property attribute:  ggl::Allocator>=^{Allocator}}}}{shared_ptr<ggl::IndexData>=^{IndexData}^{__shared_weak_count}}} */
@property (nonatomic, readonly) unsigned long long venueOutlinesCount;
@property (nonatomic, readonly) unsigned long long vertexCount;
@property (nonatomic, readonly) struct BaseMesh { int (**x1)(); char *x2; int (**x3)(); struct ResourceManager {} *x4; struct RenderResource {} *x5; struct MeshCReflection {} *x6; /* Warning: unhandled struct encoding: '{vector<std::__1::shared_ptr<ggl::VertexData>' */ struct x7; }*verticesPointsMesh; /* unknown property attribute:  ggl::Allocator>=^{Allocator}}}}{shared_ptr<ggl::IndexData>=^{IndexData}^{__shared_weak_count}}} */

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_fillInDebugData:(id)arg1;
- (unsigned long long)coastLineCount;
- (struct BaseMesh { int (**x1)(); char *x2; int (**x3)(); struct ResourceManager {} *x4; struct RenderResource {} *x5; struct MeshCReflection {} *x6; struct vector<std::__1::shared_ptr<ggl::VertexData>, geo::StdAllocator<std::__1::shared_ptr<ggl::VertexData>, ggl::Allocator> > { struct shared_ptr<ggl::VertexData> {} *x_7_1_1; struct shared_ptr<ggl::VertexData> {} *x_7_1_2; struct __compressed_pair<std::__1::shared_ptr<ggl::VertexData> *, geo::StdAllocator<std::__1::shared_ptr<ggl::VertexData>, ggl::Allocator> > { struct shared_ptr<ggl::VertexData> {} *x_3_2_1; struct StdAllocator<std::__1::shared_ptr<ggl::VertexData>, ggl::Allocator> { struct Allocator {} *x_2_3_1; } x_3_2_2; } x_7_1_3; } x7; struct shared_ptr<ggl::IndexData> { struct IndexData {} *x_8_1_1; struct __shared_weak_count {} *x_8_1_2; } x8; }*)coastLineMesh;
- (unsigned long long)coastLineVertCount;
- (id)initWithTile:(id)arg1;
- (unsigned long long)junctionCount;
- (struct BaseMesh { int (**x1)(); char *x2; int (**x3)(); struct ResourceManager {} *x4; struct RenderResource {} *x5; struct MeshCReflection {} *x6; struct vector<std::__1::shared_ptr<ggl::VertexData>, geo::StdAllocator<std::__1::shared_ptr<ggl::VertexData>, ggl::Allocator> > { struct shared_ptr<ggl::VertexData> {} *x_7_1_1; struct shared_ptr<ggl::VertexData> {} *x_7_1_2; struct __compressed_pair<std::__1::shared_ptr<ggl::VertexData> *, geo::StdAllocator<std::__1::shared_ptr<ggl::VertexData>, ggl::Allocator> > { struct shared_ptr<ggl::VertexData> {} *x_3_2_1; struct StdAllocator<std::__1::shared_ptr<ggl::VertexData>, ggl::Allocator> { struct Allocator {} *x_2_3_1; } x_3_2_2; } x_7_1_3; } x7; struct shared_ptr<ggl::IndexData> { struct IndexData {} *x_8_1_1; struct __shared_weak_count {} *x_8_1_2; } x8; }*)junctionsPointsMesh;
- (unsigned long long)namedLineCount;
- (struct BaseMesh { int (**x1)(); char *x2; int (**x3)(); struct ResourceManager {} *x4; struct RenderResource {} *x5; struct MeshCReflection {} *x6; struct vector<std::__1::shared_ptr<ggl::VertexData>, geo::StdAllocator<std::__1::shared_ptr<ggl::VertexData>, ggl::Allocator> > { struct shared_ptr<ggl::VertexData> {} *x_7_1_1; struct shared_ptr<ggl::VertexData> {} *x_7_1_2; struct __compressed_pair<std::__1::shared_ptr<ggl::VertexData> *, geo::StdAllocator<std::__1::shared_ptr<ggl::VertexData>, ggl::Allocator> > { struct shared_ptr<ggl::VertexData> {} *x_3_2_1; struct StdAllocator<std::__1::shared_ptr<ggl::VertexData>, ggl::Allocator> { struct Allocator {} *x_2_3_1; } x_3_2_2; } x_7_1_3; } x7; struct shared_ptr<ggl::IndexData> { struct IndexData {} *x_8_1_1; struct __shared_weak_count {} *x_8_1_2; } x8; }*)namedLineMesh;
- (unsigned long long)namedLineVertCount;
- (unsigned long long)overpassCount;
- (struct BaseMesh { int (**x1)(); char *x2; int (**x3)(); struct ResourceManager {} *x4; struct RenderResource {} *x5; struct MeshCReflection {} *x6; struct vector<std::__1::shared_ptr<ggl::VertexData>, geo::StdAllocator<std::__1::shared_ptr<ggl::VertexData>, ggl::Allocator> > { struct shared_ptr<ggl::VertexData> {} *x_7_1_1; struct shared_ptr<ggl::VertexData> {} *x_7_1_2; struct __compressed_pair<std::__1::shared_ptr<ggl::VertexData> *, geo::StdAllocator<std::__1::shared_ptr<ggl::VertexData>, ggl::Allocator> > { struct shared_ptr<ggl::VertexData> {} *x_3_2_1; struct StdAllocator<std::__1::shared_ptr<ggl::VertexData>, ggl::Allocator> { struct Allocator {} *x_2_3_1; } x_3_2_2; } x_7_1_3; } x7; struct shared_ptr<ggl::IndexData> { struct IndexData {} *x_8_1_1; struct __shared_weak_count {} *x_8_1_2; } x8; }*)overpassPointsMesh;
- (unsigned long long)poiCount;
- (struct BaseMesh { int (**x1)(); char *x2; int (**x3)(); struct ResourceManager {} *x4; struct RenderResource {} *x5; struct MeshCReflection {} *x6; struct vector<std::__1::shared_ptr<ggl::VertexData>, geo::StdAllocator<std::__1::shared_ptr<ggl::VertexData>, ggl::Allocator> > { struct shared_ptr<ggl::VertexData> {} *x_7_1_1; struct shared_ptr<ggl::VertexData> {} *x_7_1_2; struct __compressed_pair<std::__1::shared_ptr<ggl::VertexData> *, geo::StdAllocator<std::__1::shared_ptr<ggl::VertexData>, ggl::Allocator> > { struct shared_ptr<ggl::VertexData> {} *x_3_2_1; struct StdAllocator<std::__1::shared_ptr<ggl::VertexData>, ggl::Allocator> { struct Allocator {} *x_2_3_1; } x_3_2_2; } x_7_1_3; } x7; struct shared_ptr<ggl::IndexData> { struct IndexData {} *x_8_1_1; struct __shared_weak_count {} *x_8_1_2; } x8; }*)poiPointsMesh;
- (unsigned long long)polygonCount;
- (struct BaseMesh { int (**x1)(); char *x2; int (**x3)(); struct ResourceManager {} *x4; struct RenderResource {} *x5; struct MeshCReflection {} *x6; struct vector<std::__1::shared_ptr<ggl::VertexData>, geo::StdAllocator<std::__1::shared_ptr<ggl::VertexData>, ggl::Allocator> > { struct shared_ptr<ggl::VertexData> {} *x_7_1_1; struct shared_ptr<ggl::VertexData> {} *x_7_1_2; struct __compressed_pair<std::__1::shared_ptr<ggl::VertexData> *, geo::StdAllocator<std::__1::shared_ptr<ggl::VertexData>, ggl::Allocator> > { struct shared_ptr<ggl::VertexData> {} *x_3_2_1; struct StdAllocator<std::__1::shared_ptr<ggl::VertexData>, ggl::Allocator> { struct Allocator {} *x_2_3_1; } x_3_2_2; } x_7_1_3; } x7; struct shared_ptr<ggl::IndexData> { struct IndexData {} *x_8_1_1; struct __shared_weak_count {} *x_8_1_2; } x8; }*)polygonLineMesh;
- (unsigned long long)polygonVertCount;
- (struct BaseMesh { int (**x1)(); char *x2; int (**x3)(); struct ResourceManager {} *x4; struct RenderResource {} *x5; struct MeshCReflection {} *x6; struct vector<std::__1::shared_ptr<ggl::VertexData>, geo::StdAllocator<std::__1::shared_ptr<ggl::VertexData>, ggl::Allocator> > { struct shared_ptr<ggl::VertexData> {} *x_7_1_1; struct shared_ptr<ggl::VertexData> {} *x_7_1_2; struct __compressed_pair<std::__1::shared_ptr<ggl::VertexData> *, geo::StdAllocator<std::__1::shared_ptr<ggl::VertexData>, ggl::Allocator> > { struct shared_ptr<ggl::VertexData> {} *x_3_2_1; struct StdAllocator<std::__1::shared_ptr<ggl::VertexData>, ggl::Allocator> { struct Allocator {} *x_2_3_1; } x_3_2_2; } x_7_1_3; } x7; struct shared_ptr<ggl::IndexData> { struct IndexData {} *x_8_1_1; struct __shared_weak_count {} *x_8_1_2; } x8; }*)realTransitNodesMesh;
- (unsigned long long)unnamedLineCount;
- (struct BaseMesh { int (**x1)(); char *x2; int (**x3)(); struct ResourceManager {} *x4; struct RenderResource {} *x5; struct MeshCReflection {} *x6; struct vector<std::__1::shared_ptr<ggl::VertexData>, geo::StdAllocator<std::__1::shared_ptr<ggl::VertexData>, ggl::Allocator> > { struct shared_ptr<ggl::VertexData> {} *x_7_1_1; struct shared_ptr<ggl::VertexData> {} *x_7_1_2; struct __compressed_pair<std::__1::shared_ptr<ggl::VertexData> *, geo::StdAllocator<std::__1::shared_ptr<ggl::VertexData>, ggl::Allocator> > { struct shared_ptr<ggl::VertexData> {} *x_3_2_1; struct StdAllocator<std::__1::shared_ptr<ggl::VertexData>, ggl::Allocator> { struct Allocator {} *x_2_3_1; } x_3_2_2; } x_7_1_3; } x7; struct shared_ptr<ggl::IndexData> { struct IndexData {} *x_8_1_1; struct __shared_weak_count {} *x_8_1_2; } x8; }*)unnamedLineMesh;
- (unsigned long long)unnamedLineVertCount;
- (struct BaseMesh { int (**x1)(); char *x2; int (**x3)(); struct ResourceManager {} *x4; struct RenderResource {} *x5; struct MeshCReflection {} *x6; struct vector<std::__1::shared_ptr<ggl::VertexData>, geo::StdAllocator<std::__1::shared_ptr<ggl::VertexData>, ggl::Allocator> > { struct shared_ptr<ggl::VertexData> {} *x_7_1_1; struct shared_ptr<ggl::VertexData> {} *x_7_1_2; struct __compressed_pair<std::__1::shared_ptr<ggl::VertexData> *, geo::StdAllocator<std::__1::shared_ptr<ggl::VertexData>, ggl::Allocator> > { struct shared_ptr<ggl::VertexData> {} *x_3_2_1; struct StdAllocator<std::__1::shared_ptr<ggl::VertexData>, ggl::Allocator> { struct Allocator {} *x_2_3_1; } x_3_2_2; } x_7_1_3; } x7; struct shared_ptr<ggl::IndexData> { struct IndexData {} *x_8_1_1; struct __shared_weak_count {} *x_8_1_2; } x8; }*)venueBuildingOutlineMesh;
- (struct BaseMesh { int (**x1)(); char *x2; int (**x3)(); struct ResourceManager {} *x4; struct RenderResource {} *x5; struct MeshCReflection {} *x6; struct vector<std::__1::shared_ptr<ggl::VertexData>, geo::StdAllocator<std::__1::shared_ptr<ggl::VertexData>, ggl::Allocator> > { struct shared_ptr<ggl::VertexData> {} *x_7_1_1; struct shared_ptr<ggl::VertexData> {} *x_7_1_2; struct __compressed_pair<std::__1::shared_ptr<ggl::VertexData> *, geo::StdAllocator<std::__1::shared_ptr<ggl::VertexData>, ggl::Allocator> > { struct shared_ptr<ggl::VertexData> {} *x_3_2_1; struct StdAllocator<std::__1::shared_ptr<ggl::VertexData>, ggl::Allocator> { struct Allocator {} *x_2_3_1; } x_3_2_2; } x_7_1_3; } x7; struct shared_ptr<ggl::IndexData> { struct IndexData {} *x_8_1_1; struct __shared_weak_count {} *x_8_1_2; } x8; }*)venueOutlineMesh;
- (unsigned long long)venueOutlinesCount;
- (unsigned long long)vertexCount;
- (struct BaseMesh { int (**x1)(); char *x2; int (**x3)(); struct ResourceManager {} *x4; struct RenderResource {} *x5; struct MeshCReflection {} *x6; struct vector<std::__1::shared_ptr<ggl::VertexData>, geo::StdAllocator<std::__1::shared_ptr<ggl::VertexData>, ggl::Allocator> > { struct shared_ptr<ggl::VertexData> {} *x_7_1_1; struct shared_ptr<ggl::VertexData> {} *x_7_1_2; struct __compressed_pair<std::__1::shared_ptr<ggl::VertexData> *, geo::StdAllocator<std::__1::shared_ptr<ggl::VertexData>, ggl::Allocator> > { struct shared_ptr<ggl::VertexData> {} *x_3_2_1; struct StdAllocator<std::__1::shared_ptr<ggl::VertexData>, ggl::Allocator> { struct Allocator {} *x_2_3_1; } x_3_2_2; } x_7_1_3; } x7; struct shared_ptr<ggl::IndexData> { struct IndexData {} *x_8_1_1; struct __shared_weak_count {} *x_8_1_2; } x8; }*)verticesPointsMesh;

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
