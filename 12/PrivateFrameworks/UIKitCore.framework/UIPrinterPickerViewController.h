<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>UIPrinterPickerViewController.h</title>
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

/PrivateFrameworks/UIKitCore.framework/UIPrinterPickerViewController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore (61000)
 */

@interface UIPrinterPickerViewController : UIViewController <UINavigationControllerDelegate, UIPrinterBrowserOwner> {
    bool  _animated;
    bool  _dismissed;
    UINavigationController * _navigationController;
    bool  _observingRotation;
    id  _originalNavControllerDelegate;
    UIViewController * _originalViewControllerInNav;
    UIViewController * _parentController;
    bool  _parentHasNoPopover;
    UIPopoverController * _poverController;
    PKPrinter * _printer;
    UIPrinterBrowserViewController * _printerBrowserViewController;
    UIPrinterPickerController * _printerPickerController;
    bool  _userSelectedPrinter;
    UIWindow * _window;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PKPrinter *printer;
@property (readonly) Class superclass;
@property bool userSelectedPrinter;

- (void).cxx_destruct;
- (void)_keyWindowWillRotate:(id)arg1;
- (void)_presentInParentAnimated:(bool)arg1;
- (void)_presentWindow;
- (void)cancelPrinting;
- (void)dealloc;
- (void)dismissAnimated:(bool)arg1;
- (void)dismissPrinterPickerAnimated:(bool)arg1;
- (bool)filtersPrinters;
- (id)initWithPrinterPickerController:(id)arg1 inParentController:(id)arg2;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(bool)arg3;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(bool)arg3;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)presentPrinterPickerPanelAnimated:(bool)arg1;
- (void)presentPrinterPickerPanelFromBarButtonItem:(id)arg1 animated:(bool)arg2;
- (void)presentPrinterPickerPanelFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2 animated:(bool)arg3;
- (id)printer;
- (void)printerBrowserViewDidDisappear;
- (void)setPrinter:(id)arg1;
- (void)setUserSelectedPrinter:(bool)arg1;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (bool)shouldShowPrinter:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (bool)userSelectedPrinter;

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