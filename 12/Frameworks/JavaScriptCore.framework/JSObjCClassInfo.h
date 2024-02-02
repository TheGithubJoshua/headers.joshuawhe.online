<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>JSObjCClassInfo.h</title>
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

/Frameworks/JavaScriptCore.framework/JSObjCClassInfo.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/JavaScriptCore.framework/JavaScriptCore (8607.3.18)
 */

@interface JSObjCClassInfo : NSObject {
    bool  m_block;
    Class  m_class;
    struct OpaqueJSClass { struct atomic<unsigned int> { _Atomic unsigned int x_1_1_1; } x1; struct OpaqueJSClass {} *x2; struct OpaqueJSClass {} *x3; int (*x4)(); int (*x5)(); int (*x6)(); int (*x7)(); int (*x8)(); int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); int (*x13)(); int (*x14)(); struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl {} *x_1_2_1; } x_15_1_1; } x15; struct unique_ptr<WTF::HashMap<WTF::RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> >, std::__1::unique_ptr<StaticValueEntry, std::__1::default_delete<StaticValueEntry> >, WTF::StringHash, WTF::HashTraits<WTF::RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > >, WTF::HashTraits<std::__1::unique_ptr<StaticValueEntry, std::__1::default_delete<StaticValueEntry> > > >, std::__1::default_delete<WTF::HashMap<WTF::RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> >, std::__1::unique_ptr<StaticValueEntry, std::__1::default_delete<StaticValueEntry> >, WTF::StringHash, WTF::HashTraits<WTF::RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > >, WTF::HashTraits<std::__1::unique_ptr<StaticValueEntry, std::__1::default_delete<StaticValueEntry> > > > > > { struct __compressed_pair<WTF::HashMap<WTF::RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> >, std::__1::unique_ptr<StaticValueEntry, std::__1::default_delete<StaticValueEntry> >, WTF::StringHash, WTF::HashTraits<WTF::RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > >, WTF::HashTraits<std::__1::unique_ptr<StaticValueEntry, std::__1::default_delete<StaticValueEntry> > > > *, std::__1::default_delete<WTF::HashMap<WTF::RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> >, std::__1::unique_ptr<StaticValueEntry, std::__1::default_delete<StaticValueEntry> >, WTF::StringHash, WTF::HashTraits<WTF::RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > >, WTF::HashTraits<std::__1::unique_ptr<StaticValueEntry, std::__1::default_delete<StaticValueEntry> > > > > > { struct HashMap<WTF::RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> >, std::__1::unique_ptr<StaticValueEntry, std::__1::default_delete<StaticValueEntry> >, WTF::StringHash, WTF::HashTraits<WTF::RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > >, WTF::HashTraits<std::__1::unique_ptr<StaticValueEntry, std::__1::default_delete<StaticValueEntry> > > > {} *x_1_2_1; } x_16_1_1; } x16; } * m_classRef;
    struct Weak<JSC::JSObject> { 
        struct WeakImpl {} *m_impl; 
    }  m_constructor;
    struct Weak<JSC::JSObject> { 
        struct WeakImpl {} *m_impl; 
    }  m_prototype;
    struct Weak<JSC::Structure> { 
        struct WeakImpl {} *m_impl; 
    }  m_structure;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct pair<JSC::JSObject *, JSC::JSObject *> { struct JSObject {} *x1; struct JSObject {} *x2; })allocateConstructorAndPrototypeInContext:(id)arg1;
- (struct JSObject { unsigned int x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; struct AuxiliaryBarrier<JSC::Butterfly *> { struct Butterfly {} *x_6_1_1; } x6; }*)constructorInContext:(id)arg1;
- (void)dealloc;
- (id)initForClass:(Class)arg1;
- (struct JSObject { unsigned int x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; struct AuxiliaryBarrier<JSC::Butterfly *> { struct Butterfly {} *x_6_1_1; } x6; }*)prototypeInContext:(id)arg1;
- (struct Structure { unsigned int x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; struct StructureIDBlob { union { struct { unsigned int x_1_3_1; unsigned char x_1_3_2; unsigned char x_1_3_3; unsigned char x_1_3_4; unsigned char x_1_3_5; } x_1_2_1; struct { int x_2_3_1; int x_2_3_2; } x_1_2_2; long long x_1_2_3; } x_6_1_1; } x6; unsigned short x7; unsigned char x8; struct Lock { struct Atomic<unsigned char> { struct atomic<unsigned char> { _Atomic unsigned char x_1_3_1; } x_1_2_1; } x_9_1_1; } x9; unsigned int x10; struct WriteBarrier<JSC::JSGlobalObject, WTF::DumbPtrTraits<JSC::JSGlobalObject> > { struct JSGlobalObject {} *x_11_1_1; } x11; struct WriteBarrier<JSC::Unknown, WTF::DumbValueTraits<JSC::Unknown> > { long long x_12_1_1; } x12; struct WriteBarrier<JSC::StructureChain, WTF::DumbPtrTraits<JSC::StructureChain> > { struct StructureChain {} *x_13_1_1; } x13; struct WriteBarrier<JSC::JSCell, WTF::DumbPtrTraits<JSC::JSCell> > { struct JSCell {} *x_14_1_1; } x14; struct RefPtr<WTF::UniquedStringImpl, WTF::DumbPtrTraits<WTF::UniquedStringImpl> > { struct UniquedStringImpl {} *x_15_1_1; } x15; }*)structureInContext:(id)arg1;
- (struct JSObject { unsigned int x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; struct AuxiliaryBarrier<JSC::Butterfly *> { struct Butterfly {} *x_6_1_1; } x6; }*)wrapperForObject:(id)arg1 inContext:(id)arg2;

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