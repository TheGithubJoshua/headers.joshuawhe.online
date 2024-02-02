<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>_INPBStartAudioCallIntent.h</title>
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

/Frameworks/Intents.framework/_INPBStartAudioCallIntent.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/Intents.framework/Intents (1)
 */

@interface _INPBStartAudioCallIntent : PBCodable <NSCopying, NSSecureCoding, _INPBStartAudioCallIntent> {
    int  _audioRoute;
    NSArray * _contacts;
    int  _destinationType;
    struct { 
        unsigned int audioRoute : 1; 
        unsigned int destinationType : 1; 
        unsigned int preferredCallProvider : 1; 
        unsigned int ttyType : 1; 
    }  _has;
    _INPBIntentMetadata * _intentMetadata;
    int  _preferredCallProvider;
    NSArray * _targetContacts;
    int  _ttyType;
}

@property (nonatomic) int audioRoute;
@property (nonatomic, copy) NSArray *contacts;
@property (nonatomic, readonly) unsigned long long contactsCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int destinationType;
@property (nonatomic) bool hasAudioRoute;
@property (nonatomic) bool hasDestinationType;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (nonatomic) bool hasPreferredCallProvider;
@property (nonatomic) bool hasTtyType;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (nonatomic) int preferredCallProvider;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *targetContacts;
@property (nonatomic, readonly) unsigned long long targetContactsCount;
@property (nonatomic) int ttyType;

+ (Class)contactType;
+ (Class)targetContactsType;

- (void).cxx_destruct;
- (int)StringAsAudioRoute:(id)arg1;
- (int)StringAsDestinationType:(id)arg1;
- (int)StringAsPreferredCallProvider:(id)arg1;
- (int)StringAsTTYType:(id)arg1;
- (void)addContact:(id)arg1;
- (void)addTargetContacts:(id)arg1;
- (int)audioRoute;
- (id)audioRouteAsString:(int)arg1;
- (void)clearContacts;
- (void)clearTargetContacts;
- (id)contactAtIndex:(unsigned long long)arg1;
- (id)contacts;
- (unsigned long long)contactsCount;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)destinationType;
- (id)destinationTypeAsString:(int)arg1;
- (id)dictionaryRepresentation;
- (bool)hasAudioRoute;
- (bool)hasDestinationType;
- (bool)hasIntentMetadata;
- (bool)hasPreferredCallProvider;
- (bool)hasTtyType;
- (unsigned long long)hash;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (int)preferredCallProvider;
- (id)preferredCallProviderAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAudioRoute:(int)arg1;
- (void)setContacts:(id)arg1;
- (void)setDestinationType:(int)arg1;
- (void)setHasAudioRoute:(bool)arg1;
- (void)setHasDestinationType:(bool)arg1;
- (void)setHasPreferredCallProvider:(bool)arg1;
- (void)setHasTtyType:(bool)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)setPreferredCallProvider:(int)arg1;
- (void)setTargetContacts:(id)arg1;
- (void)setTtyType:(int)arg1;
- (id)targetContacts;
- (id)targetContactsAtIndex:(unsigned long long)arg1;
- (unsigned long long)targetContactsCount;
- (int)ttyType;
- (id)ttyTypeAsString:(int)arg1;
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