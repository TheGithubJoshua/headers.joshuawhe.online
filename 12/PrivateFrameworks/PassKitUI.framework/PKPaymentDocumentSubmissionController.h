<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PKPaymentDocumentSubmissionController.h</title>
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

/PrivateFrameworks/PassKitUI.framework/PKPaymentDocumentSubmissionController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI (1)
 */

@interface PKPaymentDocumentSubmissionController : NSObject {
    UIImage * _backID;
    long long  _context;
    <PKPaymentDocumentSubmissionControllerDelegate> * _delegate;
    unsigned long long  _featureIdentifier;
    UIImage * _frontID;
    PKDocumentRequest * _selectedDocument;
    <PKPaymentSetupViewControllerDelegate> * _setupDelegate;
    long long  _side;
    long long  _state;
}

@property (nonatomic, retain) UIImage *backID;
@property (nonatomic) long long context;
@property (nonatomic) <PKPaymentDocumentSubmissionControllerDelegate> *delegate;
@property (nonatomic) unsigned long long featureIdentifier;
@property (nonatomic, retain) UIImage *frontID;
@property (nonatomic, retain) PKDocumentRequest *selectedDocument;
@property (nonatomic, retain) <PKPaymentSetupViewControllerDelegate> *setupDelegate;
@property (nonatomic) long long side;
@property (nonatomic) long long state;

- (void).cxx_destruct;
- (id)backID;
- (void)captureFailedWithError:(id)arg1;
- (void)capturedImage:(id)arg1;
- (void)contactApplePressed;
- (long long)context;
- (id)delegate;
- (unsigned long long)featureIdentifier;
- (id)frontID;
- (id)initWithSetupDelegate:(id)arg1 context:(long long)arg2 acceptableDocuments:(id)arg3 featureIdentifier:(unsigned long long)arg4;
- (id)nextViewController;
- (void)scanAgain;
- (id)selectedDocument;
- (void)setBackID:(id)arg1;
- (void)setContext:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFeatureIdentifier:(unsigned long long)arg1;
- (void)setFrontID:(id)arg1;
- (void)setSelectedDocument:(id)arg1;
- (void)setSetupDelegate:(id)arg1;
- (void)setSide:(long long)arg1;
- (void)setState:(long long)arg1;
- (id)setupDelegate;
- (long long)side;
- (long long)state;
- (void)stateChanged;
- (void)terminateSetupFlowFromViewController:(id)arg1;
- (void)tryUploadAgain;
- (void)uploadID;
- (void)userApprovedCapturedID;
- (void)userRejectedCapturedID;
- (void)userWantsToCancelFromViewController:(id)arg1;
- (void)userWantsToContinue;
- (void)userWantsToWithdraw;

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
