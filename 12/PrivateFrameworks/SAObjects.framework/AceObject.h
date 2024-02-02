<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>AceObject.h</title>
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

/PrivateFrameworks/SAObjects.framework/AceObject.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects (1)
 */

@interface AceObject : NSObject <AFAnalyticsContextVending, AFSecurityDigestibleChunksProviding, AceObject, SiriCoreThunking> {
    NSString * _aceId;
    NSNumber * _deserializationDuration;
    NSMutableDictionary * _dict;
    bool  _mutatingCommand;
    NSData * _plistData;
    NSString * _refId;
    NSNumber * _usefulnessScore;
}

@property (nonatomic, copy) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSMutableDictionary *dict;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool mutatingCommand;
@property (nonatomic, readonly) NSData *plistData;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSNumber *usefulnessScore;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)_aceObjectWithMutableDictionary:(id)arg1 context:(id)arg2;
+ (id)_filteredDictionaryForKeySet:(struct __CFSet { }*)arg1 plistData:(id)arg2;
+ (id)_newAceObjectWithMutableDictionary:(id)arg1;
+ (id)aceObjectArrayWithDictionaryArray:(id)arg1 baseClass:(Class)arg2 context:(id)arg3;
+ (id)aceObjectArrayWithDictionaryArray:(id)arg1 baseProtocol:(id)arg2 context:(id)arg3;
+ (id)aceObjectDictionaryWithDictionary:(id)arg1 baseClass:(Class)arg2 context:(id)arg3;
+ (id)aceObjectDictionaryWithDictionary:(id)arg1 baseProtocol:(id)arg2 context:(id)arg3;
+ (id)aceObjectWithDictionary:(id)arg1 context:(id)arg2;
+ (id)aceObjectWithGenericCommand:(id)arg1 context:(id)arg2;
+ (id)aceObjectWithPlistData:(id)arg1;
+ (id)dictionaryArrayWithAceObjectArray:(id)arg1;
+ (id)dictionaryWithAceObjectDictionary:(id)arg1;
+ (id)newAceObjectWithDictionary:(id)arg1 context:(id)arg2;
+ (id)newAceObjectWithGenericCommand:(id)arg1 context:(id)arg2;
+ (bool)supportsSecureCoding;

- (void)_appendDescriptionOfObject:(id)arg1 toString:(id)arg2 atDepth:(unsigned long long)arg3 withPrefixes:(id)arg4 hint:(id)arg5;
- (id)_descriptionHint;
- (void)_deserializeFromPlistData;
- (id)_dict;
- (id)_initWithMutableDictionary:(id)arg1;
- (id)_initWithPlistData:(id)arg1 aceId:(id)arg2 refId:(id)arg3;
- (id)_initWithPlistData:(id)arg1 aceId:(id)arg2 refId:(id)arg3 usefulnessScore:(id)arg4 mutatingCommand:(id)arg5;
- (id)_serializedData;
- (id)aceId;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)deserializationDuration;
- (id)dict;
- (id)dictionary;
- (void)encodeWithCoder:(id)arg1;
- (id)encodedClassName;
- (id)forceEagerDeserialization;
- (id)fullDescription;
- (id)groupIdentifier;
- (bool)hasArrayForPropertyForKey:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1 context:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (bool)mutatingCommand;
- (id)plistData;
- (id)properties;
- (id)propertyForKey:(id)arg1;
- (id)propertyForKeyWithoutDeserializing:(id)arg1;
- (id)refId;
- (void)setAceId:(id)arg1;
- (void)setMutatingCommand:(bool)arg1;
- (void)setProperty:(id)arg1 forKey:(id)arg2;
- (void)setRefId:(id)arg1;
- (void)setTopLevelProperty:(id)arg1 forKey:(id)arg2;
- (void)setUsefulnessScore:(id)arg1;
- (id)topLevelPropertyForKey:(id)arg1;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;
- (id)usefulnessScore;

// Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices

- (bool)_af_isKindOfDictationRequest;
- (void)af_addEntriesToAnalyticsContext:(id)arg1;
- (id)af_analyticsContext;
- (id)af_dialogIdentifier;
- (id)af_dialogIdentifiersForAnalyticsContext;
- (void)af_enumerateDigestibleChunksWithOptions:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (bool)af_isUserUtterance;
- (bool)af_isUtterance;
- (id)af_speakableText;
- (id)af_text;

// Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI

- (long long)_afui_usefulUserResultType;
- (id)afui_insertionContext;

// Image: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore

- (void)siriCore_invokeThunk;

// Image: /System/Library/PrivateFrameworks/SiriTape.framework/SiriTape

- (id)st_CFScripts;
- (bool)st_hasRequestCompleted;
- (id)st_replaceRefIDsWithID:(id)arg1;
- (id)st_setCFScripts:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI

- (void)_siriui_applyUserInfoDictionary:(id)arg1;

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