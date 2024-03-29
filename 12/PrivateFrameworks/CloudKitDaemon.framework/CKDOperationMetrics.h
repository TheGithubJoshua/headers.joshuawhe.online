<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CKDOperationMetrics.h</title>
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

/PrivateFrameworks/CloudKitDaemon.framework/CKDOperationMetrics.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon (736.235)
 */

@interface CKDOperationMetrics : NSObject <MMCSOperationMetric, NSCopying, NSSecureCoding> {
    unsigned long long  _assetsDownloaded;
    unsigned long long  _assetsDownloadedFileSize;
    unsigned long long  _assetsUploaded;
    unsigned long long  _assetsUploadedFileSize;
    unsigned long long  _bytesDownloaded;
    unsigned long long  _bytesUploaded;
    unsigned long long  _connections;
    unsigned long long  _connectionsCreated;
    double  _duration;
    double  _executing;
    double  _queueing;
    NSMutableArray * _ranges;
    unsigned long long  _recordsDeleted;
    unsigned long long  _recordsDownloaded;
    unsigned long long  _recordsUploaded;
    unsigned long long  _requestCount;
    NSMutableDictionary * _requestOperationCountsByType;
    NSMutableSet * _requestUUIDs;
    unsigned long long  _retries;
    NSDate * _startDate;
}

@property unsigned long long assetsDownloaded;
@property unsigned long long assetsDownloadedFileSize;
@property unsigned long long assetsUploaded;
@property unsigned long long assetsUploadedFileSize;
@property unsigned long long bytesDownloaded;
@property unsigned long long bytesUploaded;
@property unsigned long long connections;
@property unsigned long long connectionsCreated;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property double duration;
@property double executing;
@property (readonly) unsigned long long hash;
@property double queueing;
@property (nonatomic, retain) NSMutableArray *ranges;
@property (readonly) NSArray *rangesCopy;
@property unsigned long long recordsDeleted;
@property unsigned long long recordsDownloaded;
@property unsigned long long recordsUploaded;
@property unsigned long long requestCount;
@property (nonatomic, retain) NSMutableDictionary *requestOperationCountsByType;
@property (readonly) NSMutableSet *requestUUIDs;
@property unsigned long long retries;
@property (retain) NSDate *startDate;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)_initWithStartDate:(id)arg1;
- (void)addCKSpecificMetricsFromMetrics:(id)arg1;
- (void)addRange:(id)arg1;
- (void)addRequestOperationCountsByOperationType:(id)arg1;
- (unsigned long long)assetsDownloaded;
- (unsigned long long)assetsDownloadedFileSize;
- (unsigned long long)assetsUploaded;
- (unsigned long long)assetsUploadedFileSize;
- (unsigned long long)bytesDownloaded;
- (unsigned long long)bytesUploaded;
- (unsigned long long)connections;
- (unsigned long long)connectionsCreated;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (double)duration;
- (void)encodeWithCoder:(id)arg1;
- (double)executing;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)newRangeWithOperationState:(unsigned long long)arg1 startDate:(id)arg2 duration:(double)arg3;
- (double)queueing;
- (id)ranges;
- (id)rangesCopy;
- (unsigned long long)recordsDeleted;
- (unsigned long long)recordsDownloaded;
- (unsigned long long)recordsUploaded;
- (unsigned long long)requestCount;
- (id)requestOperationCountsByType;
- (id)requestUUIDs;
- (unsigned long long)retries;
- (void)setAssetsDownloaded:(unsigned long long)arg1;
- (void)setAssetsDownloadedFileSize:(unsigned long long)arg1;
- (void)setAssetsUploaded:(unsigned long long)arg1;
- (void)setAssetsUploadedFileSize:(unsigned long long)arg1;
- (void)setBytesDownloaded:(unsigned long long)arg1;
- (void)setBytesUploaded:(unsigned long long)arg1;
- (void)setConnections:(unsigned long long)arg1;
- (void)setConnectionsCreated:(unsigned long long)arg1;
- (void)setDuration:(double)arg1;
- (void)setExecuting:(double)arg1;
- (void)setQueueing:(double)arg1;
- (void)setRanges:(id)arg1;
- (void)setRecordsDeleted:(unsigned long long)arg1;
- (void)setRecordsDownloaded:(unsigned long long)arg1;
- (void)setRecordsUploaded:(unsigned long long)arg1;
- (void)setRequestCount:(unsigned long long)arg1;
- (void)setRequestOperationCountsByType:(id)arg1;
- (void)setRetries:(unsigned long long)arg1;
- (void)setStartDate:(id)arg1;
- (id)startDate;

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
