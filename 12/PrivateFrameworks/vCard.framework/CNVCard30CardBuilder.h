<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CNVCard30CardBuilder.h</title>
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

/PrivateFrameworks/vCard.framework/CNVCard30CardBuilder.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/vCard.framework/vCard ()
 */

@interface CNVCard30CardBuilder : NSObject {
    unsigned long long  _countOfLinesBeforePhoto;
    long long  _groupCount;
    <CNVCardLineFactory> * _lineFactory;
    NSMutableArray * _lines;
    <CNVCardPerson> * _person;
    bool  _photoHandled;
    id /* block */  _retrofitPhoto;
    NSMutableArray * _unknownProperties;
}

@property (nonatomic) unsigned long long countOfLinesBeforePhoto;
@property (nonatomic) long long groupCount;
@property (nonatomic, readonly) <CNVCardLineFactory> *lineFactory;
@property (nonatomic, readonly) NSMutableArray *lines;
@property (nonatomic, readonly) <CNVCardPerson> *person;
@property (nonatomic) bool photoHandled;
@property (nonatomic, readonly, copy) id /* block */ retrofitPhoto;
@property (nonatomic, readonly) NSMutableArray *unknownProperties;

+ (id)builderWithPerson:(id)arg1;
+ (unsigned long long)estimatedBytesAvailableForPhotoWithOptions:(id)arg1 serializer:(id)arg2;

- (void).cxx_destruct;
- (void)_addAttributesForCropRects:(id)arg1 imageHash:(id)arg2 toLine:(id)arg3;
- (void)addActivityAlerts;
- (void)addAlternateBirthday;
- (void)addBeginningOfCard;
- (void)addBirthday;
- (void)addCalendarURIs;
- (void)addCardDAVUID;
- (void)addCategories;
- (void)addCompanyMarker;
- (void)addEmailAddresses;
- (void)addEndOfCard;
- (void)addFullName;
- (void)addInstantMessagingHandles:(id)arg1;
- (void)addInstantMessagingInfo;
- (void)addLegacyInstantMessagingHandles:(id)arg1 forService:(id)arg2 vCardProperty:(id)arg3;
- (void)addLineWithName:(id)arg1 value:(id)arg2;
- (void)addNameComponents;
- (void)addNameLines;
- (void)addNameOrderMarker;
- (void)addNote;
- (void)addOrganization;
- (void)addOtherDates;
- (void)addPhoneNumbers;
- (void)addPhonemeData;
- (bool)addPhotoReferences;
- (void)addPhotoWithOptions:(id)arg1;
- (void)addPostalAddresses;
- (void)addPreferredApplePersonaIdentifier;
- (void)addPreferredLikenessSource;
- (void)addPropertyLinesForValues:(id)arg1 generator:(id)arg2;
- (void)addRelatedNames;
- (void)addSocialProfiles;
- (void)addUID;
- (void)addURLs;
- (void)addUnknownProperties;
- (void)buildWithSerializer:(id)arg1;
- (unsigned long long)countOfLinesBeforePhoto;
- (long long)groupCount;
- (id)initWithPerson:(id)arg1;
- (id)lineFactory;
- (id)lines;
- (id)person;
- (bool)photoHandled;
- (void)preparePhotoLineWithOptions:(id)arg1;
- (void)removeUnknownPropertiesWithTag:(id)arg1;
- (id /* block */)retrofitPhoto;
- (void)setCountOfLinesBeforePhoto:(unsigned long long)arg1;
- (void)setGroupCount:(long long)arg1;
- (void)setPhotoHandled:(bool)arg1;
- (id)unknownProperties;

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
