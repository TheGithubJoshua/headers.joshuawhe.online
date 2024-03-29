<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>VNTracker.h</title>
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

/Frameworks/Vision.framework/VNTracker.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/Vision.framework/Vision (2.0.70)
 */

@interface VNTracker : NSObject <VNRequestRevisionProviding> {
    NSUUID * _key;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _lastTrackedBBox;
    NSString * _level;
    unsigned long long  _requestRevision;
    long long  _trackedFrameNumber;
    struct shared_ptr<vision::mod::ObjectTrackerAbstract> { 
        struct ObjectTrackerAbstract {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  mTrackerImpl;
}

@property (readonly) bool isTracking;
@property (readonly) NSUUID *key;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } lastTrackedBBox;
@property (readonly) NSString *level;
@property (nonatomic, readonly) unsigned long long requestRevision;
@property long long trackedFrameNumber;

+ (long long)VNTrackerOptionToTrackerType:(id)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct ObjectTrackerAbstract { int (**x1)(); struct ObjectDetectorAbstract {} *x2; struct shared_ptr<vision::mod::ObjectTrackerOptions> { struct ObjectTrackerOptions {} *x_3_1_1; struct __shared_weak_count {} *x_3_1_2; } x3; }*)_createTrackerWithLevel:(id)arg1 options:(struct ObjectTrackerOptions { int (**x1)(); id x2; int x3; }*)arg2 error:(id*)arg3;
- (id)_parseInputObservations:(id)arg1 imageBuffer:(id)arg2 error:(id*)arg3;
- (id)_postProcessTrackingResults:(id)arg1 trackerResults:(id)arg2 error:(id*)arg3;
- (bool)_updateTrackerWithModifiedBBoxForImageBuffer:(id)arg1 error:(id*)arg2;
- (bool)_visionBBoxToTrackerBBox:(id)arg1 trackedObjects:(struct vector<vision::mod::DetectedObject, std::__1::allocator<vision::mod::DetectedObject> > { struct DetectedObject {} *x1; struct DetectedObject {} *x2; struct __compressed_pair<vision::mod::DetectedObject *, std::__1::allocator<vision::mod::DetectedObject> > { struct DetectedObject {} *x_3_1_1; } x3; }*)arg2 imageSize:(struct CGSize { double x1; double x2; })arg3 results:(id)arg4 error:(id*)arg5;
- (id)initWithOptions:(id)arg1 error:(id*)arg2;
- (bool)isTracking;
- (id)key;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })lastTrackedBBox;
- (id)level;
- (unsigned long long)requestRevision;
- (bool)reset:(id*)arg1;
- (void)setLastTrackedBBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setTrackedFrameNumber:(long long)arg1;
- (id)setTrackedObjects:(id)arg1 inFrame:(id)arg2 error:(id*)arg3;
- (id)trackInFrame:(id)arg1 error:(id*)arg2;
- (long long)trackedFrameNumber;

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
