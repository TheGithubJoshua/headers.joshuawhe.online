<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CKFeedCollectionViewSectionLayoutInfo.h</title>
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

/PrivateFrameworks/ChatKit.framework/CKFeedCollectionViewSectionLayoutInfo.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit (1.0)
 */

@interface CKFeedCollectionViewSectionLayoutInfo : NSObject {
    long long  _firstJoinedSection;
    NSArray * _fixedLayoutAttributes;
    NSArray * _floatingLayoutAttributes;
    struct CGSize { 
        double width; 
        double height; 
    }  _footerSize;
    id  _groupID;
    struct CGSize { 
        double width; 
        double height; 
    }  _headerSize;
    bool  _hidden;
    long long  _lastJoinedSection;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _margins;
    long long  _nextVisibleSection;
    long long  _numberOfTilesOmitted;
    struct CGPoint { 
        double x; 
        double y; 
    }  _origin;
    long long  _previousVisibleSection;
    long long  _sectionType;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    NSArray * _tileLayoutAttributes;
}

@property (nonatomic) long long firstJoinedSection;
@property (nonatomic, retain) NSArray *fixedLayoutAttributes;
@property (nonatomic, retain) NSArray *floatingLayoutAttributes;
@property (nonatomic) struct CGSize { double x1; double x2; } footerSize;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property (nonatomic, retain) id groupID;
@property (nonatomic) struct CGSize { double x1; double x2; } headerSize;
@property (getter=isHidden, nonatomic) bool hidden;
@property (nonatomic) long long lastJoinedSection;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } margins;
@property (nonatomic) long long nextVisibleSection;
@property (nonatomic) long long numberOfTilesOmitted;
@property (nonatomic) struct CGPoint { double x1; double x2; } origin;
@property (nonatomic) long long previousVisibleSection;
@property (nonatomic) long long sectionType;
@property (nonatomic) struct CGSize { double x1; double x2; } size;
@property (nonatomic, retain) NSArray *tileLayoutAttributes;

- (void).cxx_destruct;
- (long long)firstJoinedSection;
- (id)fixedLayoutAttributes;
- (id)floatingLayoutAttributes;
- (struct CGSize { double x1; double x2; })footerSize;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (id)groupID;
- (struct CGSize { double x1; double x2; })headerSize;
- (id)init;
- (bool)isHidden;
- (long long)lastJoinedSection;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })margins;
- (long long)nextVisibleSection;
- (long long)numberOfTilesOmitted;
- (struct CGPoint { double x1; double x2; })origin;
- (long long)previousVisibleSection;
- (long long)sectionType;
- (void)setFirstJoinedSection:(long long)arg1;
- (void)setFixedLayoutAttributes:(id)arg1;
- (void)setFloatingLayoutAttributes:(id)arg1;
- (void)setFooterSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setGroupID:(id)arg1;
- (void)setHeaderSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setHidden:(bool)arg1;
- (void)setLastJoinedSection:(long long)arg1;
- (void)setMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setNextVisibleSection:(long long)arg1;
- (void)setNumberOfTilesOmitted:(long long)arg1;
- (void)setOrigin:(struct CGPoint { double x1; double x2; })arg1;
- (void)setPreviousVisibleSection:(long long)arg1;
- (void)setSectionType:(long long)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setTileLayoutAttributes:(id)arg1;
- (struct CGSize { double x1; double x2; })size;
- (id)tileLayoutAttributes;

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