<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>SACFClientFlowRequestCallback.h</title>
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

/PrivateFrameworks/SAObjects.framework/SACFClientFlowRequestCallback.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects (1)
 */

@interface SACFClientFlowRequestCallback : AceObject <SAAceSerializable>

@property (nonatomic, copy) NSArray *applicationContextObjects;
@property (nonatomic, copy) NSArray *conversationStateAttachments;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *dictationPromptAbortValues;
@property (nonatomic, copy) NSString *dictationPromptTargetDomain;
@property (nonatomic, copy) NSArray *dictationPromptTargetNodes;
@property (nonatomic, copy) NSArray *disambiguationPromptAbortValues;
@property (nonatomic, copy) NSNumber *disambiguationPromptAmbiguityId;
@property (nonatomic, copy) NSArray *disambiguationPromptResponseTargets;
@property (nonatomic, copy) NSString *disambiguationPromptTargetDomain;
@property (nonatomic, copy) NSArray *displayHintsAsJson;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *nlInput;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *weightedPromptAbortValues;
@property (nonatomic, copy) NSArray *weightedPromptResponseTargets;
@property (nonatomic, copy) NSNumber *weightedPromptStrict;
@property (nonatomic, copy) NSString *weightedPromptTargetDomain;

+ (id)clientFlowRequestCallback;
+ (id)clientFlowRequestCallbackWithDictionary:(id)arg1 context:(id)arg2;

- (id)applicationContextObjects;
- (id)conversationStateAttachments;
- (id)dictationPromptAbortValues;
- (id)dictationPromptTargetDomain;
- (id)dictationPromptTargetNodes;
- (id)disambiguationPromptAbortValues;
- (id)disambiguationPromptAmbiguityId;
- (id)disambiguationPromptResponseTargets;
- (id)disambiguationPromptTargetDomain;
- (id)displayHintsAsJson;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)nlInput;
- (void)setApplicationContextObjects:(id)arg1;
- (void)setConversationStateAttachments:(id)arg1;
- (void)setDictationPromptAbortValues:(id)arg1;
- (void)setDictationPromptTargetDomain:(id)arg1;
- (void)setDictationPromptTargetNodes:(id)arg1;
- (void)setDisambiguationPromptAbortValues:(id)arg1;
- (void)setDisambiguationPromptAmbiguityId:(id)arg1;
- (void)setDisambiguationPromptResponseTargets:(id)arg1;
- (void)setDisambiguationPromptTargetDomain:(id)arg1;
- (void)setDisplayHintsAsJson:(id)arg1;
- (void)setNlInput:(id)arg1;
- (void)setWeightedPromptAbortValues:(id)arg1;
- (void)setWeightedPromptResponseTargets:(id)arg1;
- (void)setWeightedPromptStrict:(id)arg1;
- (void)setWeightedPromptTargetDomain:(id)arg1;
- (id)weightedPromptAbortValues;
- (id)weightedPromptResponseTargets;
- (id)weightedPromptStrict;
- (id)weightedPromptTargetDomain;

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
