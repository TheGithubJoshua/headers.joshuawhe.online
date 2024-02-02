<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>FUFlight.h</title>
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

/PrivateFrameworks/FlightUtilities.framework/FUFlight.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/FlightUtilities.framework/FlightUtilities (115.11)
 */

@interface FUFlight : NSObject <NSCopying, NSSecureCoding> {
    FUAirline * _airline;
    NSArray * _allLegs;
    unsigned long long  _arrivalLegIndex;
    NSString * _cancellationMessage;
    NSArray * _codeShares;
    unsigned long long  _departureLegIndex;
    FUAirline * _displayAirline;
    unsigned long long  _displayFlightNumber;
    NSDate * _expirationDate;
    NSString * _flightIdentifier;
    unsigned long long  _flightNumber;
    NSString * _identifier;
    NSArray * _legs;
    NSString * _queriedAirlineTitle;
    NSString * _rawResponse;
}

@property (retain) FUAirline *airline;
@property (nonatomic, retain) NSArray *allLegs;
@property (readonly) FUFlightStep *arrival;
@property unsigned long long arrivalLegIndex;
@property (retain) NSString *cancellationMessage;
@property (retain) NSArray *codeShares;
@property (readonly) FUFlightStep *departure;
@property unsigned long long departureLegIndex;
@property (retain) FUAirline *displayAirline;
@property (readonly) NSString *displayFlightCode;
@property unsigned long long displayFlightNumber;
@property (readonly) double duration;
@property (retain) NSDate *expirationDate;
@property (readonly) NSString *flightCode;
@property (retain) NSString *flightIdentifier;
@property unsigned long long flightNumber;
@property (nonatomic, retain) NSString *identifier;
@property (retain) NSArray *legs;
@property (retain) NSString *queriedAirlineTitle;
@property (retain) NSString *rawResponse;
@property (readonly) long long status;

+ (void)loadFlightsWithNumber:(unsigned long long)arg1 airlineCode:(id)arg2 date:(id)arg3 dateType:(long long)arg4 completionHandler:(id /* block */)arg5;
+ (bool)supportsSecureCoding;
+ (id)timeFormatterForIdentifier;

- (void).cxx_destruct;
- (id)airline;
- (id)allLegs;
- (id)arrival;
- (unsigned long long)arrivalLegIndex;
- (id)cancellationMessage;
- (id)codeShares;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)departure;
- (unsigned long long)departureLegIndex;
- (id)description;
- (id)displayAirline;
- (id)displayFlightCode;
- (unsigned long long)displayFlightNumber;
- (double)duration;
- (void)encodeWithCoder:(id)arg1;
- (id)expirationDate;
- (id)firstLeg;
- (id)flightCode;
- (id)flightIdentifier;
- (unsigned long long)flightNumber;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)lastLeg;
- (id)legs;
- (id)legsAsFlights;
- (id)queriedAirlineTitle;
- (id)rawResponse;
- (id)relevantLeg;
- (void)setAirline:(id)arg1;
- (void)setAllLegs:(id)arg1;
- (void)setArrivalLegIndex:(unsigned long long)arg1;
- (void)setCancellationMessage:(id)arg1;
- (void)setCodeShares:(id)arg1;
- (void)setDepartureLegIndex:(unsigned long long)arg1;
- (void)setDepartureLegIndex:(unsigned long long)arg1 arrivalLegIndex:(unsigned long long)arg2;
- (void)setDisplayAirline:(id)arg1;
- (void)setDisplayFlightNumber:(unsigned long long)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setFlightIdentifier:(id)arg1;
- (void)setFlightNumber:(unsigned long long)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLegs:(id)arg1;
- (void)setQueriedAirlineTitle:(id)arg1;
- (void)setRawResponse:(id)arg1;
- (long long)status;

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