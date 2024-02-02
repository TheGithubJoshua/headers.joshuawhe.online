<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>SLRemoteService.h</title>
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

/Frameworks/Social.framework/SLRemoteService.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/Social.framework/Social (87)
 */

@interface SLRemoteService : SLService <NSSecureCoding> {
    NSString * _accountTypeIdentifier;
    UIImage * _activityImage;
    NSString * _activityImageName;
    NSString * _activityViewIconResourceName;
    bool  _addDeviceClassToRequest;
    long long  _authenticationStyle;
    NSString * _localizedServiceName;
    long long  _maximumImageCount;
    long long  _maximumImageDataSize;
    long long  _maximumURLCount;
    long long  _maximumVideoCount;
    long long  _maximumVideoDataSize;
    long long  _maximumVideoTimeLimit;
    NSBundle * _serviceBundle;
    NSURL * _serviceBundleURL;
    bool  _serviceRegionTargetIsChina;
    NSString * _serviceTypeIdentifier;
    NSSet * _supportedImageAssetURLSchemes;
    NSSet * _supportedVideoAssetURLSchemes;
}

@property (retain) NSString *accountTypeIdentifier;
@property (retain) NSString *activityImageName;
@property (retain) NSString *activityViewIconResourceName;
@property bool addDeviceClassToRequest;
@property long long authenticationStyle;
@property (retain) NSString *localizedServiceName;
@property long long maximumImageCount;
@property long long maximumImageDataSize;
@property long long maximumURLCount;
@property (nonatomic) long long maximumVideoCount;
@property long long maximumVideoDataSize;
@property long long maximumVideoTimeLimit;
@property (readonly) NSBundle *serviceBundle;
@property (retain) NSURL *serviceBundleURL;
@property bool serviceRegionTargetIsChina;
@property (retain) NSString *serviceTypeIdentifier;
@property (retain) NSSet *supportedImageAssetURLSchemes;
@property (retain) NSSet *supportedVideoAssetURLSchemes;

+ (id)_cachedServiceWithType:(id)arg1;
+ (id)_cachedServices;
+ (id)remoteServiceForTypeIdentifier:(id)arg1;
+ (id)remoteServices;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_activityImageForImageResourceName:(id)arg1 inBundle:(id)arg2;
- (long long)_authenticationStyleFromAuthenticationStyleIdentifier:(id)arg1;
- (id)_authenticationStyleIdentifierMappings;
- (id)_encodableStringProperties;
- (bool)_isSupportedURL:(id)arg1 withSupportedSchemes:(id)arg2;
- (bool)_isValidAuthenicationStyleIdentifier:(id)arg1;
- (id)_requiredInfoDictKeys;
- (id)_setFromArrayWithKey:(id)arg1 inDictionary:(id)arg2;
- (id)accountTypeIdentifier;
- (id)activityImage;
- (id)activityImageName;
- (id)activityTitle;
- (id)activityViewIconResourceName;
- (bool)addDeviceClassToRequest;
- (void)addExtraParameters:(id)arg1 forRequest:(id)arg2;
- (long long)authenticationStyle;
- (id)composeViewController;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)infoDictHasRequiredKeys:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithServiceBundle:(id)arg1 socialInfoDictionary:(id)arg2;
- (id)integerPropertyKeyMappings;
- (bool)isFirstClassService;
- (id)localizedServiceName;
- (long long)maximumImageCount;
- (long long)maximumImageDataSize;
- (long long)maximumURLCount;
- (long long)maximumVideoCount;
- (long long)maximumVideoDataSize;
- (long long)maximumVideoTimeLimit;
- (id)serviceBundle;
- (id)serviceBundleURL;
- (bool)serviceRegionTargetIsChina;
- (id)serviceType;
- (id)serviceTypeIdentifier;
- (void)setAccountTypeIdentifier:(id)arg1;
- (void)setActivityImageName:(id)arg1;
- (void)setActivityViewIconResourceName:(id)arg1;
- (void)setAddDeviceClassToRequest:(bool)arg1;
- (void)setAuthenticationStyle:(long long)arg1;
- (void)setLocalizedServiceName:(id)arg1;
- (void)setMaximumImageCount:(long long)arg1;
- (void)setMaximumImageDataSize:(long long)arg1;
- (void)setMaximumURLCount:(long long)arg1;
- (void)setMaximumVideoCount:(long long)arg1;
- (void)setMaximumVideoDataSize:(long long)arg1;
- (void)setMaximumVideoTimeLimit:(long long)arg1;
- (void)setServiceBundleURL:(id)arg1;
- (void)setServiceRegionTargetIsChina:(bool)arg1;
- (void)setServiceTypeIdentifier:(id)arg1;
- (void)setSupportedImageAssetURLSchemes:(id)arg1;
- (void)setSupportedVideoAssetURLSchemes:(id)arg1;
- (id)supportedImageAssetURLSchemes;
- (id)supportedVideoAssetURLSchemes;
- (bool)supportsImageURL:(id)arg1;
- (bool)supportsVideoURL:(id)arg1;

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