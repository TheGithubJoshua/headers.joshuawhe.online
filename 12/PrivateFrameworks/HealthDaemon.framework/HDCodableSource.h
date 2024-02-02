<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>HDCodableSource.h</title>
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

/PrivateFrameworks/HealthDaemon.framework/HDCodableSource.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon (1)
 */

@interface HDCodableSource : PBCodable <NSCopying> {
    NSString * _bundleIdentifier;
    bool  _deleted;
    struct { 
        unsigned int modificationDate : 1; 
        unsigned int options : 1; 
        unsigned int deleted : 1; 
    }  _has;
    double  _modificationDate;
    NSString * _name;
    long long  _options;
    NSString * _productType;
    NSData * _uuid;
}

@property (nonatomic, retain) NSString *bundleIdentifier;
@property (nonatomic) bool deleted;
@property (nonatomic, readonly) bool hasBundleIdentifier;
@property (nonatomic) bool hasDeleted;
@property (nonatomic) bool hasModificationDate;
@property (nonatomic, readonly) bool hasName;
@property (nonatomic) bool hasOptions;
@property (nonatomic, readonly) bool hasProductType;
@property (nonatomic, readonly) bool hasUuid;
@property (nonatomic) double modificationDate;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) long long options;
@property (nonatomic, retain) NSString *productType;
@property (nonatomic, retain) NSData *uuid;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)decodedModificationDate;
- (id)decodedUUID;
- (bool)deleted;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBundleIdentifier;
- (bool)hasDeleted;
- (bool)hasModificationDate;
- (bool)hasName;
- (bool)hasOptions;
- (bool)hasProductType;
- (bool)hasUuid;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (double)modificationDate;
- (id)name;
- (long long)options;
- (id)productType;
- (bool)readFrom:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setDeleted:(bool)arg1;
- (void)setHasDeleted:(bool)arg1;
- (void)setHasModificationDate:(bool)arg1;
- (void)setHasOptions:(bool)arg1;
- (void)setModificationDate:(double)arg1;
- (void)setName:(id)arg1;
- (void)setOptions:(long long)arg1;
- (void)setProductType:(id)arg1;
- (void)setUuid:(id)arg1;
- (id)uuid;
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