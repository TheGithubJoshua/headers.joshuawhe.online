<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>BEAlertController.h</title>
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

/PrivateFrameworks/Memories.framework/BEAlertController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories (4267.0.31)
 */

@interface BEAlertController : UIAlertController {
    long long  _alertTag;
    bool  _isSheet;
}

@property (nonatomic) long long alertTag;
@property (nonatomic) bool isSheet;

+ (id)showOneButtonAlertWithTitle:(id)arg1 message:(id)arg2 buttonTitle:(id)arg3 buttonHandler:(id /* block */)arg4;
+ (id)showOneButtonSheetOnViewController:(id)arg1 withTitle:(id)arg2 message:(id)arg3 buttonTitle:(id)arg4 buttonHandler:(id /* block */)arg5;
+ (id)showTwoButtonAlertWithTitle:(id)arg1 message:(id)arg2 button1Title:(id)arg3 button1Style:(long long)arg4 button1Handler:(id /* block */)arg5 button2Title:(id)arg6 button2Style:(long long)arg7 button2Handler:(id /* block */)arg8;
+ (id)showTwoButtonSheetOnViewController:(id)arg1 withTitle:(id)arg2 message:(id)arg3 button1Title:(id)arg4 button1Style:(long long)arg5 button1Handler:(id /* block */)arg6 button2Title:(id)arg7 button2Style:(long long)arg8 button2Handler:(id /* block */)arg9;

- (void)addAlertButton:(id)arg1;
- (id)addAlertButtonWithTitle:(id)arg1 style:(long long)arg2 tag:(long long)arg3 action:(id /* block */)arg4;
- (id)addAlertButtonWithTitle:(id)arg1 tag:(long long)arg2 action:(id /* block */)arg3;
- (id)addAlertCancelButtonWithTitle:(id)arg1 tag:(long long)arg2 action:(id /* block */)arg3;
- (id)addAlertDestructiveButtonWithTitle:(id)arg1 tag:(long long)arg2 action:(id /* block */)arg3;
- (void)addAlertTextFieldWithTag:(long long)arg1 configurationBlock:(id /* block */)arg2;
- (long long)alertTag;
- (id)buttonActionWithTag:(long long)arg1;
- (long long)buttonCount;
- (id)cancelButtonAction;
- (void)dismissWithActionForTag:(long long)arg1 animated:(bool)arg2;
- (void)dismissWithCancelActionAnimated:(bool)arg1;
- (void)dismissWithNoActionAnimated:(bool)arg1;
- (id)initAlertWithTitle:(id)arg1 message:(id)arg2;
- (id)initSheetWithTitle:(id)arg1 message:(id)arg2;
- (id)initWithStyle:(long long)arg1 title:(id)arg2 message:(id)arg3;
- (bool)isSheet;
- (void)setAlertTag:(long long)arg1;
- (void)setIsSheet:(bool)arg1;
- (void)showAnimated:(bool)arg1;
- (void)showFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2 viewController:(id)arg3 arrowDirection:(unsigned long long)arg4 animated:(bool)arg5;
- (void)showInView:(id)arg1 viewController:(id)arg2 animated:(bool)arg3;
- (void)showOnViewController:(id)arg1 animated:(bool)arg2;
- (long long)textFieldCount;
- (id)textFieldWithTag:(long long)arg1;
- (id)textInFieldWithTag:(long long)arg1;
- (void)viewDidDisappear:(bool)arg1;

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