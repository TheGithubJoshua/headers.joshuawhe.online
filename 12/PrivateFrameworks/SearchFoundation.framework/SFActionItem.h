<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>SFActionItem.h</title>
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

/PrivateFrameworks/SearchFoundation.framework/SFActionItem.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation (213.5.3)
 */

@interface SFActionItem : NSObject <NSCopying, NSSecureCoding, SFActionItem> {
    NSString * _applicationBundleIdentifier;
    SFImage * _baseIcon;
    NSString * _contactIdentifier;
    NSString * _email;
    struct { 
        unsigned int isOverlay : 1; 
        unsigned int requiresLocalMedia : 1; 
        unsigned int latitude : 1; 
        unsigned int longitude : 1; 
        unsigned int isITunes : 1; 
        unsigned int mediaEntityType : 1; 
    }  _has;
    SFImage * _icon;
    bool  _isITunes;
    bool  _isOverlay;
    NSString * _label;
    NSString * _labelForLocalMedia;
    NSString * _labelITunes;
    double  _latitude;
    NSString * _localMediaIdentifier;
    SFLatLng * _location;
    double  _longitude;
    NSData * _mapsData;
    int  _mediaEntityType;
    NSString * _messageIdentifier;
    NSURL * _messageURL;
    NSString * _offerType;
    NSString * _persistentID;
    NSString * _phoneNumber;
    NSString * _provider;
    SFPunchout * _punchout;
    bool  _requiresLocalMedia;
    NSArray * _storeIdentifiers;
    NSString * _type;
}

@property (nonatomic, copy) NSString *applicationBundleIdentifier;
@property (nonatomic, retain) SFImage *baseIcon;
@property (nonatomic, copy) NSString *contactIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, copy) NSString *email;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SFImage *icon;
@property (nonatomic) bool isITunes;
@property (nonatomic) bool isOverlay;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, copy) NSString *labelForLocalMedia;
@property (nonatomic, copy) NSString *labelITunes;
@property (nonatomic) double latitude;
@property (nonatomic, copy) NSString *localMediaIdentifier;
@property (nonatomic, retain) SFLatLng *location;
@property (nonatomic) double longitude;
@property (nonatomic, copy) NSData *mapsData;
@property (nonatomic) int mediaEntityType;
@property (nonatomic, copy) NSString *messageIdentifier;
@property (nonatomic, copy) NSURL *messageURL;
@property (nonatomic, copy) NSString *offerType;
@property (nonatomic, copy) NSString *persistentID;
@property (nonatomic, copy) NSString *phoneNumber;
@property (nonatomic, copy) NSString *provider;
@property (nonatomic, retain) SFPunchout *punchout;
@property (nonatomic) bool requiresLocalMedia;
@property (nonatomic, copy) NSArray *storeIdentifiers;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)applicationBundleIdentifier;
- (id)baseIcon;
- (id)contactIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (id)email;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasIsITunes;
- (bool)hasIsOverlay;
- (bool)hasLatitude;
- (bool)hasLongitude;
- (bool)hasMediaEntityType;
- (bool)hasRequiresLocalMedia;
- (id)icon;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (bool)isITunes;
- (bool)isOverlay;
- (id)jsonData;
- (id)label;
- (id)labelForLocalMedia;
- (id)labelITunes;
- (double)latitude;
- (id)localMediaIdentifier;
- (id)location;
- (double)longitude;
- (id)mapsData;
- (int)mediaEntityType;
- (id)messageIdentifier;
- (id)messageURL;
- (id)offerType;
- (id)persistentID;
- (id)phoneNumber;
- (id)provider;
- (id)punchout;
- (bool)requiresLocalMedia;
- (void)setApplicationBundleIdentifier:(id)arg1;
- (void)setBaseIcon:(id)arg1;
- (void)setContactIdentifier:(id)arg1;
- (void)setEmail:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)setIsITunes:(bool)arg1;
- (void)setIsOverlay:(bool)arg1;
- (void)setLabel:(id)arg1;
- (void)setLabelForLocalMedia:(id)arg1;
- (void)setLabelITunes:(id)arg1;
- (void)setLatitude:(double)arg1;
- (void)setLocalMediaIdentifier:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setLongitude:(double)arg1;
- (void)setMapsData:(id)arg1;
- (void)setMediaEntityType:(int)arg1;
- (void)setMessageIdentifier:(id)arg1;
- (void)setMessageURL:(id)arg1;
- (void)setOfferType:(id)arg1;
- (void)setPersistentID:(id)arg1;
- (void)setPhoneNumber:(id)arg1;
- (void)setProvider:(id)arg1;
- (void)setPunchout:(id)arg1;
- (void)setRequiresLocalMedia:(bool)arg1;
- (void)setStoreIdentifiers:(id)arg1;
- (void)setType:(id)arg1;
- (id)storeIdentifiers;
- (id)type;

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