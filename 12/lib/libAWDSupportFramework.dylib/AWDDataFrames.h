<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>AWDDataFrames.h</title>
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

/lib/libAWDSupportFramework.dylib/AWDDataFrames.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDDataFrames : PBCodable <NSCopying> {
    unsigned long long  _cFack;
    unsigned long long  _cFackCFpoll;
    unsigned long long  _cFpoll;
    unsigned long long  _dataCFack;
    unsigned long long  _dataCFackCFpoll;
    unsigned long long  _dataCFpoll;
    unsigned long long  _dataFrames;
    struct { 
        unsigned int cFack : 1; 
        unsigned int cFackCFpoll : 1; 
        unsigned int cFpoll : 1; 
        unsigned int dataCFack : 1; 
        unsigned int dataCFackCFpoll : 1; 
        unsigned int dataCFpoll : 1; 
        unsigned int dataFrames : 1; 
        unsigned int null : 1; 
        unsigned int qoSdata : 1; 
        unsigned int qoSdataCFack : 1; 
        unsigned int qoSdataCFackCFpoll : 1; 
        unsigned int qoSnodataCFack : 1; 
        unsigned int qoSnodataCFpoll : 1; 
        unsigned int qoSnull : 1; 
    }  _has;
    unsigned long long  _null;
    unsigned long long  _qoSdata;
    unsigned long long  _qoSdataCFack;
    unsigned long long  _qoSdataCFackCFpoll;
    unsigned long long  _qoSnodataCFack;
    unsigned long long  _qoSnodataCFpoll;
    unsigned long long  _qoSnull;
}

@property (nonatomic) unsigned long long cFack;
@property (nonatomic) unsigned long long cFackCFpoll;
@property (nonatomic) unsigned long long cFpoll;
@property (nonatomic) unsigned long long dataCFack;
@property (nonatomic) unsigned long long dataCFackCFpoll;
@property (nonatomic) unsigned long long dataCFpoll;
@property (nonatomic) unsigned long long dataFrames;
@property (nonatomic) bool hasCFack;
@property (nonatomic) bool hasCFackCFpoll;
@property (nonatomic) bool hasCFpoll;
@property (nonatomic) bool hasDataCFack;
@property (nonatomic) bool hasDataCFackCFpoll;
@property (nonatomic) bool hasDataCFpoll;
@property (nonatomic) bool hasDataFrames;
@property (nonatomic) bool hasNull;
@property (nonatomic) bool hasQoSdata;
@property (nonatomic) bool hasQoSdataCFack;
@property (nonatomic) bool hasQoSdataCFackCFpoll;
@property (nonatomic) bool hasQoSnodataCFack;
@property (nonatomic) bool hasQoSnodataCFpoll;
@property (nonatomic) bool hasQoSnull;
@property (nonatomic) unsigned long long null;
@property (nonatomic) unsigned long long qoSdata;
@property (nonatomic) unsigned long long qoSdataCFack;
@property (nonatomic) unsigned long long qoSdataCFackCFpoll;
@property (nonatomic) unsigned long long qoSnodataCFack;
@property (nonatomic) unsigned long long qoSnodataCFpoll;
@property (nonatomic) unsigned long long qoSnull;

- (unsigned long long)cFack;
- (unsigned long long)cFackCFpoll;
- (unsigned long long)cFpoll;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)dataCFack;
- (unsigned long long)dataCFackCFpoll;
- (unsigned long long)dataCFpoll;
- (unsigned long long)dataFrames;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCFack;
- (bool)hasCFackCFpoll;
- (bool)hasCFpoll;
- (bool)hasDataCFack;
- (bool)hasDataCFackCFpoll;
- (bool)hasDataCFpoll;
- (bool)hasDataFrames;
- (bool)hasNull;
- (bool)hasQoSdata;
- (bool)hasQoSdataCFack;
- (bool)hasQoSdataCFackCFpoll;
- (bool)hasQoSnodataCFack;
- (bool)hasQoSnodataCFpoll;
- (bool)hasQoSnull;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)null;
- (unsigned long long)qoSdata;
- (unsigned long long)qoSdataCFack;
- (unsigned long long)qoSdataCFackCFpoll;
- (unsigned long long)qoSnodataCFack;
- (unsigned long long)qoSnodataCFpoll;
- (unsigned long long)qoSnull;
- (bool)readFrom:(id)arg1;
- (void)setCFack:(unsigned long long)arg1;
- (void)setCFackCFpoll:(unsigned long long)arg1;
- (void)setCFpoll:(unsigned long long)arg1;
- (void)setDataCFack:(unsigned long long)arg1;
- (void)setDataCFackCFpoll:(unsigned long long)arg1;
- (void)setDataCFpoll:(unsigned long long)arg1;
- (void)setDataFrames:(unsigned long long)arg1;
- (void)setHasCFack:(bool)arg1;
- (void)setHasCFackCFpoll:(bool)arg1;
- (void)setHasCFpoll:(bool)arg1;
- (void)setHasDataCFack:(bool)arg1;
- (void)setHasDataCFackCFpoll:(bool)arg1;
- (void)setHasDataCFpoll:(bool)arg1;
- (void)setHasDataFrames:(bool)arg1;
- (void)setHasNull:(bool)arg1;
- (void)setHasQoSdata:(bool)arg1;
- (void)setHasQoSdataCFack:(bool)arg1;
- (void)setHasQoSdataCFackCFpoll:(bool)arg1;
- (void)setHasQoSnodataCFack:(bool)arg1;
- (void)setHasQoSnodataCFpoll:(bool)arg1;
- (void)setHasQoSnull:(bool)arg1;
- (void)setNull:(unsigned long long)arg1;
- (void)setQoSdata:(unsigned long long)arg1;
- (void)setQoSdataCFack:(unsigned long long)arg1;
- (void)setQoSdataCFackCFpoll:(unsigned long long)arg1;
- (void)setQoSnodataCFack:(unsigned long long)arg1;
- (void)setQoSnodataCFpoll:(unsigned long long)arg1;
- (void)setQoSnull:(unsigned long long)arg1;
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
