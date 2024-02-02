<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>MKWalletMerchantResponse.h</title>
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

/Frameworks/MapKit.framework/MKWalletMerchantResponse.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/MapKit.framework/MapKit (1.0)
 */

@interface MKWalletMerchantResponse : NSObject {
    <GEOMapItem> * _mapItem;
    GEOPDMerchantLookupResult * _merchantLookupResult;
}

@property (nonatomic, readonly) NSString *heroImageProviderName;
@property (nonatomic, readonly) NSString *localizedPlaceLanguage;
@property (nonatomic, readonly) NSString *localizedPlaceName;
@property (nonatomic, readonly) NSString *localizedWalletCategoryLanguage;
@property (nonatomic, readonly) NSString *localizedWalletCategoryName;
@property (nonatomic, readonly) MKMapItem *mapItem;
@property (nonatomic, readonly) NSString *mapsCategoryIdentifier;
@property (nonatomic, readonly) MKWalletMerchantStylingInfo *placeStyling;
@property (nonatomic, readonly) NSString *walletCategoryIdentifier;
@property (nonatomic, readonly) MKWalletMerchantStylingInfo *walletCategoryStyling;

- (void).cxx_destruct;
- (bool)_validHeroImageForPhoto:(id)arg1;
- (id)bestHeroImageForSize:(struct CGSize { double x1; double x2; })arg1 allowSmaller:(bool)arg2;
- (id)heroImageProviderName;
- (id)initWithGEOMapItem:(id)arg1;
- (id)initWithMerchantLookupResult:(id)arg1;
- (id)localizedPlaceLanguage;
- (id)localizedPlaceName;
- (id)localizedWalletCategoryLanguage;
- (id)localizedWalletCategoryName;
- (id)mapItem;
- (id)mapsCategoryIdentifier;
- (id)placeStyling;
- (id)walletCategoryIdentifier;
- (id)walletCategoryStyling;

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