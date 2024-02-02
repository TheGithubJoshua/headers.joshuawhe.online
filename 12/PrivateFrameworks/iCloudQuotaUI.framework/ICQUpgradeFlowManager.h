<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>ICQUpgradeFlowManager.h</title>
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

/PrivateFrameworks/iCloudQuotaUI.framework/ICQUpgradeFlowManager.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/iCloudQuotaUI.framework/iCloudQuotaUI (1)
 */

@interface ICQUpgradeFlowManager : NSObject <ICQPageDelegate, UINavigationControllerDelegate> {
    NSDictionary * _bindings;
    ICQUpgradeOfferViewController * _busyOfferViewController;
    bool  _completedFamilySetup;
    <ICQUpgradeFlowManagerDelegate> * _delegate;
    ICQUpgradeFlowOptions * _flowOptions;
    UINavigationController * _hostingNavigationController;
    ICQOffer * _offer;
    bool  _shouldNavigationControllerBeDismissed;
    ICQAlertController * _upgradeAlertController;
}

@property (nonatomic, retain) NSDictionary *bindings;
@property (nonatomic) bool completedFamilySetup;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ICQUpgradeFlowManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) ICQUpgradeFlowOptions *flowOptions;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UINavigationController *hostingNavigationController;
@property (nonatomic, readonly) ICQOffer *offer;
@property (nonatomic) bool shouldNavigationControllerBeDismissed;
@property (readonly) Class superclass;
@property (nonatomic, retain) ICQAlertController *upgradeAlertController;

+ (id)activeFlowManagers;
+ (void)addActiveFlowManager:(id)arg1;
+ (void)needsToRunWithCompletion:(id /* block */)arg1;
+ (void)removeActiveFlowManager:(id)arg1;
+ (bool)shouldShowForOffer:(id)arg1;
+ (bool)shouldSubclassShowForOffer:(id)arg1;
+ (Class)subclassForOfferType:(long long)arg1;

- (void).cxx_destruct;
- (void)_addAlertActionForAlertSpec:(id)arg1 buttonIndex:(long long)arg2;
- (void)_cancelFlow;
- (void)_clearBusyOfferViewController;
- (void)_initiateFamilySetupFlow;
- (void)_openURL:(id)arg1 completion:(id /* block */)arg2;
- (void)_performPageButtonActionWithParameters:(id)arg1 completion:(id /* block */)arg2;
- (void)_presentPageWithSpecification:(id)arg1;
- (void)_presentUpgradeComplete;
- (void)_sendDelegateCancel;
- (void)_sendDelegateComplete;
- (void)_sendDelegateDidPresentViewController:(id)arg1;
- (void)_setBusyOfferViewController:(id)arg1;
- (void)_simulateDoneButton;
- (void)_tappedAlertLink:(id)arg1;
- (void)beginFlowWithPresentingViewController:(id)arg1;
- (id)bindings;
- (bool)completedFamilySetup;
- (id)delegate;
- (id)flowOptions;
- (id)hostingNavigationController;
- (id)init;
- (id)initBaseclassWithOffer:(id)arg1;
- (id)initSubclassWithOffer:(id)arg1;
- (id)initWithOffer:(id)arg1;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(bool)arg3;
- (bool)needsNetwork;
- (id)offer;
- (void)presentFlowHostedInNavigationController:(id)arg1;
- (void)sender:(id)arg1 action:(long long)arg2 parameters:(id)arg3;
- (void)setBindings:(id)arg1;
- (void)setCompletedFamilySetup:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFlowOptions:(id)arg1;
- (void)setHostingNavigationController:(id)arg1;
- (void)setShouldNavigationControllerBeDismissed:(bool)arg1;
- (void)setUpgradeAlertController:(id)arg1;
- (bool)shouldNavigationControllerBeDismissed;
- (id)upgradeAlertController;

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