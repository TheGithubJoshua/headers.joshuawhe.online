<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>SearchUIAccessoryViewController.h</title>
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

/PrivateFrameworks/SearchUI.framework/SearchUIAccessoryViewController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI (1)
 */

@interface SearchUIAccessoryViewController : NSObject {
    SearchUITableViewCell * _cell;
    <SearchUIFeedbackDelegate> * _feedbackDelegate;
    SFSearchResult * _resultForFeedback;
    UIView * _view;
}

@property SearchUITableViewCell *cell;
@property <SearchUIFeedbackDelegate> *feedbackDelegate;
@property (retain) SFSearchResult *resultForFeedback;
@property (retain) UIView *view;

+ (Class)accessoryViewClassForResult:(id)arg1;
+ (bool)supportsResult:(id)arg1;

- (void).cxx_destruct;
- (void)buttonPressed;
- (id)cell;
- (id)controlInView:(id)arg1;
- (void)didEngageAction:(unsigned long long)arg1 destination:(unsigned long long)arg2 actionPerformed:(bool)arg3;
- (id)feedbackDelegate;
- (id)initWithUIStyle:(unsigned long long)arg1 cell:(id)arg2;
- (bool)isPrimarilyTextView;
- (id)resultForFeedback;
- (void)setCell:(id)arg1;
- (void)setFeedbackDelegate:(id)arg1;
- (void)setResultForFeedback:(id)arg1;
- (void)setView:(id)arg1;
- (id)setupViewWithStyle:(unsigned long long)arg1;
- (bool)shouldTopAlignForAccessibilityContentSizes;
- (bool)shouldVerticallyCenter;
- (void)updateWithResult:(id)arg1;
- (void)updateWithResult:(id)arg1 resultForFeedback:(id)arg2;
- (id)view;
- (id)viewControllerForPresenting;

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
