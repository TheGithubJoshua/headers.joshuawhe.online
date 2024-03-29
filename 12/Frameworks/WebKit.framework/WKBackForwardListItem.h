<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>WKBackForwardListItem.h</title>
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

/Frameworks/WebKit.framework/WKBackForwardListItem.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/WebKit.framework/WebKit (8607.3.18)
 */

@interface WKBackForwardListItem : NSObject <WKObject> {
    struct ObjectStorage<WebKit::WebBackForwardListItem> { 
        struct type { 
            unsigned char __lx[312]; 
        } data; 
    }  _item;
}

@property (readonly, copy) NSURL *URL;
@property (readonly) struct Object { int (**x1)(); id x2; }*_apiObject;
@property (readonly) struct WebBackForwardListItem { int (**x1)(); id x2; struct BackForwardListItemState { struct BackForwardItemIdentifier { struct ObjectIdentifier<WebCore::ProcessIdentifierType> { unsigned long long x_1_3_1; } x_1_2_1; struct ObjectIdentifier<WebCore::BackForwardItemIdentifier::ItemIdentifierType> { unsigned long long x_2_3_1; } x_1_2_2; } x_3_1_1; /* Warning: unhandled struct encoding: '{PageState={String={RefPtr<WTF::StringImpl' */ struct x_3_1_2; } x3; }*_item; /* unknown property attribute:  WTF::DumbPtrTraits<WTF::WeakReference<WebKit::SuspendedPageProxy> > >=^{WeakReference<WebKit::SuspendedPageProxy>}}}} */
@property (setter=_sf_setQuickLookDocument:, nonatomic, retain) _SFQuickLookDocument *_sf_quickLookDocument;
@property (setter=_sf_setSecurityInfo:, nonatomic, retain) _SFSecurityInfo *_sf_securityInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSURL *initialURL;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *title;

// Image: /System/Library/Frameworks/WebKit.framework/WebKit

- (id)URL;
- (struct Object { int (**x1)(); id x2; }*)_apiObject;
- (struct CGImage { }*)_copySnapshotForTesting;
- (struct WebBackForwardListItem { int (**x1)(); id x2; struct BackForwardListItemState { struct BackForwardItemIdentifier { struct ObjectIdentifier<WebCore::ProcessIdentifierType> { unsigned long long x_1_3_1; } x_1_2_1; struct ObjectIdentifier<WebCore::BackForwardItemIdentifier::ItemIdentifierType> { unsigned long long x_2_3_1; } x_1_2_2; } x_3_1_1; struct PageState { struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl {} *x_1_4_1; } x_1_3_1; } x_2_2_1; struct FrameState { struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl {} *x_1_5_1; } x_1_4_1; } x_2_3_1; struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl {} *x_1_5_1; } x_2_4_1; } x_2_3_2; struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl {} *x_1_5_1; } x_3_4_1; } x_2_3_3; struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl {} *x_1_5_1; } x_4_4_1; } x_2_3_4; struct Vector<WTF::String, 0, WTF::CrashOnOverflow, 16> { struct String {} *x_5_4_1; unsigned int x_5_4_2; unsigned int x_5_4_3; } x_2_3_5; struct Optional<WTF::Vector<unsigned char, 0, WTF::CrashOnOverflow, 16> > { bool x_6_4_1; union storage_t<WTF::Vector<unsigned char, 0, WTF::CrashOnOverflow, 16> > { unsigned char x_2_5_1; struct Vector<unsigned char, 0, WTF::CrashOnOverflow, 16> { char *x_2_6_1; unsigned int x_2_6_2; unsigned int x_2_6_3; } x_2_5_2; } x_6_4_2; } x_2_3_6; } x_2_2_2; } x_3_1_2; } x3; }*)_item;
- (struct CGPoint { double x1; double x2; })_scrollPosition;
- (void)dealloc;
- (id)initialURL;
- (id)title;

// Image: /System/Library/Frameworks/SafariServices.framework/SafariServices

- (id)_sf_quickLookDocument;
- (id)_sf_securityInfo;
- (void)_sf_setQuickLookDocument:(id)arg1;
- (void)_sf_setSecurityInfo:(id)arg1;

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
