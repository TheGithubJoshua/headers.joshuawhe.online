<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>_WKRemoteObjectInterface.h</title>
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

/Frameworks/WebKit.framework/_WKRemoteObjectInterface.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/WebKit.framework/WebKit (8607.3.18)
 */

@interface _WKRemoteObjectInterface : NSObject {
    struct RetainPtr<NSString> { 
        void *m_ptr; 
    }  _identifier;
    struct HashMap<SEL *, MethodInfo, WTF::PtrHash<SEL *>, WTF::HashTraits<SEL *>, WTF::HashTraits<MethodInfo> > { 
        struct HashTable<SEL *, WTF::KeyValuePair<SEL *, MethodInfo>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<SEL *, MethodInfo> >, WTF::PtrHash<SEL *>, WTF::HashMap<SEL *, MethodInfo, WTF::PtrHash<SEL *>, WTF::HashTraits<SEL *>, WTF::HashTraits<MethodInfo> >::KeyValuePairTraits, WTF::HashTraits<SEL *> > { 
            struct KeyValuePair<SEL *, MethodInfo> {} *m_table; 
            unsigned int m_tableSize; 
            unsigned int m_tableSizeMask; 
            unsigned int m_keyCount; 
            unsigned int m_deletedCount; 
        } m_impl; 
    }  _methods;
    Protocol * _protocol;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) Protocol *protocol;

// Image: /System/Library/Frameworks/WebKit.framework/WebKit

+ (id)remoteObjectInterfaceWithProtocol:(id)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (const struct Vector<WTF::HashSet<const void *, WTF::PtrHash<const void *>, WTF::HashTraits<const void *> >, 0, WTF::CrashOnOverflow, 16> { struct HashSet<const void *, WTF::PtrHash<const void *>, WTF::HashTraits<const void *> > {} *x1; unsigned int x2; unsigned int x3; }*)_allowedArgumentClassesForReplyBlockOfSelector:(SEL)arg1;
- (const struct Vector<WTF::HashSet<const void *, WTF::PtrHash<const void *>, WTF::HashTraits<const void *> >, 0, WTF::CrashOnOverflow, 16> { struct HashSet<const void *, WTF::PtrHash<const void *>, WTF::HashTraits<const void *> > {} *x1; unsigned int x2; unsigned int x3; }*)_allowedArgumentClassesForSelector:(SEL)arg1;
- (id)_methodSignatureForReplyBlockOfSelector:(SEL)arg1;
- (id)_methodSignatureForSelector:(SEL)arg1;
- (id)classesForSelector:(SEL)arg1 argumentIndex:(unsigned long long)arg2;
- (id)classesForSelector:(SEL)arg1 argumentIndex:(unsigned long long)arg2 ofReply:(bool)arg3;
- (id)debugDescription;
- (id)identifier;
- (id)initWithProtocol:(id)arg1 identifier:(id)arg2;
- (id)protocol;
- (void)setClasses:(id)arg1 forSelector:(SEL)arg2 argumentIndex:(unsigned long long)arg3;
- (void)setClasses:(id)arg1 forSelector:(SEL)arg2 argumentIndex:(unsigned long long)arg3 ofReply:(bool)arg4;

// Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared

+ (id)safari_javaScriptClasses;

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
