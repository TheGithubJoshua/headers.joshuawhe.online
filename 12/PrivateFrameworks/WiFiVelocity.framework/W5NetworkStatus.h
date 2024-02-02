<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>W5NetworkStatus.h</title>
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

/PrivateFrameworks/WiFiVelocity.framework/W5NetworkStatus.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/WiFiVelocity.framework/WiFiVelocity (111)
 */

@interface W5NetworkStatus : NSObject <NSCopying, NSSecureCoding> {
    unsigned int  _isAppleReachable;
    NSArray * _primaryDNSAddresses;
    NSArray * _primaryIPv4Addresses;
    NSString * _primaryIPv4InterfaceName;
    NSString * _primaryIPv4Router;
    NSString * _primaryIPv4ServiceID;
    NSString * _primaryIPv4ServiceName;
    NSArray * _primaryIPv6Addresses;
    NSString * _primaryIPv6InterfaceName;
    NSString * _primaryIPv6Router;
    NSString * _primaryIPv6ServiceID;
    NSString * _primaryIPv6ServiceName;
}

@property (nonatomic) unsigned int isAppleReachable;
@property (nonatomic, copy) NSArray *primaryDNSAddresses;
@property (nonatomic, copy) NSArray *primaryIPv4Addresses;
@property (nonatomic, copy) NSString *primaryIPv4InterfaceName;
@property (nonatomic, copy) NSString *primaryIPv4Router;
@property (nonatomic, copy) NSString *primaryIPv4ServiceID;
@property (nonatomic, copy) NSString *primaryIPv4ServiceName;
@property (nonatomic, copy) NSArray *primaryIPv6Addresses;
@property (nonatomic, copy) NSString *primaryIPv6InterfaceName;
@property (nonatomic, copy) NSString *primaryIPv6Router;
@property (nonatomic, copy) NSString *primaryIPv6ServiceID;
@property (nonatomic, copy) NSString *primaryIPv6ServiceName;

+ (bool)supportsSecureCoding;

- (bool)conformsToProtocol:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (unsigned int)isAppleReachable;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToNetworkStatus:(id)arg1;
- (id)primaryDNSAddresses;
- (id)primaryIPv4Addresses;
- (id)primaryIPv4InterfaceName;
- (id)primaryIPv4Router;
- (id)primaryIPv4ServiceID;
- (id)primaryIPv4ServiceName;
- (id)primaryIPv6Addresses;
- (id)primaryIPv6InterfaceName;
- (id)primaryIPv6Router;
- (id)primaryIPv6ServiceID;
- (id)primaryIPv6ServiceName;
- (void)setIsAppleReachable:(unsigned int)arg1;
- (void)setPrimaryDNSAddresses:(id)arg1;
- (void)setPrimaryIPv4Addresses:(id)arg1;
- (void)setPrimaryIPv4InterfaceName:(id)arg1;
- (void)setPrimaryIPv4Router:(id)arg1;
- (void)setPrimaryIPv4ServiceID:(id)arg1;
- (void)setPrimaryIPv4ServiceName:(id)arg1;
- (void)setPrimaryIPv6Addresses:(id)arg1;
- (void)setPrimaryIPv6InterfaceName:(id)arg1;
- (void)setPrimaryIPv6Router:(id)arg1;
- (void)setPrimaryIPv6ServiceID:(id)arg1;
- (void)setPrimaryIPv6ServiceName:(id)arg1;

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