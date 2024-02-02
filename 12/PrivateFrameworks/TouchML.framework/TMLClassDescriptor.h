<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>TMLClassDescriptor.h</title>
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

/PrivateFrameworks/TouchML.framework/TMLClassDescriptor.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/TouchML.framework/TouchML (1)
 */

@interface TMLClassDescriptor : NSObject <TMLModelSerialize> {
    NSMutableDictionary * _childClasses;
    NSString * _className;
    TMLValueExpression * _initializer;
    NSMutableDictionary * _methods;
    Class  _objcClass;
    NSString * _objcClassName;
    bool  _optional;
    NSMutableDictionary * _properties;
    NSMutableDictionary * _signals;
    TMLClassDescriptor * _superClass;
    NSString * _superClassName;
}

@property (nonatomic, readonly) NSDictionary *childClasses;
@property (nonatomic, readonly) NSString *className;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDictionary *inheritedMethods;
@property (nonatomic, readonly) NSDictionary *inheritedProperties;
@property (nonatomic, readonly) NSDictionary *inheritedSignals;
@property (nonatomic, readonly) TMLValueExpression *initializer;
@property (nonatomic, readonly) NSDictionary *methods;
@property (nonatomic, readonly) Class objcClass;
@property (nonatomic, copy) NSString *objcClassName;
@property (getter=isOptional, nonatomic, readonly) bool optional;
@property (nonatomic, readonly) NSDictionary *properties;
@property (nonatomic, readonly) NSDictionary *signals;
@property (nonatomic, retain) TMLClassDescriptor *superClass;
@property (nonatomic, readonly) NSString *superClassName;
@property (readonly) Class superclass;

+ (id)decode:(const struct ProtobufCMessage { struct ProtobufCMessageDescriptor {} *x1; unsigned int x2; struct ProtobufCMessageUnknownField {} *x3; }*)arg1;

- (void).cxx_destruct;
- (void)addChildClass:(id)arg1;
- (void)addMethod:(id)arg1;
- (void)addProperty:(id)arg1;
- (void)addSignal:(id)arg1;
- (bool)canMergeFromClassDescriptor:(id)arg1;
- (id)childClasses;
- (id)className;
- (void)encode:(struct ProtobufCMessage { struct ProtobufCMessageDescriptor {} *x1; unsigned int x2; struct ProtobufCMessageUnknownField {} *x3; }*)arg1;
- (id)inheritedMethods;
- (id)inheritedProperties;
- (id)inheritedSignals;
- (id)initWithName:(id)arg1 superClassName:(id)arg2 initializer:(id)arg3 optional:(bool)arg4;
- (id)initializer;
- (bool)isEqual:(id)arg1;
- (bool)isOptional;
- (bool)mergeFromClassDescriptor:(id)arg1;
- (id)methods;
- (Class)objcClass;
- (id)objcClassName;
- (id)properties;
- (id)propertyForName:(id)arg1;
- (void)setObjcClassName:(id)arg1;
- (void)setSuperClass:(id)arg1;
- (id)signals;
- (id)superClass;
- (id)superClassName;

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