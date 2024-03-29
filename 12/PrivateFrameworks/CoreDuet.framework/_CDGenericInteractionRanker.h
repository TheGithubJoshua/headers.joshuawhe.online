<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>_CDGenericInteractionRanker.h</title>
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

/PrivateFrameworks/CoreDuet.framework/_CDGenericInteractionRanker.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet (1)
 */

@interface _CDGenericInteractionRanker : NSObject <_CDInteractionRanking> {
    NSSet * _allowedIdentifiers;
    NSSet * _allowedPersonIdType;
    NSSet * _allowedPersonIds;
    double  _c;
    double  _contactNameKeywordMatchWeight;
    NSString * _contactPrefix;
    double  _diffWeekPeriodWeight;
    double  _keywordWeight;
    double  _locationWeight;
    double  _outgoingWeight;
    unsigned long long  _rankAggregationMethod;
    NSDate * _referenceDate;
    NSSet * _referenceKeywords;
    NSString * _referenceLocationUUID;
    bool  _requireAllSeedContacts;
    double  _sameWeekPeriodWeight;
    NSArray * _seedContacts;
    double  _socialWeight;
    double  _timeHalfLife;
    double  _timeOfDayHalfLife;
    double  _timeOfDayWeight;
    double  _timeOfWeekHalfLife;
    double  _timeOfWeekWeight;
    double  _timeWeight;
}

@property (retain) NSSet *allowedIdentifiers;
@property (retain) NSSet *allowedPersonIdType;
@property (retain) NSSet *allowedPersonIds;
@property double c;
@property double contactNameKeywordMatchWeight;
@property (retain) NSString *contactPrefix;
@property double diffWeekPeriodWeight;
@property double keywordWeight;
@property double locationWeight;
@property double outgoingWeight;
@property (nonatomic) unsigned long long rankAggregationMethod;
@property (retain) NSDate *referenceDate;
@property (retain) NSSet *referenceKeywords;
@property (retain) NSString *referenceLocationUUID;
@property bool requireAllSeedContacts;
@property double sameWeekPeriodWeight;
@property (retain) NSArray *seedContacts;
@property double socialWeight;
@property double timeHalfLife;
@property double timeOfDayHalfLife;
@property double timeOfDayWeight;
@property double timeOfWeekHalfLife;
@property double timeOfWeekWeight;
@property double timeWeight;

+ (bool)isDateInWeekend:(id)arg1;

- (void).cxx_destruct;
- (id)allowedIdentifiers;
- (id)allowedPersonIdType;
- (id)allowedPersonIds;
- (double)c;
- (bool)canRankContacts;
- (bool)contactIsAllowed:(id)arg1;
- (double)contactNameKeywordMatchWeight;
- (id)contactPrefix;
- (double)diffWeekPeriodWeight;
- (id)init;
- (double)keywordWeight;
- (double)locationWeight;
- (double)outgoingWeight;
- (unsigned long long)rankAggregationMethod;
- (double)rankContact:(id)arg1;
- (id)rankInteraction:(id)arg1;
- (id)referenceDate;
- (id)referenceKeywords;
- (id)referenceLocationUUID;
- (bool)requireAllSeedContacts;
- (double)sameWeekPeriodWeight;
- (id)seedContacts;
- (void)setAllowedIdentifiers:(id)arg1;
- (void)setAllowedPersonIdType:(id)arg1;
- (void)setAllowedPersonIds:(id)arg1;
- (void)setC:(double)arg1;
- (void)setContactNameKeywordMatchWeight:(double)arg1;
- (void)setContactPrefix:(id)arg1;
- (void)setDiffWeekPeriodWeight:(double)arg1;
- (void)setKeywordWeight:(double)arg1;
- (void)setLocationWeight:(double)arg1;
- (void)setOutgoingWeight:(double)arg1;
- (void)setRankAggregationMethod:(unsigned long long)arg1;
- (void)setReferenceDate:(id)arg1;
- (void)setReferenceKeywords:(id)arg1;
- (void)setReferenceLocationUUID:(id)arg1;
- (void)setRequireAllSeedContacts:(bool)arg1;
- (void)setSameWeekPeriodWeight:(double)arg1;
- (void)setSeedContacts:(id)arg1;
- (void)setSocialWeight:(double)arg1;
- (void)setTimeHalfLife:(double)arg1;
- (void)setTimeOfDayHalfLife:(double)arg1;
- (void)setTimeOfDayWeight:(double)arg1;
- (void)setTimeOfWeekHalfLife:(double)arg1;
- (void)setTimeOfWeekWeight:(double)arg1;
- (void)setTimeWeight:(double)arg1;
- (double)socialWeight;
- (double)timeHalfLife;
- (double)timeOfDayHalfLife;
- (double)timeOfDayWeight;
- (double)timeOfWeekHalfLife;
- (double)timeOfWeekWeight;
- (double)timeWeight;

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
