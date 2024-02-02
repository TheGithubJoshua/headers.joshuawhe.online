<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CKDProtobufStreamWriter.h</title>
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

/PrivateFrameworks/CloudKitDaemon.framework/CKDProtobufStreamWriter.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon (736.235)
 */

@interface CKDProtobufStreamWriter : NSObject <NSStreamDelegate> {
    NSMutableArray * _allObjects;
    NSFileHandle * _binaryLogFileHandle;
    unsigned long long  _bufferSize;
    NSData * _curData;
    unsigned long long  _curDataPos;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    bool  _hasInitedCompression;
    bool  _haveFinishedCompression;
    bool  _haveFinishedStreaming;
    bool  _haveFlushedZlib;
    NSInputStream * _inputStream;
    id /* block */  _logRequestObjectBlock;
    NSOutputStream * _outputStream;
    bool  _shouldCompress;
    <CKDProtobufMessageSigningDelegate> * _signingDelegate;
    struct z_stream_s { 
        char *next_in; 
        unsigned int avail_in; 
        unsigned long long total_in; 
        char *next_out; 
        unsigned int avail_out; 
        unsigned long long total_out; 
        char *msg; 
        struct internal_state {} *state; 
        int (*zalloc)(); 
        int (*zfree)(); 
        void *opaque; 
        int data_type; 
        unsigned long long adler; 
        unsigned long long reserved; 
    }  _zlibStream;
}

@property (nonatomic, retain) NSFileHandle *binaryLogFileHandle;
@property (nonatomic) unsigned long long bufferSize;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasInitedCompression;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool haveFinishedCompression;
@property bool haveFinishedStreaming;
@property (nonatomic, copy) id /* block */ logRequestObjectBlock;
@property (nonatomic) bool shouldCompress;
@property (nonatomic) <CKDProtobufMessageSigningDelegate> *signingDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_compressBodyData:(id)arg1 shouldFlush:(bool)arg2;
- (id)_dataForMessage:(id)arg1;
- (bool)_finishStreaming:(id)arg1;
- (id)_prepareMescalSignature:(id)arg1;
- (void)_prepareObjectForStreaming:(id)arg1 shouldSign:(bool)arg2;
- (long long)_streamNextObject:(id)arg1;
- (void)_tearDownOutputStream;
- (long long)_writeDataToStream:(id)arg1;
- (id)binaryLogFileHandle;
- (unsigned long long)bufferSize;
- (void)dealloc;
- (bool)hasInitedCompression;
- (bool)haveFinishedCompression;
- (bool)haveFinishedStreaming;
- (id)initWithCompression:(bool)arg1;
- (id /* block */)logRequestObjectBlock;
- (id)open;
- (void)setBinaryLogFileHandle:(id)arg1;
- (void)setBufferSize:(unsigned long long)arg1;
- (void)setHasInitedCompression:(bool)arg1;
- (void)setHaveFinishedCompression:(bool)arg1;
- (void)setHaveFinishedStreaming:(bool)arg1;
- (void)setLogRequestObjectBlock:(id /* block */)arg1;
- (void)setShouldCompress:(bool)arg1;
- (void)setSigningDelegate:(id)arg1;
- (void)setStreamedObjects:(id)arg1;
- (bool)shouldCompress;
- (id)signingDelegate;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)tearDown;

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