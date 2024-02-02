<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>ARPlaneWorld.h</title>
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

/Frameworks/ARKit.framework/ARPlaneWorld.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/ARKit.framework/ARKit (91.5)
 */

@interface ARPlaneWorld : NSObject {
    ARGPUWarper * _gpuWarper;
    struct map<std::__1::array<unsigned char, 16>, ARTexturedPlane, std::__1::less<std::__1::array<unsigned char, 16> >, std::__1::allocator<std::__1::pair<const std::__1::array<unsigned char, 16>, ARTexturedPlane> > > { 
        struct __tree<std::__1::__value_type<std::__1::array<unsigned char, 16>, ARTexturedPlane>, std::__1::__map_value_compare<std::__1::array<unsigned char, 16>, std::__1::__value_type<std::__1::array<unsigned char, 16>, ARTexturedPlane>, std::__1::less<std::__1::array<unsigned char, 16> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::array<unsigned char, 16>, ARTexturedPlane> > > { 
            struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *__begin_node_; 
            struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::array<unsigned char, 16>, ARTexturedPlane>, void *> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                    struct __tree_node_base<void *> {} *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::array<unsigned char, 16>, std::__1::__value_type<std::__1::array<unsigned char, 16>, ARTexturedPlane>, std::__1::less<std::__1::array<unsigned char, 16> >, true> > { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _planes;
    struct ARPlaneUpdateQueue { 
        struct queue<std::__1::pair<std::__1::array<unsigned char, 16>, ARTexturedPlane>, std::__1::deque<std::__1::pair<std::__1::array<unsigned char, 16>, ARTexturedPlane>, std::__1::allocator<std::__1::pair<std::__1::array<unsigned char, 16>, ARTexturedPlane> > > > { 
            struct deque<std::__1::pair<std::__1::array<unsigned char, 16>, ARTexturedPlane>, std::__1::allocator<std::__1::pair<std::__1::array<unsigned char, 16>, ARTexturedPlane> > > { 
                struct __split_buffer<std::__1::pair<std::__1::array<unsigned char, 16>, ARTexturedPlane> *, std::__1::allocator<std::__1::pair<std::__1::array<unsigned char, 16>, ARTexturedPlane> *> > { 
                    struct pair<std::__1::array<unsigned char, 16>, ARTexturedPlane> {} **__first_; 
                    struct pair<std::__1::array<unsigned char, 16>, ARTexturedPlane> {} **__begin_; 
                    struct pair<std::__1::array<unsigned char, 16>, ARTexturedPlane> {} **__end_; 
                    struct __compressed_pair<std::__1::pair<std::__1::array<unsigned char, 16>, ARTexturedPlane> **, std::__1::allocator<std::__1::pair<std::__1::array<unsigned char, 16>, ARTexturedPlane> *> > { 
                        struct pair<std::__1::array<unsigned char, 16>, ARTexturedPlane> {} **__value_; 
                    } __end_cap_; 
                } __map_; 
                unsigned long long __start_; 
                struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::pair<std::__1::array<unsigned char, 16>, ARTexturedPlane> > > { 
                    unsigned long long __value_; 
                } __size_; 
            } c; 
        } queue; 
        struct set<std::__1::array<unsigned char, 16>, std::__1::less<std::__1::array<unsigned char, 16> >, std::__1::allocator<std::__1::array<unsigned char, 16> > > { 
            struct __tree<std::__1::array<unsigned char, 16>, std::__1::less<std::__1::array<unsigned char, 16> >, std::__1::allocator<std::__1::array<unsigned char, 16> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *__begin_node_; 
                struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::array<unsigned char, 16>, void *> > > { 
                    struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                        struct __tree_node_base<void *> {} *__left_; 
                    } __value_; 
                } __pair1_; 
                struct __compressed_pair<unsigned long, std::__1::less<std::__1::array<unsigned char, 16> > > { 
                    unsigned long long __value_; 
                } __pair3_; 
            } __tree_; 
        } elements; 
    }  _queue;
    NSObject<OS_dispatch_semaphore> * _semaphore;
    unsigned long long  _textureSize;
}

+ (struct map<std::__1::array<unsigned char, 16>, std::__1::set<std::__1::array<unsigned char, 16>, std::__1::less<std::__1::array<unsigned char, 16> >, std::__1::allocator<std::__1::array<unsigned char, 16> > >, std::__1::less<std::__1::array<unsigned char, 16> >, std::__1::allocator<std::__1::pair<const std::__1::array<unsigned char, 16>, std::__1::set<std::__1::array<unsigned char, 16>, std::__1::less<std::__1::array<unsigned char, 16> >, std::__1::allocator<std::__1::array<unsigned char, 16> > > > > > { struct __tree<std::__1::__value_type<std::__1::array<unsigned char, 16>, std::__1::set<std::__1::array<unsigned char, 16>, std::__1::less<std::__1::array<unsigned char, 16> >, std::__1::allocator<std::__1::array<unsigned char, 16> > > >, std::__1::__map_value_compare<std::__1::array<unsigned char, 16>, std::__1::__value_type<std::__1::array<unsigned char, 16>, std::__1::set<std::__1::array<unsigned char, 16>, std::__1::less<std::__1::array<unsigned char, 16> >, std::__1::allocator<std::__1::array<unsigned char, 16> > > >, std::__1::less<std::__1::array<unsigned char, 16> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::array<unsigned char, 16>, std::__1::set<std::__1::array<unsigned char, 16>, std::__1::less<std::__1::array<unsigned char, 16> >, std::__1::allocator<std::__1::array<unsigned char, 16> > > > > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::array<unsigned char, 16>, std::__1::set<std::__1::array<unsigned char, 16>, std::__1::less<std::__1::array<unsigned char, 16> >, std::__1::allocator<std::__1::array<unsigned char, 16> > > >, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::array<unsigned char, 16>, std::__1::__value_type<std::__1::array<unsigned char, 16>, std::__1::set<std::__1::array<unsigned char, 16>, std::__1::less<std::__1::array<unsigned char, 16> >, std::__1::allocator<std::__1::array<unsigned char, 16> > > >, std::__1::less<std::__1::array<unsigned char, 16> >, true> > { unsigned long long x_3_2_1; } x_1_1_3; } x1; })findMergedPlanes:(const struct map<std::__1::array<unsigned char, 16>, ARTexturedPlane, std::__1::less<std::__1::array<unsigned char, 16> >, std::__1::allocator<std::__1::pair<const std::__1::array<unsigned char, 16>, ARTexturedPlane> > > { struct __tree<std::__1::__value_type<std::__1::array<unsigned char, 16>, ARTexturedPlane>, std::__1::__map_value_compare<std::__1::array<unsigned char, 16>, std::__1::__value_type<std::__1::array<unsigned char, 16>, ARTexturedPlane>, std::__1::less<std::__1::array<unsigned char, 16> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::array<unsigned char, 16>, ARTexturedPlane> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::array<unsigned char, 16>, ARTexturedPlane>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::array<unsigned char, 16>, std::__1::__value_type<std::__1::array<unsigned char, 16>, ARTexturedPlane>, std::__1::less<std::__1::array<unsigned char, 16> >, true> > { unsigned long long x_3_2_1; } x_1_1_3; } x1; }*)arg1 :(const struct map<std::__1::array<unsigned char, 16>, ARTexturedPlane, std::__1::less<std::__1::array<unsigned char, 16> >, std::__1::allocator<std::__1::pair<const std::__1::array<unsigned char, 16>, ARTexturedPlane> > > { struct __tree<std::__1::__value_type<std::__1::array<unsigned char, 16>, ARTexturedPlane>, std::__1::__map_value_compare<std::__1::array<unsigned char, 16>, std::__1::__value_type<std::__1::array<unsigned char, 16>, ARTexturedPlane>, std::__1::less<std::__1::array<unsigned char, 16> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::array<unsigned char, 16>, ARTexturedPlane> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::array<unsigned char, 16>, ARTexturedPlane>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::array<unsigned char, 16>, std::__1::__value_type<std::__1::array<unsigned char, 16>, ARTexturedPlane>, std::__1::less<std::__1::array<unsigned char, 16> >, true> > { unsigned long long x_3_2_1; } x_1_1_3; } x1; }*)arg2;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)init;
- (id)initWithTextureSize:(unsigned long long)arg1;
- (struct vector<ARTexturedPlane, std::__1::allocator<ARTexturedPlane> > { struct { /* ? */ } *x1; struct { /* ? */ } *x2; struct __compressed_pair<ARTexturedPlane *, std::__1::allocator<ARTexturedPlane> > { struct { /* ? */ } *x_3_1_1; } x3; })planes;
- (void)updatePlanes:(const struct map<std::__1::array<unsigned char, 16>, ARTexturedPlane, std::__1::less<std::__1::array<unsigned char, 16> >, std::__1::allocator<std::__1::pair<const std::__1::array<unsigned char, 16>, ARTexturedPlane> > > { struct __tree<std::__1::__value_type<std::__1::array<unsigned char, 16>, ARTexturedPlane>, std::__1::__map_value_compare<std::__1::array<unsigned char, 16>, std::__1::__value_type<std::__1::array<unsigned char, 16>, ARTexturedPlane>, std::__1::less<std::__1::array<unsigned char, 16> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::array<unsigned char, 16>, ARTexturedPlane> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::array<unsigned char, 16>, ARTexturedPlane>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::array<unsigned char, 16>, std::__1::__value_type<std::__1::array<unsigned char, 16>, ARTexturedPlane>, std::__1::less<std::__1::array<unsigned char, 16> >, true> > { unsigned long long x_3_2_1; } x_1_1_3; } x1; }*)arg1 withCameraImage:(struct __CVBuffer { }*)arg2 exposureOffset:(float)arg3 transform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg4 intrinsics:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg5 synchronous:(bool)arg6;
- (struct map<std::__1::array<unsigned char, 16>, ARTexturedPlane, std::__1::less<std::__1::array<unsigned char, 16> >, std::__1::allocator<std::__1::pair<const std::__1::array<unsigned char, 16>, ARTexturedPlane> > > { struct __tree<std::__1::__value_type<std::__1::array<unsigned char, 16>, ARTexturedPlane>, std::__1::__map_value_compare<std::__1::array<unsigned char, 16>, std::__1::__value_type<std::__1::array<unsigned char, 16>, ARTexturedPlane>, std::__1::less<std::__1::array<unsigned char, 16> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::array<unsigned char, 16>, ARTexturedPlane> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::array<unsigned char, 16>, ARTexturedPlane>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::array<unsigned char, 16>, std::__1::__value_type<std::__1::array<unsigned char, 16>, ARTexturedPlane>, std::__1::less<std::__1::array<unsigned char, 16> >, true> > { unsigned long long x_3_2_1; } x_1_1_3; } x1; })updatePlanes:(const struct map<std::__1::array<unsigned char, 16>, ARTexturedPlane, std::__1::less<std::__1::array<unsigned char, 16> >, std::__1::allocator<std::__1::pair<const std::__1::array<unsigned char, 16>, ARTexturedPlane> > > { struct __tree<std::__1::__value_type<std::__1::array<unsigned char, 16>, ARTexturedPlane>, std::__1::__map_value_compare<std::__1::array<unsigned char, 16>, std::__1::__value_type<std::__1::array<unsigned char, 16>, ARTexturedPlane>, std::__1::less<std::__1::array<unsigned char, 16> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::array<unsigned char, 16>, ARTexturedPlane> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::array<unsigned char, 16>, ARTexturedPlane>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::array<unsigned char, 16>, std::__1::__value_type<std::__1::array<unsigned char, 16>, ARTexturedPlane>, std::__1::less<std::__1::array<unsigned char, 16> >, true> > { unsigned long long x_3_2_1; } x_1_1_3; } x1; }*)arg1 withCurrentDetections:(const struct map<std::__1::array<unsigned char, 16>, ARTexturedPlane, std::__1::less<std::__1::array<unsigned char, 16> >, std::__1::allocator<std::__1::pair<const std::__1::array<unsigned char, 16>, ARTexturedPlane> > > { struct __tree<std::__1::__value_type<std::__1::array<unsigned char, 16>, ARTexturedPlane>, std::__1::__map_value_compare<std::__1::array<unsigned char, 16>, std::__1::__value_type<std::__1::array<unsigned char, 16>, ARTexturedPlane>, std::__1::less<std::__1::array<unsigned char, 16> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::array<unsigned char, 16>, ARTexturedPlane> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::array<unsigned char, 16>, ARTexturedPlane>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::array<unsigned char, 16>, std::__1::__value_type<std::__1::array<unsigned char, 16>, ARTexturedPlane>, std::__1::less<std::__1::array<unsigned char, 16> >, true> > { unsigned long long x_3_2_1; } x_1_1_3; } x1; }*)arg2 synchronous:(bool)arg3;

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