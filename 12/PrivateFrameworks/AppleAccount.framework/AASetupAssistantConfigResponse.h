<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>AASetupAssistantConfigResponse.h</title>
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

/PrivateFrameworks/AppleAccount.framework/AASetupAssistantConfigResponse.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount (1.0)
 */

@interface AASetupAssistantConfigResponse : AAResponse {
    NSDictionary * _urls;
}

@property (nonatomic, readonly) NSString *aboutURL;
@property (nonatomic, readonly) NSString *activeEmailDomain;
@property (nonatomic, readonly) NSString *authenticateURL;
@property (nonatomic, readonly) NSString *checkValidityURL;
@property (nonatomic, readonly) NSString *createAppleIDURL;
@property (nonatomic, readonly) NSString *createDelegateAccountsURL;
@property (nonatomic, readonly) NSString *existingAppleIDTermsUIURL;
@property (nonatomic, readonly) NSString *genericTermsURL;
@property (nonatomic, readonly) NSString *iForgotUIURL;
@property (nonatomic, readonly) NSString *iForgotURL;
@property (nonatomic, readonly) NSString *loginDelegatesURL;
@property (nonatomic, readonly) bool setupAssistantServerEnabled;
@property (nonatomic, readonly) NSString *signingSessionCertURL;
@property (nonatomic, readonly) NSString *signingSessionURL;
@property (nonatomic, readonly) NSString *updateAppleIDURL;
@property (nonatomic, readonly) NSString *upgradeIOSTermsUI;
@property (nonatomic, readonly) NSString *upgradeStatusURL;
@property (nonatomic, readonly) NSString *xmlUI;

- (void).cxx_destruct;
- (id)aboutURL;
- (id)activeEmailDomain;
- (id)authenticateURL;
- (id)checkValidityURL;
- (id)createAppleIDURL;
- (id)createDelegateAccountsURL;
- (id)existingAppleIDTermsUIURL;
- (id)genericTermsURL;
- (id)iForgotUIURL;
- (id)iForgotURL;
- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;
- (id)loginDelegatesURL;
- (bool)setupAssistantServerEnabled;
- (id)signingSessionCertURL;
- (id)signingSessionURL;
- (id)updateAppleIDURL;
- (id)upgradeIOSTermsUI;
- (id)upgradeStatusURL;
- (id)xmlUI;

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