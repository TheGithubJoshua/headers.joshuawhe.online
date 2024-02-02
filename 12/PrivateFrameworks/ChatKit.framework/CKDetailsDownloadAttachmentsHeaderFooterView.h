<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CKDetailsDownloadAttachmentsHeaderFooterView.h</title>
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

/PrivateFrameworks/ChatKit.framework/CKDetailsDownloadAttachmentsHeaderFooterView.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit (1.0)
 */

@interface CKDetailsDownloadAttachmentsHeaderFooterView : UITableViewHeaderFooterView <CKDetailsHeaderFooterView> {
    NSString * _buttonText;
    UITextView * _buttonTextView;
    <CKDetailsDownloadAttachmentsHeaderFooterViewDelegate> * _delegate;
    UIColor * _downloadButtonTextColor;
    UIImageView * _iCloudImageView;
    bool  _logoHidden;
    NSString * _titleText;
    UIColor * _titleTextColor;
    NSLayoutConstraint * _titleTextTopToLogoConstraint;
    NSLayoutConstraint * _titleTextTopToViewConstraint;
    UITextView * _titleTextView;
}

@property (nonatomic, copy) NSString *buttonText;
@property (nonatomic, retain) UITextView *buttonTextView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CKDetailsDownloadAttachmentsHeaderFooterViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIColor *downloadButtonTextColor;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImageView *iCloudImageView;
@property (nonatomic) bool logoHidden;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *titleText;
@property (nonatomic, retain) UIColor *titleTextColor;
@property (nonatomic, retain) NSLayoutConstraint *titleTextTopToLogoConstraint;
@property (nonatomic, retain) NSLayoutConstraint *titleTextTopToViewConstraint;
@property (nonatomic, retain) UITextView *titleTextView;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (id)buttonText;
- (id)buttonTextView;
- (id)delegate;
- (id)downloadButtonTextColor;
- (void)handleUserTap:(id)arg1;
- (id)iCloudImageView;
- (id)initWithReuseIdentifier:(id)arg1;
- (bool)logoHidden;
- (void)setButtonText:(id)arg1;
- (void)setButtonTextView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDownloadButtonTextColor:(id)arg1;
- (void)setICloudImageView:(id)arg1;
- (void)setLogoHidden:(bool)arg1;
- (void)setTitleText:(id)arg1;
- (void)setTitleTextColor:(id)arg1;
- (void)setTitleTextTopToLogoConstraint:(id)arg1;
- (void)setTitleTextTopToViewConstraint:(id)arg1;
- (void)setTitleTextView:(id)arg1;
- (id)titleText;
- (id)titleTextColor;
- (id)titleTextTopToLogoConstraint;
- (id)titleTextTopToViewConstraint;
- (id)titleTextView;

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