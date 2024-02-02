<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CKOperationInfo.h</title>
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

/Frameworks/CloudKit.framework/CKOperationInfo.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit (736.235)
 */

@interface CKOperationInfo : NSObject <NSCopying, NSSecureCoding> {
    CKOperationMMCSRequestOptions * _MMCSRequestOptions;
    unsigned int  _clientSDKVersion;
    NSString * _deviceIdentifier;
    CKOperationGroup * _group;
    bool  _isLongLived;
    bool  _isOutstandingOperation;
    NSString * _name;
    NSString * _operationClass;
    NSString * _operationID;
    id  _parentOperation;
    NSString * _parentSectionID;
    CKOperationConfiguration * _perOpConfiguration;
    CKOperationConfiguration * _resolvedConfiguration;
    CKContainerSetupInfo * _setupInfo;
    bool  _wantsRequestStatistics;
}

@property (nonatomic, retain) CKOperationMMCSRequestOptions *MMCSRequestOptions;
@property (nonatomic, readonly) NSDictionary *additionalRequestHTTPHeaders;
@property (nonatomic, readonly) bool allowsBackgroundNetworking;
@property (nonatomic, readonly) bool allowsCellularAccess;
@property (nonatomic, readonly) NSString *authPromptReason;
@property (nonatomic, readonly) bool automaticallyRetryNetworkFailures;
@property (nonatomic) unsigned int clientSDKVersion;
@property (nonatomic, retain) NSString *deviceIdentifier;
@property (nonatomic, readonly) unsigned long long discretionaryNetworkBehavior;
@property (nonatomic, retain) CKOperationGroup *group;
@property (nonatomic) bool isLongLived;
@property (nonatomic) bool isOutstandingOperation;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSString *operationClass;
@property (nonatomic, retain) NSString *operationID;
@property (nonatomic) id parentOperation;
@property (nonatomic, retain) NSString *parentSectionID;
@property (nonatomic, retain) CKOperationConfiguration *perOpConfiguration;
@property (nonatomic, readonly) bool preferAnonymousRequests;
@property (nonatomic, readonly) long long qualityOfService;
@property (nonatomic, readonly) CKOperationConfiguration *resolvedConfiguration;
@property (nonatomic, retain) CKContainerSetupInfo *setupInfo;
@property (nonatomic, readonly) bool shouldSkipZonePCSUpdate;
@property (nonatomic, readonly) NSString *sourceApplicationBundleIdentifier;
@property (nonatomic, readonly) NSString *sourceApplicationSecondaryIdentifier;
@property (nonatomic, readonly) double timeoutIntervalForRequest;
@property (nonatomic, readonly) double timeoutIntervalForResource;
@property (nonatomic) bool wantsRequestStatistics;

// Image: /System/Library/Frameworks/CloudKit.framework/CloudKit

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)MMCSRequestOptions;
- (id)additionalRequestHTTPHeaders;
- (bool)allowsBackgroundNetworking;
- (bool)allowsCellularAccess;
- (id)authPromptReason;
- (bool)automaticallyRetryNetworkFailures;
- (unsigned int)clientSDKVersion;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deviceIdentifier;
- (unsigned long long)discretionaryNetworkBehavior;
- (void)encodeWithCoder:(id)arg1;
- (id)group;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isLongLived;
- (bool)isOutstandingOperation;
- (id)name;
- (id)operationClass;
- (id)operationID;
- (id)parentOperation;
- (id)parentSectionID;
- (id)perOpConfiguration;
- (bool)preferAnonymousRequests;
- (long long)qualityOfService;
- (id)resolvedConfiguration;
- (void)setClientSDKVersion:(unsigned int)arg1;
- (void)setDeviceIdentifier:(id)arg1;
- (void)setGroup:(id)arg1;
- (void)setIsLongLived:(bool)arg1;
- (void)setIsOutstandingOperation:(bool)arg1;
- (void)setMMCSRequestOptions:(id)arg1;
- (void)setName:(id)arg1;
- (void)setOperationClass:(id)arg1;
- (void)setOperationID:(id)arg1;
- (void)setParentOperation:(id)arg1;
- (void)setParentSectionID:(id)arg1;
- (void)setPerOpConfiguration:(id)arg1;
- (void)setSetupInfo:(id)arg1;
- (void)setWantsRequestStatistics:(bool)arg1;
- (id)setupInfo;
- (bool)shouldSkipZonePCSUpdate;
- (id)sourceApplicationBundleIdentifier;
- (id)sourceApplicationSecondaryIdentifier;
- (void)takeValuesFrom:(id)arg1;
- (double)timeoutIntervalForRequest;
- (double)timeoutIntervalForResource;
- (bool)wantsRequestStatistics;

// Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon

- (bool)validateAgainstLiveProxy:(id)arg1 error:(id*)arg2;

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