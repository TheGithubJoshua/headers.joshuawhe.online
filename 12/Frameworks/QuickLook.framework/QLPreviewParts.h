<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>QLPreviewParts.h</title>
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

/Frameworks/QuickLook.framework/QLPreviewParts.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook (1)
 */

@interface QLPreviewParts : NSObject {
    NSURLConnection * _connection;
    void * _convertFunction;
    NSData * _data;
    id  _delegate;
    NSString * _fileName;
    long long  _pageCount;
    float  _pageHeight;
    float  _pageWidth;
    NSString * _password;
    bool  _progressive;
    bool  _shouldRemoveURLAfterGeneration;
    NSURL * _url;
    NSString * _uti;
    bool  cancelled;
    bool  computed;
    NSThread * delegateCallbackThread;
    NSMutableDictionary * encodingsForURLs;
    bool  htmlErrorDisabled;
    NSError * mainError;
    NSMutableSet * outstandingURLs;
    NSURLResponse * previewResponse;
    NSURL * previewURL;
    NSMutableSet * registeredURLs;
    const void * representedObject;
    struct { 
        long long version; 
        int (*retain)(); 
        int (*release)(); 
        int (*copyDescription)(); 
        int (*equal)(); 
    }  representedObjectCallbacks;
    long long  representedObjectProtection;
}

@property (nonatomic, readonly) NSSet *attachmentURLs;
@property (getter=isCancelled, readonly) bool cancelled;
@property (getter=isComputed, readonly) bool computed;
@property (nonatomic, retain) NSURLConnection *connection;
@property (nonatomic, retain) NSData *data;
@property (nonatomic) id delegate;
@property (nonatomic, retain) NSString *fileName;
@property bool htmlErrorDisabled;
@property (readonly) long long pageCount;
@property (readonly) float pageHeight;
@property (readonly) float pageWidth;
@property (nonatomic, retain) NSString *password;
@property (nonatomic, readonly) NSURLRequest *previewRequest;
@property (nonatomic, readonly) NSURLResponse *previewResponse;
@property (nonatomic, readonly) NSURL *previewURL;
@property (nonatomic) bool progressive;
@property (nonatomic) bool shouldRemoveURLAfterGeneration;
@property (nonatomic, retain) NSURL *url;
@property (nonatomic, retain) NSString *uti;

+ (bool)isSafeRequest:(id)arg1;
+ (bool)isSafeURL:(id)arg1;
+ (void)registerPreview:(id)arg1;
+ (id)relativeStringForSafeURL:(id)arg1;
+ (id)safeURLScheme;
+ (void)unregisterPreview:(id)arg1;

- (void).cxx_destruct;
- (void)_discardRepresentedObjectSafely;
- (void)_protectRepresentedObjectSafely;
- (void)_registerURL:(id)arg1 mimeType:(id)arg2 textEncoding:(id)arg3;
- (id)_requestForURL:(id)arg1;
- (id)_voidRequest;
- (void)appendData:(id)arg1 forURL:(id)arg2 lastChunk:(bool)arg3;
- (id)attachmentURLs;
- (void)cancel;
- (unsigned int)cfEncodingForAttachmentURL:(id)arg1;
- (void)computePreview;
- (void)computePreviewInThread;
- (id)connection;
- (id)data;
- (void)dealloc;
- (id)delegate;
- (const void*)documentObject;
- (id)fileName;
- (bool)htmlErrorDisabled;
- (bool)isCancelled;
- (bool)isComputed;
- (id)mimeTypeForAttachmentURL:(id)arg1;
- (id)newAttachmentURLWithID:(id)arg1 properties:(id)arg2;
- (id)newSafeAttachmentURLWithID:(id)arg1 mimeType:(id)arg2 textEncoding:(id)arg3;
- (long long)pageCount;
- (float)pageHeight;
- (float)pageWidth;
- (id)password;
- (id)previewRequest;
- (id)previewResponse;
- (id)previewURL;
- (bool)progressive;
- (id)safeRequestForRequest:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setData:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDocumentObject:(const void*)arg1 callbacks:(const struct { long long x1; int (*x2)(); int (*x3)(); int (*x4)(); int (*x5)(); }*)arg2;
- (void)setError:(id)arg1;
- (void)setFileName:(id)arg1;
- (void)setHtmlErrorDisabled:(bool)arg1;
- (void)setPassword:(id)arg1;
- (void)setProgressive:(bool)arg1;
- (void)setShouldRemoveURLAfterGeneration:(bool)arg1;
- (void)setUrl:(id)arg1;
- (void)setUti:(id)arg1;
- (bool)shouldRemoveURLAfterGeneration;
- (void)startComputingPreview;
- (void)startDataRepresentationWithContentType:(id)arg1 properties:(id)arg2;
- (id)url;
- (id)uti;

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