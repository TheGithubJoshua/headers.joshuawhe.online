<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>HMDAssistantAccessControl.h</title>
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

/PrivateFrameworks/HomeKitDaemon.framework/HMDAssistantAccessControl.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon (484.7.17.1)
 */

@interface HMDAssistantAccessControl : HMFObject <HMDBackingStoreObjectProtocol, HMFLogging, HMFObject, NSSecureCoding> {
    NSMutableSet * _accessories;
    unsigned long long  _cachedHash;
    NSObject<OS_dispatch_queue> * _clientQueue;
    bool  _enabled;
    unsigned long long  _options;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    HMDUser * _user;
}

@property (readonly, copy) NSArray *accessories;
@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (readonly) unsigned long long cachedHash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, readonly) bool enabled;
@property (readonly) unsigned long long hash;
@property (readonly, copy) HMDAssistantAccessControlModel *model;
@property (readonly, copy) NSUUID *modelID;
@property unsigned long long options;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly) NSObject<OS_dispatch_queue> *propertyQueue;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;
@property HMDUser *user;

+ (id)accessControlWithMessage:(id)arg1 user:(id)arg2 error:(id*)arg3;
+ (bool)isAccessorySupported:(id)arg1;
+ (id)logCategory;
+ (id)modelIDNamespace;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accessories;
- (void)addAccessory:(id)arg1;
- (unsigned long long)cachedHash;
- (id)clientQueue;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)handleRemovedAccessory:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithUser:(id)arg1;
- (id)initWithUser:(id)arg1 model:(id)arg2;
- (bool)isEnabled;
- (bool)isEqual:(id)arg1;
- (id)logIdentifier;
- (id)model;
- (id)modelID;
- (void)notifyClientOfUpdateWithMessage:(id)arg1;
- (unsigned long long)options;
- (id)propertyDescription;
- (id)propertyQueue;
- (void)removeAccessoriesAddedByOldController:(id)arg1;
- (void)removeAccessory:(id)arg1;
- (void)setAccessories:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setOptions:(unsigned long long)arg1;
- (void)setUser:(id)arg1;
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (id)transactionWithObjectChangeType:(unsigned long long)arg1;
- (id)user;

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