<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>NetworkServiceProxyControlRequestStats.h</title>
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

/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxyControlRequestStats.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy (1)
 */

@interface NetworkServiceProxyControlRequestStats : NSObject <NSSecureCoding> {
    long long  _interface_type;
    long long  _protocol_type;
    unsigned int  _request_count;
    int  _request_type;
    NetworkServiceProxyRespTimeBuckets * _response_time_buckets;
    unsigned int  _result_certificate_failure_count;
    unsigned int  _result_connection_reset_count;
    unsigned int  _result_network_unavailable_count;
    unsigned int  _result_response_timeout_count;
    unsigned int  _result_send_failure_count;
    unsigned int  _result_server_unreachable_count;
    unsigned int  _result_success_count;
    unsigned int  _result_unknown_error_count;
}

@property long long interface_type;
@property long long protocol_type;
@property unsigned int request_count;
@property int request_type;
@property (retain) NetworkServiceProxyRespTimeBuckets *response_time_buckets;
@property unsigned int result_certificate_failure_count;
@property unsigned int result_connection_reset_count;
@property unsigned int result_network_unavailable_count;
@property unsigned int result_response_timeout_count;
@property unsigned int result_send_failure_count;
@property unsigned int result_server_unreachable_count;
@property unsigned int result_success_count;
@property unsigned int result_unknown_error_count;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addStats:(id)arg1;
- (void)clear;
- (void)encodeWithCoder:(id)arg1;
- (id)getAWDMetric;
- (void)incrErrorResult:(long long)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)interface_type;
- (long long)protocol_type;
- (unsigned int)request_count;
- (int)request_type;
- (id)response_time_buckets;
- (unsigned int)result_certificate_failure_count;
- (unsigned int)result_connection_reset_count;
- (unsigned int)result_network_unavailable_count;
- (unsigned int)result_response_timeout_count;
- (unsigned int)result_send_failure_count;
- (unsigned int)result_server_unreachable_count;
- (unsigned int)result_success_count;
- (unsigned int)result_unknown_error_count;
- (void)setInterface_type:(long long)arg1;
- (void)setProtocol_type:(long long)arg1;
- (void)setRequest_count:(unsigned int)arg1;
- (void)setRequest_type:(int)arg1;
- (void)setResponse_time_buckets:(id)arg1;
- (void)setResult_certificate_failure_count:(unsigned int)arg1;
- (void)setResult_connection_reset_count:(unsigned int)arg1;
- (void)setResult_network_unavailable_count:(unsigned int)arg1;
- (void)setResult_response_timeout_count:(unsigned int)arg1;
- (void)setResult_send_failure_count:(unsigned int)arg1;
- (void)setResult_server_unreachable_count:(unsigned int)arg1;
- (void)setResult_success_count:(unsigned int)arg1;
- (void)setResult_unknown_error_count:(unsigned int)arg1;

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