<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>IMFileCopier.h</title>
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

/PrivateFrameworks/IMFoundation.framework/IMFileCopier.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation (1000)
 */

@interface IMFileCopier : NSObject {
    void * _BOMCopier;
    id /* block */  _callback;
    <IMFileCopierDelegate> * _delegate;
    bool  _didErrorOccur;
    id  _identifier;
    bool  _inProgress;
    NSURL * _inputURL;
    unsigned long long  _operation;
    NSURL * _outputURL;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _shouldCancel;
}

@property void*_BOMCopier;
@property (copy) id /* block */ _callback;
@property (retain) NSObject<OS_dispatch_queue> *_queue;
@property <IMFileCopierDelegate> *delegate;
@property (nonatomic, readonly) bool didErrorOccur;
@property (readonly, retain) id identifier;
@property bool inProgress;
@property (readonly, retain) NSURL *inputURL;
@property unsigned long long operation;
@property (readonly, retain) NSURL *outputURL;
@property (nonatomic, readonly) bool wasCancelled;

- (void*)_BOMCopier;
- (id /* block */)_callback;
- (void)_fillOutputURLFromInputURL;
- (void)_main_copierFinishedWithResult:(id)arg1;
- (id)_queue;
- (id)_temporaryCopierPath;
- (void)_worker_doCopy;
- (void)cancel;
- (void)cleanup;
- (void)dealloc;
- (id)delegate;
- (bool)didErrorOccur;
- (id)identifier;
- (bool)inProgress;
- (id)initWithInputURL:(id)arg1 outputURL:(id)arg2 identifier:(id)arg3 operation:(unsigned long long)arg4 completionBlock:(id /* block */)arg5 queue:(id)arg6;
- (id)initWithInputURL:(id)arg1 outputURL:(id)arg2 identifier:(id)arg3 operation:(unsigned long long)arg4 delegate:(id)arg5;
- (id)inputURL;
- (unsigned long long)operation;
- (id)outputURL;
- (void)setDelegate:(id)arg1;
- (void)setInProgress:(bool)arg1;
- (void)setOperation:(unsigned long long)arg1;
- (void)set_BOMCopier:(void*)arg1;
- (void)set_callback:(id /* block */)arg1;
- (void)set_queue:(id)arg1;
- (void)start;
- (bool)wasCancelled;

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