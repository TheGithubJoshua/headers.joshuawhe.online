<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>ENRegionServerNKDConfiguration.h</title>
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

/Frameworks/ExposureNotification.framework/ENRegionServerNKDConfiguration.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/ExposureNotification.framework/ExposureNotification (150.1)
 */

@interface ENRegionServerNKDConfiguration : NSObject <NSCopying, NSSecureCoding> {
    NSString * _healthAuthorityID;
    ENRegion * _region;
    NSURL * _tekLocalDownloadBaseURL;
    NSURL * _tekLocalDownloadIndexURL;
    double  _tekPublishInterval;
    NSURL * _tekUploadURL;
    NSString * _testVerificationAPIKey;
    NSURL * _testVerificationCertificateURL;
    NSURL * _testVerificationURL;
    NSArray * _travelerDownloadConfigurations;
}

@property (nonatomic, readonly, copy) NSString *healthAuthorityID;
@property (nonatomic, readonly, copy) ENRegion *region;
@property (nonatomic, readonly, copy) NSURL *tekLocalDownloadBaseURL;
@property (nonatomic, readonly, copy) NSURL *tekLocalDownloadIndexURL;
@property (nonatomic, readonly) double tekPublishInterval;
@property (nonatomic, readonly, copy) NSURL *tekUploadURL;
@property (nonatomic, readonly, copy) NSString *testVerificationAPIKey;
@property (nonatomic, readonly, copy) NSURL *testVerificationCertificateURL;
@property (nonatomic, readonly, copy) NSURL *testVerificationURL;
@property (nonatomic, readonly, copy) NSArray *travelerDownloadConfigurations;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)healthAuthorityID;
- (id)initWithCoder:(id)arg1;
- (id)initWithServerResponseDictionary:(id)arg1;
- (id)region;
- (id)tekLocalDownloadBaseURL;
- (id)tekLocalDownloadIndexURL;
- (double)tekPublishInterval;
- (id)tekUploadURL;
- (id)testVerificationAPIKey;
- (id)testVerificationCertificateURL;
- (id)testVerificationURL;
- (id)travelerDownloadConfigurations;

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
