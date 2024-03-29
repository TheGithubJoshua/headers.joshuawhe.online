<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>SSEntity.h</title>
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

/PrivateFrameworks/StoreServices.framework/SSEntity.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices (1)
 */

@interface SSEntity : NSObject <SSXPCCoding> {
    SSXPCConnection * _connection;
    NSArray * _dirtyLocalExternalProperties;
    NSArray * _dirtyLocalProperties;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSMutableDictionary * _localExternalValues;
    NSMutableDictionary * _localValues;
    long long  _pid;
}

@property (getter=_localExternalValues, setter=_setLocalExternalValues:, copy) NSDictionary *_localExternalValues;
@property (getter=_localValues, setter=_setLocalValues:, copy) NSDictionary *_localValues;
@property (getter=_isManaged, readonly) bool _managed;
@property (readonly) long long _persistentIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) bool exists;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices

+ (long long)_existsMessage;
+ (long long)_getExternalValuesMessage;
+ (long long)_getValueMessage;
+ (long long)_setExternalValuesMessage;
+ (long long)_setValuesMessage;

- (void)__addCachedExternalValues:(id)arg1;
- (void)__addCachedPropertyValues:(id)arg1;
- (void)_addCachedExternalValues:(id)arg1;
- (void)_addCachedPropertyValues:(id)arg1;
- (void)_becomeManagedOnConnection:(id)arg1;
- (void)_getValues:(id*)arg1 forProperties:(const id*)arg2 count:(unsigned long long)arg3 message:(long long)arg4;
- (id)_initWithPersistentIdentifier:(long long)arg1;
- (bool)_isManaged;
- (id)_localExternalValues;
- (id)_localValues;
- (long long)_persistentIdentifier;
- (void)_resetLocalIVars;
- (void)_setDirtyCachedExternalProperties:(id)arg1;
- (void)_setDirtyCachedProperties:(id)arg1;
- (void)_setLocalExternalValues:(id)arg1;
- (void)_setLocalValues:(id)arg1;
- (id)copyXPCEncoding;
- (void)dealloc;
- (id)description;
- (bool)exists;
- (void)getValues:(id*)arg1 forExternalProperties:(const id*)arg2 count:(unsigned long long)arg3;
- (void)getValues:(id*)arg1 forProperties:(const id*)arg2 count:(unsigned long long)arg3;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (void)resetCachedExternalProperties:(const id*)arg1 count:(unsigned long long)arg2;
- (void)resetCachedProperties:(const id*)arg1 count:(unsigned long long)arg2;
- (bool)setExternalValuesWithDictionary:(id)arg1;
- (bool)setValue:(id)arg1 forProperty:(id)arg2;
- (bool)setValuesWithDictionary:(id)arg1;
- (id)valueForExternalProperty:(id)arg1;
- (id)valueForProperty:(id)arg1;

// Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI

- (id)vui_valuesForProperties:(id)arg1;

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
