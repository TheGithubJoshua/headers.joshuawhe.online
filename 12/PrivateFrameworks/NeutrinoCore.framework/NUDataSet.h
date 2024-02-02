<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>NUDataSet.h</title>
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

/PrivateFrameworks/NeutrinoCore.framework/NUDataSet.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore (3462.2.130)
 */

@interface NUDataSet : NSObject <NSCopying, NSMutableCopying> {
    struct DataSet { 
        struct vector<double, std::__1::allocator<double> > { 
            double *__begin_; 
            double *__end_; 
            struct __compressed_pair<double *, std::__1::allocator<double> > { 
                double *__value_; 
            } __end_cap_; 
        } _values; 
    }  _data;
    struct { 
        unsigned int sum : 1; 
        unsigned int min : 1; 
        unsigned int max : 1; 
        unsigned int mean : 1; 
        unsigned int geomean : 1; 
        unsigned int median : 1; 
        unsigned int variance : 1; 
        unsigned int stddev : 1; 
        unsigned int stderr : 1; 
        unsigned int ci95 : 1; 
        unsigned int cv : 1; 
        unsigned int mad : 1; 
    }  _flags;
    struct { 
        double sum; 
        double min; 
        double max; 
        double mean; 
        double geomean; 
        double median; 
        double variance; 
        double stddev; 
        double stderr; 
        double ci95; 
        double cv; 
        double mad; 
    }  _stats;
}

@property (nonatomic, readonly) double coefficientOfVariation;
@property (nonatomic, readonly) double confidenceInterval95;
@property (nonatomic, readonly) long long count;
@property (nonatomic, readonly) double estimatedCoefficientOfVariation;
@property (nonatomic, readonly) double estimatedConfidenceInterval95;
@property (nonatomic, readonly) double estimatedStandardDeviation;
@property (nonatomic, readonly) double estimatedStandardError;
@property (nonatomic, readonly) double geometricMean;
@property (nonatomic, readonly) double max;
@property (nonatomic, readonly) double mean;
@property (nonatomic, readonly) double median;
@property (nonatomic, readonly) double medianAbsoluteDeviation;
@property (nonatomic, readonly) double min;
@property (nonatomic, readonly) double standardDeviation;
@property (nonatomic, readonly) double standardError;
@property (nonatomic, readonly) double sum;
@property (nonatomic, readonly) double variance;

- (id).cxx_construct;
- (void).cxx_destruct;
- (const struct DataSet { struct vector<double, std::__1::allocator<double> > { double *x_1_1_1; double *x_1_1_2; struct __compressed_pair<double *, std::__1::allocator<double> > { double *x_3_2_1; } x_1_1_3; } x1; }*)_const_data;
- (void)_resetStats;
- (double)coefficientOfVariation;
- (double)confidenceInterval95;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)count;
- (id)description;
- (void)enumerateValues:(id /* block */)arg1;
- (double)estimatedCoefficientOfVariation;
- (double)estimatedConfidenceInterval95;
- (double)estimatedStandardDeviation;
- (double)estimatedStandardError;
- (id)filter:(id /* block */)arg1;
- (double)geometricMean;
- (id)init;
- (id)initWithDataSet:(id)arg1;
- (id)initWithValue:(double)arg1;
- (id)initWithValues:(const double*)arg1 count:(long long)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToDataSet:(id)arg1;
- (id)map:(id /* block */)arg1;
- (double)max;
- (double)mean;
- (double)median;
- (double)medianAbsoluteDeviation;
- (double)min;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (double)percentile:(double)arg1;
- (double)standardDeviation;
- (double)standardError;
- (double)sum;
- (double)valueAtIndex:(long long)arg1;
- (double)variance;

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