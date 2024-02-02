<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>ILClassificationUIExtensionHostViewController.h</title>
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

/Frameworks/IdentityLookupUI.framework/ILClassificationUIExtensionHostViewController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/IdentityLookupUI.framework/IdentityLookupUI (1)
 */

@interface ILClassificationUIExtensionHostViewController : UIViewController <ILClassificationExtensionShellViewControllerDelegate, ILClassificationUIExtensionHostContextDelegate> {
    ILClassificationRequest * _classificationRequest;
    ILClassificationResponse * _classificationResponse;
    <ILClassificationUIExtensionHostViewControllerDelegate> * _delegate;
    NSExtension * _extension;
    ILClassificationUIExtensionHostContext * _extensionHostContext;
    NSUUID * _extensionRequestIdentifier;
    NSString * _isoCountryCode;
    UINavigationController * _navigationController;
    NSObject<OS_dispatch_queue> * _queue;
    ILClassificationReportingController * _reportingController;
    NSString * _sender;
    ILClassificationExtensionShellViewController * _shellViewController;
}

@property (nonatomic, readonly) ILClassificationRequest *classificationRequest;
@property (nonatomic, retain) ILClassificationResponse *classificationResponse;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ILClassificationUIExtensionHostViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSExtension *extension;
@property (nonatomic, retain) ILClassificationUIExtensionHostContext *extensionHostContext;
@property (nonatomic, retain) NSUUID *extensionRequestIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *isoCountryCode;
@property (nonatomic, retain) UINavigationController *navigationController;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) ILClassificationReportingController *reportingController;
@property (nonatomic, copy) NSString *sender;
@property (nonatomic, retain) ILClassificationExtensionShellViewController *shellViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)activateExtensionWithCompletion:(id /* block */)arg1;
- (void)blockNumber:(id)arg1 withCountryCode:(id)arg2;
- (id)classificationRequest;
- (id)classificationResponse;
- (void)context:(id)arg1 didBecomeReadyForClassificationResponse:(bool)arg2;
- (id)delegate;
- (void)didCompleteClassificationRequestWithResponse:(id)arg1;
- (id)extension;
- (id)extensionHostContext;
- (id)extensionRequestIdentifier;
- (void)finish;
- (id)initUnactivatedVCWithRequest:(id)arg1 sender:(id)arg2 isoCountryCode:(id)arg3;
- (id)initWithClassificationRequest:(id)arg1 sender:(id)arg2 isoCountryCode:(id)arg3;
- (id)isoCountryCode;
- (void)launchSettings;
- (id)logErrorWithMessage:(id)arg1;
- (id)navigationController;
- (void)presentBlockAlertWithCompletion:(id /* block */)arg1;
- (id)queue;
- (id)reportingController;
- (id)sender;
- (void)setClassificationResponse:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExtension:(id)arg1;
- (void)setExtensionHostContext:(id)arg1;
- (void)setExtensionRequestIdentifier:(id)arg1;
- (void)setIsoCountryCode:(id)arg1;
- (void)setNavigationController:(id)arg1;
- (void)setSender:(id)arg1;
- (void)setShellViewController:(id)arg1;
- (id)shellViewController;
- (void)userDidCancelForExtensionShellViewController:(id)arg1;
- (void)userDidFinishForExtensionShellViewController:(id)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;

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