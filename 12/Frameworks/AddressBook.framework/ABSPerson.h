<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>ABSPerson.h</title>
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

/Frameworks/AddressBook.framework/ABSPerson.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/AddressBook.framework/AddressBook (1)
 */

@interface ABSPerson : NSObject <ABSRecord> {
    ABSAddressBook * _addressBook;
    CNMutableContact * _cnImpl;
    NSMutableSet * _nonNilSetProperties;
    NSString * _revertedRecordIdentifier;
    ABSSource * _source;
}

@property (nonatomic, readonly) NSString *CNIdentifierString;
@property (nonatomic) ABSAddressBook *addressBook;
@property (nonatomic, retain) CNMutableContact *cnImpl;
@property (nonatomic, readonly) NSString *compositeName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int id;
@property (nonatomic, retain) NSMutableSet *nonNilSetProperties;
@property (nonatomic, retain) NSString *revertedRecordIdentifier;
@property (nonatomic) ABSSource *source;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned int type;

+ (unsigned int)compositeNameFormat;
+ (unsigned int)compositeNameFormatForPerson:(id)arg1;
+ (id)copyCompositeNameDelimiterForPerson:(id)arg1;
+ (id)createPeopleInSource:(id)arg1 withVCardRepresentation:(id)arg2;
+ (id)defaultKeysToFetch;
+ (id)localizedNameForProperty:(int)arg1;
+ (id)nameForProperty:(int)arg1;
+ (id)propertyKeyForPropertyID:(int)arg1;
+ (void)setCompositeNameFormat:(unsigned int)arg1;
+ (unsigned int)sortOrdering;
+ (unsigned int)typeForProperty:(int)arg1;
+ (id)vCardRepresentationForPeople:(id)arg1;

- (void).cxx_destruct;
- (id)CNIdentifierString;
- (unsigned long long)_cfTypeID;
- (id)addressBook;
- (id)cnImpl;
- (long long)comparePersonByName:(id)arg1 sortOrdering:(unsigned int)arg2;
- (bool)completeCNImplIfNeededWithKeysToFetch:(id)arg1;
- (id)compositeName;
- (unsigned int)compositeNameFormat;
- (id)copyCompositeNameDelimiter;
- (id)copyImageData;
- (id)copyImageDataWithFormat:(int)arg1;
- (const void*)copyValueForProperty:(int)arg1;
- (bool)hasImageData;
- (int)id;
- (id)init;
- (id)initWithMutableContact:(id)arg1;
- (id)initWithMutableContact:(id)arg1 source:(id)arg2;
- (id)initWithSource:(id)arg1;
- (id)linkedPeople;
- (id)nonNilSetProperties;
- (bool)removeImageDataWithError:(id*)arg1;
- (bool)removeProperty:(int)arg1 withError:(id*)arg2;
- (void)replaceRecordStorageWithCNObject:(id)arg1;
- (id)revertedRecordIdentifier;
- (void)setAddressBook:(id)arg1;
- (void)setCnImpl:(id)arg1;
- (bool)setImageData:(id)arg1 withError:(id*)arg2;
- (void)setNonNilSetProperties:(id)arg1;
- (void)setRevertedRecordIdentifier:(id)arg1;
- (void)setSource:(id)arg1;
- (bool)setValue:(void*)arg1 forProperty:(int)arg2 withError:(struct __CFError {}**)arg3;
- (id)source;
- (unsigned int)type;

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
