<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>NEFilterProviderConfiguration.h</title>
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

/Frameworks/NetworkExtension.framework/NEFilterProviderConfiguration.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension (1)
 */

@interface NEFilterProviderConfiguration : NSObject <NSCopying, NSSecureCoding> {
    bool  _controlProviderInitialized;
    bool  _filterBrowsers;
    bool  _filterSockets;
    NSData * _identityReference;
    NSString * _keychainAccessGroup;
    NSString * _organization;
    NSData * _passwordReference;
    NSString * _pluginType;
    NSString * _serverAddress;
    NSString * _username;
    NSDictionary * _vendorConfiguration;
}

@property bool controlProviderInitialized;
@property bool filterBrowsers;
@property bool filterSockets;
@property (copy) NSData *identityReference;
@property (retain) NSString *keychainAccessGroup;
@property (copy) NSString *organization;
@property (copy) NSData *passwordReference;
@property (retain) NSString *pluginType;
@property (copy) NSString *serverAddress;
@property (copy) NSString *username;
@property (copy) NSDictionary *vendorConfiguration;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)checkValidityAndCollectErrors:(id)arg1;
- (bool)controlProviderInitialized;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (void)encodeWithCoder:(id)arg1;
- (bool)filterBrowsers;
- (bool)filterSockets;
- (id)identityReference;
- (id)initWithCoder:(id)arg1;
- (id)keychainAccessGroup;
- (id)optionsDict;
- (id)organization;
- (id)passwordReference;
- (id)pluginType;
- (id)serverAddress;
- (void)setControlProviderInitialized:(bool)arg1;
- (void)setFilterBrowsers:(bool)arg1;
- (void)setFilterSockets:(bool)arg1;
- (void)setIdentityReference:(id)arg1;
- (void)setKeychainAccessGroup:(id)arg1;
- (void)setOrganization:(id)arg1;
- (void)setPasswordReference:(id)arg1;
- (void)setPluginType:(id)arg1;
- (void)setServerAddress:(id)arg1;
- (void)setUsername:(id)arg1;
- (void)setVendorConfiguration:(id)arg1;
- (id)username;
- (id)vendorConfiguration;

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
