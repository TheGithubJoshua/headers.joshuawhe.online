<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CalDAVPostCalendarItemRecurrenceSplitTask.h</title>
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

/PrivateFrameworks/CalDAV.framework/CalDAVPostCalendarItemRecurrenceSplitTask.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV (265)
 */

@interface CalDAVPostCalendarItemRecurrenceSplitTask : CoreDAVPropertyFindBaseTask {
    CoreDAVResponseItem * _createdResponseItem;
    bool  _isAllDay;
    bool  _isFloating;
    NSURL * _postURLWithQuery;
    NSString * _previousETag;
    NSString * _previousScheduleTag;
    NSDate * _recurrenceDate;
    NSURL * _resourceURL;
    NSString * _uidForCreatedSeries;
    CoreDAVResponseItem * _updatedResponseItem;
}

@property (nonatomic, retain) CoreDAVResponseItem *createdResponseItem;
@property (nonatomic) bool isAllDay;
@property (nonatomic) bool isFloating;
@property (nonatomic, retain) NSURL *postURLWithQuery;
@property (nonatomic, retain) NSString *previousETag;
@property (nonatomic, retain) NSString *previousScheduleTag;
@property (nonatomic, retain) NSDate *recurrenceDate;
@property (nonatomic, retain) NSURL *resourceURL;
@property (nonatomic, retain) NSString *uidForCreatedSeries;
@property (nonatomic, retain) CoreDAVResponseItem *updatedResponseItem;

- (void).cxx_destruct;
- (id)_dataForItem:(id)arg1;
- (id)_documentForItem:(id)arg1;
- (id)_etagForItem:(id)arg1;
- (id)_recurrenceDateString;
- (id)_scheduleTagForItem:(id)arg1;
- (void)_updateBothResponseItems;
- (id)additionalHeaderValues;
- (id)createdETag;
- (id)createdICSData;
- (id)createdICSDocument;
- (id)createdResponseItem;
- (id)createdScheduleTag;
- (id)createdURL;
- (id)description;
- (id)httpMethod;
- (id)initWithResourceURL:(id)arg1 recurrenceDate:(id)arg2 floating:(bool)arg3 allday:(bool)arg4;
- (bool)isAllDay;
- (bool)isFloating;
- (id)postURLWithQuery;
- (id)previousETag;
- (id)previousScheduleTag;
- (id)recurrenceDate;
- (id)resourceURL;
- (void)setCreatedResponseItem:(id)arg1;
- (void)setIsAllDay:(bool)arg1;
- (void)setIsFloating:(bool)arg1;
- (void)setPostURLWithQuery:(id)arg1;
- (void)setPreviousETag:(id)arg1;
- (void)setPreviousScheduleTag:(id)arg1;
- (void)setRecurrenceDate:(id)arg1;
- (void)setResourceURL:(id)arg1;
- (void)setUidForCreatedSeries:(id)arg1;
- (void)setUpdatedResponseItem:(id)arg1;
- (id)uidForCreatedSeries;
- (id)updatedETag;
- (id)updatedICSDocument;
- (id)updatedResponseItem;
- (id)updatedScheduleTag;
- (id)url;
- (id)urlWithQuery;

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