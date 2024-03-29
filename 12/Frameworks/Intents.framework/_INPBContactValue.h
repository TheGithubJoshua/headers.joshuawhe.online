<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>_INPBContactValue.h</title>
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

/Frameworks/Intents.framework/_INPBContactValue.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/Intents.framework/Intents (1)
 */

@interface _INPBContactValue : PBCodable <NSCopying, NSSecureCoding, _INPBContactValue> {
    NSArray * _aliases;
    _INPBContactHandle * _contactHandle;
    NSString * _customIdentifier;
    NSString * _firstName;
    NSString * _fullName;
    NSString * _handle;
    struct { 
        unsigned int isMe : 1; 
        unsigned int suggestionType : 1; 
    }  _has;
    _INPBImageValue * _image;
    bool  _isMe;
    NSString * _lastName;
    NSString * _middleName;
    NSString * _namePrefix;
    NSString * _nameSuffix;
    NSString * _nickName;
    NSString * _phoneticFirstName;
    NSString * _phoneticLastName;
    NSString * _phoneticMiddleName;
    NSString * _phoneticNamePrefix;
    NSString * _phoneticNameSuffix;
    NSString * _relationship;
    int  _suggestionType;
    _INPBValueMetadata * _valueMetadata;
}

@property (nonatomic, copy) NSArray *aliases;
@property (nonatomic, readonly) unsigned long long aliasesCount;
@property (nonatomic, retain) _INPBContactHandle *contactHandle;
@property (nonatomic, copy) NSString *customIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *firstName;
@property (nonatomic, copy) NSString *fullName;
@property (nonatomic, copy) NSString *handle;
@property (nonatomic, readonly) bool hasContactHandle;
@property (nonatomic, readonly) bool hasCustomIdentifier;
@property (nonatomic, readonly) bool hasFirstName;
@property (nonatomic, readonly) bool hasFullName;
@property (nonatomic, readonly) bool hasHandle;
@property (nonatomic, readonly) bool hasImage;
@property (nonatomic) bool hasIsMe;
@property (nonatomic, readonly) bool hasLastName;
@property (nonatomic, readonly) bool hasMiddleName;
@property (nonatomic, readonly) bool hasNamePrefix;
@property (nonatomic, readonly) bool hasNameSuffix;
@property (nonatomic, readonly) bool hasNickName;
@property (nonatomic, readonly) bool hasPhoneticFirstName;
@property (nonatomic, readonly) bool hasPhoneticLastName;
@property (nonatomic, readonly) bool hasPhoneticMiddleName;
@property (nonatomic, readonly) bool hasPhoneticNamePrefix;
@property (nonatomic, readonly) bool hasPhoneticNameSuffix;
@property (nonatomic, readonly) bool hasRelationship;
@property (nonatomic) bool hasSuggestionType;
@property (nonatomic, readonly) bool hasValueMetadata;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBImageValue *image;
@property (nonatomic) bool isMe;
@property (nonatomic, copy) NSString *lastName;
@property (nonatomic, copy) NSString *middleName;
@property (nonatomic, copy) NSString *namePrefix;
@property (nonatomic, copy) NSString *nameSuffix;
@property (nonatomic, copy) NSString *nickName;
@property (nonatomic, copy) NSString *phoneticFirstName;
@property (nonatomic, copy) NSString *phoneticLastName;
@property (nonatomic, copy) NSString *phoneticMiddleName;
@property (nonatomic, copy) NSString *phoneticNamePrefix;
@property (nonatomic, copy) NSString *phoneticNameSuffix;
@property (nonatomic, copy) NSString *relationship;
@property (nonatomic) int suggestionType;
@property (readonly) Class superclass;
@property (nonatomic, retain) _INPBValueMetadata *valueMetadata;

+ (Class)aliasesType;

- (void).cxx_destruct;
- (int)StringAsSuggestionType:(id)arg1;
- (void)addAliases:(id)arg1;
- (id)aliases;
- (id)aliasesAtIndex:(unsigned long long)arg1;
- (unsigned long long)aliasesCount;
- (void)clearAliases;
- (id)contactHandle;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customIdentifier;
- (id)dictionaryRepresentation;
- (id)firstName;
- (id)fullName;
- (id)handle;
- (bool)hasContactHandle;
- (bool)hasCustomIdentifier;
- (bool)hasFirstName;
- (bool)hasFullName;
- (bool)hasHandle;
- (bool)hasImage;
- (bool)hasIsMe;
- (bool)hasLastName;
- (bool)hasMiddleName;
- (bool)hasNamePrefix;
- (bool)hasNameSuffix;
- (bool)hasNickName;
- (bool)hasPhoneticFirstName;
- (bool)hasPhoneticLastName;
- (bool)hasPhoneticMiddleName;
- (bool)hasPhoneticNamePrefix;
- (bool)hasPhoneticNameSuffix;
- (bool)hasRelationship;
- (bool)hasSuggestionType;
- (bool)hasValueMetadata;
- (unsigned long long)hash;
- (id)image;
- (bool)isEqual:(id)arg1;
- (bool)isMe;
- (id)lastName;
- (id)middleName;
- (id)namePrefix;
- (id)nameSuffix;
- (id)nickName;
- (id)phoneticFirstName;
- (id)phoneticLastName;
- (id)phoneticMiddleName;
- (id)phoneticNamePrefix;
- (id)phoneticNameSuffix;
- (bool)readFrom:(id)arg1;
- (id)relationship;
- (void)setAliases:(id)arg1;
- (void)setContactHandle:(id)arg1;
- (void)setCustomIdentifier:(id)arg1;
- (void)setFirstName:(id)arg1;
- (void)setFullName:(id)arg1;
- (void)setHandle:(id)arg1;
- (void)setHasIsMe:(bool)arg1;
- (void)setHasSuggestionType:(bool)arg1;
- (void)setImage:(id)arg1;
- (void)setIsMe:(bool)arg1;
- (void)setLastName:(id)arg1;
- (void)setMiddleName:(id)arg1;
- (void)setNamePrefix:(id)arg1;
- (void)setNameSuffix:(id)arg1;
- (void)setNickName:(id)arg1;
- (void)setPhoneticFirstName:(id)arg1;
- (void)setPhoneticLastName:(id)arg1;
- (void)setPhoneticMiddleName:(id)arg1;
- (void)setPhoneticNamePrefix:(id)arg1;
- (void)setPhoneticNameSuffix:(id)arg1;
- (void)setRelationship:(id)arg1;
- (void)setSuggestionType:(int)arg1;
- (void)setValueMetadata:(id)arg1;
- (int)suggestionType;
- (id)suggestionTypeAsString:(int)arg1;
- (id)valueMetadata;
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
