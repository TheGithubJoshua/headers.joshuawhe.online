<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>EspressoDCNEspressoOverfeatDetector.h</title>
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

/PrivateFrameworks/Espresso.framework/EspressoDCNEspressoOverfeatDetector.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/Espresso.framework/Espresso (120)
 */

@interface EspressoDCNEspressoOverfeatDetector : NSObject {
    double  _confidenceThreshold;
    EspressoFDOverfeatNetwork * _enet;
    double  _minBoundingBoxThreshold;
    struct FaceList { struct list<vision::DCN::boundingbox, std::__1::allocator<vision::DCN::boundingbox> > { struct __list_node_base<vision::DCN::boundingbox, void *> { struct __list_node_base<vision::DCN::boundingbox, void *> {} *x_1_2_1; struct __list_node_base<vision::DCN::boundingbox, void *> {} *x_1_2_2; } x_1_1_1; struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<vision::DCN::boundingbox, void *> > > { unsigned long long x_2_2_1; } x_1_1_2; } x1; } * face_list;
    int  localFaceMerging;
    int  tileDimension;
    int  tileSizeScaleFactor;
}

@property (nonatomic) double confidenceThreshold;
@property (nonatomic, retain) EspressoFDOverfeatNetwork *enet;
@property (nonatomic) double minBoundingBoxThreshold;

- (void).cxx_destruct;
- (void)commonInit;
- (double)compareObject:(id)arg1 withObject:(id)arg2 error:(id*)arg3;
- (void)computeBBoxUsingProb:(struct shared_ptr<Espresso::blob<float, 3> > { struct blob<float, 3> {} *x1; struct __shared_weak_count {} *x2; })arg1 box:(struct shared_ptr<Espresso::blob<float, 3> > { struct blob<float, 3> {} *x1; struct __shared_weak_count {} *x2; })arg2 andScalefactor:(float)arg3 padX:(float)arg4 padY:(float)arg5;
- (double)confidenceThreshold;
- (void)dealloc;
- (id)enet;
- (void)fillFaceList;
- (id)getDescription;
- (id)getFacesFromNetworkResultOriginalWidth:(float)arg1 originalHeight:(float)arg2;
- (id)init;
- (id)initWithNetwork:(id)arg1;
- (id)initWithOptions:(id)arg1;
- (void)mergeFaceList;
- (double)minBoundingBoxThreshold;
- (void)setConfidenceThreshold:(double)arg1;
- (void)setEnet:(id)arg1;
- (void)setMinBoundingBoxThreshold:(double)arg1;

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
