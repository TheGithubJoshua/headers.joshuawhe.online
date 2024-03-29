<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>_INPBIntentMetadata.h</title>
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

/Frameworks/Intents.framework/_INPBIntentMetadata.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/Intents.framework/Intents (1)
 */

@interface _INPBIntentMetadata : PBCodable <NSCopying, NSSecureCoding, _INPBIntentMetadata> {
    bool  _backgroundLaunch;
    NSString * _categoryVerb;
    bool  _confirmed;
    _INPBImageValue * _defaultImageValue;
    int  _executionContext;
    struct { 
        unsigned int executionContext : 1; 
        unsigned int intentCategory : 1; 
        unsigned int backgroundLaunch : 1; 
        unsigned int confirmed : 1; 
        unsigned int triggerMethod : 1; 
        unsigned int userConfirmationRequired : 1; 
    }  _has;
    int  _intentCategory;
    NSString * _intentDescription;
    NSString * _intentId;
    NSString * _launchId;
    NSString * _nanoLaunchId;
    NSString * _originatingDeviceIdsIdentifier;
    NSArray * _parameterImages;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _requiredEntitlements;
    NSString * _suggestedInvocationPhrase;
    NSString * _systemExtensionBundleId;
    NSString * _systemUIExtensionBundleId;
    int  _triggerMethod;
    bool  _userConfirmationRequired;
    _INPBString * _userUtterance;
}

@property (nonatomic) bool backgroundLaunch;
@property (nonatomic, copy) NSString *categoryVerb;
@property (nonatomic) bool confirmed;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) _INPBImageValue *defaultImageValue;
@property (readonly, copy) NSString *description;
@property (nonatomic) int executionContext;
@property (nonatomic) bool hasBackgroundLaunch;
@property (nonatomic, readonly) bool hasCategoryVerb;
@property (nonatomic) bool hasConfirmed;
@property (nonatomic, readonly) bool hasDefaultImageValue;
@property (nonatomic) bool hasExecutionContext;
@property (nonatomic) bool hasIntentCategory;
@property (nonatomic, readonly) bool hasIntentDescription;
@property (nonatomic, readonly) bool hasIntentId;
@property (nonatomic, readonly) bool hasLaunchId;
@property (nonatomic, readonly) bool hasNanoLaunchId;
@property (nonatomic, readonly) bool hasOriginatingDeviceIdsIdentifier;
@property (nonatomic, readonly) bool hasSuggestedInvocationPhrase;
@property (nonatomic, readonly) bool hasSystemExtensionBundleId;
@property (nonatomic, readonly) bool hasSystemUIExtensionBundleId;
@property (nonatomic) bool hasTriggerMethod;
@property (nonatomic) bool hasUserConfirmationRequired;
@property (nonatomic, readonly) bool hasUserUtterance;
@property (readonly) unsigned long long hash;
@property (nonatomic) int intentCategory;
@property (nonatomic, copy) NSString *intentDescription;
@property (nonatomic, copy) NSString *intentId;
@property (nonatomic, copy) NSString *launchId;
@property (nonatomic, copy) NSString *nanoLaunchId;
@property (nonatomic, copy) NSString *originatingDeviceIdsIdentifier;
@property (nonatomic, copy) NSArray *parameterImages;
@property (nonatomic, readonly) unsigned long long parameterImagesCount;
@property (nonatomic, readonly) int*requiredEntitlements;
@property (nonatomic, readonly) unsigned long long requiredEntitlementsCount;
@property (nonatomic, copy) NSString *suggestedInvocationPhrase;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *systemExtensionBundleId;
@property (nonatomic, copy) NSString *systemUIExtensionBundleId;
@property (nonatomic) int triggerMethod;
@property (nonatomic) bool userConfirmationRequired;
@property (nonatomic, retain) _INPBString *userUtterance;

+ (Class)parameterImagesType;

- (void).cxx_destruct;
- (int)StringAsExecutionContext:(id)arg1;
- (int)StringAsIntentCategory:(id)arg1;
- (int)StringAsRequiredEntitlements:(id)arg1;
- (int)StringAsTriggerMethod:(id)arg1;
- (void)addParameterImages:(id)arg1;
- (void)addRequiredEntitlement:(int)arg1;
- (bool)backgroundLaunch;
- (id)categoryVerb;
- (void)clearParameterImages;
- (void)clearRequiredEntitlements;
- (bool)confirmed;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)defaultImageValue;
- (id)dictionaryRepresentation;
- (int)executionContext;
- (id)executionContextAsString:(int)arg1;
- (bool)hasBackgroundLaunch;
- (bool)hasCategoryVerb;
- (bool)hasConfirmed;
- (bool)hasDefaultImageValue;
- (bool)hasExecutionContext;
- (bool)hasIntentCategory;
- (bool)hasIntentDescription;
- (bool)hasIntentId;
- (bool)hasLaunchId;
- (bool)hasNanoLaunchId;
- (bool)hasOriginatingDeviceIdsIdentifier;
- (bool)hasSuggestedInvocationPhrase;
- (bool)hasSystemExtensionBundleId;
- (bool)hasSystemUIExtensionBundleId;
- (bool)hasTriggerMethod;
- (bool)hasUserConfirmationRequired;
- (bool)hasUserUtterance;
- (unsigned long long)hash;
- (int)intentCategory;
- (id)intentCategoryAsString:(int)arg1;
- (id)intentDescription;
- (id)intentId;
- (bool)isEqual:(id)arg1;
- (id)launchId;
- (id)nanoLaunchId;
- (id)originatingDeviceIdsIdentifier;
- (id)parameterImages;
- (id)parameterImagesAtIndex:(unsigned long long)arg1;
- (unsigned long long)parameterImagesCount;
- (bool)readFrom:(id)arg1;
- (int)requiredEntitlementAtIndex:(unsigned long long)arg1;
- (int*)requiredEntitlements;
- (id)requiredEntitlementsAsString:(int)arg1;
- (unsigned long long)requiredEntitlementsCount;
- (void)setBackgroundLaunch:(bool)arg1;
- (void)setCategoryVerb:(id)arg1;
- (void)setConfirmed:(bool)arg1;
- (void)setDefaultImageValue:(id)arg1;
- (void)setExecutionContext:(int)arg1;
- (void)setHasBackgroundLaunch:(bool)arg1;
- (void)setHasConfirmed:(bool)arg1;
- (void)setHasExecutionContext:(bool)arg1;
- (void)setHasIntentCategory:(bool)arg1;
- (void)setHasTriggerMethod:(bool)arg1;
- (void)setHasUserConfirmationRequired:(bool)arg1;
- (void)setIntentCategory:(int)arg1;
- (void)setIntentDescription:(id)arg1;
- (void)setIntentId:(id)arg1;
- (void)setLaunchId:(id)arg1;
- (void)setNanoLaunchId:(id)arg1;
- (void)setOriginatingDeviceIdsIdentifier:(id)arg1;
- (void)setParameterImages:(id)arg1;
- (void)setRequiredEntitlements:(int*)arg1 count:(unsigned long long)arg2;
- (void)setSuggestedInvocationPhrase:(id)arg1;
- (void)setSystemExtensionBundleId:(id)arg1;
- (void)setSystemUIExtensionBundleId:(id)arg1;
- (void)setTriggerMethod:(int)arg1;
- (void)setUserConfirmationRequired:(bool)arg1;
- (void)setUserUtterance:(id)arg1;
- (id)suggestedInvocationPhrase;
- (id)systemExtensionBundleId;
- (id)systemUIExtensionBundleId;
- (int)triggerMethod;
- (id)triggerMethodAsString:(int)arg1;
- (bool)userConfirmationRequired;
- (id)userUtterance;
- (void)writeTo:(id)arg1;

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
