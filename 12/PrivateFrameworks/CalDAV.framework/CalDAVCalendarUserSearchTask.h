<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CalDAVCalendarUserSearchTask.h</title>
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

/PrivateFrameworks/CalDAV.framework/CalDAVCalendarUserSearchTask.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV (265)
 */

@interface CalDAVCalendarUserSearchTask : CoreDAVPropertyFindBaseTask {
    bool  _findAttendees;
    bool  _findGroups;
    bool  _findLocations;
    bool  _findResources;
    bool  _findUsers;
    unsigned long long  _resultLimit;
    NSSet * _searchStrings;
}

@property (nonatomic) bool findAttendees;
@property bool findGroups;
@property (nonatomic) bool findLocations;
@property bool findResources;
@property bool findUsers;
@property (nonatomic) unsigned long long resultLimit;
@property (nonatomic, retain) NSSet *searchStrings;

+ (bool)tokensAreLegal:(id)arg1;

- (void).cxx_destruct;
- (id)extraAttributes;
- (bool)findAttendees;
- (bool)findGroups;
- (bool)findLocations;
- (bool)findResources;
- (bool)findUsers;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)httpMethod;
- (id)initWithSearchStrings:(id)arg1 atURL:(id)arg2;
- (id)requestBody;
- (unsigned long long)resultLimit;
- (id)searchItems;
- (id)searchStrings;
- (void)setFindAttendees:(bool)arg1;
- (void)setFindGroups:(bool)arg1;
- (void)setFindLocations:(bool)arg1;
- (void)setFindResources:(bool)arg1;
- (void)setFindUsers:(bool)arg1;
- (void)setResultLimit:(unsigned long long)arg1;
- (void)setSearchStrings:(id)arg1;

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
