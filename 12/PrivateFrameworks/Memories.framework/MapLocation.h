<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>MapLocation.h</title>
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

/PrivateFrameworks/Memories.framework/MapLocation.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories (4267.0.31)
 */

@interface MapLocation : NSObject <NSCoding, NSCopying> {
    NSMutableArray * _completionHandlers;
    NSString * _countryName;
    NSString * _customName;
    double  _latitude;
    double  _longitude;
    NSString * _name;
    bool  _resolved;
    bool  _resolving;
    int  _state;
}

@property (nonatomic, retain) NSMutableArray *completionHandlers;
@property (nonatomic, retain) NSString *countryName;
@property (nonatomic, retain) NSString *customName;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nonatomic, retain) NSString *name;
@property (getter=isResolved, nonatomic) bool resolved;
@property (getter=isResolving, nonatomic) bool resolving;
@property (nonatomic) int state;

+ (id)defaultLocation;
+ (id)mapLocationWithLatitude:(double)arg1 longitude:(double)arg2;
+ (id)mapLocationWithLocation:(id)arg1;
+ (id)mapLocationWithLocationCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;
+ (id)mapLocationWithMapItem:(id)arg1;
+ (id)objectFromPlist:(id)arg1 inProject:(id)arg2;

- (void).cxx_destruct;
- (void)_resolveWithCompletionHandler:(id /* block */)arg1;
- (long long)compare:(id)arg1;
- (id)completionHandlers;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)countryName;
- (id)customName;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasSameCoordinateAsLocation:(id)arg1 tolerance:(float)arg2;
- (bool)hasValidCoordinate;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqualToLocation:(id)arg1;
- (bool)isResolved;
- (bool)isResolving;
- (double)latitude;
- (double)longitude;
- (id)name;
- (id)plistRepresentation;
- (void)resolveWithCompletionHandler:(id /* block */)arg1;
- (void)setCompletionHandlers:(id)arg1;
- (void)setCountryName:(id)arg1;
- (void)setCustomName:(id)arg1;
- (void)setLatitude:(double)arg1;
- (void)setLongitude:(double)arg1;
- (void)setName:(id)arg1;
- (void)setResolved:(bool)arg1;
- (void)setResolving:(bool)arg1;
- (void)setState:(int)arg1;
- (int)state;
- (id)stringRepresentation;

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