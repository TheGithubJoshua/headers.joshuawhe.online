<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>ABNamePredicate.h</title>
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

/PrivateFrameworks/AddressBookLegacy.framework/ABNamePredicate.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/AddressBookLegacy.framework/AddressBookLegacy (30)
 */

@interface ABNamePredicate : ABPredicate {
    void * _addressBook;
    bool  _generateExceprts;
    NSArray * _groups;
    bool  _matchPersonOrCompanyNamesExclusively;
    bool  _matchPreferredName;
    bool  _matchWholeWords;
    NSString * _name;
    NSArray * _scopedContactIdentifiers;
    NSArray * _sources;
    struct __CFArray { } * _tokenizationSortKeys;
    void * _tokenizations;
}

@property (nonatomic, copy) NSString *accountIdentifier;
@property (nonatomic) void*addressBook;
@property (nonatomic) bool generateExceprts;
@property (nonatomic) void*group;
@property (nonatomic, retain) NSArray *groups;
@property (nonatomic) bool matchPersonOrCompanyNamesExclusively;
@property (nonatomic) bool matchPreferredName;
@property (nonatomic) bool matchWholeWords;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) NSArray *scopedContactIdentifiers;
@property (nonatomic) void*source;
@property (nonatomic, retain) NSArray *sources;

- (id)_matchClauseForColumns:(id)arg1 requiringAllTerms:(bool)arg2;
- (id)_personNameKeys;
- (id)_personNonNameKeys;
- (void)ab_bindJoinClauseComponentOfStatement:(struct CPSqliteStatement { struct CPSqliteConnection {} *x1; struct sqlite3_stmt {} *x2; double x3; bool x4; }*)arg1 withBindingOffset:(int*)arg2 predicateIdentifier:(int)arg3;
- (void)ab_bindWhereClauseComponentOfStatement:(struct CPSqliteStatement { struct CPSqliteConnection {} *x1; struct sqlite3_stmt {} *x2; double x3; bool x4; }*)arg1 withBindingOffset:(int*)arg2 predicateIdentifier:(int)arg3;
- (id)ab_metadataForMatchingRow:(struct CPSqliteStatement { struct CPSqliteConnection {} *x1; struct sqlite3_stmt {} *x2; double x3; bool x4; }*)arg1 columnOffset:(int)arg2;
- (id)accountIdentifier;
- (void*)addressBook;
- (void)dealloc;
- (id)emphasizedExcerptStringForMatchString:(id)arg1;
- (bool)generateExceprts;
- (void*)group;
- (id)groups;
- (id)init;
- (bool)isValid;
- (bool)matchPersonOrCompanyNamesExclusively;
- (bool)matchPreferredName;
- (bool)matchWholeWords;
- (id)name;
- (id)predicateFormat;
- (id)queryJoinsInCompound:(bool)arg1 predicateIdentifier:(int)arg2;
- (id)queryRankStringForPredicateIdentifier:(int)arg1;
- (id)querySelectPropertiesForPredicateIdentifier:(int)arg1;
- (id)queryWhereStringForPredicateIdentifier:(int)arg1;
- (id)scopedContactIdentifiers;
- (void)setAccountIdentifier:(id)arg1;
- (void)setAddressBook:(void*)arg1;
- (void)setGenerateExceprts:(bool)arg1;
- (void)setGroup:(void*)arg1;
- (void)setGroups:(id)arg1;
- (void)setMatchPersonOrCompanyNamesExclusively:(bool)arg1;
- (void)setMatchPreferredName:(bool)arg1;
- (void)setMatchWholeWords:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setScopedContactIdentifiers:(id)arg1;
- (void)setSource:(void*)arg1;
- (void)setSources:(id)arg1;
- (void*)source;
- (id)sources;
- (void*)tokenizations;

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
