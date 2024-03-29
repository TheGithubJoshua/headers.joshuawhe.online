<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>LSBundleRecordUpdater.h</title>
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

/Frameworks/CoreServices.framework/LSBundleRecordUpdater.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/CoreServices.framework/CoreServices (947)
 */

@interface LSBundleRecordUpdater : LSRecordBuilder {
    struct LSBundleData { 
        unsigned int _clas; 
        unsigned long long _bundleFlags; 
        unsigned int _plistContentFlags; 
        unsigned int _itemFlags; 
        unsigned char _iconFlags; 
        unsigned char _highResFlags; 
        unsigned char _appNapFlags; 
        unsigned char eGPUFlags; 
        unsigned short _archFlags; 
        unsigned int _hfsType; 
        unsigned int _hfsCreator; 
        unsigned long long _inoBundle; 
        unsigned long long _inoExec; 
        int _mtime; 
        int _rtime; 
        unsigned long long _version; 
        unsigned long long _minSystemVersion; 
        unsigned long long _maxSystemVersion; 
        unsigned long long _execSDKVersion; 
        unsigned int appStoreToolsBuildVersion; 
        unsigned int machOUUIDs[4]; 
        unsigned long long sequenceNumber; 
        unsigned long long compatibilityState; 
        unsigned long long installFailureReason; 
        unsigned long long itemID; 
        unsigned int deviceFamilies; 
        unsigned int installType; 
        unsigned int teamID; 
        unsigned int identifier; 
        unsigned int exactIdentifier; 
        unsigned int name; 
        unsigned int displayName; 
        unsigned int companionAppID; 
        unsigned int counterpartIdentifiers; 
        unsigned int filename; 
        unsigned int bundleVersion; 
        unsigned int shortVersionString; 
        unsigned int signerIdentity; 
        unsigned int codeInfoIdentifier; 
        unsigned int signerOrganization; 
        unsigned int appType; 
        unsigned long long staticDiskUsage; 
        unsigned long long purchaserDSID; 
        unsigned long long downloaderDSID; 
        unsigned long long familyID; 
        unsigned int vendorName; 
        unsigned int itemName; 
        unsigned long long storefront; 
        unsigned long long versionIdentifier; 
        unsigned long long ratingRank; 
        unsigned int ratingLabel; 
        unsigned long long genreID; 
        unsigned int genre; 
        unsigned int sourceAppIdentifier; 
        unsigned int appVariant; 
        unsigned int primaryIconName; 
        unsigned int iconsDict; 
        unsigned int iconFileNames; 
        unsigned int execPath; 
        unsigned int libraryPath; 
        unsigned int libraryItems; 
        unsigned int claims; 
        unsigned int types; 
        unsigned int services; 
        unsigned int plugins; 
        unsigned int extensionPoints; 
        unsigned int activityTypes; 
        unsigned int schemesWhitelist; 
        unsigned int alias; 
        unsigned int appContainerAlias; 
        unsigned int dataContainerAlias; 
        unsigned int container; 
        unsigned char revision; 
        unsigned char retries; 
        unsigned char _reserved3; 
        unsigned char _reserved4; 
        unsigned int plistRarities; 
        unsigned int commonPlistEntries; 
        unsigned int entitlements; 
        unsigned int groupContainers; 
        unsigned int sandboxEnvironmentVariables; 
        unsigned int siriActionDefinitionURLs; 
        unsigned int _reserved5; 
    }  _bundleData;
    unsigned int  _bundleID;
    NSString * _bundleIdentifier;
    struct LSContext { 
        struct LSDatabase {} *db; 
    }  _context;
    bool  _hasContext;
}

@property (nonatomic, readonly) NSString *bundleIdentifier;

- (id)bundleIdentifier;
- (void)dealloc;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1 preferPlaceholder:(bool)arg2;
- (void)parsePlaceholderMetadata:(id)arg1;
- (void)parseSINFDictionary:(id)arg1;
- (void)parseiTunesMetadata:(id)arg1;
- (int)updateBundleRecord;

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
