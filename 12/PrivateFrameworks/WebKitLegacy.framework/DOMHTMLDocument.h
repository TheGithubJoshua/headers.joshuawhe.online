<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>DOMHTMLDocument.h</title>
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

/PrivateFrameworks/WebKitLegacy.framework/DOMHTMLDocument.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy (8607.3.18)
 */

@interface DOMHTMLDocument : DOMDocument

@property (copy) NSString *alinkColor;
@property (copy) NSString *bgColor;
@property (readonly, copy) NSString *compatMode;
@property (copy) NSString *designMode;
@property (copy) NSString *dir;
@property (readonly) DOMHTMLCollection *embeds;
@property (copy) NSString *fgColor;
@property (readonly) int height;
@property (copy) NSString *linkColor;
@property (readonly) DOMHTMLCollection *plugins;
@property (readonly) DOMHTMLCollection *scripts;
@property (copy) NSString *vlinkColor;
@property (readonly) int width;

// Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy

- (id)_createDocumentFragmentWithMarkupString:(id)arg1 baseURLString:(id)arg2;
- (id)_createDocumentFragmentWithText:(id)arg1;
- (id)alinkColor;
- (id)bgColor;
- (void)captureEvents;
- (void)clear;
- (void)close;
- (id)compatMode;
- (id)createDocumentFragmentWithMarkupString:(id)arg1 baseURL:(id)arg2;
- (id)createDocumentFragmentWithText:(id)arg1;
- (id)designMode;
- (id)dir;
- (id)embeds;
- (id)fgColor;
- (int)height;
- (id)linkColor;
- (void)open;
- (id)plugins;
- (void)releaseEvents;
- (id)scripts;
- (void)setAlinkColor:(id)arg1;
- (void)setBgColor:(id)arg1;
- (void)setDesignMode:(id)arg1;
- (void)setDir:(id)arg1;
- (void)setFgColor:(id)arg1;
- (void)setLinkColor:(id)arg1;
- (void)setVlinkColor:(id)arg1;
- (id)vlinkColor;
- (int)width;
- (void)write:(id)arg1;
- (void)writeln:(id)arg1;

// Image: /System/Library/Frameworks/MessageUI.framework/MessageUI

+ (id)mf_listElements;

- (id)mf_createMessageQuoteElement;

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