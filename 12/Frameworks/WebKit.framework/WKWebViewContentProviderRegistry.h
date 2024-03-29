<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>WKWebViewContentProviderRegistry.h</title>
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

/Frameworks/WebKit.framework/WKWebViewContentProviderRegistry.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/WebKit.framework/WebKit (8607.3.18)
 */

@interface WKWebViewContentProviderRegistry : NSObject {
    struct HashMap<WTF::String, Class<WKWebViewContentProvider>, WTF::ASCIICaseInsensitiveHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<Class<WKWebViewContentProvider> > > { 
        struct HashTable<WTF::String, WTF::KeyValuePair<WTF::String, Class<WKWebViewContentProvider> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::String, Class<WKWebViewContentProvider> > >, WTF::ASCIICaseInsensitiveHash, WTF::HashMap<WTF::String, Class<WKWebViewContentProvider>, WTF::ASCIICaseInsensitiveHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<Class<WKWebViewContentProvider> > >::KeyValuePairTraits, WTF::HashTraits<WTF::String> > { 
            struct KeyValuePair<WTF::String, Class<WKWebViewContentProvider> > {} *m_table; 
            unsigned int m_tableSize; 
            unsigned int m_tableSizeMask; 
            unsigned int m_keyCount; 
            unsigned int m_deletedCount; 
        } m_impl; 
    }  _contentProviderForMIMEType;
    struct HashCountedSet<WebKit::WebPageProxy *, WTF::PtrHash<WebKit::WebPageProxy *>, WTF::HashTraits<WebKit::WebPageProxy *> > { 
        struct HashMap<WebKit::WebPageProxy *, unsigned int, WTF::PtrHash<WebKit::WebPageProxy *>, WTF::HashTraits<WebKit::WebPageProxy *>, WTF::HashTraits<unsigned int> > { 
            struct HashTable<WebKit::WebPageProxy *, WTF::KeyValuePair<WebKit::WebPageProxy *, unsigned int>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WebKit::WebPageProxy *, unsigned int> >, WTF::PtrHash<WebKit::WebPageProxy *>, WTF::HashMap<WebKit::WebPageProxy *, unsigned int, WTF::PtrHash<WebKit::WebPageProxy *>, WTF::HashTraits<WebKit::WebPageProxy *>, WTF::HashTraits<unsigned int> >::KeyValuePairTraits, WTF::HashTraits<WebKit::WebPageProxy *> > { 
                struct KeyValuePair<WebKit::WebPageProxy *, unsigned int> {} *m_table; 
                unsigned int m_tableSize; 
                unsigned int m_tableSizeMask; 
                unsigned int m_keyCount; 
                unsigned int m_deletedCount; 
            } m_impl; 
        } m_impl; 
    }  _pages;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct Vector<WTF::String, 0, WTF::CrashOnOverflow, 16> { struct String {} *x1; unsigned int x2; unsigned int x3; })_mimeTypesWithCustomContentProviders;
- (void)addPage:(struct WebPageProxy { int (**x1)(); id x2; int (**x3)(); int (**x4)(); int (**x5)(); int (**x6)(); struct WeakPtrFactory<WebKit::WebPageProxy> { struct RefPtr<WTF::WeakReference<WebKit::WebPageProxy>, WTF::DumbPtrTraits<WTF::WeakReference<WebKit::WebPageProxy> > > { struct WeakReference<WebKit::WebPageProxy> {} *x_1_2_1; } x_7_1_1; } x7; struct RetainPtr<NSArray> { void *x_8_1_1; } x8; struct WeakPtr<WebKit::PageClient> { struct RefPtr<WTF::WeakReference<WebKit::PageClient>, WTF::DumbPtrTraits<WTF::WeakReference<WebKit::PageClient> > > { struct WeakReference<WebKit::PageClient> {} *x_1_2_1; } x_9_1_1; } x9; struct Ref<API::PageConfiguration, WTF::DumbPtrTraits<API::PageConfiguration> > { struct PageConfiguration {} *x_10_1_1; } x10; struct unique_ptr<API::LoaderClient, std::__1::default_delete<API::LoaderClient> > { struct __compressed_pair<API::LoaderClient *, std::__1::default_delete<API::LoaderClient> > { struct LoaderClient {} *x_1_2_1; } x_11_1_1; } x11; struct unique_ptr<API::PolicyClient, std::__1::default_delete<API::PolicyClient> > { struct __compressed_pair<API::PolicyClient *, std::__1::default_delete<API::PolicyClient> > { struct PolicyClient {} *x_1_2_1; } x_12_1_1; } x12; }*)arg1;
- (id)initWithConfiguration:(id)arg1;
- (Class)providerForMIMEType:(const struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl {} *x_1_1_1; } x1; }*)arg1;
- (void)registerProvider:(Class)arg1 forMIMEType:(const struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl {} *x_1_1_1; } x1; }*)arg2;
- (void)removePage:(struct WebPageProxy { int (**x1)(); id x2; int (**x3)(); int (**x4)(); int (**x5)(); int (**x6)(); struct WeakPtrFactory<WebKit::WebPageProxy> { struct RefPtr<WTF::WeakReference<WebKit::WebPageProxy>, WTF::DumbPtrTraits<WTF::WeakReference<WebKit::WebPageProxy> > > { struct WeakReference<WebKit::WebPageProxy> {} *x_1_2_1; } x_7_1_1; } x7; struct RetainPtr<NSArray> { void *x_8_1_1; } x8; struct WeakPtr<WebKit::PageClient> { struct RefPtr<WTF::WeakReference<WebKit::PageClient>, WTF::DumbPtrTraits<WTF::WeakReference<WebKit::PageClient> > > { struct WeakReference<WebKit::PageClient> {} *x_1_2_1; } x_9_1_1; } x9; struct Ref<API::PageConfiguration, WTF::DumbPtrTraits<API::PageConfiguration> > { struct PageConfiguration {} *x_10_1_1; } x10; struct unique_ptr<API::LoaderClient, std::__1::default_delete<API::LoaderClient> > { struct __compressed_pair<API::LoaderClient *, std::__1::default_delete<API::LoaderClient> > { struct LoaderClient {} *x_1_2_1; } x_11_1_1; } x11; struct unique_ptr<API::PolicyClient, std::__1::default_delete<API::PolicyClient> > { struct __compressed_pair<API::PolicyClient *, std::__1::default_delete<API::PolicyClient> > { struct PolicyClient {} *x_1_2_1; } x_12_1_1; } x12; }*)arg1;

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
