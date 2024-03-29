<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PSStorageApp.h</title>
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

/PrivateFrameworks/Preferences.framework/PSStorageApp.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences (1.0)
 */

@interface PSStorageApp : NSObject {
    LSApplicationProxy * _appProxy;
    long long  _demoteSize;
    long long  _externalDataSize;
    bool  _isDeleting;
    bool  _isDemoting;
    bool  _isDocumentApp;
    bool  _isInternalApp;
    bool  _isPseudoApp;
    bool  _isSystemApp;
    bool  _isUsageApp;
    bool  _isUserApp;
    NSArray * _mediaTypes;
    long long  _purgeableSize;
    long long  _sharedDataSize;
    long long  _specialSize;
    PSUsageBundleApp * _usageBundleApp;
}

@property (nonatomic, readonly) NSString *appIdentifier;
@property (nonatomic, retain) LSApplicationProxy *appProxy;
@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSString *bundleVersion;
@property (nonatomic, readonly) long long dataSize;
@property (nonatomic, readonly) long long demoteSize;
@property (nonatomic, readonly) NSArray *documents;
@property (nonatomic, readonly) long long dynamicSize;
@property long long externalDataSize;
@property (nonatomic, readonly) NSDate *installDate;
@property (nonatomic, readonly) bool isDeletable;
@property (nonatomic, readonly) bool isDeleted;
@property (nonatomic, readonly) bool isDemotable;
@property (nonatomic, readonly) bool isDemoted;
@property (nonatomic, readonly) bool isDocumentApp;
@property (nonatomic, readonly) bool isInternalApp;
@property bool isPseudoApp;
@property (nonatomic, readonly) bool isSystemApp;
@property (nonatomic) bool isUsageApp;
@property (nonatomic) bool isUserApp;
@property (nonatomic, readonly) NSDate *lastUsedDate;
@property (nonatomic, retain) NSArray *mediaTypes;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) long long purgeableSize;
@property long long sharedDataSize;
@property long long specialSize;
@property (nonatomic, readonly) long long staticSize;
@property (nonatomic, readonly) long long totalSize;
@property (retain) PSUsageBundleApp *usageBundleApp;
@property (nonatomic, readonly) NSString *vendorName;
@property (nonatomic, readonly) NSString *versionString;

+ (void)setLaunchDatesNeedUpdating;

- (void).cxx_destruct;
- (id)appIdentifier;
- (id)appProxy;
- (id)bundleIdentifier;
- (id)bundleVersion;
- (long long)dataSize;
- (long long)demoteSize;
- (id)documents;
- (long long)dynamicSize;
- (long long)externalDataSize;
- (id)initWithApplicationProxy:(id)arg1;
- (id)installDate;
- (bool)isDeletable;
- (bool)isDeleted;
- (bool)isDemotable;
- (bool)isDemoted;
- (bool)isDocumentApp;
- (bool)isInternalApp;
- (bool)isPseudoApp;
- (bool)isSystemApp;
- (bool)isUsageApp;
- (bool)isUserApp;
- (id)lastUsedDate;
- (id)mediaTypes;
- (id)name;
- (long long)purgeableSize;
- (void)reloadProxy;
- (void)setAppProxy:(id)arg1;
- (void)setExternalDataSize:(long long)arg1;
- (void)setIsPseudoApp:(bool)arg1;
- (void)setIsUsageApp:(bool)arg1;
- (void)setIsUserApp:(bool)arg1;
- (void)setMediaTypes:(id)arg1;
- (void)setSharedDataSize:(long long)arg1;
- (void)setSpecialSize:(long long)arg1;
- (void)setUsageBundleApp:(id)arg1;
- (long long)sharedDataSize;
- (long long)specialSize;
- (long long)staticSize;
- (long long)totalSize;
- (id)usageBundleApp;
- (bool)valueForBooleanInfoKey:(id)arg1;
- (id)vendorName;
- (id)versionString;

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
