<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>UIDocumentPickerViewController.h</title>
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

/PrivateFrameworks/UIKitCore.framework/UIDocumentPickerViewController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore (61000)
 */

@interface UIDocumentPickerViewController : UIViewController <UIDocumentBrowserViewControllerPrivateDelegate> {
    bool  _allowsMultipleSelection;
    UIViewController * _childViewController;
    DOCConfiguration * _configuration;
    <UIDocumentPickerDelegate> * _delegate;
    unsigned long long  _documentPickerMode;
    bool  _ignoreApplicationEntitlementForImport;
    NSMutableArray * _securityScopedURLs;
    bool  _sourceIsManaged;
    NSArray * _uploadURLs;
    <UIDocumentPickerDelegate> * _weak_delegate;
}

@property (getter=_ignoreApplicationEntitlementForImport, setter=_setIgnoreApplicationEntitlementForImport:, nonatomic) bool _ignoreApplicationEntitlementForImport;
@property (nonatomic, retain) NSMutableArray *_securityScopedURLs;
@property (nonatomic) bool allowsMultipleSelection;
@property (getter=_childViewController, setter=_setChildViewController:, nonatomic, retain) UIViewController *childViewController;
@property (nonatomic, retain) DOCConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UIDocumentPickerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long documentPickerMode;
@property (readonly) unsigned long long hash;
@property (getter=_sourceIsManaged, setter=_setSourceIsManaged:, nonatomic) bool sourceIsManaged;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *uploadURLs;

- (void).cxx_destruct;
- (void)_callDelegateWithSelectedURLsAndDismiss:(id)arg1;
- (id)_childViewController;
- (void)_commonInitWithDocumentTypes:(id)arg1;
- (void)_consumeSandboxExtensionForURL:(id)arg1;
- (void)_didTapCancel;
- (bool)_ignoreApplicationEntitlementForImport;
- (id)_initIgnoringApplicationEntitlementForImportOfTypes:(id)arg1;
- (id)_initWithViewController:(id)arg1 inMode:(unsigned long long)arg2 uploadURLOrNil:(id)arg3;
- (id)_securityScopedURLs;
- (void)_setChildViewController:(id)arg1;
- (void)_setIgnoreApplicationEntitlementForImport:(bool)arg1;
- (void)_setSourceIsManaged:(bool)arg1;
- (bool)_sourceIsManaged;
- (void)_tellDelegateDocumentPickerWasCancelled;
- (bool)allowsMultipleSelection;
- (id)configuration;
- (void)dealloc;
- (id)delegate;
- (void)documentBrowser:(id)arg1 didPickDocumentURLs:(id)arg2;
- (void)documentManagerWasCancelled:(id)arg1;
- (unsigned long long)documentPickerMode;
- (id)initWithCoder:(id)arg1;
- (id)initWithDocumentTypes:(id)arg1 inMode:(unsigned long long)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithURL:(id)arg1 inMode:(unsigned long long)arg2;
- (id)initWithURLs:(id)arg1 inMode:(unsigned long long)arg2;
- (void)setAllowsMultipleSelection:(bool)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDocumentPickerMode:(unsigned long long)arg1;
- (void)setUploadURLs:(id)arg1;
- (void)set_securityScopedURLs:(id)arg1;
- (id)uploadURLs;
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
