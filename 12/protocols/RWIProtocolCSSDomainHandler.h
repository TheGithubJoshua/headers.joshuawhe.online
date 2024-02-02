<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>RWIProtocolCSSDomainHandler.h</title>
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

/protocols/RWIProtocolCSSDomainHandler.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
 */

@protocol RWIProtocolCSSDomainHandler <NSObject>

@required

- (void)addRuleWithErrorCallback:(void *)arg1 successCallback:(void *)arg2 styleSheetId:(void *)arg3 selector:(void *)arg4; // needs 4 arg types, found 14: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*, id /* block */, void*, void, id /* block */, RWIProtocolCSSRule *, void*, NSString *, NSString *
- (void)createStyleSheetWithErrorCallback:(void *)arg1 successCallback:(void *)arg2 frameId:(void *)arg3; // needs 3 arg types, found 13: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*, id /* block */, void*, void, id /* block */, NSString *, void*, NSString *
- (void)disableWithErrorCallback:(void *)arg1 successCallback:(void *)arg2; // needs 2 arg types, found 11: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*, id /* block */, void*, void, id /* block */, void*
- (void)enableWithErrorCallback:(void *)arg1 successCallback:(void *)arg2; // needs 2 arg types, found 11: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*, id /* block */, void*, void, id /* block */, void*
- (void)forcePseudoStateWithErrorCallback:(void *)arg1 successCallback:(void *)arg2 nodeId:(void *)arg3 forcedPseudoClasses:(void *)arg4; // needs 4 arg types, found 13: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*, id /* block */, void*, void, id /* block */, void*, int, NSArray *
- (void)getAllStyleSheetsWithErrorCallback:(void *)arg1 successCallback:(void *)arg2; // needs 2 arg types, found 12: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*, id /* block */, void*, void, id /* block */, NSArray *, void*
- (void)getComputedStyleForNodeWithErrorCallback:(void *)arg1 successCallback:(void *)arg2 nodeId:(void *)arg3; // needs 3 arg types, found 13: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*, id /* block */, void*, void, id /* block */, NSArray *, void*, int
- (void)getInlineStylesForNodeWithErrorCallback:(void *)arg1 successCallback:(void *)arg2 nodeId:(void *)arg3; // needs 3 arg types, found 14: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*, id /* block */, void*, void, id /* block */, id*, id*, void*, int
- (void)getMatchedStylesForNodeWithErrorCallback:(void *)arg1 successCallback:(void *)arg2 nodeId:(void *)arg3 includePseudo:(void *)arg4 includeInherited:(void *)arg5; // needs 5 arg types, found 17: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*, id /* block */, void*, void, id /* block */, id*, id*, id*, void*, int, bool*, bool*
- (void)getStyleSheetTextWithErrorCallback:(void *)arg1 successCallback:(void *)arg2 styleSheetId:(void *)arg3; // needs 3 arg types, found 13: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*, id /* block */, void*, void, id /* block */, NSString *, void*, NSString *
- (void)getStyleSheetWithErrorCallback:(void *)arg1 successCallback:(void *)arg2 styleSheetId:(void *)arg3; // needs 3 arg types, found 13: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*, id /* block */, void*, void, id /* block */, RWIProtocolCSSStyleSheetBody *, void*, NSString *
- (void)getSupportedCSSPropertiesWithErrorCallback:(void *)arg1 successCallback:(void *)arg2; // needs 2 arg types, found 12: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*, id /* block */, void*, void, id /* block */, NSArray *, void*
- (void)getSupportedSystemFontFamilyNamesWithErrorCallback:(void *)arg1 successCallback:(void *)arg2; // needs 2 arg types, found 12: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*, id /* block */, void*, void, id /* block */, NSArray *, void*
- (void)setRuleSelectorWithErrorCallback:(void *)arg1 successCallback:(void *)arg2 ruleId:(void *)arg3 selector:(void *)arg4; // needs 4 arg types, found 14: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*, id /* block */, void*, void, id /* block */, RWIProtocolCSSRule *, void*, RWIProtocolCSSRuleId *, NSString *
- (void)setStyleSheetTextWithErrorCallback:(void *)arg1 successCallback:(void *)arg2 styleSheetId:(void *)arg3 text:(void *)arg4; // needs 4 arg types, found 13: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*, id /* block */, void*, void, id /* block */, void*, NSString *, NSString *
- (void)setStyleTextWithErrorCallback:(void *)arg1 successCallback:(void *)arg2 styleId:(void *)arg3 text:(void *)arg4; // needs 4 arg types, found 14: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*, id /* block */, void*, void, id /* block */, RWIProtocolCSSStyle *, void*, RWIProtocolCSSStyleId *, NSString *

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