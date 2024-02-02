<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>_PBProperty.h</title>
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

/PrivateFrameworks/ProtocolBuffer.framework/_PBProperty.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer (263.2)
 */

@interface _PBProperty : NSObject {
    NSInvocation * _convertFromString;
    NSInvocation * _convertToString;
    NSInvocation * _count;
    int (* _fromDictionaryReprFn;
    NSInvocation * _getter;
    NSInvocation * _has;
    NSString * _name;
    Class  _objectType;
    NSInvocation * _setter;
    NSArray * _structFields;
    NSString * _structName;
    unsigned long long  _structSize;
    Class  _subObjectType;
    BOOL  _subType;
    int (* _toDictionaryReprFn;
    BOOL  _type;
}

@property (nonatomic, readonly) bool canConvertFromString;
@property (nonatomic, readonly) bool isObject;
@property (nonatomic, readonly) bool isStruct;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) Class objectType;
@property (nonatomic, retain) Class subObjectType;
@property (nonatomic) BOOL subType;
@property (nonatomic) BOOL type;

+ (id)getValidPropertiesForType:(Class)arg1 withCache:(id)arg2;
+ (id)pbPropertyFor:(struct objc_property { }*)arg1 type:(Class)arg2;

- (id)_parseStructDefinition:(id)arg1;
- (bool)canConvertFromString;
- (void)dealloc;
- (id)description;
- (unsigned long long)getCountOfRepeatedValuesFromInstance:(id)arg1;
- (id)getNumberValueFromInstance:(id)arg1;
- (id)getObjValueFromInstance:(id)arg1;
- (id)getPtrArrayValueFromInstance:(id)arg1;
- (id)getStructValueFromInstance:(id)arg1;
- (id)initWith:(struct objc_property { }*)arg1 type:(Class)arg2;
- (bool)instanceHasValue:(id)arg1;
- (bool)isObject;
- (bool)isStruct;
- (id)name;
- (Class)objectType;
- (void)setName:(id)arg1;
- (void)setNumberValue:(id)arg1 onInstance:(id)arg2;
- (void)setObjValue:(id)arg1 onInstance:(id)arg2;
- (void)setObjectType:(Class)arg1;
- (bool)setStructValue:(id)arg1 onInstance:(id)arg2;
- (void)setSubObjectType:(Class)arg1;
- (void)setSubType:(BOOL)arg1;
- (void)setType:(BOOL)arg1;
- (Class)subObjectType;
- (BOOL)subType;
- (BOOL)type;

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