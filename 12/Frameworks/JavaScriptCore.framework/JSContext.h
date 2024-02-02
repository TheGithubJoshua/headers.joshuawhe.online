<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>JSContext.h</title>
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

/Frameworks/JavaScriptCore.framework/JSContext.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/JavaScriptCore.framework/JavaScriptCore (8607.3.18)
 */

@interface JSContext : NSObject {
    id /* block */  _exceptionHandler;
    struct OpaqueJSContext { } * m_context;
    struct Strong<JSC::JSObject> { 
        struct JSValue {} *m_slot; 
    }  m_exception;
    JSVirtualMachine * m_virtualMachine;
}

@property (nonatomic, readonly) RWIProtocolInspector *_inspector;
@property (retain) JSValue *exception;
@property (copy) id /* block */ exceptionHandler;
@property (readonly) JSValue *globalObject;
@property (copy) NSString *name;
@property (readonly) JSVirtualMachine *virtualMachine;

// Image: /System/Library/Frameworks/JavaScriptCore.framework/JavaScriptCore

+ (id)contextWithJSGlobalContextRef:(struct OpaqueJSContext { }*)arg1;
+ (id)currentArguments;
+ (id)currentCallee;
+ (id)currentContext;
+ (id)currentThis;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct OpaqueJSContext { }*)JSGlobalContextRef;
- (struct __CFRunLoop { }*)_debuggerRunLoop;
- (bool)_includesNativeCallStackWhenReportingExceptions;
- (bool)_remoteInspectionEnabled;
- (void)_setDebuggerRunLoop:(struct __CFRunLoop { }*)arg1;
- (void)_setIncludesNativeCallStackWhenReportingExceptions:(bool)arg1;
- (void)_setRemoteInspectionEnabled:(bool)arg1;
- (void)beginCallbackWithData:(struct CallbackData { struct CallbackData {} *x1; id x2; id x3; struct OpaqueJSValue {} *x4; struct OpaqueJSValue {} *x5; unsigned long long x6; struct OpaqueJSValue {} **x7; id x8; }*)arg1 calleeValue:(struct OpaqueJSValue { }*)arg2 thisValue:(struct OpaqueJSValue { }*)arg3 argumentCount:(unsigned long long)arg4 arguments:(const struct OpaqueJSValue {}**)arg5;
- (bool)boolFromNotifyException:(struct OpaqueJSValue { }*)arg1;
- (void)dealloc;
- (void)endCallbackWithData:(struct CallbackData { struct CallbackData {} *x1; id x2; id x3; struct OpaqueJSValue {} *x4; struct OpaqueJSValue {} *x5; unsigned long long x6; struct OpaqueJSValue {} **x7; id x8; }*)arg1;
- (void)ensureWrapperMap;
- (id)evaluateScript:(id)arg1;
- (id)evaluateScript:(id)arg1 withSourceURL:(id)arg2;
- (id)exception;
- (id /* block */)exceptionHandler;
- (id)globalObject;
- (id)init;
- (id)initWithGlobalContextRef:(struct OpaqueJSContext { }*)arg1;
- (id)initWithVirtualMachine:(id)arg1;
- (id)name;
- (void)notifyException:(struct OpaqueJSValue { }*)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)setException:(id)arg1;
- (void)setExceptionHandler:(id /* block */)arg1;
- (void)setName:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)valueFromNotifyException:(struct OpaqueJSValue { }*)arg1;
- (id)virtualMachine;
- (id)wrapperForJSObject:(struct OpaqueJSValue { }*)arg1;
- (id)wrapperForObjCObject:(id)arg1;
- (id)wrapperMap;

// Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector

- (id)_inspector;

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