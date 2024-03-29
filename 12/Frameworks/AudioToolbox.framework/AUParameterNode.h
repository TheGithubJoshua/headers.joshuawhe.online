<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>AUParameterNode.h</title>
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

/Frameworks/AudioToolbox.framework/AUParameterNode.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox (1.8)
 */

@interface AUParameterNode : NSObject {
    NSString * _displayName;
    NSString * _identifier;
    id /* block */  _impl_implementorDisplayNameWithLengthCallback;
    id /* block */  _impl_implementorStringFromValueCallback;
    id /* block */  _impl_implementorValueFromStringCallback;
    id /* block */  _impl_implementorValueObserver;
    id /* block */  _impl_implementorValueProvider;
    unsigned long long  _indexInGroup;
    struct AUObserverList { struct vector<AULocalParameterObserver *, std::__1::allocator<AULocalParameterObserver *> > { struct AULocalParameterObserver {} **x_1_1_1; struct AULocalParameterObserver {} **x_1_1_2; struct __compressed_pair<AULocalParameterObserver **, std::__1::allocator<AULocalParameterObserver *> > { struct AULocalParameterObserver {} **x_3_2_1; } x_1_1_3; } x1; } * _observerList;
    AUParameterGroup * _parentNode;
}

@property (nonatomic, readonly, copy) NSString *displayName;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, copy) id /* block */ impl_implementorDisplayNameWithLengthCallback;
@property (nonatomic, copy) id /* block */ impl_implementorStringFromValueCallback;
@property (nonatomic, copy) id /* block */ impl_implementorValueFromStringCallback;
@property (nonatomic, copy) id /* block */ impl_implementorValueObserver;
@property (nonatomic, copy) id /* block */ impl_implementorValueProvider;
@property (nonatomic, copy) id /* block */ implementorDisplayNameWithLengthCallback;
@property (nonatomic, copy) id /* block */ implementorStringFromValueCallback;
@property (nonatomic, copy) id /* block */ implementorValueFromStringCallback;
@property (nonatomic, copy) id /* block */ implementorValueObserver;
@property (nonatomic, copy) id /* block */ implementorValueProvider;
@property (nonatomic) unsigned long long indexInGroup;
@property (nonatomic, readonly, copy) NSString *keyPath;
@property (nonatomic) /* Warning: unhandled struct encoding: '{AUObserverList={vector<AULocalParameterObserver *' */ struct *observerList; /* unknown property attribute:  std::__1::allocator<AULocalParameterObserver *> >=^^{AULocalParameterObserver}}}} */
@property (nonatomic) AUParameterGroup *parentNode;

- (void).cxx_destruct;
- (void*)_addRecObserver:(id /* block */)arg1 autoObserver:(id /* block */)arg2;
- (void)_deserialize:(struct CADeserializer { struct __CFData {} *x1; char *x2; char *x3; char *x4; bool x5; }*)arg1;
- (void)_observersChanged:(bool)arg1 deltaCount:(int)arg2;
- (id)_rootParent;
- (void)_serialize:(struct CASerializer { struct __CFData {} *x1; }*)arg1;
- (void)_walkTree:(int)arg1 callback:(id /* block */)arg2;
- (id)copyNodeWithOffset:(unsigned long long)arg1;
- (void)dealloc;
- (id)description;
- (id)displayName;
- (id)displayNameWithLength:(long long)arg1;
- (id)identifier;
- (id /* block */)impl_implementorDisplayNameWithLengthCallback;
- (id /* block */)impl_implementorStringFromValueCallback;
- (id /* block */)impl_implementorValueFromStringCallback;
- (id /* block */)impl_implementorValueObserver;
- (id /* block */)impl_implementorValueProvider;
- (id /* block */)implementorDisplayNameWithLengthCallback;
- (id /* block */)implementorStringFromValueCallback;
- (id /* block */)implementorValueFromStringCallback;
- (id /* block */)implementorValueObserver;
- (id /* block */)implementorValueProvider;
- (unsigned long long)indexInGroup;
- (id)initWithID:(id)arg1 name:(id)arg2;
- (bool)isGroup;
- (id)keyPath;
- (struct AUObserverList { struct vector<AULocalParameterObserver *, std::__1::allocator<AULocalParameterObserver *> > { struct AULocalParameterObserver {} **x_1_1_1; struct AULocalParameterObserver {} **x_1_1_2; struct __compressed_pair<AULocalParameterObserver **, std::__1::allocator<AULocalParameterObserver *> > { struct AULocalParameterObserver {} **x_3_2_1; } x_1_1_3; } x1; }*)observerList;
- (id)parentNode;
- (void)removeParameterObserver:(void*)arg1;
- (void)setImpl_implementorDisplayNameWithLengthCallback:(id /* block */)arg1;
- (void)setImpl_implementorStringFromValueCallback:(id /* block */)arg1;
- (void)setImpl_implementorValueFromStringCallback:(id /* block */)arg1;
- (void)setImpl_implementorValueObserver:(id /* block */)arg1;
- (void)setImpl_implementorValueProvider:(id /* block */)arg1;
- (void)setImplementorDisplayNameWithLengthCallback:(id /* block */)arg1;
- (void)setImplementorStringFromValueCallback:(id /* block */)arg1;
- (void)setImplementorValueFromStringCallback:(id /* block */)arg1;
- (void)setImplementorValueObserver:(id /* block */)arg1;
- (void)setImplementorValueProvider:(id /* block */)arg1;
- (void)setIndexInGroup:(unsigned long long)arg1;
- (void)setObserverList:(struct AUObserverList { struct vector<AULocalParameterObserver *, std::__1::allocator<AULocalParameterObserver *> > { struct AULocalParameterObserver {} **x_1_1_1; struct AULocalParameterObserver {} **x_1_1_2; struct __compressed_pair<AULocalParameterObserver **, std::__1::allocator<AULocalParameterObserver *> > { struct AULocalParameterObserver {} **x_3_2_1; } x_1_1_3; } x1; }*)arg1;
- (void)setParentNode:(id)arg1;
- (void*)tokenByAddingParameterAutomationObserver:(id /* block */)arg1;
- (void*)tokenByAddingParameterObserver:(id /* block */)arg1;
- (void*)tokenByAddingParameterRecordingObserver:(id /* block */)arg1;

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
