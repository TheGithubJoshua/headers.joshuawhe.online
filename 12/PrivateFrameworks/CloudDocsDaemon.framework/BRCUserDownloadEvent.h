<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>BRCUserDownloadEvent.h</title>
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

/PrivateFrameworks/CloudDocsDaemon.framework/BRCUserDownloadEvent.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon (575.504)
 */

@interface BRCUserDownloadEvent : BRCEventMetric {
    bool  _didSucceed;
    NSMutableSet * _docIDs;
    bool  _isDownloadingForBackup;
    bool  _isRecursiveDownload;
    unsigned long long  _itemCount;
    NSUUID * _operationID;
    unsigned long long  _totalContentSize;
}

@property (nonatomic) bool didSucceed;
@property (nonatomic, retain) NSMutableSet *docIDs;
@property (nonatomic) bool isDownloadingForBackup;
@property (nonatomic) bool isRecursiveDownload;
@property (nonatomic) unsigned long long itemCount;
@property (nonatomic, retain) NSUUID *operationID;
@property (nonatomic) unsigned long long totalContentSize;

- (void).cxx_destruct;
- (id)additionalPayload;
- (bool)didSucceed;
- (id)docIDs;
- (id)init;
- (bool)isDownloadingForBackup;
- (bool)isRecursiveDownload;
- (unsigned long long)itemCount;
- (id)operationID;
- (void)setDidSucceed:(bool)arg1;
- (void)setDocIDs:(id)arg1;
- (void)setIsDownloadingForBackup:(bool)arg1;
- (void)setIsRecursiveDownload:(bool)arg1;
- (void)setItemCount:(unsigned long long)arg1;
- (void)setOperationID:(id)arg1;
- (void)setTotalContentSize:(unsigned long long)arg1;
- (id)subDescription;
- (unsigned long long)totalContentSize;

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
