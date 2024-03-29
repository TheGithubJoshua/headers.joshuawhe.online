<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CTKClient_SEKey.h</title>
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

/Frameworks/Security.framework/CTKClient_SEKey.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/Security.framework/Security (58286.270.3.0.2)
 */

@interface CTKClient_SEKey : NSObject {
    NSData * _ACMContext;
    struct aks_ref_key_s { } * _AKSRefKey;
    long long  _SEKeyType;
    struct __SecAccessControl { } * _accessControl;
    struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; } * _key;
    id  _keyType;
    NSData * _params;
}

@property (readonly) struct __SecAccessControl { }*accessControl;
@property (readonly) NSDictionary *attributes;
@property (readonly) struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*key;
@property (readonly) id keyType;
@property (readonly) id objectID;

+ (bool)hasSystemUIK;
+ (int)keyClassForProtection:(id)arg1;
+ (id)protectionForKeyClass:(int)arg1;
+ (void)setupKeybagForTesting:(bool)arg1;

- (void).cxx_destruct;
- (struct __SecAccessControl { }*)accessControl;
- (id)attestKey:(id)arg1 nonce:(id)arg2 error:(id*)arg3;
- (id)attributes;
- (id)computeSharedSecret:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (bool)deleteWithError:(id*)arg1;
- (id)error:(id*)arg1 withAKSReturn:(int)arg2 message:(id)arg3;
- (id)init;
- (id)initWithAttributes:(id)arg1 ACMContext:(id)arg2 error:(id*)arg3;
- (id)initWithKeyType:(id)arg1 accessControl:(struct __SecAccessControl { }*)arg2 ACMContext:(id)arg3 applePayEnabled:(bool)arg4 error:(id*)arg5;
- (id)initWithObjectID:(id)arg1 ACMContext:(id)arg2 error:(id*)arg3;
- (struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)key;
- (id)keyType;
- (bool)lifetimeControlWithType:(long long)arg1 error:(id*)arg2;
- (id)objectID;
- (id)parameters;
- (id)publicKeyWithError:(id*)arg1;
- (id)recryptData:(id)arg1 attributes:(id)arg2 error:(id*)arg3;
- (void)setACMContext:(id)arg1;
- (id)signDigest:(id)arg1 error:(id*)arg2;

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
