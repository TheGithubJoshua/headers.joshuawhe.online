<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>SFAirDropTransferMetaData.h</title>
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

/PrivateFrameworks/Sharing.framework/SFAirDropTransferMetaData.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing (1288.66)
 */

@interface SFAirDropTransferMetaData : NSObject <NSSecureCoding> {
    bool  _canAutoAccept;
    NSString * _contactIdentifier;
    bool  _didAutoAccept;
    NSSet * _items;
    NSString * _itemsDescription;
    NSDictionary * _itemsDescriptionAdvanced;
    id  _previewImage;
    NSArray * _rawFiles;
    NSString * _senderBundleID;
    NSString * _senderCompositeName;
    NSString * _senderComputerName;
    NSString * _senderEmail;
    NSString * _senderEmailHash;
    NSString * _senderFirstName;
    NSString * _senderID;
    id  _senderIcon;
    bool  _senderIsMe;
    NSString * _senderLastName;
    id  _smallPreviewImage;
    long long  _transferTypes;
    bool  _verifiableIdentity;
}

@property (nonatomic, readonly) bool canAutoAccept;
@property (nonatomic, readonly, copy) NSString *contactIdentifier;
@property (nonatomic) bool didAutoAccept;
@property (nonatomic, copy) NSSet *items;
@property (nonatomic, readonly, copy) NSString *itemsDescription;
@property (nonatomic, readonly, copy) NSDictionary *itemsDescriptionAdvanced;
@property (nonatomic, readonly) id previewImage;
@property (nonatomic, readonly, copy) NSArray *rawFiles;
@property (nonatomic, readonly, copy) NSString *senderBundleID;
@property (nonatomic, readonly, copy) NSString *senderCompositeName;
@property (nonatomic, readonly, copy) NSString *senderComputerName;
@property (nonatomic, readonly, copy) NSString *senderEmail;
@property (nonatomic, readonly, copy) NSString *senderEmailHash;
@property (nonatomic, readonly, copy) NSString *senderFirstName;
@property (nonatomic, readonly, copy) NSString *senderID;
@property (nonatomic, readonly) id senderIcon;
@property (nonatomic, readonly) bool senderIsMe;
@property (nonatomic, readonly, copy) NSString *senderLastName;
@property (nonatomic, readonly) id smallPreviewImage;
@property (nonatomic) long long transferTypes;
@property (getter=isVerifiableIdentity, nonatomic, readonly) bool verifiableIdentity;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)canAutoAccept;
- (id)contactIdentifier;
- (id)description;
- (bool)didAutoAccept;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithInformation:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isVerifiableIdentity;
- (id)items;
- (id)itemsDescription;
- (id)itemsDescriptionAdvanced;
- (id)previewImage;
- (id)rawFiles;
- (id)senderBundleID;
- (id)senderCompositeName;
- (id)senderComputerName;
- (id)senderEmail;
- (id)senderEmailHash;
- (id)senderFirstName;
- (id)senderID;
- (id)senderIcon;
- (bool)senderIsMe;
- (id)senderLastName;
- (void)setDidAutoAccept:(bool)arg1;
- (void)setItems:(id)arg1;
- (void)setItemsDescription:(id)arg1;
- (void)setTransferTypes:(long long)arg1;
- (id)smallPreviewImage;
- (long long)transferTypes;
- (void)updateUsingCoder:(id)arg1;

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
