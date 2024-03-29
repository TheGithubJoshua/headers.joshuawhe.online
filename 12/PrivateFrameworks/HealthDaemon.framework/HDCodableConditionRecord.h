<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>HDCodableConditionRecord.h</title>
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

/PrivateFrameworks/HealthDaemon.framework/HDCodableConditionRecord.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon (1)
 */

@interface HDCodableConditionRecord : PBCodable <HDDecoding, NSCopying> {
    HDCodableInspectableValue * _abatement;
    NSString * _asserter;
    HDCodableMedicalCodingListList * _bodySitesCodings;
    HDCodableMedicalCodingList * _categoryCodings;
    HDCodableMedicalCoding * _clinicalStatusCoding;
    HDCodableMedicalCodingList * _conditionCodings;
    HDCodableMedicalRecord * _medicalRecord;
    HDCodableInspectableValue * _onset;
    NSData * _recordedDate;
    HDCodableMedicalCodingList * _severityCodings;
    HDCodableMedicalCoding * _verificationStatusCoding;
}

@property (nonatomic, retain) HDCodableInspectableValue *abatement;
@property (nonatomic, retain) NSString *asserter;
@property (nonatomic, retain) HDCodableMedicalCodingListList *bodySitesCodings;
@property (nonatomic, retain) HDCodableMedicalCodingList *categoryCodings;
@property (nonatomic, retain) HDCodableMedicalCoding *clinicalStatusCoding;
@property (nonatomic, retain) HDCodableMedicalCodingList *conditionCodings;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasAbatement;
@property (nonatomic, readonly) bool hasAsserter;
@property (nonatomic, readonly) bool hasBodySitesCodings;
@property (nonatomic, readonly) bool hasCategoryCodings;
@property (nonatomic, readonly) bool hasClinicalStatusCoding;
@property (nonatomic, readonly) bool hasConditionCodings;
@property (nonatomic, readonly) bool hasMedicalRecord;
@property (nonatomic, readonly) bool hasOnset;
@property (nonatomic, readonly) bool hasRecordedDate;
@property (nonatomic, readonly) bool hasSeverityCodings;
@property (nonatomic, readonly) bool hasVerificationStatusCoding;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HDCodableMedicalRecord *medicalRecord;
@property (nonatomic, retain) HDCodableInspectableValue *onset;
@property (nonatomic, retain) NSData *recordedDate;
@property (nonatomic, retain) HDCodableMedicalCodingList *severityCodings;
@property (readonly) Class superclass;
@property (nonatomic, retain) HDCodableMedicalCoding *verificationStatusCoding;

- (void).cxx_destruct;
- (id)abatement;
- (bool)applyToObject:(id)arg1;
- (bool)applyToObject:(id)arg1 error:(out id*)arg2;
- (id)asserter;
- (id)bodySitesCodings;
- (id)categoryCodings;
- (id)clinicalStatusCoding;
- (id)conditionCodings;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAbatement;
- (bool)hasAsserter;
- (bool)hasBodySitesCodings;
- (bool)hasCategoryCodings;
- (bool)hasClinicalStatusCoding;
- (bool)hasConditionCodings;
- (bool)hasMedicalRecord;
- (bool)hasOnset;
- (bool)hasRecordedDate;
- (bool)hasSeverityCodings;
- (bool)hasVerificationStatusCoding;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)medicalRecord;
- (void)mergeFrom:(id)arg1;
- (id)onset;
- (bool)readFrom:(id)arg1;
- (id)recordedDate;
- (void)setAbatement:(id)arg1;
- (void)setAsserter:(id)arg1;
- (void)setBodySitesCodings:(id)arg1;
- (void)setCategoryCodings:(id)arg1;
- (void)setClinicalStatusCoding:(id)arg1;
- (void)setConditionCodings:(id)arg1;
- (void)setMedicalRecord:(id)arg1;
- (void)setOnset:(id)arg1;
- (void)setRecordedDate:(id)arg1;
- (void)setSeverityCodings:(id)arg1;
- (void)setVerificationStatusCoding:(id)arg1;
- (id)severityCodings;
- (id)verificationStatusCoding;
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
