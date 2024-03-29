<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>EMFEmojiPreferences.h</title>
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

/PrivateFrameworks/EmojiFoundation.framework/EMFEmojiPreferences.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/EmojiFoundation.framework/EmojiFoundation (1)
 */

@interface EMFEmojiPreferences : NSObject <EMFEmojiPreferenceActions> {
    NSMutableDictionary * _categoryIndexes;
    long long  _currentSequence;
    NSMutableDictionary * _defaults;
    NSObject<OS_dispatch_queue> * _differentialPrivacyQueue;
    bool  _isDefaultDirty;
    unsigned long long  _maximumRecentsCount;
    NSMutableArray * _recents;
    NSMutableDictionary * _skinToneBaseKeyPreferences;
    NSMutableDictionary * _typingNames;
    NSMutableDictionary * _usageHistory;
}

@property (nonatomic, readonly) NSArray *allRecents;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasDisplayedSkinToneHelp;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long maximumRecentsCount;
@property (nonatomic, readonly) NSString *previouslyUsedCategory;
@property (nonatomic, readonly) NSArray *recentEmojis;
@property (readonly) Class superclass;

+ (id)_allRecentStrings;
+ (id)_cacheDomain;
+ (id)_cachedFlagCategoryEmoji:(id /* block */)arg1;
+ (id)_recentEmojiStrings;
+ (id)_recentStringsInCharacterSet:(id)arg1;
+ (id)defaultsDomain;
+ (id)differentialPrivacyDomain;
+ (id)differentialPrivacyRecorderForEmoji:(id)arg1 usageMode:(id)arg2;

- (void).cxx_destruct;
- (void)_checkForDingbatDuplicates;
- (void)_cleanUpOldFlagsCaches;
- (void)_pruneInvalidEmojiFromHistory;
- (void)_readPreferencesFromDefaults;
- (void)_setRecentStrings:(id)arg1;
- (id)allRecents;
- (void)didDisplaySkinToneHelp;
- (void)didUseEmoji:(id)arg1;
- (void)didUseEmoji:(id)arg1 usageMode:(id)arg2;
- (void)didUseEmoji:(id)arg1 usageMode:(id)arg2 typingName:(id)arg3;
- (void)didViewEmojiIndex:(long long)arg1 forCategory:(id)arg2;
- (bool)hasDisplayedSkinToneHelp;
- (bool)hasLastUsedVariantForEmoji:(id)arg1;
- (id)init;
- (id)lastUsedVariantEmojiForEmoji:(id)arg1;
- (void)loadDefaultsIfNecessary;
- (unsigned long long)maximumRecentsCount;
- (void)migrateFromMajorOSVersion:(long long)arg1;
- (void)migrateInDidDisplaySkinToneHelp:(bool)arg1;
- (void)migrateInPreviouslyUsedCategory:(id)arg1;
- (void)migrateInPreviouslyUsedCategoryIndexes:(id)arg1;
- (void)migrateInRecentEmoji:(id)arg1 usages:(id)arg2 typingNames:(id)arg3;
- (void)migrateInSkinTonePreferences:(id)arg1;
- (id)previouslyUsedCategory;
- (unsigned long long)previouslyUsedIndexInCategory:(id)arg1;
- (void)readEmojiDefaults;
- (id)recentEmojis;
- (id)recentVariantEmojiForEmoji:(id)arg1;
- (id)recentsInCharacterSet:(id)arg1;
- (void)resetEmojiDefaults;
- (double)scoreForEmojiString:(id)arg1;
- (double)scoreForSequence:(long long)arg1;
- (void)setMaximumRecentsCount:(unsigned long long)arg1;
- (bool)shouldCountEmojiStringForUsageHistory:(id)arg1;
- (id)typingNameForEmoji:(id)arg1;
- (void)writeEmojiDefaults;
- (void)writeEmojiDefaultsAndNotify:(bool)arg1;

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
