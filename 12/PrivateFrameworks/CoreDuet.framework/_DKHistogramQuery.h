<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>_DKHistogramQuery.h</title>
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

/PrivateFrameworks/CoreDuet.framework/_DKHistogramQuery.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet (1)
 */

@interface _DKHistogramQuery : _DKQuery <_DKExecutableQuery> {
    NSString * _customIdentifier;
    id /* block */  _histogramHandler;
    bool  _includeLocalResults;
    bool  _includeRemoteResults;
    NSDateInterval * _interval;
    unsigned long long  _minimumOccurrencesForInclusion;
    NSPredicate * _predicate;
    _DKEventStream * _stream;
    NSArray * _valueKeyPaths;
}

@property (nonatomic, retain) NSString *customIdentifier;
@property (nonatomic, copy) id /* block */ histogramHandler;
@property (nonatomic) bool includeLocalResults;
@property (nonatomic) bool includeRemoteResults;
@property (nonatomic, retain) NSDateInterval *interval;
@property (nonatomic) unsigned long long minimumOccurrencesForInclusion;
@property (nonatomic, retain) NSPredicate *predicate;
@property (nonatomic, retain) _DKEventStream *stream;
@property (nonatomic, retain) NSArray *valueKeyPaths;

+ (id)histogramQueryForPersistedHistogramsForStream:(id)arg1 withCustomIdentifier:(id)arg2;
+ (id)histogramQueryForStream:(id)arg1 interval:(id)arg2;
+ (id)histogramQueryForStream:(id)arg1 interval:(id)arg2 predicate:(id)arg3 valueKeyPaths:(id)arg4;
+ (id)histogramQueryForStream:(id)arg1 interval:(id)arg2 withPredicate:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_constructFetchRequestPredicate;
- (id)_defaultValueKeyPaths;
- (id)_fetchRemoteResultsWithStorage:(id)arg1 error:(id*)arg2;
- (id)_histogramFromEvents:(id)arg1;
- (id)_histogramFromManagedObjects:(id)arg1;
- (id)_histogramFromValueCounts:(id)arg1;
- (id)_valueForEvent:(id)arg1;
- (id)customIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)executeUsingCoreDataStorage:(id)arg1 error:(id*)arg2;
- (id)handleResults:(id)arg1 error:(id)arg2;
- (id /* block */)histogramHandler;
- (bool)includeLocalResults;
- (bool)includeRemoteResults;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)interval;
- (unsigned long long)minimumOccurrencesForInclusion;
- (id)predicate;
- (void)setCustomIdentifier:(id)arg1;
- (void)setHistogramHandler:(id /* block */)arg1;
- (void)setIncludeLocalResults:(bool)arg1;
- (void)setIncludeRemoteResults:(bool)arg1;
- (void)setInterval:(id)arg1;
- (void)setMinimumOccurrencesForInclusion:(unsigned long long)arg1;
- (void)setPredicate:(id)arg1;
- (void)setStream:(id)arg1;
- (void)setValueKeyPaths:(id)arg1;
- (id)stream;
- (id)valueKeyPaths;

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