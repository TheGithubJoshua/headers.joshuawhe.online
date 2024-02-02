<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>TILanguageModelLoader.h</title>
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

/PrivateFrameworks/TextInputCore.framework/TILanguageModelLoader.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore ()
 */

@interface TILanguageModelLoader : NSObject {
    TILanguageModelAdaptationContext * _adaptationContext;
    NSString * _clientIdentifier;
    <_ICContactFetchingDelegate> * _contactFetchingDelegate;
    NSString * _dynamicResourcePath;
    TIInputMode * _inputMode;
    NSArray * _mobileAssets;
    struct shared_ptr<KB::LanguageModel> { 
        struct LanguageModel {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _model;
    NSString * _recipientIdentifier;
    NSArray * _staticResourcePaths;
    bool  _usesLinguisticContext;
}

@property (nonatomic, retain) TILanguageModelAdaptationContext *adaptationContext;
@property (nonatomic, retain) NSString *clientIdentifier;
@property (nonatomic) <_ICContactFetchingDelegate> *contactFetchingDelegate;
@property (nonatomic, readonly) NSString *dynamicResourcePath;
@property (nonatomic, readonly) TIInputMode *inputMode;
@property (nonatomic, readonly) NSArray *mobileAssets;
@property (nonatomic) struct shared_ptr<KB::LanguageModel> { struct LanguageModel {} *x1; struct __shared_weak_count {} *x2; } model;
@property (nonatomic, retain) NSString *recipientIdentifier;
@property (nonatomic, readonly) NSArray *staticResourcePaths;
@property (nonatomic, readonly) bool usesLinguisticContext;

+ (void)clearDynamicLearningCaches;
+ (void)clearDynamicResourcesAtPath:(id)arg1;
+ (void)contactStoreDidChange:(id)arg1;
+ (void)dropResourcesExcludingInputModes:(id)arg1 flushCache:(bool)arg2;
+ (void)flushDynamicLearningCaches;
+ (id)knownClients;
+ (struct shared_ptr<KB::LanguageModel> { struct LanguageModel {} *x1; struct __shared_weak_count {} *x2; })modelForLocale:(id)arg1 adaptationContext:(id)arg2 staticResourcePaths:(id)arg3 dynamicResourcePath:(id)arg4;
+ (void)performMaintenance;
+ (id)recipientRecords;
+ (void)resetClientAndRecipientCache;
+ (void)setAsynchronousLoad:(bool)arg1;
+ (void)setOfflineTrainingEnabled:(bool)arg1;
+ (id)sharedLanguageModelLoaderForInputMode:(id)arg1 dynamicResourcePath:(id)arg2 mobileAssets:(id)arg3 usesLinguisticContext:(bool)arg4;
+ (void)startObservingContactStore;
+ (struct shared_ptr<KB::LanguageModel> { struct LanguageModel {} *x1; struct __shared_weak_count {} *x2; })stubForLocale:(id)arg1 adaptationContext:(id)arg2 staticResourcePaths:(id)arg3 dynamicResourcePath:(id)arg4;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)adaptationContext;
- (void)clearDynamicLearningCaches;
- (id)clientIdentifier;
- (id)contactFetchingDelegate;
- (id)dynamicResourcePath;
- (void)findRecordsMatchingRecipient:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)flushDynamicLearningCaches;
- (id)initWithInputMode:(id)arg1 dynamicResourcePath:(id)arg2 mobileAssets:(id)arg3 usesLinguisticContext:(bool)arg4;
- (id)inputMode;
- (struct shared_ptr<KB::LanguageModel> { struct LanguageModel {} *x1; struct __shared_weak_count {} *x2; })languageModelForAdaptationContext:(id)arg1;
- (struct shared_ptr<KB::LanguageModel> { struct LanguageModel {} *x1; struct __shared_weak_count {} *x2; })lightweightLanguageModel;
- (void)lookupRecordForRecipientIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)mobileAssets;
- (struct shared_ptr<KB::LanguageModel> { struct LanguageModel {} *x1; struct __shared_weak_count {} *x2; })model;
- (struct shared_ptr<KB::LanguageModel> { struct LanguageModel {} *x1; struct __shared_weak_count {} *x2; })newLanguageModel;
- (void)performLearningIfNecessaryForClient:(id)arg1 withModel:(struct shared_ptr<KB::LanguageModel> { struct LanguageModel {} *x1; struct __shared_weak_count {} *x2; })arg2;
- (id)recipientIdentifier;
- (void)setAdaptationContext:(id)arg1;
- (void)setClientIdentifier:(id)arg1;
- (void)setContactFetchingDelegate:(id)arg1;
- (void)setLanguageModelClientIdentifier:(id)arg1;
- (void)setLanguageModelRecipientIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)setModel:(struct shared_ptr<KB::LanguageModel> { struct LanguageModel {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)setRecipientIdentifier:(id)arg1;
- (struct shared_ptr<KB::LanguageModel> { struct LanguageModel {} *x1; struct __shared_weak_count {} *x2; })sharedLanguageModelForClient:(id)arg1 withRecipient:(id)arg2;
- (struct shared_ptr<KB::LanguageModel> { struct LanguageModel {} *x1; struct __shared_weak_count {} *x2; })sharedLanguageModelForClient:(id)arg1 withRecipient:(id)arg2 completion:(id /* block */)arg3;
- (id)staticResourcePaths;
- (bool)usesLinguisticContext;

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