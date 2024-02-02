<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>BRCStatInfo.h</title>
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

/PrivateFrameworks/CloudDocsDaemon.framework/BRCStatInfo.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon (575.504)
 */

@interface BRCStatInfo : NSObject <NSCopying, NSSecureCoding> {
    NSString * _aliasTarget;
    long long  _birthtime;
    BRFieldCKInfo * _ckInfo;
    long long  _favoriteRank;
    NSData * _finderTags;
    bool  _hiddenExt;
    long long  _lastUsedTime;
    NSData * _lazyXattr;
    NSString * _logicalName;
    BOOL  _mode;
    BRCItemID * _parentID;
    BOOL  _state;
    BRCItemID * _trashPutBackParentID;
    NSString * _trashPutBackPath;
    BOOL  _type;
    NSData * _xattrSignature;
}

@property (nonatomic, readonly) BRMangledID *_aliasTargetMangledID;
@property (nonatomic, readonly) NSString *aliasTarget;
@property (nonatomic) long long birthtime;
@property (nonatomic, retain) BRFieldCKInfo *ckInfo;
@property (nonatomic) long long favoriteRank;
@property (nonatomic, retain) NSData *finderTags;
@property (getter=isHiddenExt, nonatomic) bool hiddenExt;
@property (nonatomic, readonly) bool iWorkShareable;
@property (nonatomic) long long lastUsedTime;
@property (nonatomic, retain) NSData *lazyXattr;
@property (nonatomic, retain) NSString *logicalName;
@property (nonatomic) BOOL mode;
@property (nonatomic, retain) BRCItemID *parentID;
@property (nonatomic, readonly) NSString *representableName;
@property (nonatomic) BOOL state;
@property (nonatomic, retain) BRCItemID *trashPutBackParentID;
@property (nonatomic, retain) NSString *trashPutBackPath;
@property (nonatomic) BOOL type;
@property (nonatomic, retain) NSData *xattrSignature;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_aliasTargetItemID;
- (id)_aliasTargetMangledID;
- (void)_updateAliasTarget:(id)arg1;
- (id)aliasTarget;
- (long long)birthtime;
- (bool)check:(id)arg1 logToFile:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg2;
- (bool)checkStateWithItemID:(id)arg1 logToFile:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg2;
- (id)ckInfo;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionWithContext:(id)arg1 origName:(id)arg2;
- (unsigned long long)diffAgainst:(id)arg1;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (long long)favoriteRank;
- (id)finderTags;
- (bool)iWorkShareable;
- (id)initFromResultSet:(id)arg1 pos:(int)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithStatInfo:(id)arg1;
- (bool)isEtagEqual:(id)arg1;
- (bool)isExecutable;
- (bool)isHiddenExt;
- (bool)isWritable;
- (long long)lastUsedTime;
- (id)lazyXattr;
- (id)logicalName;
- (BOOL)mode;
- (id)parentID;
- (id)representableName;
- (void)setBirthtime:(long long)arg1;
- (void)setCkInfo:(id)arg1;
- (void)setFavoriteRank:(long long)arg1;
- (void)setFinderTags:(id)arg1;
- (void)setHiddenExt:(bool)arg1;
- (void)setLastUsedTime:(long long)arg1;
- (void)setLazyXattr:(id)arg1;
- (void)setLogicalName:(id)arg1;
- (void)setMode:(BOOL)arg1;
- (void)setParentID:(id)arg1;
- (void)setState:(BOOL)arg1;
- (void)setTrashPutBackParentID:(id)arg1;
- (void)setTrashPutBackPath:(id)arg1;
- (void)setType:(BOOL)arg1;
- (void)setXattrSignature:(id)arg1;
- (BOOL)state;
- (id)trashPutBackParentID;
- (id)trashPutBackPath;
- (BOOL)type;
- (id)xattrSignature;

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