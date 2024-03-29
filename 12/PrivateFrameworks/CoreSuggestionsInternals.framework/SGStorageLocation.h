<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>SGStorageLocation.h</title>
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

/PrivateFrameworks/CoreSuggestionsInternals.framework/SGStorageLocation.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals (680.125)
 */

@interface SGStorageLocation : NSObject <NSCopying, NSSecureCoding, SGEventLocationForGeocode> {
    double  _accuracy;
    NSString * _address;
    NSString * _airportCode;
    NSData * _handle;
    NSString * _label;
    double  _latitude;
    unsigned long long  _locationType;
    double  _longitude;
    double  _quality;
}

@property (nonatomic, readonly) double accuracy;
@property (nonatomic, readonly) NSString *address;
@property (nonatomic, readonly) NSString *airportCode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSData *handle;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *label;
@property (nonatomic, readonly) double latitude;
@property (nonatomic, readonly) unsigned long long locationType;
@property (nonatomic, readonly) double longitude;
@property (nonatomic, readonly) double quality;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)accuracy;
- (id)address;
- (id)airportCode;
- (long long)compare:(id)arg1;
- (id)convertToLocationWithId:(id)arg1 origin:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (double)geocodeAccuracy;
- (id)geocodeAddress;
- (id)geocodeAirportCode;
- (id)geocodeHandle;
- (bool)geocodeIsEnd;
- (bool)geocodeIsStart;
- (id)geocodeLabel;
- (double)geocodeLatitude;
- (double)geocodeLongitude;
- (id)geocodedLocationWithLabel:(id)arg1 address:(id)arg2 latitude:(double)arg3 longitude:(double)arg4 accuracy:(double)arg5 handle:(id)arg6;
- (id)geocodedLocationWithLatitude:(double)arg1 longitude:(double)arg2 accuracy:(double)arg3 handle:(id)arg4;
- (id)handle;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(unsigned long long)arg1 label:(id)arg2 address:(id)arg3 airportCode:(id)arg4 accuracy:(double)arg5 quality:(double)arg6;
- (id)initWithType:(unsigned long long)arg1 label:(id)arg2 address:(id)arg3 airportCode:(id)arg4 latitude:(double)arg5 longitude:(double)arg6 accuracy:(double)arg7 quality:(double)arg8 handle:(id)arg9;
- (id)initWithType:(unsigned long long)arg1 label:(id)arg2 airportCode:(id)arg3 latitude:(double)arg4 longitude:(double)arg5 accuracy:(double)arg6 quality:(double)arg7;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToStorageLocation:(id)arg1;
- (id)label;
- (double)latitude;
- (unsigned long long)locationType;
- (double)longitude;
- (double)quality;

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
