<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>SFDeviceAssetQuery.h</title>
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

/PrivateFrameworks/Sharing.framework/SFDeviceAssetQuery.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing (1288.66)
 */

@interface SFDeviceAssetQuery : NSObject {
    NSDictionary * _additionalQueryParameters;
    NSString * _assetType;
    NSString * _color;
    NSString * _colorCoverGlass;
    NSString * _colorHousing;
    NSString * _enclosureMaterial;
    bool  _forEngagement;
    bool  _legacyFormats;
    NSString * _mappedMarketingProductNumber;
    NSString * _mappedProductType;
    NSString * _marketingProductNumber;
    NSString * _productType;
    struct LogCategory { int x1; int x2; char *x3; unsigned int x4; char *x5; char *x6; int x7; struct LogCategory {} *x8; struct LogOutput {} *x9; struct LogOutput {} *x10; unsigned long long x11; unsigned long long x12; unsigned int x13; unsigned int x14; char *x15; struct LogCategoryPrivate {} *x16; } * _ucat;
    unsigned long long  _version;
}

@property (nonatomic, readonly) NSDictionary *additionalQueryParameters;
@property (nonatomic, readonly) NSString *assetType;
@property (nonatomic, readonly) NSString *color;
@property (nonatomic, readonly) NSString *colorCoverGlass;
@property (nonatomic, readonly) NSString *colorHousing;
@property (nonatomic, readonly) NSString *effectiveMarketingProductNumber;
@property (nonatomic, readonly) NSString *effectiveProductType;
@property (nonatomic, readonly) NSString *enclosureMaterial;
@property (nonatomic, readonly) bool forEngagement;
@property (nonatomic, readonly) bool legacyFormats;
@property (nonatomic, retain) NSString *mappedMarketingProductNumber;
@property (nonatomic, retain) NSString *mappedProductType;
@property (nonatomic, readonly) NSString *marketingProductNumber;
@property (nonatomic, readonly) NSString *productType;
@property (nonatomic, readonly) NSString *stringIdentifier;
@property (nonatomic, readonly) struct LogCategory { int x1; int x2; char *x3; unsigned int x4; char *x5; char *x6; int x7; struct LogCategory {} *x8; struct LogOutput {} *x9; struct LogOutput {} *x10; unsigned long long x11; unsigned long long x12; unsigned int x13; unsigned int x14; char *x15; struct LogCategoryPrivate {} *x16; }*ucat;
@property (nonatomic, readonly) NSString *variantIdentifier;
@property (nonatomic, readonly) unsigned long long version;

+ (bool)deviceWantsLegacyFormats;

- (void).cxx_destruct;
- (id)additionalQueryParameters;
- (id)assetType;
- (id)color;
- (id)colorCoverGlass;
- (id)colorHousing;
- (void)dealloc;
- (id)description;
- (id)effectiveMarketingProductNumber;
- (id)effectiveProductType;
- (id)enclosureMaterial;
- (bool)forEngagement;
- (unsigned long long)hash;
- (id)initWithAssetType:(id)arg1 productType:(id)arg2;
- (id)initWithBluetoothProductIdentifier:(unsigned long long)arg1 color:(unsigned long long)arg2 engagement:(bool)arg3;
- (id)initWithHomePodColor:(unsigned long long)arg1;
- (id)initWithPhoneCaseProductType:(id)arg1 color:(id)arg2;
- (id)initWithPhoneProductType:(id)arg1 colorHousing:(id)arg2 colorCoverGlass:(id)arg3;
- (id)initWithProductType:(id)arg1 additionalQueryParameters:(id)arg2;
- (id)initWithWatchProductType:(id)arg1 marketingProductNumber:(id)arg2 enclosureMaterial:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)legacyFormats;
- (id)loggingMarketingProductNumber;
- (id)loggingProductType;
- (id)mappedMarketingProductNumber;
- (id)mappedProductType;
- (id)marketingProductNumber;
- (id)productType;
- (void)setMappedMarketingProductNumber:(id)arg1;
- (void)setMappedProductType:(id)arg1;
- (id)stringIdentifier;
- (struct LogCategory { int x1; int x2; char *x3; unsigned int x4; char *x5; char *x6; int x7; struct LogCategory {} *x8; struct LogOutput {} *x9; struct LogOutput {} *x10; unsigned long long x11; unsigned long long x12; unsigned int x13; unsigned int x14; char *x15; struct LogCategoryPrivate {} *x16; }*)ucat;
- (id)variantIdentifier;
- (unsigned long long)version;

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
