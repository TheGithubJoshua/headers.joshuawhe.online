<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>MKTransitSectionController.h</title>
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

/Frameworks/MapKit.framework/MKTransitSectionController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/MapKit.framework/MapKit (1.0)
 */

@interface MKTransitSectionController : NSObject {
    MKTransitSectionPagingFilter * __pagingFilter;
    NSDate * _departureCutoffDate;
    NSDate * _expiredHighFrequencyCutoffDate;
    NSSet * _incidentEntitiesToExclude;
    NSSet * _linesToShow;
    MKMapItem * _mapItem;
    bool  _needsBuildRows;
    unsigned long long  _numberOfFilteredLines;
    unsigned long long  _numberOfFilteredRows;
    unsigned long long  _numberOfRows;
    <GEOTransitSystem> * _system;
}

@property (nonatomic, readonly) MKTransitSectionPagingFilter *_pagingFilter;
@property (nonatomic, retain) NSDate *departureCutoffDate;
@property (nonatomic, retain) NSDate *expiredHighFrequencyCutoffDate;
@property (nonatomic, retain) NSSet *incidentEntitiesToExclude;
@property (nonatomic, readonly) unsigned long long numberOfFilteredLines;
@property (nonatomic, readonly) <GEOTransitSystem> *system;

- (void).cxx_destruct;
- (void)_buildRows;
- (bool)_needsBuildRows;
- (id)_pagingFilter;
- (void)_setNeedsBuildRows;
- (id)departureCutoffDate;
- (id)expiredHighFrequencyCutoffDate;
- (bool)hasFilteredLines;
- (bool)hasFilteredRows;
- (id)incidentEntitiesToExclude;
- (void)incrementPagingFilter;
- (id)init;
- (id)initWithMapItem:(id)arg1 system:(id)arg2;
- (id)linesToShow;
- (unsigned long long)numberOfFilteredLines;
- (unsigned long long)numberOfRows;
- (void)setDepartureCutoffDate:(id)arg1;
- (void)setExpiredHighFrequencyCutoffDate:(id)arg1;
- (void)setIncidentEntitiesToExclude:(id)arg1;
- (id)system;

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
