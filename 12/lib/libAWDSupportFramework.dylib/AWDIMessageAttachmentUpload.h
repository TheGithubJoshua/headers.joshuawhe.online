<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>AWDIMessageAttachmentUpload.h</title>
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

/lib/libAWDSupportFramework.dylib/AWDIMessageAttachmentUpload.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDIMessageAttachmentUpload : PBCodable <NSCopying> {
    unsigned int  _attachmentSize;
    unsigned int  _connectionType;
    int  _firstLevelMMCSError;
    NSString * _firstLevelMMCSErrorDomain;
    int  _fourthLevelMMCSError;
    NSString * _fourthLevelMMCSErrorDomain;
    int  _fzError;
    int  _genericError;
    NSString * _guid;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int attachmentSize : 1; 
        unsigned int connectionType : 1; 
        unsigned int firstLevelMMCSError : 1; 
        unsigned int fourthLevelMMCSError : 1; 
        unsigned int fzError : 1; 
        unsigned int genericError : 1; 
        unsigned int lastPrewarmDuration : 1; 
        unsigned int linkQuality : 1; 
        unsigned int messageError : 1; 
        unsigned int secondLevelMMCSError : 1; 
        unsigned int thirdLevelMMCSError : 1; 
        unsigned int timeFromLastPrewarm : 1; 
        unsigned int tokenError : 1; 
        unsigned int uploadDuration : 1; 
    }  _has;
    unsigned int  _lastPrewarmDuration;
    int  _linkQuality;
    unsigned int  _messageError;
    int  _secondLevelMMCSError;
    NSString * _secondLevelMMCSErrorDomain;
    int  _thirdLevelMMCSError;
    NSString * _thirdLevelMMCSErrorDomain;
    unsigned int  _timeFromLastPrewarm;
    unsigned long long  _timestamp;
    unsigned int  _tokenError;
    unsigned int  _uploadDuration;
}

@property (nonatomic) unsigned int attachmentSize;
@property (nonatomic) unsigned int connectionType;
@property (nonatomic) int firstLevelMMCSError;
@property (nonatomic, retain) NSString *firstLevelMMCSErrorDomain;
@property (nonatomic) int fourthLevelMMCSError;
@property (nonatomic, retain) NSString *fourthLevelMMCSErrorDomain;
@property (nonatomic) int fzError;
@property (nonatomic) int genericError;
@property (nonatomic, retain) NSString *guid;
@property (nonatomic) bool hasAttachmentSize;
@property (nonatomic) bool hasConnectionType;
@property (nonatomic) bool hasFirstLevelMMCSError;
@property (nonatomic, readonly) bool hasFirstLevelMMCSErrorDomain;
@property (nonatomic) bool hasFourthLevelMMCSError;
@property (nonatomic, readonly) bool hasFourthLevelMMCSErrorDomain;
@property (nonatomic) bool hasFzError;
@property (nonatomic) bool hasGenericError;
@property (nonatomic, readonly) bool hasGuid;
@property (nonatomic) bool hasLastPrewarmDuration;
@property (nonatomic) bool hasLinkQuality;
@property (nonatomic) bool hasMessageError;
@property (nonatomic) bool hasSecondLevelMMCSError;
@property (nonatomic, readonly) bool hasSecondLevelMMCSErrorDomain;
@property (nonatomic) bool hasThirdLevelMMCSError;
@property (nonatomic, readonly) bool hasThirdLevelMMCSErrorDomain;
@property (nonatomic) bool hasTimeFromLastPrewarm;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasTokenError;
@property (nonatomic) bool hasUploadDuration;
@property (nonatomic) unsigned int lastPrewarmDuration;
@property (nonatomic) int linkQuality;
@property (nonatomic) unsigned int messageError;
@property (nonatomic) int secondLevelMMCSError;
@property (nonatomic, retain) NSString *secondLevelMMCSErrorDomain;
@property (nonatomic) int thirdLevelMMCSError;
@property (nonatomic, retain) NSString *thirdLevelMMCSErrorDomain;
@property (nonatomic) unsigned int timeFromLastPrewarm;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned int tokenError;
@property (nonatomic) unsigned int uploadDuration;

- (unsigned int)attachmentSize;
- (unsigned int)connectionType;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (int)firstLevelMMCSError;
- (id)firstLevelMMCSErrorDomain;
- (int)fourthLevelMMCSError;
- (id)fourthLevelMMCSErrorDomain;
- (int)fzError;
- (int)genericError;
- (id)guid;
- (bool)hasAttachmentSize;
- (bool)hasConnectionType;
- (bool)hasFirstLevelMMCSError;
- (bool)hasFirstLevelMMCSErrorDomain;
- (bool)hasFourthLevelMMCSError;
- (bool)hasFourthLevelMMCSErrorDomain;
- (bool)hasFzError;
- (bool)hasGenericError;
- (bool)hasGuid;
- (bool)hasLastPrewarmDuration;
- (bool)hasLinkQuality;
- (bool)hasMessageError;
- (bool)hasSecondLevelMMCSError;
- (bool)hasSecondLevelMMCSErrorDomain;
- (bool)hasThirdLevelMMCSError;
- (bool)hasThirdLevelMMCSErrorDomain;
- (bool)hasTimeFromLastPrewarm;
- (bool)hasTimestamp;
- (bool)hasTokenError;
- (bool)hasUploadDuration;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned int)lastPrewarmDuration;
- (int)linkQuality;
- (void)mergeFrom:(id)arg1;
- (unsigned int)messageError;
- (bool)readFrom:(id)arg1;
- (int)secondLevelMMCSError;
- (id)secondLevelMMCSErrorDomain;
- (void)setAttachmentSize:(unsigned int)arg1;
- (void)setConnectionType:(unsigned int)arg1;
- (void)setFirstLevelMMCSError:(int)arg1;
- (void)setFirstLevelMMCSErrorDomain:(id)arg1;
- (void)setFourthLevelMMCSError:(int)arg1;
- (void)setFourthLevelMMCSErrorDomain:(id)arg1;
- (void)setFzError:(int)arg1;
- (void)setGenericError:(int)arg1;
- (void)setGuid:(id)arg1;
- (void)setHasAttachmentSize:(bool)arg1;
- (void)setHasConnectionType:(bool)arg1;
- (void)setHasFirstLevelMMCSError:(bool)arg1;
- (void)setHasFourthLevelMMCSError:(bool)arg1;
- (void)setHasFzError:(bool)arg1;
- (void)setHasGenericError:(bool)arg1;
- (void)setHasLastPrewarmDuration:(bool)arg1;
- (void)setHasLinkQuality:(bool)arg1;
- (void)setHasMessageError:(bool)arg1;
- (void)setHasSecondLevelMMCSError:(bool)arg1;
- (void)setHasThirdLevelMMCSError:(bool)arg1;
- (void)setHasTimeFromLastPrewarm:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasTokenError:(bool)arg1;
- (void)setHasUploadDuration:(bool)arg1;
- (void)setLastPrewarmDuration:(unsigned int)arg1;
- (void)setLinkQuality:(int)arg1;
- (void)setMessageError:(unsigned int)arg1;
- (void)setSecondLevelMMCSError:(int)arg1;
- (void)setSecondLevelMMCSErrorDomain:(id)arg1;
- (void)setThirdLevelMMCSError:(int)arg1;
- (void)setThirdLevelMMCSErrorDomain:(id)arg1;
- (void)setTimeFromLastPrewarm:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTokenError:(unsigned int)arg1;
- (void)setUploadDuration:(unsigned int)arg1;
- (int)thirdLevelMMCSError;
- (id)thirdLevelMMCSErrorDomain;
- (unsigned int)timeFromLastPrewarm;
- (unsigned long long)timestamp;
- (unsigned int)tokenError;
- (unsigned int)uploadDuration;
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
