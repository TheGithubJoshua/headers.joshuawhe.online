<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>FIAPEntity.h</title>
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

/PrivateFrameworks/FoundInAppsPlugins.framework/FIAPEntity.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/FoundInAppsPlugins.framework/FoundInAppsPlugins (1)
 */

@interface FIAPEntity : NSObject <NSSecureCoding> {
    NSString * _activityType;
    NSString * _bundleIdentifier;
    NSDate * _contentCreationDate;
    NSDate * _detectionDate;
    NSString * _domainIdentifier;
    NSString * _languageIdentifier;
    NSString * _name;
    NSString * _pluginIdentifier;
    unsigned char  _type;
    NSString * _uniqueIdentifier;
}

@property (nonatomic, copy) NSString *activityType;
@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, copy) NSDate *contentCreationDate;
@property (nonatomic, copy) NSDate *detectionDate;
@property (nonatomic, copy) NSString *domainIdentifier;
@property (nonatomic, readonly) NSString *languageIdentifier;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, copy) NSString *pluginIdentifier;
@property (nonatomic, readonly) unsigned char type;
@property (nonatomic, copy) NSString *uniqueIdentifier;

+ (id)entityWithName:(id)arg1 type:(unsigned char)arg2 languageIdentifier:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)activityType;
- (id)bundleIdentifier;
- (id)contentCreationDate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)detectionDate;
- (id)domainIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 type:(unsigned char)arg2 languageIdentifier:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToEntity:(id)arg1;
- (id)languageIdentifier;
- (id)name;
- (id)pluginIdentifier;
- (void)setActivityType:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setContentCreationDate:(id)arg1;
- (void)setDetectionDate:(id)arg1;
- (void)setDomainIdentifier:(id)arg1;
- (void)setPluginIdentifier:(id)arg1;
- (void)setUniqueIdentifier:(id)arg1;
- (unsigned char)type;
- (id)uniqueIdentifier;

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
