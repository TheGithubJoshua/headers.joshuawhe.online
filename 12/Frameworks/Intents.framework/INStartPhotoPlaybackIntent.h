<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>INStartPhotoPlaybackIntent.h</title>
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

/Frameworks/Intents.framework/INStartPhotoPlaybackIntent.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/Intents.framework/Intents (1)
 */

@interface INStartPhotoPlaybackIntent : INIntent <INStartPhotoPlaybackIntentExport>

@property (nonatomic, readonly, copy) NSString *albumName;
@property (nonatomic, readonly, copy) INDateComponentsRange *dateCreated;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long excludedAttributes;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long includedAttributes;
@property (nonatomic, readonly, copy) CLPlacemark *locationCreated;
@property (nonatomic, readonly, copy) NSArray *peopleInPhoto;
@property (nonatomic, readonly) long long peopleInPhotoOperator;
@property (nonatomic, readonly, copy) NSArray *searchTerms;
@property (nonatomic, readonly) long long searchTermsOperator;
@property (readonly) Class superclass;

- (id)_categoryVerb;
- (id)_dictionaryRepresentation;
- (long long)_intentCategory;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (void)_setMetadata:(id)arg1;
- (id)_typedBackingStore;
- (id)albumName;
- (id)dateCreated;
- (id)domain;
- (unsigned long long)excludedAttributes;
- (unsigned long long)includedAttributes;
- (id)initWithDateCreated:(id)arg1 locationCreated:(id)arg2 albumName:(id)arg3 searchTerms:(id)arg4 includedAttributes:(unsigned long long)arg5 excludedAttributes:(unsigned long long)arg6 peopleInPhoto:(id)arg7;
- (id)locationCreated;
- (id)parametersByName;
- (id)peopleInPhoto;
- (long long)peopleInPhotoOperator;
- (id)searchTerms;
- (long long)searchTermsOperator;
- (void)setAlbumName:(id)arg1;
- (void)setDateCreated:(id)arg1;
- (void)setDomain:(id)arg1;
- (void)setExcludedAttributes:(unsigned long long)arg1;
- (void)setIncludedAttributes:(unsigned long long)arg1;
- (void)setLocationCreated:(id)arg1;
- (void)setParametersByName:(id)arg1;
- (void)setPeopleInPhoto:(id)arg1;
- (void)setSearchTerms:(id)arg1;
- (void)setVerb:(id)arg1;
- (id)verb;

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