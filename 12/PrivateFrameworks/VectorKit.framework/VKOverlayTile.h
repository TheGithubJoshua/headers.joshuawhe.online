<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>VKOverlayTile.h</title>
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

/PrivateFrameworks/VectorKit.framework/VKOverlayTile.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit (1360.35.12.18.4)
 */

@interface VKOverlayTile : VKTile {
    float  _maximumStyleZ;
    NSMutableArray * _overlays;
    VKVectorTile * _roadTile;
    NSMapTable * _tileForOverlay;
}

@property (nonatomic, readonly) float maximumStyleZ;
@property (nonatomic, readonly) NSArray *overlays;
@property (nonatomic, retain) VKVectorTile *roadTile;

- (void)addOverlay:(id)arg1;
- (void)dealloc;
- (float)maximumStyleZ;
- (id)overlays;
- (id)roadTile;
- (void)setRoadTile:(id)arg1;
- (void)setTile:(id)arg1 forOverlay:(id)arg2;
- (id)tileForOverlay:(id)arg1;
- (void)updateViewDependentStateWithContext:(struct LayoutContext { id x1; struct shared_ptr<md::ViewTransform> { struct ViewTransform {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; struct shared_ptr<md::AnchorContext> { struct AnchorContext {} *x_3_1_1; struct __shared_weak_count {} *x_3_1_2; } x3; id x4; id x5; struct shared_ptr<gss::StylesheetManager<gss::PropertyID> > { struct StylesheetManager<gss::PropertyID> {} *x_6_1_1; struct __shared_weak_count {} *x_6_1_2; } x6; struct shared_ptr<gss::StylesheetManager<gss::ScenePropertyID> > { struct StylesheetManager<gss::ScenePropertyID> {} *x_7_1_1; struct __shared_weak_count {} *x_7_1_2; } x7; struct VKEdgeInsets { float x_8_1_1; float x_8_1_2; float x_8_1_3; float x_8_1_4; } x8; struct VKEdgeInsets { float x_9_1_1; float x_9_1_2; float x_9_1_3; float x_9_1_4; } x9; unsigned char x10; struct shared_ptr<ggl::PolygonBase::MeshMesh> { struct MeshMesh {} *x_11_1_1; struct __shared_weak_count {} *x_11_1_2; } x11; struct shared_ptr<ggl::PolygonBase::MeshMesh> { struct MeshMesh {} *x_12_1_1; struct __shared_weak_count {} *x_12_1_2; } x12; }*)arg1;

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
