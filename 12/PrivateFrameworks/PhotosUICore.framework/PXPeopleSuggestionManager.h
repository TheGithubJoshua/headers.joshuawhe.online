<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PXPeopleSuggestionManager.h</title>
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

/PrivateFrameworks/PhotosUICore.framework/PXPeopleSuggestionManager.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore (3462.11.110)
 */

@interface PXPeopleSuggestionManager : NSObject {
    unsigned long long  _autoConfirmationsCount;
    unsigned int  _confirmNoSoundID;
    unsigned int  _confirmYesSoundID;
    NSMutableSet * _confirmedSuggestions;
    <PXPeopleSuggestionManagerDataSource> * _dataSource;
    <PXPeopleSuggestionManagerDelegate> * _delegate;
    bool  _didReachEnd;
    bool  _mute;
    <PXPerson> * _person;
    NSMutableSet * _rejectedSuggestions;
    NSMutableSet * _skippedSuggestions;
    PXPeoplePagingSuggestionProvider * _suggestionProvider;
    PXSuggestionToken * _suggestionToken;
    unsigned long long  _userConfirmationsCount;
}

@property (nonatomic) unsigned long long autoConfirmationsCount;
@property (nonatomic, readonly) bool canUndo;
@property (nonatomic) unsigned int confirmNoSoundID;
@property (nonatomic) unsigned int confirmYesSoundID;
@property (nonatomic, retain) NSMutableSet *confirmedSuggestions;
@property (nonatomic, readonly) NSArray *currentSuggestions;
@property (nonatomic, retain) <PXPeopleSuggestionManagerDataSource> *dataSource;
@property (nonatomic) <PXPeopleSuggestionManagerDelegate> *delegate;
@property (nonatomic) bool didReachEnd;
@property (nonatomic, readonly) bool isLoading;
@property (nonatomic) bool mute;
@property (nonatomic, retain) <PXPerson> *person;
@property (nonatomic, retain) NSMutableSet *rejectedSuggestions;
@property (nonatomic, retain) NSMutableSet *skippedSuggestions;
@property (nonatomic, retain) PXPeoplePagingSuggestionProvider *suggestionProvider;
@property (nonatomic, retain) PXSuggestionToken *suggestionToken;
@property (nonatomic) unsigned long long userConfirmationsCount;

- (void).cxx_destruct;
- (bool)_fetchingSuggestions;
- (void)_loadMoreSuggestionsWithCompletion:(id /* block */)arg1;
- (id)_nonSkippedSuggestionsForSuggestions:(id)arg1;
- (void)_notifyDelegateWeHaveMoreSuggestions:(bool)arg1;
- (void)_playConfirmNoSound;
- (void)_playConfirmYesSound;
- (unsigned int)_soundIdWithFilename:(id)arg1;
- (unsigned long long)autoConfirmationsCount;
- (bool)canUndo;
- (void)cancelPendingSuggestionLoading;
- (void)commitUserResponses;
- (id)commitUserResponsesToPerson:(id)arg1;
- (unsigned int)confirmNoSoundID;
- (unsigned int)confirmYesSoundID;
- (id)confirmedSuggestions;
- (id)currentSuggestions;
- (id)dataSource;
- (void)dealloc;
- (id)delegate;
- (bool)didReachEnd;
- (id)init;
- (id)initWithPerson:(id)arg1;
- (bool)isLoading;
- (bool)isSuggestionConfirmed:(id)arg1;
- (void)markSuggestions:(id)arg1 confirmed:(bool)arg2;
- (void)markSuggestionsAsSkipped:(id)arg1;
- (bool)mute;
- (id)person;
- (void)preloadSounds;
- (id)rejectedSuggestions;
- (void)requestNextSuggestion;
- (void)requestNextSuggestionsWithPageLimit:(unsigned long long)arg1;
- (void)setAutoConfirmationsCount:(unsigned long long)arg1;
- (void)setConfirmNoSoundID:(unsigned int)arg1;
- (void)setConfirmYesSoundID:(unsigned int)arg1;
- (void)setConfirmedSuggestions:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDidReachEnd:(bool)arg1;
- (void)setMute:(bool)arg1;
- (void)setPerson:(id)arg1;
- (void)setRejectedSuggestions:(id)arg1;
- (void)setSkippedSuggestions:(id)arg1;
- (void)setSuggestionProvider:(id)arg1;
- (void)setSuggestionToken:(id)arg1;
- (void)setUserConfirmationsCount:(unsigned long long)arg1;
- (id)skippedSuggestions;
- (id)suggestionProvider;
- (id)suggestionToken;
- (void)undo;
- (unsigned long long)userConfirmationsCount;

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
