<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>WBSSavedPassword.h</title>
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

/PrivateFrameworks/SafariCore.framework/WBSSavedPassword.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore (607.3.18)
 */

@interface WBSSavedPassword : NSObject {
    NSDate * _earliestModifiedDateForSites;
    NSString * _highLevelDomain;
    NSString * _password;
    NSMutableDictionary * _siteToProtectionSpaces;
    NSMutableArray * _sites;
    NSString * _user;
    bool  _userIsNeverSaveMarker;
}

@property (nonatomic, readonly) NSDate *earliestModifiedDateForSites;
@property (nonatomic, readonly) NSString *highLevelDomain;
@property (nonatomic, readonly) NSString *password;
@property (nonatomic, readonly) NSArray *protectionSpaces;
@property (nonatomic, readonly) NSArray *sites;
@property (nonatomic, readonly) NSString *user;
@property (nonatomic, readonly) bool userIsNeverSaveMarker;
@property (nonatomic, readonly) NSString *userVisibleHighLevelDomain;
@property (nonatomic, readonly) NSArray *userVisibleSites;

// Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore

+ (void)enumerateRangesMatchingPatternWithTokenizer:(struct __CFStringTokenizer { }*)arg1 string:(id)arg2 pattern:(id)arg3 matchingType:(long long)arg4 withBlock:(id /* block */)arg5;
+ (bool)stringMatchesPatternWithTokenizer:(struct __CFStringTokenizer { }*)arg1 string:(id)arg2 pattern:(id)arg3 matchingType:(long long)arg4;

- (void).cxx_destruct;
- (void)_addModificationDate:(id)arg1;
- (void)_addProtectionSpace:(id)arg1 forSite:(id)arg2;
- (void)_adoptSitesFromSavedPassword:(id)arg1;
- (bool)_containsProtectionSpace:(id)arg1;
- (void)_deleteCredentialForProtectionSpace:(id)arg1 fromStorage:(id)arg2;
- (void)_deleteCredentials;
- (void)_deleteCredentialsForSite:(id)arg1;
- (id)_initWithHighLevelDomain:(id)arg1 user:(id)arg2 password:(id)arg3;
- (bool)_matchesSearchPattern:(id)arg1 matchAgainstUser:(bool)arg2 associatedDomains:(id)arg3;
- (void)_setUser:(id)arg1 password:(id)arg2;
- (long long)compare:(id)arg1;
- (id)description;
- (id)earliestModifiedDateForSites;
- (unsigned long long)hash;
- (id)highLevelDomain;
- (bool)isDuplicateWithoutUserNameOfPassword:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)matchesDomain:(id)arg1 associatedDomains:(id)arg2;
- (bool)matchesServiceNameHintString:(id)arg1;
- (bool)matchesUserTypedSearchPattern:(id)arg1 associatedDomains:(id)arg2;
- (id)password;
- (id)protectionSpaces;
- (id)sites;
- (id)user;
- (bool)userIsNeverSaveMarker;
- (id)userVisibleHighLevelDomain;
- (id)userVisibleSites;

// Image: /System/Library/Frameworks/SafariServices.framework/SafariServices

- (id)_firstSiteMatchingSearchPattern:(id)arg1 withTokenizer:(struct __CFStringTokenizer { }*)arg2;
- (void)safari_getTitle:(id*)arg1 detail:(id*)arg2 forTableViewCell:(id)arg3 withSearchPattern:(id)arg4 warningImage:(id)arg5 leftToRight:(bool)arg6;

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
