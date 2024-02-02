<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>LPLinkHTMLGenerator.h</title>
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

/PrivateFrameworks/LinkPresentation.framework/LPLinkHTMLGenerator.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation (59.46)
 */

@interface LPLinkHTMLGenerator : NSObject {
    NSURL * _URL;
    bool  _allowsTapToLoad;
    bool  _applyCornerRadiusToLink;
    UIColor * _backgroundColor;
    LPCaptionBarPresentationProperties * _captionBar;
    LPCSSResolver * _cssResolver;
    <LPLinkHTMLGeneratorDelegate> * _delegate;
    bool  _everBuiltView;
    bool  _generateEmailCompatibleMarkup;
    LPImage * _image;
    bool  _includeClassNamesWhenUsingInlineStyles;
    bool  _includeDarkInterfaceInlineStyles;
    bool  _isPreliminary;
    LPHTMLComponent * _linkComponent;
    bool  _mayReceiveAdditionalMetadata;
    LPCaptionBarPresentationProperties * _mediaBottomCaptionBar;
    LPCaptionBarPresentationProperties * _mediaTopCaptionBar;
    LPLinkMetadata * _metadata;
    LPPointUnit * _minimumRootHeight;
    DOMDocument * _parentDocument;
    LPMetadataProvider * _pendingMetadataProvider;
    NSString * _quotedText;
    DOMElement * _rootElement;
    long long  _style;
    LPTheme * _theme;
    bool  _useInlineStyles;
    bool  _useVariablesWhenUsingInlineStyles;
    bool  _usesComputedPresentationProperties;
    LPVideo * _video;
    LPHTMLVideoComponent * _videoComponent;
}

@property (nonatomic, readonly, copy) NSURL *URL;
@property (setter=_setAllowsTapToLoad:, nonatomic) bool _allowsTapToLoad;
@property (nonatomic, readonly) bool _canTapToLoad;
@property (setter=_setIncludeClassNamesWhenUsingInlineStyles:, nonatomic) bool _includeClassNamesWhenUsingInlineStyles;
@property (setter=_setIncludeDarkInterfaceInlineStyles:, nonatomic) bool _includeDarkInterfaceInlineStyles;
@property (setter=_setUseVariablesWhenUsingInlineStyles:, nonatomic) bool _useVariablesWhenUsingInlineStyles;
@property (nonatomic) bool applyCornerRadiusToLink;
@property (nonatomic, readonly) UIColor *backgroundColor;
@property (nonatomic, readonly) LPCSSResolver *cssResolver;
@property (nonatomic) <LPLinkHTMLGeneratorDelegate> *delegate;
@property (nonatomic, readonly) bool delegateRespondsToURLForResource;
@property (nonatomic, readonly, retain) DOMDocumentFragment *documentFragment;
@property (nonatomic) bool generateEmailCompatibleMarkup;
@property (nonatomic, readonly) bool hasPendingMetadataProvider;
@property (nonatomic, readonly) bool hasTallMedia;
@property (nonatomic, readonly) bool isPreliminary;
@property (nonatomic, copy) LPLinkMetadata *metadata;
@property (nonatomic, readonly) LPPointUnit *minimumRootHeight;
@property (nonatomic, readonly) DOMDocument *parentDocument;
@property (nonatomic, readonly) LPPointUnit *rootWidth;
@property (nonatomic, readonly) long long style;
@property (nonatomic, readonly) LPTheme *theme;
@property (nonatomic, readonly) bool useFlexibleWidth;
@property (nonatomic) bool useInlineStyles;

+ (void)initialize;

- (void).cxx_destruct;
- (id)URL;
- (id)_URLForImage:(id)arg1;
- (id)_URLForResource:(id)arg1 withMIMEType:(id)arg2;
- (bool)_allowsTapToLoad;
- (bool)_canTapToLoad;
- (void)_computePresentationPropertiesFromMetadata;
- (id)_createCaptionBar;
- (id)_createMediaBottomCaptionBar;
- (id)_createMediaComponent;
- (id)_createMediaTopCaptionBar;
- (id)_createQuoteComponent;
- (void)_didFollowLink;
- (void)_fetchMetadata;
- (bool)_includeClassNamesWhenUsingInlineStyles;
- (bool)_includeDarkInterfaceInlineStyles;
- (void)_rebuildView;
- (void)_setAllowsTapToLoad:(bool)arg1;
- (void)_setIncludeClassNamesWhenUsingInlineStyles:(bool)arg1;
- (void)_setIncludeDarkInterfaceInlineStyles:(bool)arg1;
- (void)_setMetadata:(id)arg1 isFinal:(bool)arg2;
- (void)_setPresentationProperties:(id)arg1;
- (void)_setUseVariablesWhenUsingInlineStyles:(bool)arg1;
- (bool)_useVariablesWhenUsingInlineStyles;
- (bool)applyCornerRadiusToLink;
- (id)backgroundColor;
- (void)clearCurrentLayout;
- (id)cssResolver;
- (id)delegate;
- (bool)delegateRespondsToURLForResource;
- (id)documentFragment;
- (bool)generateEmailCompatibleMarkup;
- (bool)hasPendingMetadataProvider;
- (bool)hasTallMedia;
- (id)init;
- (id)initWithMetadataLoadedFromURL:(id)arg1 document:(id)arg2;
- (id)initWithPresentationProperties:(id)arg1 URL:(id)arg2 document:(id)arg3;
- (id)initWithPresentationProperties:(id)arg1 document:(id)arg2;
- (id)initWithURL:(id)arg1 document:(id)arg2;
- (void)injectCSSIfNeeded;
- (bool)isPreliminary;
- (id)metadata;
- (id)minimumRootHeight;
- (id)parentDocument;
- (id)rootWidth;
- (void)setApplyCornerRadiusToLink:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setGenerateEmailCompatibleMarkup:(bool)arg1;
- (void)setMetadata:(id)arg1;
- (void)setUseInlineStyles:(bool)arg1;
- (long long)style;
- (id)theme;
- (bool)useFlexibleWidth;
- (bool)useInlineStyles;

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