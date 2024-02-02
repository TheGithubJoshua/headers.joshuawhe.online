<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>SKUIButtonViewElement.h</title>
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

/PrivateFrameworks/StoreKitUI.framework/SKUIButtonViewElement.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI (1)
 */

@interface SKUIButtonViewElement : SKUIViewElement {
    bool  _autoIncrementCount;
    NSString * _badgeResourceName;
    bool  _bigHitButton;
    double  _bigHitSize;
    NSString * _bundleIdentifier;
    SKUIViewElementText * _buttonText;
    long long  _buttonViewSubType;
    long long  _buttonViewType;
    SKUIBuyButtonDescriptor * _buyButtonDescriptor;
    NSString * _confirmationText;
    long long  _dataPlaybackId;
    bool  _disabledButSelectable;
    BOOL  _enabled;
    long long  _itemIdentifier;
    NSString * _nonToggledText;
    NSString * _playItemIdentifier;
    bool  _selected;
    bool  _showOnDemand;
    NSString * _sizeVariant;
    SKUIStoreIdentifier * _storeIdentifier;
    bool  _suppressCloudRestore;
    NSString * _toggleItemIdentfier;
    NSString * _toggleItemIdentifier;
    bool  _toggled;
    NSString * _toggledText;
    NSString * _variantIdentifier;
    IKDOMElement * _xml;
}

@property (nonatomic, readonly) SKUIImageViewElement *additionalButtonImage;
@property (nonatomic, readonly) bool autoIncrementCount;
@property (nonatomic, readonly) NSString *badgeResourceName;
@property (getter=isBigHitButton, nonatomic, readonly) bool bigHitButton;
@property (nonatomic, readonly) double bigHitSize;
@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) SKUIImageViewElement *buttonImage;
@property (nonatomic, readonly) SKUIViewElementText *buttonText;
@property (nonatomic, readonly) IKViewElementStyle *buttonTitleStyle;
@property (nonatomic, readonly) long long buttonViewSubType;
@property (nonatomic, readonly) long long buttonViewType;
@property (nonatomic, retain) SKUIBuyButtonDescriptor *buyButtonDescriptor;
@property (nonatomic, readonly) NSString *confirmationText;
@property (nonatomic, readonly) long long dataPlaybackId;
@property (getter=isDisabledButSelectable, nonatomic, readonly) bool disabledButSelectable;
@property (nonatomic, readonly) long long itemIdentifier;
@property (nonatomic, readonly) NSString *nonToggledText;
@property (nonatomic, readonly) NSString *playItemIdentifier;
@property (getter=isSelected, nonatomic, readonly) bool selected;
@property (nonatomic, readonly) bool showOnDemand;
@property (nonatomic, readonly) NSString *sizeVariant;
@property (nonatomic, readonly) SKUIStoreIdentifier *storeIdentifier;
@property (nonatomic, readonly) bool suppressCloudRestore;
@property (nonatomic, readonly) NSString *toggleItemIdentifier;
@property (getter=isToggled, nonatomic) bool toggled;
@property (nonatomic, readonly) NSString *toggledText;
@property (nonatomic, readonly) NSString *variantIdentifier;

- (void).cxx_destruct;
- (id)_parseButtonText;
- (id)additionalButtonImage;
- (id)applyUpdatesWithElement:(id)arg1;
- (bool)autoIncrementCount;
- (id)badgeResourceName;
- (double)bigHitSize;
- (id)bundleIdentifier;
- (id)buttonImage;
- (id)buttonText;
- (id)buttonTitleStyle;
- (long long)buttonViewSubType;
- (long long)buttonViewType;
- (id)buyButtonDescriptor;
- (id)confirmationText;
- (long long)dataPlaybackId;
- (void)dealloc;
- (id)description;
- (unsigned long long)elementType;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (bool)isBigHitButton;
- (bool)isDisabledButSelectable;
- (bool)isEnabled;
- (bool)isSelected;
- (bool)isToggled;
- (long long)itemIdentifier;
- (id)nonToggledText;
- (long long)pageComponentType;
- (id)personalizationLibraryItems;
- (id)playItemIdentifier;
- (void)setBuyButtonDescriptor:(id)arg1;
- (void)setToggled:(bool)arg1;
- (bool)showOnDemand;
- (id)sizeVariant;
- (id)storeIdentifier;
- (bool)suppressCloudRestore;
- (id)toggleItemIdentifier;
- (id)toggledText;
- (id)variantIdentifier;

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