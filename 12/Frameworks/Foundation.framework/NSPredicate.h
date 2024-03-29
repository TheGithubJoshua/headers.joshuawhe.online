<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>NSPredicate.h</title>
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

/Frameworks/Foundation.framework/NSPredicate.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/Foundation.framework/Foundation (1575.23)
 */

@interface NSPredicate : NSObject <NSCopying, NSSecureCoding> {
    struct _predicateFlags { 
        unsigned int _evaluationBlocked : 1; 
        unsigned int _reservedPredicateFlags : 31; 
    }  _predicateFlags;
    unsigned int  reserved;
}

@property (readonly, copy) NSString *predicateFormat;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (void)initialize;
+ (id)newStringFrom:(id)arg1 usingUnicodeTransforms:(unsigned long long)arg2;
+ (id)predicateWithBlock:(id /* block */)arg1;
+ (id)predicateWithFormat:(id)arg1;
+ (id)predicateWithFormat:(id)arg1 argumentArray:(id)arg2;
+ (id)predicateWithFormat:(id)arg1 arguments:(char *)arg2;
+ (id)predicateWithValue:(bool)arg1;
+ (struct __CFLocale { }*)retainedLocale;
+ (bool)supportsSecureCoding;

- (bool)_allowsEvaluation;
- (void)_validateForMetadataQueryScopes:(id)arg1;
- (void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2;
- (void)allowEvaluation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)evaluateWithObject:(id)arg1;
- (bool)evaluateWithObject:(id)arg1 substitutionVariables:(id)arg2;
- (id)generateMetadataDescription;
- (id)initWithCoder:(id)arg1;
- (id)predicateFormat;
- (id)predicateWithSubstitutionVariables:(id)arg1;

// Image: /System/Library/Frameworks/ClassKit.framework/ClassKit

- (id)cls_normalizedPredicate:(id)arg1 error:(id*)arg2;

// Image: /System/Library/Frameworks/CoreData.framework/CoreData

- (id)minimalFormInContext:(id)arg1;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

- (id)hk_filterRepresentationForDataTypes:(id)arg1 filterClasses:(id)arg2;

// Image: /System/Library/Frameworks/Photos.framework/Photos

+ (id)predicateForAssetsInAssetCollectionWithID:(id)arg1;
+ (id)predicateForCloudInvitationsInAssetCollection:(id)arg1;
+ (id)predicateForCommentsInAsset:(id)arg1;
+ (id)predicateForLikesInAsset:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AddressBookLegacy.framework/AddressBookLegacy

- (void)ab_addCallbackContextToArray:(id)arg1;
- (void)ab_bindJoinClauseComponentOfStatement:(struct CPSqliteStatement { struct CPSqliteConnection {} *x1; struct sqlite3_stmt {} *x2; double x3; bool x4; }*)arg1 withBindingOffset:(int*)arg2 predicateIdentifier:(int)arg3;
- (void)ab_bindSelectClauseComponentOfStatement:(struct CPSqliteStatement { struct CPSqliteConnection {} *x1; struct sqlite3_stmt {} *x2; double x3; bool x4; }*)arg1 withBindingOffset:(int*)arg2 predicateIdentifier:(int)arg3;
- (void)ab_bindWhereClauseComponentOfStatement:(struct CPSqliteStatement { struct CPSqliteConnection {} *x1; struct sqlite3_stmt {} *x2; double x3; bool x4; }*)arg1 withBindingOffset:(int*)arg2 predicateIdentifier:(int)arg3;
- (bool)ab_hasCallback;
- (id)ab_metadataForMatchingRow:(struct CPSqliteStatement { struct CPSqliteConnection {} *x1; struct sqlite3_stmt {} *x2; double x3; bool x4; }*)arg1 columnOffset:(unsigned long long)arg2;
- (id)ab_newQueryWithSortOrder:(unsigned int)arg1 ranked:(bool)arg2 addressBook:(void*)arg3 propertyIndices:(const struct __CFDictionary {}**)arg4;
- (void)ab_runPredicateWithSortOrder:(unsigned int)arg1 ranked:(bool)arg2 inAddressBook:(void*)arg3 withDelegate:(id)arg4;

// Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs

- (id)br_fileObjectIDWithWatchedChildren;
- (id)br_urlWithWatchedChildren;
- (id)br_watchedFileObjectID;
- (id)br_watchedURL;

// Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon

+ (id)predicateWithCKDPQueryFilters:(id)arg1 translator:(id)arg2;
+ (id)predicateWithSortedCKDPQueryFilters:(id)arg1 translator:(id)arg2;

- (id)CKDPQueryFiltersWithTranslator:(id)arg1 error:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (id)_hd_predicateForCompatibilityVersion:(long long)arg1;

- (id)_sqlPredicateForSelect;

// Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore

+ (id)predicateWithFCCKPQueryFilters:(id)arg1 translator:(id)arg2;
+ (id)predicateWithSortedFCCKPQueryFilters:(id)arg1 translator:(id)arg2;

- (id)FCCKPQueryFiltersWithTranslator:(id)arg1 error:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices

+ (id)_predicateForItemsWithAttribute:(id)arg1;

// Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing

+ (id)vcp_livePhotosPredicate:(bool)arg1;
+ (id)vcp_moviesPredicate:(bool)arg1;
+ (id)vcp_photosPredicate:(bool)arg1;
+ (id)vcp_stillPhotosPredicate:(bool)arg1;

// Image: /System/Library/PrivateFrameworks/VideosUICore.framework/VideosUICore

+ (id)_vui_keyPathsInComparisonPredicate:(id)arg1;
+ (id)_vui_keyPathsInCompoundPredicate:(id)arg1;
+ (id)_vui_keyPathsInPredicate:(id)arg1;
+ (id)vui_equalPredicateWithKeyPath:(id)arg1 value:(id)arg2;
+ (id)vui_inPredicateWithKeyPath:(id)arg1 value:(id)arg2;
+ (id)vui_keyPathBitTestPredicateWithKeyPath:(id)arg1 value:(id)arg2;
+ (id)vui_notEqualPredicateWithKeyPath:(id)arg1 value:(id)arg2;
+ (id)vui_predicateWithSubpredicates:(id)arg1 type:(unsigned long long)arg2;

- (id)vui_keyPathsInPredicate;

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
