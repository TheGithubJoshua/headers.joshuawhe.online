<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>IKDOMDocument.h</title>
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

/PrivateFrameworks/ITMLKit.framework/IKDOMDocument.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit (1)
 */

@interface IKDOMDocument : IKDOMNode <IKJSDOMDocument, IKJSDOMXPathEvaluator, NSObject, _IKJSDOMDocument, _IKJSDOMDocumentProxy> {
    NSString * __documentURI;
    <IKNetworkRequestLoader> * __requestLoader;
    <IKJSDOMDocumentAppBridge> * _appBridge;
    struct { 
        bool hasSetNeedsUpdate; 
        bool hasSnapshotImpressions; 
        bool hasRecordedImpressions; 
        bool hasImpressionsMatchingTag; 
        bool hasScrollToTop; 
        bool hasRunTest; 
    }  _appBridgeFlags;
    bool  _embeddedScriptExecuted;
    unsigned long long  _itmlIDSequence;
}

@property (setter=_setDocumentURI:, nonatomic, retain) NSString *_documentURI;
@property (nonatomic, readonly) <IKNetworkRequestLoader> *_requestLoader;
@property (nonatomic) <IKJSDOMDocumentAppBridge> *appBridge;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, retain) IKDOMElement *documentElement;
@property (nonatomic, retain) NSString *documentURI;
@property (getter=isEmbeddedScriptExecuted, nonatomic) bool embeddedScriptExecuted;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) IKDOMImplementation *implementation;
@property (nonatomic, readonly, retain) NSString *inputEncoding;
@property (nonatomic) unsigned long long itmlIDSequence;
@property (nonatomic) IKJSNavigationDocument *navigationDocument;
@property (nonatomic) bool strictErrorChecking;
@property (readonly) Class superclass;
@property (nonatomic, readonly, retain) NSString *xmlEncoding;
@property (nonatomic) bool xmlStandalone;
@property (nonatomic, retain) NSString *xmlVersion;

+ (struct _xmlDoc { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; int x10; int x11; struct _xmlDtd {} *x12; struct _xmlDtd {} *x13; struct _xmlNs {} *x14; char *x15; char *x16; void *x17; void *x18; char *x19; int x20; struct _xmlDict {} *x21; void *x22; int x23; int x24; }*)_documentWithXMLStr:(id)arg1 lsInput:(id)arg2 error:(id*)arg3;
+ (void)_resetUpdatesForNode:(id)arg1;

- (void).cxx_destruct;
- (id)_documentURI;
- (void)_executeEmbeddedScriptWithExtraInfo:(id)arg1;
- (id)_requestLoader;
- (void)_setDocumentURI:(id)arg1;
- (void)_updateITMLIDRecursivelyForNodePtr:(struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg1;
- (id)adoptNode:(id)arg1;
- (id)appBridge;
- (id)asPrivateIKJSDOMDocument;
- (id)createCDATASection:(id)arg1;
- (id)createComment:(id)arg1;
- (id)createDocumentFragment;
- (id)createElement:(id)arg1;
- (id)createExpression:(id)arg1 :(id)arg2;
- (id)createTextNode:(id)arg1;
- (void)dealloc;
- (id)documentElement;
- (id)documentURI;
- (id)evaluate:(id)arg1 :(id)arg2 :(id)arg3 :(long long)arg4 :(id)arg5;
- (id)getElementById:(id)arg1;
- (id)getElementsByTagName:(id)arg1;
- (id)implementation;
- (id)initWithAppContext:(id)arg1;
- (id)initWithAppContext:(id)arg1 input:(id)arg2 error:(id*)arg3;
- (id)initWithAppContext:(id)arg1 qualifiedName:(id)arg2;
- (id)initWithAppContext:(id)arg1 xmlStr:(id)arg2 error:(id*)arg3;
- (id)inputEncoding;
- (bool)isEmbeddedScriptExecuted;
- (unsigned long long)itmlIDSequence;
- (bool)markUpdated;
- (id)matchingImpressions:(id)arg1 :(id)arg2;
- (id)navigationDocument;
- (id)nodeName;
- (long long)nodeType;
- (void)prepareForPresentationWithExtraInfo:(id)arg1;
- (id)recordedImpressions:(id)arg1;
- (void)replace:(id)arg1;
- (void)runTest:(id)arg1 :(id)arg2;
- (void)scrollToTop;
- (void)setAppBridge:(id)arg1;
- (void)setDocumentURI:(id)arg1;
- (void)setEmbeddedScriptExecuted:(bool)arg1;
- (void)setITMLIDForNode:(id)arg1;
- (void)setItmlIDSequence:(unsigned long long)arg1;
- (void)setNavigationDocument:(id)arg1;
- (void)setNeedsUpdate;
- (void)setStrictErrorChecking:(bool)arg1;
- (void)setXmlStandalone:(bool)arg1;
- (void)setXmlVersion:(id)arg1;
- (id)snapshotImpressions;
- (bool)strictErrorChecking;
- (void)swapITMLIDForNode:(id)arg1 withITMLIDForNode:(id)arg2;
- (id)xmlEncoding;
- (bool)xmlStandalone;
- (id)xmlVersion;

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