<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>SKTileSet.h</title>
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

/Frameworks/SpriteKit.framework/SKTileSet.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit (1)
 */

@interface SKTileSet : NSObject <NSCopying, NSSecureCoding> {
    SKTileGroup * _defaultTileGroup;
    struct CGSize { 
        double width; 
        double height; 
    }  _defaultTileSize;
    NSMutableArray * _definitions;
    NSMutableArray * _groups;
    NSString * _name;
    NSArray * _stamps;
    unsigned long long  _type;
}

@property (nonatomic, retain) SKTileGroup *defaultTileGroup;
@property (nonatomic) struct CGSize { double x1; double x2; } defaultTileSize;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) NSArray *stamps;
@property (nonatomic, readonly) NSArray *tileDefinitions;
@property (nonatomic, copy) NSArray *tileGroups;
@property (nonatomic) unsigned long long type;

+ (void)clearTileSetTableCache;
+ (id)findTileSetInBundleNamed:(id)arg1;
+ (id)recursivePathsForResourcesOfType:(id)arg1 inDirectory:(id)arg2;
+ (bool)supportsSecureCoding;
+ (id)tileSetFromURL:(id)arg1;
+ (id)tileSetNamed:(id)arg1;
+ (id)tileSetWithTileGroups:(id)arg1;
+ (id)tileSetWithTileGroups:(id)arg1 tileSetType:(unsigned long long)arg2;

- (void).cxx_destruct;
- (void)calcDefaultTileSize;
- (void)commonInit;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)defaultTileGroup;
- (struct CGSize { double x1; double x2; })defaultTileSize;
- (void)encodeWithCoder:(id)arg1;
- (id)findTileDefinitionForGroup:(id)arg1 withGroupAdjacency:(unsigned long long*)arg2;
- (id)findTileDefinitionsForGroup:(id)arg1 withGroupAdjacency:(unsigned long long*)arg2;
- (id)getCenterTileDefinitionForGroup:(id)arg1 withRequiredOutputGroupAdjacency:(unsigned long long*)arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithTileGroups:(id)arg1;
- (id)initWithTileGroups:(id)arg1 tileSetType:(unsigned long long)arg2;
- (bool)isEqualToNode:(id)arg1;
- (void)lookForMissingDefinitionsInGroups;
- (id)name;
- (void)observeAllTileDefinitions;
- (void)observeTileDefinition:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)removeTileDefinitionObservers:(id)arg1;
- (void)setDefaultTileGroup:(id)arg1;
- (void)setDefaultTileSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setGroupParentPointers;
- (void)setName:(id)arg1;
- (void)setStamps:(id)arg1;
- (void)setTileGroups:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (id)stamps;
- (id)tileDefinitions;
- (id)tileGroups;
- (unsigned long long)type;
- (void)unobserveAllTileDefinitions;
- (void)updateTileDefinitionIDsInGroupRules;

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
