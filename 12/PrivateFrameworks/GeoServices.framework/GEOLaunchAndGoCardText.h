<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>GEOLaunchAndGoCardText.h</title>
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

/PrivateFrameworks/GeoServices.framework/GEOLaunchAndGoCardText.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices (1364.36.4.19.8)
 */

@interface GEOLaunchAndGoCardText : PBCodable <NSCopying> {
    GEOPlaceFormattedString * _body;
    GEOFormattedString * _cardTitle;
    GEOPlaceFormattedString * _commuteTitle;
    GEOFormattedString * _routeDescription;
    GEOFormattedString * _routeTitle;
    GEOPlaceFormattedString * _title;
}

@property (nonatomic, retain) GEOPlaceFormattedString *body;
@property (nonatomic, retain) GEOFormattedString *cardTitle;
@property (nonatomic, retain) GEOPlaceFormattedString *commuteTitle;
@property (nonatomic, readonly) bool hasBody;
@property (nonatomic, readonly) bool hasCardTitle;
@property (nonatomic, readonly) bool hasCommuteTitle;
@property (nonatomic, readonly) bool hasRouteDescription;
@property (nonatomic, readonly) bool hasRouteTitle;
@property (nonatomic, readonly) bool hasTitle;
@property (nonatomic, retain) GEOFormattedString *routeDescription;
@property (nonatomic, retain) GEOFormattedString *routeTitle;
@property (nonatomic, retain) GEOPlaceFormattedString *title;

- (void).cxx_destruct;
- (id)body;
- (id)cardTitle;
- (id)commuteTitle;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBody;
- (bool)hasCardTitle;
- (bool)hasCommuteTitle;
- (bool)hasRouteDescription;
- (bool)hasRouteTitle;
- (bool)hasTitle;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)routeDescription;
- (id)routeTitle;
- (void)setBody:(id)arg1;
- (void)setCardTitle:(id)arg1;
- (void)setCommuteTitle:(id)arg1;
- (void)setRouteDescription:(id)arg1;
- (void)setRouteTitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)writeTo:(id)arg1;

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
