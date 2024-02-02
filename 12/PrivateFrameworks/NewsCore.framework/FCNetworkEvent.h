<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>FCNetworkEvent.h</title>
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

/PrivateFrameworks/NewsCore.framework/FCNetworkEvent.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore (2166)
 */

@interface FCNetworkEvent : NSObject <NSCopying> {
    NSString * _HTTPMethod;
    NSDictionary * _HTTPResponseHeaders;
    unsigned long long  _HTTPStatusCode;
    NSURL * _URL;
    NSString * _containerName;
    NSError * _error;
    NSString * _operationID;
    unsigned long long  _requestSize;
    NSString * _requestUUID;
    NSString * _responseMIMEType;
    unsigned long long  _responseSize;
    double  _startTime;
    long long  _type;
    NSDictionary * _w3cNavigationTiming;
}

@property (nonatomic, copy) NSString *HTTPMethod;
@property (nonatomic, copy) NSDictionary *HTTPResponseHeaders;
@property (nonatomic) unsigned long long HTTPStatusCode;
@property (nonatomic, copy) NSURL *URL;
@property (nonatomic, readonly) double connectDuration;
@property (nonatomic, copy) NSString *containerName;
@property (nonatomic, readonly) double dnsDuration;
@property (nonatomic, copy) NSError *error;
@property (nonatomic, readonly) double fetchStartTime;
@property (nonatomic, copy) NSString *operationID;
@property (nonatomic, readonly) double requestDuration;
@property (nonatomic) unsigned long long requestSize;
@property (nonatomic, copy) NSString *requestUUID;
@property (nonatomic, readonly) double responseDuration;
@property (nonatomic, readonly) double responseEndTime;
@property (nonatomic, copy) NSString *responseMIMEType;
@property (nonatomic) unsigned long long responseSize;
@property (nonatomic) double startTime;
@property (nonatomic, readonly) double totalDuration;
@property (nonatomic) long long type;
@property (nonatomic, copy) NSDictionary *w3cNavigationTiming;

- (void).cxx_destruct;
- (id)HTTPMethod;
- (id)HTTPResponseHeaders;
- (unsigned long long)HTTPStatusCode;
- (id)URL;
- (double)connectDuration;
- (id)containerName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (double)dnsDuration;
- (id)error;
- (double)fetchStartTime;
- (id)operationID;
- (double)requestDuration;
- (unsigned long long)requestSize;
- (id)requestUUID;
- (double)responseDuration;
- (double)responseEndTime;
- (id)responseMIMEType;
- (unsigned long long)responseSize;
- (void)setContainerName:(id)arg1;
- (void)setError:(id)arg1;
- (void)setHTTPMethod:(id)arg1;
- (void)setHTTPResponseHeaders:(id)arg1;
- (void)setHTTPStatusCode:(unsigned long long)arg1;
- (void)setOperationID:(id)arg1;
- (void)setRequestSize:(unsigned long long)arg1;
- (void)setRequestUUID:(id)arg1;
- (void)setResponseMIMEType:(id)arg1;
- (void)setResponseSize:(unsigned long long)arg1;
- (void)setStartTime:(double)arg1;
- (void)setType:(long long)arg1;
- (void)setURL:(id)arg1;
- (void)setW3cNavigationTiming:(id)arg1;
- (double)startTime;
- (double)totalDuration;
- (long long)type;
- (id)w3cNavigationTiming;

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