<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>QLPreviewConverter.h</title>
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

/Frameworks/QuickLook.framework/QLPreviewConverter.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook (1)
 */

@interface QLPreviewConverter : NSObject {
    bool  _dataGatheringSucceeded;
    bool  _dataPhaseFinished;
    NSObject<OS_dispatch_io> * _io_write;
    NSDictionary * _options;
    QLPreviewParts * _previewParts;
    NSURL * _tmpFileURL;
    long long  _totalWrittenBytes;
}

@property (nonatomic, readonly) NSString *previewFileName;
@property (nonatomic, readonly) QLPreviewParts *previewParts;
@property (nonatomic, readonly) NSURLRequest *previewRequest;
@property (nonatomic, readonly) NSURLResponse *previewResponse;
@property (nonatomic, readonly) NSString *previewUTI;

+ (id)_csvMIMETypes;
+ (id)_csvUTIs;
+ (id)_iWorkMIMETypes;
+ (id)_iWorkUTIs;
+ (id)_lpdfUTIs;
+ (id)_officeMIMETypes;
+ (id)_officeUTIs;
+ (id)_rtfMIMETypes;
+ (id)_rtfUTIs;
+ (id)_spreadSheetMIMETypes;
+ (id)_spreadSheetUTIs;
+ (bool)canConvertDocumentType:(id)arg1;
+ (id)convertibleMIMETypes;
+ (id)convertibleUTIs;
+ (bool)isCSVDocumentType:(id)arg1;
+ (bool)isIWorkDocumentType:(id)arg1;
+ (bool)isLPDFDocumentType:(id)arg1;
+ (bool)isOfficeDocumentType:(id)arg1;
+ (bool)isRTFDocumentType:(id)arg1;
+ (bool)isSafeRequest:(id)arg1;
+ (bool)isSafeURL:(id)arg1;
+ (bool)isSpreadSheetDocumentType:(id)arg1;

- (void).cxx_destruct;
- (void)_closeIOCahnnel;
- (void)_createDispatchIOChannel;
- (void)_register;
- (void)_writeDataArrayIntoStream:(id)arg1;
- (void)appendData:(id)arg1;
- (void)appendDataArray:(id)arg1;
- (void)cancel;
- (void)dealloc;
- (void)finishConverting;
- (void)finishedAppendingData;
- (bool)htmlErrorDisabled;
- (id)initWithConnection:(id)arg1 delegate:(id)arg2 response:(id)arg3 options:(id)arg4;
- (id)initWithData:(id)arg1 name:(id)arg2 uti:(id)arg3 options:(id)arg4;
- (id)initWithURL:(id)arg1 uti:(id)arg2 options:(id)arg3;
- (bool)isCancelled;
- (bool)isComputed;
- (id)previewFileName;
- (id)previewParts;
- (id)previewRequest;
- (id)previewResponse;
- (id)previewUTI;
- (id)safeRequestForRequest:(id)arg1;
- (void)setHtmlErrorDisabled:(bool)arg1;

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
