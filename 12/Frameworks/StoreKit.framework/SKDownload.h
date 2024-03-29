<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>SKDownload.h</title>
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

/Frameworks/StoreKit.framework/SKDownload.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/StoreKit.framework/StoreKit (1)
 */

@interface SKDownload : NSObject {
    id  _internal;
}

@property (getter=_downloadID, setter=_setDownloadID:, nonatomic, copy) NSNumber *_downloadID;
@property (nonatomic, readonly) NSString *contentIdentifier;
@property (nonatomic, readonly) long long contentLength;
@property (nonatomic, readonly) NSURL *contentURL;
@property (nonatomic, readonly) NSString *contentVersion;
@property (nonatomic, readonly) long long downloadState;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) float progress;
@property (nonatomic, readonly) long long state;
@property (nonatomic, readonly) double timeRemaining;
@property (nonatomic, readonly) SKPaymentTransaction *transaction;

+ (id)contentURLForProductID:(id)arg1;
+ (void)deleteContentForProductID:(id)arg1;

- (void).cxx_destruct;
- (void)_applyChangeset:(id)arg1;
- (id)_downloadID;
- (void)_setContentIdentifier:(id)arg1;
- (void)_setContentLength:(id)arg1;
- (void)_setContentURL:(id)arg1;
- (void)_setDownloadID:(id)arg1;
- (void)_setDownloadState:(long long)arg1;
- (void)_setError:(id)arg1;
- (void)_setProgress:(float)arg1;
- (void)_setTimeRemaining:(double)arg1;
- (void)_setTransaction:(id)arg1;
- (void)_setVersion:(id)arg1;
- (id)contentIdentifier;
- (long long)contentLength;
- (id)contentURL;
- (id)contentVersion;
- (id)copyXPCEncoding;
- (long long)downloadState;
- (id)error;
- (id)init;
- (id)initWithXPCEncoding:(id)arg1;
- (bool)isEqual:(id)arg1;
- (float)progress;
- (long long)state;
- (double)timeRemaining;
- (id)transaction;

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
