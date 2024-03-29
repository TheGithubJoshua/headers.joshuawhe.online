<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CertificateViewController.h</title>
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

/PrivateFrameworks/CertInfo.framework/CertificateViewController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo (1)
 */

@interface CertificateViewController : UITableViewController {
    int  _certUIAction;
    id /* block */  _certificateButtonActionHandler;
    NSString * _certificateButtonDescription;
    bool  _certificateButtonIsDestructiveAction;
    NSString * _certificateButtonTitle;
    NSDate * _certificateExpiration;
    bool  _certificateIsRoot;
    NSString * _certificateIssuer;
    NSArray * _certificateProperties;
    NSString * _certificatePurpose;
    NSString * _certificateTitle;
    id  _certificateTrust;
    bool  _showCertificateButton;
}

@property (nonatomic) int certUIAction;
@property (nonatomic, copy) id /* block */ certificateButtonActionHandler;
@property (nonatomic, retain) NSString *certificateButtonDescription;
@property (nonatomic) bool certificateButtonIsDestructiveAction;
@property (nonatomic, retain) NSString *certificateButtonTitle;
@property (nonatomic, retain) NSDate *certificateExpiration;
@property (nonatomic) bool certificateIsRoot;
@property (nonatomic, retain) NSString *certificateIssuer;
@property (nonatomic, retain) NSArray *certificateProperties;
@property (nonatomic, retain) NSString *certificatePurpose;
@property (nonatomic, retain) NSString *certificateTitle;
@property (nonatomic, retain) id certificateTrust;
@property (nonatomic) bool showCertificateButton;

- (void).cxx_destruct;
- (int)certUIAction;
- (id /* block */)certificateButtonActionHandler;
- (id)certificateButtonDescription;
- (bool)certificateButtonIsDestructiveAction;
- (id)certificateButtonTitle;
- (id)certificateExpiration;
- (bool)certificateIsRoot;
- (id)certificateIssuer;
- (id)certificateProperties;
- (id)certificatePurpose;
- (id)certificateTitle;
- (id)certificateTrust;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (id)init;
- (id)initWithTrust:(struct __SecTrust { }*)arg1 action:(int)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)preferredContentSizeChanged:(id)arg1;
- (void)setCertUIAction:(int)arg1;
- (void)setCertificateButtonActionHandler:(id /* block */)arg1;
- (void)setCertificateButtonDescription:(id)arg1;
- (void)setCertificateButtonIsDestructiveAction:(bool)arg1;
- (void)setCertificateButtonTitle:(id)arg1;
- (void)setCertificateExpiration:(id)arg1;
- (void)setCertificateIsRoot:(bool)arg1;
- (void)setCertificateIssuer:(id)arg1;
- (void)setCertificateProperties:(id)arg1;
- (void)setCertificatePurpose:(id)arg1;
- (void)setCertificateTitle:(id)arg1;
- (void)setCertificateTitle:(id)arg1 issuer:(id)arg2 purpose:(id)arg3 expiration:(id)arg4 properties:(id)arg5 isRoot:(bool)arg6 action:(int)arg7;
- (void)setCertificateTrust:(id)arg1;
- (void)setShowCertificateButton:(bool)arg1;
- (void)setShowCertificateButton:(bool)arg1 localizedTitle:(id)arg2 localizedDescription:(id)arg3 destructive:(bool)arg4 handler:(id /* block */)arg5;
- (bool)showCertificateButton;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

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
