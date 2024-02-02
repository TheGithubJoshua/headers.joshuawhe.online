<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>SKUIURLResolver.h</title>
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

/PrivateFrameworks/StoreKitUI.framework/SKUIURLResolver.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI (1)
 */

@interface SKUIURLResolver : NSObject <SKUIPassbookLoaderDelegate> {
    SKUIClientContext * _clientContext;
    <SKUIURLResolverDelegate> * _delegate;
    <UINavigationControllerDelegate> * _navigationControllerDelegate;
    NSOperationQueue * _operationQueue;
    SKUIPassbookLoader * _passbookLoader;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SKUIURLResolverDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <UINavigationControllerDelegate> *navigationControllerDelegate;
@property (nonatomic, retain) NSOperationQueue *operationQueue;
@property (readonly) Class superclass;

+ (id)tabIdentifierForURL:(id)arg1;

- (void).cxx_destruct;
- (void)_addPassbookPassWithURL:(id)arg1;
- (void)_handleSafariScriptDataUpdate:(id)arg1;
- (id)_newHTMLViewControllerWithSection:(id)arg1;
- (void)_performLookupWithURL:(id)arg1;
- (void)_presentViewController:(id)arg1;
- (void)_resolveURLRequest:(id)arg1 withOriginURL:(id)arg2;
- (void)_selectTabWithIdentifier:(id)arg1;
- (void)_sendDidFinishWithResult:(bool)arg1;
- (void)_showAccountViewControllerWithURL:(id)arg1;
- (void)_showBagURLWithURL:(id)arg1;
- (void)_showDonationViewControllerWithURL:(id)arg1;
- (void)_showGiftViewControllerWithURL:(id)arg1;
- (void)_showPlaceholderViewController;
- (void)_showRedeemViewControllerWithURL:(id)arg1;
- (void)_showSearchWithURL:(id)arg1;
- (void)_showViewControllerWithResponse:(id)arg1 fromOperation:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (id)initWithClientContext:(id)arg1;
- (id)navigationControllerDelegate;
- (id)operationQueue;
- (void)passbookLoaderDidFinish:(id)arg1;
- (id)presentationViewControllerForPassbookLoader:(id)arg1;
- (void)resolveURL:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setNavigationControllerDelegate:(id)arg1;
- (void)setOperationQueue:(id)arg1;

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