<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>NUIGridArrangement.h</title>
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

/PrivateFrameworks/AppSupportUI.framework/NUIGridArrangement.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/AppSupportUI.framework/AppSupportUI ()
 */

@interface NUIGridArrangement : NSObject <_NUIGridArrangementContainer> {
    struct _NUIGridArrangement { 
        <_NUIGridArrangementContainer> *container; 
        bool baselineRelative; 
        long long horzDist; 
        long long vertDist; 
        struct vector<_NUIGridArrangementCell, std::__1::allocator<_NUIGridArrangementCell> > { 
            struct _NUIGridArrangementCell {} *__begin_; 
            struct _NUIGridArrangementCell {} *__end_; 
            struct __compressed_pair<_NUIGridArrangementCell *, std::__1::allocator<_NUIGridArrangementCell> > { 
                struct _NUIGridArrangementCell {} *__value_; 
            } __end_cap_; 
        } cells; 
        struct vector<_NUIGridArrangementDimension, std::__1::allocator<_NUIGridArrangementDimension> > { 
            struct _NUIGridArrangementDimension {} *__begin_; 
            struct _NUIGridArrangementDimension {} *__end_; 
            struct __compressed_pair<_NUIGridArrangementDimension *, std::__1::allocator<_NUIGridArrangementDimension> > { 
                struct _NUIGridArrangementDimension {} *__value_; 
            } __end_cap_; 
        } columns; 
        struct vector<_NUIGridArrangementDimension, std::__1::allocator<_NUIGridArrangementDimension> > { 
            struct _NUIGridArrangementDimension {} *__begin_; 
            struct _NUIGridArrangementDimension {} *__end_; 
            struct __compressed_pair<_NUIGridArrangementDimension *, std::__1::allocator<_NUIGridArrangementDimension> > { 
                struct _NUIGridArrangementDimension {} *__value_; 
            } __end_cap_; 
        } rows; 
        struct vector<CGRect, std::__1::allocator<CGRect> > { 
            struct CGRect {} *__begin_; 
            struct CGRect {} *__end_; 
            struct __compressed_pair<CGRect *, std::__1::allocator<CGRect> > { 
                struct CGRect {} *__value_; 
            } __end_cap_; 
        } viewFrames; 
    }  _arrangement;
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
    <NUIArrangementContainer> * _container;
    <NUIGridArrangementDataSource> * _dataSource;
    struct { 
        unsigned int delegateWidth : 1; 
        unsigned int delegateHeight : 1; 
        unsigned int containerDirection : 1; 
    }  _flags;
    double  _scale;
}

@property (getter=isBaselineRelativeArrangement, nonatomic) bool baselineRelativeArrangement;
@property (nonatomic, readonly) <NUIArrangementContainer> *container;
@property (nonatomic, readonly) <NUIGridArrangementDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long horizontalDistribution;
@property (readonly) Class superclass;
@property (nonatomic) long long verticalDistribution;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_cacheDisplayScaleIfNeeded;
- (id)container;
- (struct CGSize { double x1; double x2; })contentLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1 forArrangedSubview:(id)arg2;
- (id)dataSource;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForColumns:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 rows:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 inBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (long long)horizontalDistribution;
- (id)initWithContainer:(id)arg1 dataSource:(id)arg2;
- (bool)isBaselineRelativeArrangement;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })layoutFrameForArrangedSubview:(id)arg1 withProposedContentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (struct CGSize { double x1; double x2; })layoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1;
- (void)populateGridArrangementCells:(struct vector<_NUIGridArrangementCell, std::__1::allocator<_NUIGridArrangementCell> > { struct _NUIGridArrangementCell {} *x1; struct _NUIGridArrangementCell {} *x2; struct __compressed_pair<_NUIGridArrangementCell *, std::__1::allocator<_NUIGridArrangementCell> > { struct _NUIGridArrangementCell {} *x_3_1_1; } x3; }*)arg1;
- (void)populateGridArrangementDimension:(struct vector<_NUIGridArrangementDimension, std::__1::allocator<_NUIGridArrangementDimension> > { struct _NUIGridArrangementDimension {} *x1; struct _NUIGridArrangementDimension {} *x2; struct __compressed_pair<_NUIGridArrangementDimension *, std::__1::allocator<_NUIGridArrangementDimension> > { struct _NUIGridArrangementDimension {} *x_3_1_1; } x3; }*)arg1 withCells:(const struct vector<_NUIGridArrangementCell, std::__1::allocator<_NUIGridArrangementCell> > { struct _NUIGridArrangementCell {} *x1; struct _NUIGridArrangementCell {} *x2; struct __compressed_pair<_NUIGridArrangementCell *, std::__1::allocator<_NUIGridArrangementCell> > { struct _NUIGridArrangementCell {} *x_3_1_1; } x3; }*)arg2 axis:(long long)arg3;
- (void)positionItemsInBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 block:(id /* block */)arg2;
- (void)positionItemsInColumns:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 rows:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 inBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 block:(id /* block */)arg4;
- (void)reloadData;
- (void)setBaselineRelativeArrangement:(bool)arg1;
- (void)setHorizontalDistribution:(long long)arg1;
- (void)setVerticalDistribution:(long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })unionFrameForItemsInColumns:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 rows:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 inBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (long long)verticalDistribution;

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
