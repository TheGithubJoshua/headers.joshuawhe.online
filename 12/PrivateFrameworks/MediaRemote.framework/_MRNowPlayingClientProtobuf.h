<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>_MRNowPlayingClientProtobuf.h</title>
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

/PrivateFrameworks/MediaRemote.framework/_MRNowPlayingClientProtobuf.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote (1)
 */

@interface _MRNowPlayingClientProtobuf : PBCodable <NSCopying> {
    NSString * _bundleIdentifier;
    NSMutableArray * _bundleIdentifierHierarchys;
    NSString * _displayName;
    struct { 
        unsigned int nowPlayingVisibility : 1; 
        unsigned int processIdentifier : 1; 
        unsigned int processUserIdentifier : 1; 
        unsigned int isEmptyDeprecated : 1; 
    }  _has;
    bool  _isEmptyDeprecated;
    int  _nowPlayingVisibility;
    NSString * _parentApplicationBundleIdentifier;
    int  _processIdentifier;
    int  _processUserIdentifier;
    _MRColorProtobuf * _tintColor;
}

@property (nonatomic, retain) NSString *bundleIdentifier;
@property (nonatomic, retain) NSMutableArray *bundleIdentifierHierarchys;
@property (nonatomic, retain) NSString *displayName;
@property (nonatomic, readonly) bool hasBundleIdentifier;
@property (nonatomic, readonly) bool hasDisplayName;
@property (nonatomic) bool hasIsEmptyDeprecated;
@property (nonatomic) bool hasNowPlayingVisibility;
@property (nonatomic, readonly) bool hasParentApplicationBundleIdentifier;
@property (nonatomic) bool hasProcessIdentifier;
@property (nonatomic) bool hasProcessUserIdentifier;
@property (nonatomic, readonly) bool hasTintColor;
@property (nonatomic) bool isEmptyDeprecated;
@property (nonatomic) int nowPlayingVisibility;
@property (nonatomic, retain) NSString *parentApplicationBundleIdentifier;
@property (nonatomic) int processIdentifier;
@property (nonatomic) int processUserIdentifier;
@property (nonatomic, retain) _MRColorProtobuf *tintColor;

+ (Class)bundleIdentifierHierarchyType;

- (void).cxx_destruct;
- (int)StringAsNowPlayingVisibility:(id)arg1;
- (void)addBundleIdentifierHierarchy:(id)arg1;
- (id)bundleIdentifier;
- (id)bundleIdentifierHierarchyAtIndex:(unsigned long long)arg1;
- (id)bundleIdentifierHierarchys;
- (unsigned long long)bundleIdentifierHierarchysCount;
- (void)clearBundleIdentifierHierarchys;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayName;
- (bool)hasBundleIdentifier;
- (bool)hasDisplayName;
- (bool)hasIsEmptyDeprecated;
- (bool)hasNowPlayingVisibility;
- (bool)hasParentApplicationBundleIdentifier;
- (bool)hasProcessIdentifier;
- (bool)hasProcessUserIdentifier;
- (bool)hasTintColor;
- (unsigned long long)hash;
- (bool)isEmptyDeprecated;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)nowPlayingVisibility;
- (id)nowPlayingVisibilityAsString:(int)arg1;
- (id)parentApplicationBundleIdentifier;
- (int)processIdentifier;
- (int)processUserIdentifier;
- (bool)readFrom:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setBundleIdentifierHierarchys:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setHasIsEmptyDeprecated:(bool)arg1;
- (void)setHasNowPlayingVisibility:(bool)arg1;
- (void)setHasProcessIdentifier:(bool)arg1;
- (void)setHasProcessUserIdentifier:(bool)arg1;
- (void)setIsEmptyDeprecated:(bool)arg1;
- (void)setNowPlayingVisibility:(int)arg1;
- (void)setParentApplicationBundleIdentifier:(id)arg1;
- (void)setProcessIdentifier:(int)arg1;
- (void)setProcessUserIdentifier:(int)arg1;
- (void)setTintColor:(id)arg1;
- (id)tintColor;
- (void)writeTo:(id)arg1;

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
