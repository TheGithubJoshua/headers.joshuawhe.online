<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>_MapEngineRenderQueueSource.h</title>
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

/PrivateFrameworks/VectorKit.framework/_MapEngineRenderQueueSource.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit (1360.35.12.18.4)
 */

@interface _MapEngineRenderQueueSource : NSObject <GGLRenderQueueSource> {
    struct MapEngine { int (**x1)(); struct shared_ptr<md::TaskContext> { struct TaskContext {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; struct _retain_ptr<GEOResourceManifestConfiguration *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> { int (**x_3_1_1)(); id x_3_1_2; struct _retain_objc { } x_3_1_3; struct _release_objc { } x_3_1_4; } x3; struct Device {} *x4; struct _retain_ptr<_MapEngineRenderQueueSource *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> { int (**x_5_1_1)(); id x_5_1_2; struct _retain_objc { } x_5_1_3; struct _release_objc { } x_5_1_4; } x5; struct unique_ptr<ggl::DisplayLink, std::__1::default_delete<ggl::DisplayLink> > { struct __compressed_pair<ggl::DisplayLink *, std::__1::default_delete<ggl::DisplayLink> > { struct DisplayLink {} *x_1_2_1; } x_6_1_1; } x6; struct unique_ptr<ggl::SnapshotRunLoop, std::__1::default_delete<ggl::SnapshotRunLoop> > { struct __compressed_pair<ggl::SnapshotRunLoop *, std::__1::default_delete<ggl::SnapshotRunLoop> > { struct SnapshotRunLoop {} *x_1_2_1; } x_7_1_1; } x7; } * _mapEngine;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)initWithEngine:(struct MapEngine { int (**x1)(); struct shared_ptr<md::TaskContext> { struct TaskContext {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; struct _retain_ptr<GEOResourceManifestConfiguration *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> { int (**x_3_1_1)(); id x_3_1_2; struct _retain_objc { } x_3_1_3; struct _release_objc { } x_3_1_4; } x3; struct Device {} *x4; struct _retain_ptr<_MapEngineRenderQueueSource *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> { int (**x_5_1_1)(); id x_5_1_2; struct _retain_objc { } x_5_1_3; struct _release_objc { } x_5_1_4; } x5; struct unique_ptr<ggl::DisplayLink, std::__1::default_delete<ggl::DisplayLink> > { struct __compressed_pair<ggl::DisplayLink *, std::__1::default_delete<ggl::DisplayLink> > { struct DisplayLink {} *x_1_2_1; } x_6_1_1; } x6; struct unique_ptr<ggl::SnapshotRunLoop, std::__1::default_delete<ggl::SnapshotRunLoop> > { struct __compressed_pair<ggl::SnapshotRunLoop *, std::__1::default_delete<ggl::SnapshotRunLoop> > { struct SnapshotRunLoop {} *x_1_2_1; } x_7_1_1; } x7; }*)arg1;
- (struct RenderQueue { struct vector<ggl::RenderQueue::Pass, geo::StdAllocator<ggl::RenderQueue::Pass, ggl::Allocator> > { struct Pass {} *x_1_1_1; struct Pass {} *x_1_1_2; struct __compressed_pair<ggl::RenderQueue::Pass *, geo::StdAllocator<ggl::RenderQueue::Pass, ggl::Allocator> > { struct Pass {} *x_3_2_1; struct StdAllocator<ggl::RenderQueue::Pass, ggl::Allocator> { struct Allocator {} *x_2_3_1; } x_3_2_2; } x_1_1_3; } x1; struct vector<ggl::ComputeQueue *, geo::StdAllocator<ggl::ComputeQueue *, ggl::Allocator> > { struct ComputeQueue {} **x_2_1_1; struct ComputeQueue {} **x_2_1_2; struct __compressed_pair<ggl::ComputeQueue **, geo::StdAllocator<ggl::ComputeQueue *, ggl::Allocator> > { struct ComputeQueue {} **x_3_2_1; struct StdAllocator<ggl::ComputeQueue *, ggl::Allocator> { struct Allocator {} *x_2_3_1; } x_3_2_2; } x_2_1_3; } x2; struct vector<ggl::CommandBuffer *, geo::StdAllocator<ggl::CommandBuffer *, ggl::Allocator> > { struct CommandBuffer {} **x_3_1_1; struct CommandBuffer {} **x_3_1_2; struct __compressed_pair<ggl::CommandBuffer **, geo::StdAllocator<ggl::CommandBuffer *, ggl::Allocator> > { struct CommandBuffer {} **x_3_2_1; struct StdAllocator<ggl::CommandBuffer *, ggl::Allocator> { struct Allocator {} *x_2_3_1; } x_3_2_2; } x_3_1_3; } x3; }*)renderQueueForTimestamp:(double)arg1;

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