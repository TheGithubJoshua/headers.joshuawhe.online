<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PDMeasurement.h</title>
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

/PrivateFrameworks/perfdata.framework/PDMeasurement.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/perfdata.framework/perfdata (4.250.16)
 */

@interface PDMeasurement : NSObject {
    NSString * _cachedMetricFilter;
    PDContainer * _container;
    unsigned long long  _group;
    bool  _largerBetter;
    NSNumber * _maximum;
    NSNumber * _mean;
    NSDictionary * _measurement;
    NSString * _metric;
    NSNumber * _minimum;
    NSNumber * _sampleCount;
    NSNumber * _standardDeviation;
    NSString * _unitString;
    NSNumber * _value;
    NSDictionary * _variables;
}

@property (nonatomic, retain) NSString *cachedMetricFilter;
@property (nonatomic) PDContainer *container;
@property (nonatomic) unsigned long long group;
@property (nonatomic, readonly) unsigned long long histogramBucketCount;
@property (nonatomic) bool largerBetter;
@property (nonatomic, retain) NSNumber *maximum;
@property (nonatomic, retain) NSNumber *mean;
@property (nonatomic, retain) NSDictionary *measurement;
@property (nonatomic, retain) NSString *metric;
@property (nonatomic, retain) NSNumber *minimum;
@property (nonatomic, readonly) unsigned long long percentileCount;
@property (nonatomic, retain) NSNumber *sampleCount;
@property (nonatomic, retain) NSNumber *standardDeviation;
@property (nonatomic, retain) NSString *unitString;
@property (nonatomic, retain) NSNumber *value;
@property (nonatomic, retain) NSDictionary *variables;

- (void).cxx_destruct;
- (id)cachedMetricFilter;
- (id)container;
- (id)description;
- (bool)enumerateHistogramBucketsWithError:(id*)arg1 usingBlock:(id /* block */)arg2;
- (bool)enumeratePercentilesWithError:(id*)arg1 usingBlock:(id /* block */)arg2;
- (unsigned long long)group;
- (unsigned long long)histogramBucketCount;
- (id)initWithContainer:(id)arg1 dictionary:(id)arg2 group:(unsigned long long)arg3 error:(id*)arg4;
- (bool)isComparableTo:(id)arg1;
- (bool)isComparableTo:(id)arg1 ignoringNullableVariables:(id)arg2;
- (bool)isComparableTo:(id)arg1 ignoringVariables:(id)arg2;
- (bool)isLike:(id)arg1;
- (bool)largerBetter;
- (bool)matchesMetricFilter:(id)arg1;
- (bool)matchesVariables:(id)arg1 ignoringMissing:(bool)arg2;
- (id)maximum;
- (id)mean;
- (id)measurement;
- (id)metric;
- (id)metricFilter;
- (id)metricFilterIgnoringNullableVariables:(id)arg1;
- (id)metricFilterIgnoringVariables:(id)arg1;
- (id)minimum;
- (unsigned long long)percentileCount;
- (id)sampleCount;
- (void)setCachedMetricFilter:(id)arg1;
- (void)setContainer:(id)arg1;
- (void)setGroup:(unsigned long long)arg1;
- (void)setLargerBetter:(bool)arg1;
- (void)setMaximum:(id)arg1;
- (void)setMean:(id)arg1;
- (void)setMeasurement:(id)arg1;
- (void)setMetric:(id)arg1;
- (void)setMinimum:(id)arg1;
- (void)setSampleCount:(id)arg1;
- (void)setStandardDeviation:(id)arg1;
- (void)setUnitString:(id)arg1;
- (void)setValue:(id)arg1;
- (void)setVariables:(id)arg1;
- (id)standardDeviation;
- (id)unitString;
- (id)value;
- (id)variables;

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
