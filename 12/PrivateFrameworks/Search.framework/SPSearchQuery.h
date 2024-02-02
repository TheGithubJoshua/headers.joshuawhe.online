<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>SPSearchQuery.h</title>
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

/PrivateFrameworks/Search.framework/SPSearchQuery.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/Search.framework/Search (1.0)
 */

@interface SPSearchQuery : NSObject <NSCopying> {
    double  _cancellationTime;
    _Atomic bool  _cancelled;
    long long  _contentFilters;
    unsigned long long  _creationStamp;
    double  _creationTime;
    double  _currentTime;
    NSDictionary * _dictationResponse;
    bool  _dictationStable;
    NSArray * _disabledApps;
    NSArray * _disabledBundles;
    NSArray * _disabledDomains;
    SFSearchSuggestion * _engagedSuggestion;
    bool  _finished;
    bool  _grouped;
    bool  _infinitePatience;
    bool  _internal;
    bool  _isPasscodeLocked;
    bool  _isWideScreen;
    NSString * _keyboardLanguage;
    NSString * _keyboardPrimaryLanguage;
    NSArray * _markedTextArray;
    long long  _maxCount;
    bool  _noTokenize;
    bool  _promoteLocalResults;
    bool  _promoteParsecResults;
    unsigned long long  _queryID;
    unsigned long long  _queryIdent;
    NSArray * _searchDomains;
    NSArray * _searchEntities;
    NSString * _searchString;
    unsigned long long  _whyQuery;
    NSArray * markedTextArray;
}

@property (nonatomic, readonly) double cancellationTime;
@property (nonatomic, readonly) bool cancelled;
@property (nonatomic) long long contentFilters;
@property (nonatomic, readonly) unsigned long long creationStamp;
@property (nonatomic, readonly) double creationTime;
@property (nonatomic, readonly) double currentTime;
@property (nonatomic, retain) NSDictionary *dictationResponse;
@property (nonatomic) bool dictationStable;
@property (nonatomic, retain) NSArray *disabledApps;
@property (nonatomic, retain) NSArray *disabledBundles;
@property (nonatomic, readonly) NSArray *disabledDomains;
@property (nonatomic, readonly) SFSearchSuggestion *engagedSuggestion;
@property (nonatomic) bool grouped;
@property (nonatomic, readonly) bool hasMarkedText;
@property (nonatomic) bool infinitePatience;
@property (nonatomic) bool internal;
@property (nonatomic, readonly) bool isPasscodeLocked;
@property (nonatomic) bool isWideScreen;
@property (nonatomic, readonly) NSString *keyboardLanguage;
@property (nonatomic, readonly) NSString *keyboardPrimaryLanguage;
@property (nonatomic, readonly) NSArray *markedTextArray;
@property (nonatomic) long long maxCount;
@property (nonatomic) bool noTokenize;
@property (nonatomic) bool promoteLocalResults;
@property (nonatomic) bool promoteParsecResults;
@property (nonatomic) unsigned long long queryIdent;
@property (nonatomic, readonly) NSArray *searchDomains;
@property (nonatomic, readonly) NSArray *searchEntities;
@property (nonatomic, readonly) NSString *searchString;
@property (nonatomic) unsigned long long whyQuery;

- (void).cxx_destruct;
- (void)cancel;
- (double)cancellationTime;
- (bool)cancelled;
- (long long)contentFilters;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)creationStamp;
- (double)creationTime;
- (double)currentTime;
- (id)dictationResponse;
- (bool)dictationStable;
- (id)disabledApps;
- (id)disabledBundles;
- (id)disabledDomains;
- (id)engagedSuggestion;
- (void)execute:(id /* block */)arg1;
- (bool)grouped;
- (bool)hasMarkedText;
- (unsigned long long)hash;
- (bool)infinitePatience;
- (id)initWithQuery:(id)arg1 domains:(id)arg2;
- (id)initWithSearchQueryContext:(id)arg1;
- (bool)internal;
- (bool)isEqual:(id)arg1;
- (bool)isPasscodeLocked;
- (bool)isWideScreen;
- (id)keyboardLanguage;
- (id)keyboardPrimaryLanguage;
- (id)markedTextArray;
- (long long)maxCount;
- (bool)noTokenize;
- (bool)promoteLocalResults;
- (bool)promoteParsecResults;
- (unsigned long long)queryIdent;
- (id)searchDomains;
- (id)searchEntities;
- (id)searchString;
- (void)setContentFilters:(long long)arg1;
- (void)setDictationResponse:(id)arg1;
- (void)setDictationStable:(bool)arg1;
- (void)setDisabledApps:(id)arg1;
- (void)setDisabledBundles:(id)arg1;
- (void)setGrouped:(bool)arg1;
- (void)setInfinitePatience:(bool)arg1;
- (void)setInternal:(bool)arg1;
- (void)setIsWideScreen:(bool)arg1;
- (void)setMaxCount:(long long)arg1;
- (void)setNoTokenize:(bool)arg1;
- (void)setPromoteLocalResults:(bool)arg1;
- (void)setPromoteParsecResults:(bool)arg1;
- (void)setQueryIdent:(unsigned long long)arg1;
- (void)setWhyQuery:(unsigned long long)arg1;
- (unsigned long long)whyQuery;

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