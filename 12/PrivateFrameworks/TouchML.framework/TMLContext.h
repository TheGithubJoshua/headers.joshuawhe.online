<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>TMLContext.h</title>
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

/PrivateFrameworks/TouchML.framework/TMLContext.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/TouchML.framework/TouchML (1)
 */

@interface TMLContext : NSObject {
    JSValue * _apiObject;
    NSString * _apiObjectKey;
    bool  _beingDisposed;
    NSMutableSet * _contextObjects;
    NSArray * _currentEvaluationBindings;
    bool  _initialized;
    JSContext * _jsContext;
    NSException * _jsEvaluationException;
    TMLMetaContext * _metaContext;
    NSMutableDictionary * _objects;
    unsigned long long  _options;
    NSMutableSet * _requires;
    NSMutableArray * _signalHandlers;
    NSMutableSet * _weakObjectIdentifiers;
}

@property (nonatomic, readonly) NSDictionary *allObjects;
@property (nonatomic, readonly) NSObject *rootObject;

+ (void)addGloballyRequiredModules:(id)arg1;
+ (id)cloneContext:(id)arg1 objects:(id)arg2;
+ (Class)createClassFromPath:(id)arg1;
+ (id)currentContext;
+ (void)initialize;
+ (void)initializeJSContext:(id)arg1;
+ (bool)loadClasses:(id)arg1;
+ (bool)loadClasses:(id)arg1 path:(id)arg2;
+ (bool)loadClassesFromPath:(id)arg1;
+ (id)loadMetaContextWithSource:(id)arg1 path:(id)arg2 options:(unsigned long long)arg3;
+ (void)printStatisticsWithInterval:(double)arg1;

- (void).cxx_destruct;
- (void)addObject:(id)arg1 withIdentifier:(id)arg2;
- (void)addObjectReference:(id)arg1;
- (id)allObjects;
- (id)apiObject;
- (id)applyProperties:(id)arg1 inOrder:(id)arg2 toObject:(id)arg3;
- (void)attachToAPIObject;
- (void)callFunction:(id)arg1 arguments:(id)arg2;
- (id)callFunction:(id)arg1 arguments:(id)arg2 returnType:(unsigned long long)arg3;
- (id)createObjectFromMetaObject:(id)arg1 parent:(id)arg2;
- (void)dealloc;
- (id)didCreateObject:(id)arg1;
- (void)dispose;
- (void)disposeIfNecessary;
- (id)evaluateExpression:(id)arg1 ofType:(unsigned long long)arg2 withBindings:(id)arg3;
- (id)existingObjectWithIdentifier:(id)arg1;
- (id)init;
- (id)initWithOptions:(unsigned long long)arg1;
- (void)initializeJSContext;
- (void)initializeWithCloneContext:(id)arg1;
- (void)initizalizeContext;
- (bool)loadSource:(id)arg1;
- (bool)loadSource:(id)arg1 path:(id)arg2;
- (bool)loadSourceFromPath:(id)arg1;
- (void)makeWeakObjectWithIdentifier:(id)arg1;
- (id)metaContext;
- (id)objectWithIdentifier:(id)arg1;
- (id)objectWithIdentifier:(id)arg1 unwrapWeak:(bool)arg2;
- (id)objectWithIdentifier:(id)arg1 unwrapWeak:(bool)arg2 createIfMissing:(bool)arg3;
- (id)objectWithIdentifierNoCreate:(id)arg1;
- (id)objectsOfType:(id)arg1;
- (id)processValue:(id)arg1 ofType:(unsigned long long)arg2 selfValue:(id)arg3;
- (bool)raiseException:(id)arg1;
- (void)raiseJSException:(id)arg1;
- (void)requireModule:(id)arg1;
- (void)resetException;
- (void)resetJSException;
- (id)rootObject;
- (bool)valid;

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
