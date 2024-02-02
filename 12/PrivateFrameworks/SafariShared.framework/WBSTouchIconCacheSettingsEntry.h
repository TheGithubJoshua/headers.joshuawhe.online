<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>WBSTouchIconCacheSettingsEntry.h</title>
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

/PrivateFrameworks/SafariShared.framework/WBSTouchIconCacheSettingsEntry.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared (607.3.18)
 */

@interface WBSTouchIconCacheSettingsEntry : NSObject <WBSSiteMetadataImageCacheSettingsEntry> {
    NSString * _UUIDString;
    long long  _databaseID;
    UIColor * _extractedColor;
    bool  _higherPriorityIconDownloadFailedDueToNetworkError;
    NSString * _host;
    bool  _iconInCache;
    NSDate * _lastRequestDate;
    bool  _lastRequestWasInUserLoadedWebpage;
    long long  _requestCount;
    bool  _requestDidSucceed;
    long long  _transparencyAnalysisResult;
}

@property (nonatomic, copy) NSString *UUIDString;
@property (nonatomic) long long databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long downloadStatusFlags;
@property (nonatomic, retain) UIColor *extractedColor;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool higherPriorityIconDownloadFailedDueToNetworkError;
@property (nonatomic, copy) NSString *host;
@property (getter=isIconInCache, nonatomic) bool iconInCache;
@property (nonatomic, retain) NSDate *lastRequestDate;
@property (nonatomic) bool lastRequestWasInUserLoadedWebpage;
@property (nonatomic) long long requestCount;
@property (nonatomic) bool requestDidSucceed;
@property (readonly) Class superclass;
@property (nonatomic) long long transparencyAnalysisResult;

+ (id)entryWithHost:(id)arg1 lastRequestDate:(id)arg2 lastRequestWasInUserLoadedWebpage:(bool)arg3 requestCount:(long long)arg4 iconInCache:(bool)arg5 requestDidSucceed:(bool)arg6 extractedColor:(id)arg7 transparencyAnalysisResult:(long long)arg8 higherPriorityIconDownloadFailedDueToNetworkError:(bool)arg9 UUIDString:(id)arg10;

- (void).cxx_destruct;
- (id)UUIDString;
- (long long)databaseID;
- (id)description;
- (unsigned long long)downloadStatusFlags;
- (id)extractedColor;
- (unsigned long long)hash;
- (bool)higherPriorityIconDownloadFailedDueToNetworkError;
- (id)host;
- (id)initWithHost:(id)arg1;
- (id)initWithHost:(id)arg1 lastRequestDate:(id)arg2 lastRequestWasInUserLoadedWebpage:(bool)arg3 requestCount:(long long)arg4 iconInCache:(bool)arg5 requestDidSucceed:(bool)arg6 extractedColor:(id)arg7 transparencyAnalysisResult:(long long)arg8 higherPriorityIconDownloadFailedDueToNetworkError:(bool)arg9 UUIDString:(id)arg10;
- (id)initWithSQLiteRow:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isIconInCache;
- (id)lastRequestDate;
- (bool)lastRequestWasInUserLoadedWebpage;
- (long long)requestCount;
- (bool)requestDidSucceed;
- (void)setDatabaseID:(long long)arg1;
- (void)setExtractedColor:(id)arg1;
- (void)setHigherPriorityIconDownloadFailedDueToNetworkError:(bool)arg1;
- (void)setHost:(id)arg1;
- (void)setIconInCache:(bool)arg1;
- (void)setLastRequestDate:(id)arg1;
- (void)setLastRequestWasInUserLoadedWebpage:(bool)arg1;
- (void)setRequestCount:(long long)arg1;
- (void)setRequestDidSucceed:(bool)arg1;
- (void)setTransparencyAnalysisResult:(long long)arg1;
- (void)setUUIDString:(id)arg1;
- (long long)transparencyAnalysisResult;

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