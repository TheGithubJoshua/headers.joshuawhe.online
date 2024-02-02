<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>HDCodableCDADocumentSample.h</title>
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

/PrivateFrameworks/HealthDaemon.framework/HDCodableCDADocumentSample.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon (1)
 */

@interface HDCodableCDADocumentSample : PBCodable <HDDecoding, NSCopying> {
    NSString * _authorName;
    NSString * _custodianName;
    NSData * _documentData;
    struct { 
        unsigned int omittedContent : 1; 
    }  _has;
    int  _omittedContent;
    NSString * _patientName;
    HDCodableSample * _sample;
    NSString * _title;
}

@property (nonatomic, retain) NSString *authorName;
@property (nonatomic, retain) NSString *custodianName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSData *documentData;
@property (nonatomic, readonly) bool hasAuthorName;
@property (nonatomic, readonly) bool hasCustodianName;
@property (nonatomic, readonly) bool hasDocumentData;
@property (nonatomic) bool hasOmittedContent;
@property (nonatomic, readonly) bool hasPatientName;
@property (nonatomic, readonly) bool hasSample;
@property (nonatomic, readonly) bool hasTitle;
@property (readonly) unsigned long long hash;
@property (nonatomic) int omittedContent;
@property (nonatomic, retain) NSString *patientName;
@property (nonatomic, retain) HDCodableSample *sample;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *title;

- (void).cxx_destruct;
- (int)StringAsOmittedContent:(id)arg1;
- (bool)applyToObject:(id)arg1;
- (id)authorName;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)custodianName;
- (id)description;
- (id)dictionaryRepresentation;
- (id)documentData;
- (bool)hasAuthorName;
- (bool)hasCustodianName;
- (bool)hasDocumentData;
- (bool)hasOmittedContent;
- (bool)hasPatientName;
- (bool)hasSample;
- (bool)hasTitle;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)omittedContent;
- (id)omittedContentAsString:(int)arg1;
- (id)patientName;
- (bool)readFrom:(id)arg1;
- (id)sample;
- (void)setAuthorName:(id)arg1;
- (void)setCustodianName:(id)arg1;
- (void)setDocumentData:(id)arg1;
- (void)setHasOmittedContent:(bool)arg1;
- (void)setOmittedContent:(int)arg1;
- (void)setPatientName:(id)arg1;
- (void)setSample:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
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