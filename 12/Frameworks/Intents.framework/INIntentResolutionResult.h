<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>INIntentResolutionResult.h</title>
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

/Frameworks/Intents.framework/INIntentResolutionResult.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/Intents.framework/Intents (1)
 */

@interface INIntentResolutionResult : NSObject <INIntentResolutionResultDataProviding, INIntentResolutionResultExport> {
    NSArray * _alternatives;
    NSString * _conflictingParameterKeyPath;
    NSArray * _disambiguationItems;
    NSArray * _incompleteParameterKeyPaths;
    id  _incompleteValue;
    id  _itemToConfirm;
    NSArray * _neededParameterKeyPaths;
    long long  _resolutionResultCode;
    id  _resolvedValue;
    unsigned long long  _unsupportedReason;
}

@property (nonatomic, retain) NSArray *alternatives;
@property (nonatomic, retain) NSString *conflictingParameterKeyPath;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *disambiguationItems;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *incompleteParameterKeyPaths;
@property (nonatomic, retain) id incompleteValue;
@property (nonatomic, retain) id itemToConfirm;
@property (nonatomic, retain) NSArray *neededParameterKeyPaths;
@property (nonatomic) long long resolutionResultCode;
@property (nonatomic, retain) id resolvedValue;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long unsupportedReason;

+ (id)_dataForResolutionMethodUnimplemented;
+ (id)needsValue;
+ (id)notRequired;
+ (id)resolutionResultConfirmationRequiredWithItemToConfirm:(id)arg1;
+ (id)resolutionResultDisambiguationWithItemsToDisambiguate:(id)arg1;
+ (id)resolutionResultNeedsValue;
+ (id)resolutionResultNeedsValueForParameters:(id)arg1;
+ (id)resolutionResultNotRequired;
+ (id)resolutionResultSuccessWithResolvedValue:(id)arg1;
+ (id)resolutionResultUnsupportedDueToConflictWithParameter:(id)arg1 alternateItems:(id)arg2;
+ (id)resolutionResultUnsupportedWithReason:(unsigned long long)arg1;
+ (id)resolutionResultUnsupportedWithReason:(unsigned long long)arg1 alternativeItems:(id)arg2;
+ (id)unsupported;
+ (id)unsupportedWithReason:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)_buildIntentSlotResolutionResultWithIntentSlotDescription:(id)arg1;
- (id)_dataForIntentSlotDescription:(id)arg1;
- (id)_initWithIntentSlotResolutionResult:(id)arg1 slotDescription:(id)arg2;
- (id)_initWithResolutionResult:(id)arg1;
- (id)_initWithResultCode:(long long)arg1;
- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;
- (id)_objectForIntentSlotValue:(id)arg1 slotDescription:(id)arg2;
- (id)_stringForResultCode:(long long)arg1;
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;
- (id)alternatives;
- (id)conflictingParameterKeyPath;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (id)dictionaryRepresentation;
- (id)disambiguationItems;
- (id)incompleteParameterKeyPaths;
- (id)incompleteValue;
- (id)itemToConfirm;
- (id)neededParameterKeyPaths;
- (long long)resolutionResultCode;
- (id)resolutionResultDataForIntent:(id)arg1 intentSlotDescription:(id)arg2 error:(id*)arg3;
- (id)resolvedValue;
- (void)setAlternatives:(id)arg1;
- (void)setConflictingParameterKeyPath:(id)arg1;
- (void)setDisambiguationItems:(id)arg1;
- (void)setIncompleteParameterKeyPaths:(id)arg1;
- (void)setIncompleteValue:(id)arg1;
- (void)setItemToConfirm:(id)arg1;
- (void)setNeededParameterKeyPaths:(id)arg1;
- (void)setResolutionResultCode:(long long)arg1;
- (void)setResolvedValue:(id)arg1;
- (void)setUnsupportedReason:(unsigned long long)arg1;
- (unsigned long long)unsupportedReason;

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
