<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CUIStructuredThemeStore.h</title>
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

/PrivateFrameworks/CoreUI.framework/CUIStructuredThemeStore.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI (499.12)
 */

@interface CUIStructuredThemeStore : NSObject <CUIStructuredThemeStorage, CUIStructuredThemeStorage2> {
    int (* _attributePresent;
    NSString * _bundleID;
    NSMutableDictionary * _cache;
    NSLock * _cacheLock;
    NSCache * _namedRenditionKeyCache;
    CUICommonAssetStorage * _store;
    NSLock * _storeLock;
    unsigned long long  _themeIndex;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long themeIndex;

- (bool)_canGetRenditionWithKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1 isFPO:(bool*)arg2 lookForSubstitutions:(bool)arg3;
- (void)_commonInit;
- (bool)_formatStorageKeyArrayBytes:(void*)arg1 length:(unsigned long long)arg2 fromKey:(struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg3;
- (void)_getKeyForAssetClosestToKey:(struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1 foundAsset:(bool*)arg2;
- (id)_newRenditionKeyDataFromKey:(struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1;
- (void)_updateKeyWithCompatibilityMapping:(struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1;
- (id)allImageNames;
- (unsigned short)appearanceIdentifierForName:(id)arg1;
- (id)appearances;
- (bool)assetExistsForKey:(struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1;
- (unsigned int)authoredWithSchemaVersion;
- (id)baseGradationKeySignatureForKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1;
- (id)bundleID;
- (bool)canGetRenditionWithKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1;
- (bool)canGetRenditionWithKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1 isFPO:(bool*)arg2;
- (id)catalogGlobals;
- (void)clearRenditionCache;
- (unsigned long long)colorSpaceID;
- (id)convertRenditionKeyToKeyData:(struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1;
- (id)copyKeySignatureForKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1 withBytesNoCopy:(char *)arg2 length:(unsigned long long)arg3;
- (id)copyLookupKeySignatureForKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1;
- (void)dealloc;
- (id)debugDescription;
- (id)debugDescriptionForKeyList:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1;
- (unsigned int)distilledInCoreUIVersion;
- (unsigned int)documentFormatVersion;
- (double)fontSizeForFontSizeType:(id)arg1;
- (bool)getFontName:(id*)arg1 baselineOffset:(double*)arg2 forFontType:(id)arg3;
- (bool)getPhysicalColor:(struct _colordef { unsigned int x1; unsigned int x2; struct _rgbquad { unsigned int x_3_1_1 : 8; unsigned int x_3_1_2 : 8; unsigned int x_3_1_3 : 8; unsigned int x_3_1_4 : 8; } x3; }*)arg1 withName:(id)arg2;
- (bool)hasPhysicalColorWithName:(id)arg1;
- (id)imagesWithName:(id)arg1;
- (id)initWithBytes:(const void*)arg1 length:(unsigned long long)arg2;
- (id)initWithPath:(id)arg1;
- (id)initWithURL:(id)arg1;
- (const struct _renditionkeyfmt { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4[0]; }*)keyFormat;
- (id)keySignatureForKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1;
- (id)lookupAssetForKey:(struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1;
- (long long)maximumRenditionKeyTokenCount;
- (id)nameForAppearanceIdentifier:(unsigned short)arg1;
- (id)prefilteredAssetDataForKey:(struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1;
- (const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)renditionKeyForName:(id)arg1;
- (const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)renditionKeyForName:(id)arg1 cursorHotSpot:(struct CGPoint { double x1; double x2; }*)arg2;
- (const struct _renditionkeyfmt { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4[0]; }*)renditionKeyFormat;
- (id)renditionNameForKeyList:(struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1;
- (id)renditionWithKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1;
- (id)renditionWithKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1 usingKeySignature:(id)arg2;
- (void)setThemeIndex:(unsigned long long)arg1;
- (id)store;
- (unsigned long long)themeIndex;
- (id)themeStore;
- (bool)usesCUISystemThemeRenditionKey;
- (id)zeroCodeGlyphList;

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