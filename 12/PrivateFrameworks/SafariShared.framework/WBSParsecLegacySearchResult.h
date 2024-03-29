<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>WBSParsecLegacySearchResult.h</title>
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

/PrivateFrameworks/SafariShared.framework/WBSParsecLegacySearchResult.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared (607.3.18)
 */

@interface WBSParsecLegacySearchResult : WBSParsecModel <WBSCompletionListItem, WBSParsecSearchResult> {
    WBSParsecActionButton * _actionButton;
    NSURL * _appPunchoutURL;
    NSString * _completion;
    WBSParsecImageRepresentation * _completionIcon;
    NSString * _descriptionText;
    NSString * _feedbackIdentifier;
    WBSParsecImageRepresentation * _icon;
    NSString * _identifier;
    unsigned long long  _legacyType;
    MKMapItem * _mapItem;
    NSString * _mediaKind;
    unsigned long long  _minimumRankOfTopHitToSuppressResult;
    NSString * _query;
    NSString * _referrerForLoadingResult;
    NSString * _sectionBundleIdentifier;
    NSString * _sectionHeader;
    SFSearchResult * _sfSearchResult;
    SFSearchResult * _sfSearchResultValue;
    NSString * _title;
    bool  _topHit;
    NSString * _urlString;
}

@property (nonatomic, readonly) WBSParsecActionButton *actionButton;
@property (nonatomic, readonly) NSURL *appPunchoutURL;
@property (nonatomic, readonly) NSString *completion;
@property (nonatomic, readonly) WBSParsecImageRepresentation *completionIcon;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *descriptionText;
@property (nonatomic, readonly) unsigned long long engagementDestination;
@property (nonatomic, readonly) NSString *feedbackIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) WBSParsecImageRepresentation *icon;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *lastSearchQuery;
@property (nonatomic, readonly) unsigned long long legacyType;
@property (nonatomic, readonly) MKMapItem *mapItem;
@property (nonatomic, readonly, copy) NSString *mediaKind;
@property (nonatomic, readonly) unsigned long long minimumRankOfTopHitToSuppressResult;
@property (nonatomic, readonly) NSString *parsecDomainIdentifier;
@property (nonatomic, readonly, copy) NSString *query;
@property (nonatomic, readonly, copy) NSString *referrerForLoadingResult;
@property (nonatomic, copy) NSString *sectionBundleIdentifier;
@property (nonatomic, readonly) NSString *sectionHeader;
@property (nonatomic, retain) SFSearchResult *sfSearchResultValue;
@property (nonatomic, retain) WBSQuerySuggestion *siriSuggestion;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *urlString;

+ (Class)_resultClassForDictionary:(id)arg1;
+ (id)_specializedSchema;
+ (id)resultWithDictionary:(id)arg1;
+ (id)schema;

- (void).cxx_destruct;
- (id)_glyphRepresentationsFromGlyphDictionaries:(id)arg1;
- (id)_glyphsFromGlyphRepresentations:(id)arg1 withSession:(id)arg2;
- (id)actionButton;
- (id)appPunchoutURL;
- (bool)canBecomeTopHitForQuery:(id)arg1;
- (id)completion;
- (id)completionIcon;
- (id)completionIconWithSession:(id)arg1;
- (id)description;
- (id)descriptionText;
- (unsigned long long)engagementDestination;
- (id)feedbackIdentifier;
- (id)icon;
- (id)iconWithSession:(id)arg1;
- (id)identifier;
- (id)initWithDictionary:(id)arg1;
- (unsigned long long)legacyType;
- (id)mapItem;
- (id)mediaKind;
- (unsigned long long)minimumRankOfTopHitToSuppressResult;
- (id)parsecDomainIdentifier;
- (id)query;
- (id)referrerForLoadingResult;
- (id)sectionBundleIdentifier;
- (id)sectionHeader;
- (void)setSectionBundleIdentifier:(id)arg1;
- (void)setSfSearchResultValue:(id)arg1;
- (id)sfSearchResultValue;
- (id)title;
- (id)urlString;

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
