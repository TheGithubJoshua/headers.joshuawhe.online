<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>INIntent.h</title>
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

/Frameworks/Intents.framework/INIntent.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/Intents.framework/Intents (1)
 */

@interface INIntent : NSObject <ACSCardRequesting, CRContent, INFileURLEnumerable, INGenericIntent, INImageProxyInjecting, INIntentExport, INIntentSlotComposing, INKeyImageProducing, INRuntimeObject, NSCopying, NSSecureCoding, REIndentedDescription> {
    NSArray * _airPlayRouteIds;
    PBCodable * _backingStore;
    NSString * _identifier;
    unsigned long long  _indexingHash;
    NSMutableDictionary * _intentInstanceDescriptionMapping;
    NSDictionary * _parameterCombinations;
    NSArray * _parameterImages;
}

@property (nonatomic, readonly) NSString *_categoryVerb;
@property (nonatomic, readonly) NSArray *_codableAttributes;
@property (setter=_setDefaultImage:, nonatomic, retain) INImage *_defaultImage;
@property (nonatomic, readonly) NSOrderedSet *_displayOrderedAttributes;
@property (setter=_setExecutionContext:, nonatomic) long long _executionContext;
@property (nonatomic, readonly) bool _hasTitle;
@property (readonly) unsigned long long _indexingHash;
@property (nonatomic, readonly) long long _intentCategory;
@property (readonly) long long _intents_toggleState;
@property (readonly) INImage *_keyImage;
@property (nonatomic, readonly, copy) NSString *_localizedVerb;
@property (setter=_setMetadata:, nonatomic, retain) _INPBIntentMetadata *_metadata;
@property (setter=_setNanoLaunchId:, nonatomic, retain) NSString *_nanoLaunchId;
@property (setter=_setParameterCombinations:, nonatomic, retain) NSDictionary *_parameterCombinations;
@property (nonatomic, readonly, copy) NSString *_subtitle;
@property (nonatomic, readonly) bool _supportsBackgroundExecution;
@property (nonatomic, readonly, copy) NSString *_title;
@property (nonatomic, readonly) long long _type;
@property (setter=_setUiExtensionBundleId:, nonatomic, retain) NSString *_uiExtensionBundleId;
@property (getter=_isUserConfirmationRequired, setter=_setUserConfirmationRequired:, nonatomic) bool _userConfirmationRequired;
@property (nonatomic, readonly) NSDictionary *_validParameterCombinations;
@property (nonatomic, readonly, copy) NSString *aggregateLabel;
@property (setter=_setAirPlayRouteIds:, nonatomic, retain) NSArray *airPlayRouteIds;
@property (nonatomic, copy) PBCodable *backingStore;
@property (readonly) long long cd_interactionMechanism;
@property (readonly) NSArray *cd_recipients;
@property (readonly) bool cd_saveToKnowledgeStore;
@property (readonly) bool cd_saveToPeopleStore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *domain;
@property (setter=_setExtensionBundleId:, nonatomic, retain) NSString *extensionBundleId;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *intentDescription;
@property (nonatomic, readonly) NSString *intentId;
@property (setter=_setLaunchId:, nonatomic, retain) NSString *launchId;
@property (getter=_parameterImages, setter=_setParameterImages:, nonatomic, copy) NSArray *parameterImages;
@property (nonatomic, copy) NSDictionary *parametersByName;
@property (nonatomic, readonly, copy) NSString *rootAggregateKey;
@property (getter=_sortedParameterImages, nonatomic, readonly, copy) NSArray *sortedParameterImages;
@property (nonatomic, copy) NSString *suggestedInvocationPhrase;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long triggerMethod;
@property (nonatomic, readonly) NSString *typeName;
@property (nonatomic, readonly) NSString *utteranceString;
@property (nonatomic, copy) NSString *verb;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (id)_ignoredParameters;
+ (void)initialize;
+ (id)intentDescription;
+ (bool)resolveInstanceMethod:(SEL)arg1;
+ (bool)supportsSecureCoding;
+ (id)typeName;

- (void).cxx_destruct;
- (id)_categoryVerb;
- (id)_className;
- (id)_codableAttributes;
- (long long)_compareSubProducerOne:(id)arg1 subProducerTwo:(id)arg2;
- (id)_defaultImage;
- (id)_defaultImageNameWithSchema:(id)arg1;
- (id)_dictionaryRepresentation;
- (id)_displayOrderedAttributes;
- (id)_emptyCopy;
- (void)_enumerateFileURLsWithMutatingBlock:(id /* block */)arg1;
- (long long)_executionContext;
- (bool)_hasTitle;
- (id)_imageForParameter:(id)arg1;
- (id)_impl;
- (id)_inCodable;
- (unsigned long long)_indexingHash;
- (id)_initWithIdentifier:(id)arg1 backingStore:(id)arg2 schema:(id)arg3 error:(id*)arg4;
- (id)_initWithIdentifier:(id)arg1 schema:(id)arg2 name:(id)arg3 data:(id)arg4;
- (void)_injectProxiesForImages:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)_injectProxiesForImagesUsingCustomCodableStrategy:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)_injectProxiesForImagesUsingIntentSlotDescriptionStrategy:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)_injectProxiesForParameterImages:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)_injectProxyForDefaultImage:(id /* block */)arg1 completion:(id /* block */)arg2;
- (long long)_intentCategory;
- (id)_intentInstanceDescription;
- (id)_intents_bestBundleIdentifier;
- (id)_intents_bundleIdForDisplay;
- (id)_intents_bundleIdForLaunching;
- (id)_intents_launchIdForCurrentPlatform;
- (long long)_intents_toggleState;
- (bool)_isUserConfirmationRequired;
- (id)_keyImage;
- (id)_keyImageWithIntentDescriptionStrategy;
- (id)_localizedCombinationStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3 bundleURL:(id)arg4 language:(id)arg5;
- (id)_localizedVerb;
- (id)_metadata;
- (id)_nanoLaunchId;
- (id)_nonNilParameters;
- (id)_parameterCombinations;
- (id)_parameterImages;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (id)_redactedDictionaryRepresentation;
- (void)_setAirPlayRouteIds:(id)arg1;
- (void)_setCategoryVerb:(id)arg1;
- (void)_setDefaultImage:(id)arg1;
- (void)_setExecutionContext:(long long)arg1;
- (void)_setExtensionBundleId:(id)arg1;
- (void)_setImage:(id)arg1 forParameter:(id)arg2;
- (void)_setIntentCategory:(long long)arg1;
- (void)_setLaunchId:(id)arg1;
- (void)_setMetadata:(id)arg1;
- (void)_setNanoLaunchId:(id)arg1;
- (void)_setParameterCombinations:(id)arg1;
- (void)_setParameterImages:(id)arg1;
- (void)_setUiExtensionBundleId:(id)arg1;
- (void)_setUserConfirmationRequired:(bool)arg1;
- (id)_sortedParameterImages;
- (id)_spotlightContentType;
- (id)_subtitle;
- (id)_subtitleForLanguage:(id)arg1;
- (id)_subtitleForLanguage:(id)arg1 fromBundleURL:(id)arg2;
- (bool)_supportsBackgroundExecution;
- (id)_title;
- (id)_titleForLanguage:(id)arg1;
- (id)_titleForLanguage:(id)arg1 fromBundleURL:(id)arg2;
- (long long)_type;
- (id)_typedBackingStore;
- (id)_uiExtensionBundleId;
- (id)_validParameterCombinations;
- (id)_validParameterCombinationsWithSchema:(id)arg1;
- (id)airPlayRouteIds;
- (id)backingStore;
- (bool)configureAttributeSet:(id)arg1 includingData:(bool)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (id)domain;
- (void)encodeWithCoder:(id)arg1;
- (id)extensionBundleId;
- (unsigned long long)hash;
- (id)identifier;
- (id)imageForParameterNamed:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDomain:(id)arg1 verb:(id)arg2 parametersByName:(id)arg3;
- (id)initWithIdentifier:(id)arg1 backingStore:(id)arg2;
- (id)intentDescription;
- (id)intentId;
- (id)intentSlotDescriptions;
- (bool)isEqual:(id)arg1;
- (bool)isGenericIntent;
- (id)keyImage;
- (id)launchId;
- (id)localizeValueOfSlotDescription:(id)arg1 forLanguage:(id)arg2;
- (id)parametersByName;
- (id)protoData;
- (void)setBackingStore:(id)arg1;
- (void)setDomain:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setImage:(id)arg1 forParameterNamed:(id)arg2;
- (void)setParametersByName:(id)arg1;
- (void)setSuggestedInvocationPhrase:(id)arg1;
- (bool)setValue:(id)arg1 forProperty:(id)arg2;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (void)setVerb:(id)arg1;
- (id)suggestedInvocationPhrase;
- (long long)triggerMethod;
- (void)trimDataAgainstTCCForAuditToken:(struct { unsigned int x1[8]; })arg1 bundle:(id)arg2;
- (id)typeName;
- (id)utteranceString;
- (id)valueForKey:(id)arg1;
- (id)valueForProperty:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (id)verb;

// Image: /System/Library/Frameworks/IntentsUI.framework/IntentsUI

- (id)_intentsui_backgroundHandlingAssertionForAppBundleIdentifier:(id)arg1 error:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient

- (id)atx_hashApproximately;
- (id)atx_nonNilParametersByName;

// Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal

- (void)apr_getArgsInto:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AppPredictionUI.framework/AppPredictionUI

+ (bool)apui_isSupportedForCardRequests;

- (id)apui_intent;
- (id)apui_keyPeople;
- (bool)apui_requiresAuthentication;

// Image: /System/Library/PrivateFrameworks/AssistantCardServiceSupport.framework/AssistantCardServiceSupport

- (bool)acs_needsTitleCardSection;
- (id)acs_utteranceForCardService;
- (void)requestCard:(id)arg1 reply:(id /* block */)arg2;
- (unsigned long long)servicePriorityForCardRequest:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Cards.framework/Cards

- (id)underlyingInteraction;

// Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet

- (long long)cd_interactionMechanism;
- (id)cd_recipients;
- (bool)cd_saveToKnowledgeStore;
- (bool)cd_saveToPeopleStore;
- (id)contextMetadata;

// Image: /System/Library/PrivateFrameworks/FMIPSiriActions.framework/FMIPSiriActions

+ (void)undonateForDeviceId:(id)arg1 withCompletion:(id /* block */)arg2;

- (id)aggregateLabel;
- (void)donateWithCompletion:(id /* block */)arg1;
- (id)groupIdentifierForIdentifiableIntent:(id)arg1;
- (id)identifierForIdentifiableIntent:(id)arg1;
- (id)rootAggregateKey;
- (id)stringForExecutionContext:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer

+ (void)mt_deleteDonationsForAlarm:(id)arg1 completion:(id /* block */)arg2;
+ (id)mt_intentForAlarmCreate:(id)arg1;
+ (id)mt_intentForAlarmDisable:(id)arg1;
+ (id)mt_intentForAlarmEnable:(id)arg1;
+ (id)mt_intentForAlarmUpdate:(id)arg1;

- (id)mt_initWithAlarm:(id)arg1 verb:(id)arg2;

// Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine

- (id)descriptionWithIndent:(unsigned long long)arg1;

// Image: /System/Library/PrivateFrameworks/VoiceShortcutsUI.framework/VoiceShortcutsUI

- (id)vcui_displayImage;
- (bool)vcui_isIntentFromSystemApp;
- (id)vcui_keyPeople;

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