<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>NetworkServiceProxyConnectionStats.h</title>
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

/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxyConnectionStats.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy (1)
 */

@interface NetworkServiceProxyConnectionStats : NSObject <NSSecureCoding> {
    unsigned int  _alternate_path_count;
    unsigned int  _captive_present_count;
    unsigned int  _captive_present_failed_count;
    unsigned int  _connection_count;
    NetworkServiceProxyDurationBuckets * _duration_buckets;
    unsigned int  _exceeded_mss_count;
    long long  _interface_type;
    unsigned int  _mptcp_success_count;
    long long  _protocol_type;
    unsigned int  _restricted_network_count;
    unsigned int  _restricted_network_failed_count;
    unsigned int  _result_connection_reset_count;
    unsigned int  _result_network_unavailable_count;
    unsigned int  _result_response_timeout_count;
    unsigned int  _result_send_failure_count;
    unsigned int  _result_server_busy_count;
    unsigned int  _result_server_detached_count;
    unsigned int  _result_server_interrupt_count;
    unsigned int  _result_server_offline_count;
    unsigned int  _result_server_session_expired_count;
    unsigned int  _result_server_unreachable_count;
    unsigned int  _result_success_count;
    unsigned int  _result_unknown_error_count;
    unsigned int  _tfo_success_count;
}

@property unsigned int alternate_path_count;
@property unsigned int captive_present_count;
@property unsigned int captive_present_failed_count;
@property unsigned int connection_count;
@property (retain) NetworkServiceProxyDurationBuckets *duration_buckets;
@property unsigned int exceeded_mss_count;
@property long long interface_type;
@property unsigned int mptcp_success_count;
@property long long protocol_type;
@property unsigned int restricted_network_count;
@property unsigned int restricted_network_failed_count;
@property unsigned int result_connection_reset_count;
@property unsigned int result_network_unavailable_count;
@property unsigned int result_response_timeout_count;
@property unsigned int result_send_failure_count;
@property unsigned int result_server_busy_count;
@property unsigned int result_server_detached_count;
@property unsigned int result_server_interrupt_count;
@property unsigned int result_server_offline_count;
@property unsigned int result_server_session_expired_count;
@property unsigned int result_server_unreachable_count;
@property unsigned int result_success_count;
@property unsigned int result_unknown_error_count;
@property unsigned int tfo_success_count;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addStats:(id)arg1;
- (unsigned int)alternate_path_count;
- (unsigned int)captive_present_count;
- (unsigned int)captive_present_failed_count;
- (void)clear;
- (unsigned int)connection_count;
- (id)duration_buckets;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)exceeded_mss_count;
- (id)getAWDMetric;
- (id)initWithCoder:(id)arg1;
- (long long)interface_type;
- (unsigned int)mptcp_success_count;
- (long long)protocol_type;
- (unsigned int)restricted_network_count;
- (unsigned int)restricted_network_failed_count;
- (unsigned int)result_connection_reset_count;
- (unsigned int)result_network_unavailable_count;
- (unsigned int)result_response_timeout_count;
- (unsigned int)result_send_failure_count;
- (unsigned int)result_server_busy_count;
- (unsigned int)result_server_detached_count;
- (unsigned int)result_server_interrupt_count;
- (unsigned int)result_server_offline_count;
- (unsigned int)result_server_session_expired_count;
- (unsigned int)result_server_unreachable_count;
- (unsigned int)result_success_count;
- (unsigned int)result_unknown_error_count;
- (void)setAlternate_path_count:(unsigned int)arg1;
- (void)setCaptive_present_count:(unsigned int)arg1;
- (void)setCaptive_present_failed_count:(unsigned int)arg1;
- (void)setConnection_count:(unsigned int)arg1;
- (void)setDuration_buckets:(id)arg1;
- (void)setExceeded_mss_count:(unsigned int)arg1;
- (void)setInterface_type:(long long)arg1;
- (void)setMptcp_success_count:(unsigned int)arg1;
- (void)setProtocol_type:(long long)arg1;
- (void)setRestricted_network_count:(unsigned int)arg1;
- (void)setRestricted_network_failed_count:(unsigned int)arg1;
- (void)setResult_connection_reset_count:(unsigned int)arg1;
- (void)setResult_network_unavailable_count:(unsigned int)arg1;
- (void)setResult_response_timeout_count:(unsigned int)arg1;
- (void)setResult_send_failure_count:(unsigned int)arg1;
- (void)setResult_server_busy_count:(unsigned int)arg1;
- (void)setResult_server_detached_count:(unsigned int)arg1;
- (void)setResult_server_interrupt_count:(unsigned int)arg1;
- (void)setResult_server_offline_count:(unsigned int)arg1;
- (void)setResult_server_session_expired_count:(unsigned int)arg1;
- (void)setResult_server_unreachable_count:(unsigned int)arg1;
- (void)setResult_success_count:(unsigned int)arg1;
- (void)setResult_unknown_error_count:(unsigned int)arg1;
- (void)setTfo_success_count:(unsigned int)arg1;
- (unsigned int)tfo_success_count;

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