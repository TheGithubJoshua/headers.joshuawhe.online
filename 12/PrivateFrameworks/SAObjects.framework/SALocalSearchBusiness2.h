<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>SALocalSearchBusiness2.h</title>
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

/PrivateFrameworks/SAObjects.framework/SALocalSearchBusiness2.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects (1)
 */

@interface SALocalSearchBusiness2 : SADomainObject <SAAceSerializable>

@property (nonatomic, retain) SALocation *address;
@property (nonatomic, copy) NSURL *businessUrl;
@property (nonatomic, copy) NSArray *categories;
@property (nonatomic, copy) NSArray *commands;
@property (nonatomic, copy) NSString *currencySymbol;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *descriptionText;
@property (nonatomic, copy) NSString *extSessionGuid;
@property (nonatomic, copy) NSDate *extSessionGuidCreatedTimestamp;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSDictionary *identifierMap;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSArray *offerLists;
@property (nonatomic, retain) SALocalSearchOperationHours *operationHours;
@property (nonatomic, copy) NSString *phoneNumber;
@property (nonatomic, copy) NSArray *photoList;
@property (nonatomic, copy) NSData *placeData2;
@property (nonatomic, copy) NSString *priceRange;
@property (nonatomic, copy) NSArray *reviewList;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)business2;
+ (id)business2WithDictionary:(id)arg1 context:(id)arg2;

- (id)address;
- (id)businessUrl;
- (id)categories;
- (id)commands;
- (id)currencySymbol;
- (id)descriptionText;
- (id)encodedClassName;
- (id)extSessionGuid;
- (id)extSessionGuidCreatedTimestamp;
- (id)groupIdentifier;
- (id)identifierMap;
- (id)name;
- (id)offerLists;
- (id)operationHours;
- (id)phoneNumber;
- (id)photoList;
- (id)placeData2;
- (id)priceRange;
- (id)reviewList;
- (void)setAddress:(id)arg1;
- (void)setBusinessUrl:(id)arg1;
- (void)setCategories:(id)arg1;
- (void)setCommands:(id)arg1;
- (void)setCurrencySymbol:(id)arg1;
- (void)setDescriptionText:(id)arg1;
- (void)setExtSessionGuid:(id)arg1;
- (void)setExtSessionGuidCreatedTimestamp:(id)arg1;
- (void)setIdentifierMap:(id)arg1;
- (void)setName:(id)arg1;
- (void)setOfferLists:(id)arg1;
- (void)setOperationHours:(id)arg1;
- (void)setPhoneNumber:(id)arg1;
- (void)setPhotoList:(id)arg1;
- (void)setPlaceData2:(id)arg1;
- (void)setPriceRange:(id)arg1;
- (void)setReviewList:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI

+ (id)afui_mapsURLForLocalSearchBusiness2s:(id)arg1;

- (id)afui_mapItemRepresentation;
- (id)afui_mapsURL;
- (id)donateActivityCommand;

// Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI

+ (id)siriui_mapsURLForLocalSearchBusiness2s:(id)arg1;

- (id)siriui_mapItemRepresentation;
- (id)siriui_mapsURL;

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
