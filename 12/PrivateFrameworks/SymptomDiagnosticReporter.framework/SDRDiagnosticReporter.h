<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>SDRDiagnosticReporter.h</title>
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

/PrivateFrameworks/SymptomDiagnosticReporter.framework/SDRDiagnosticReporter.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/SymptomDiagnosticReporter.framework/SymptomDiagnosticReporter (820.262.1)
 */

@interface SDRDiagnosticReporter : NSObject {
    NSXPCConnection * _connection;
    <SDRDiagnosticReporterDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic) <SDRDiagnosticReporterDelegate> *delegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

+ (void)initialize;

- (void).cxx_destruct;
- (id)actionsDictionary:(id)arg1 withIDSDestinations:(id)arg2 validFor:(double)arg3;
- (bool)addSignatureContentForSession:(id)arg1 key:(id)arg2 content:(id)arg3 reply:(id /* block */)arg4;
- (bool)addToSession:(id)arg1 event:(id)arg2 payload:(id)arg3 reply:(id /* block */)arg4;
- (bool)addToSession:(id)arg1 events:(id)arg2 payload:(id)arg3 reply:(id /* block */)arg4;
- (bool)assertFactString:(id)arg1 module:(id)arg2 asSymptom:(bool)arg3 reply:(id /* block */)arg4;
- (bool)cancelSession:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (bool)endSession:(id)arg1;
- (void)getAllDiagnosticCasesWithReply:(id /* block */)arg1;
- (bool)getDiagnosticPayloadsForSignatures:(id)arg1 reply:(id /* block */)arg2;
- (id)init;
- (id)initWithQueue:(id)arg1;
- (bool)isSignatureValid:(id)arg1;
- (bool)postAWDEvent:(id)arg1 reply:(id /* block */)arg2;
- (id)queue;
- (void)setDelegate:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setupXPCInterface;
- (id)signatureWithDomain:(id)arg1 type:(id)arg2 subType:(id)arg3 detectedProcess:(id)arg4 triggerThresholdValues:(id)arg5;
- (id)signatureWithDomain:(id)arg1 type:(id)arg2 subType:(id)arg3 originatingProcess:(id)arg4 triggerThreshold:(id)arg5;
- (id)signatureWithDomain:(id)arg1 type:(id)arg2 subType:(id)arg3 subtypeContext:(id)arg4 detectedProcess:(id)arg5 triggerThresholdValues:(id)arg6;
- (bool)snapshotWithSignature:(id)arg1 duration:(double)arg2 event:(id)arg3 payload:(id)arg4 reply:(id /* block */)arg5;
- (bool)snapshotWithSignature:(id)arg1 duration:(double)arg2 events:(id)arg3 payload:(id)arg4 actions:(id)arg5 reply:(id /* block */)arg6;
- (bool)snapshotWithSignature:(id)arg1 duration:(double)arg2 events:(id)arg3 payload:(id)arg4 actions:(id)arg5 wantsRemoteCase:(bool)arg6 reply:(id /* block */)arg7;
- (bool)snapshotWithSignature:(id)arg1 duration:(double)arg2 events:(id)arg3 payload:(id)arg4 reply:(id /* block */)arg5;
- (bool)snapshotWithSignature:(id)arg1 duration:(double)arg2 events:(id)arg3 payload:(id)arg4 wantsRemoteCase:(bool)arg5 reply:(id /* block */)arg6;
- (bool)snapshotWithSignature:(id)arg1 duration:(double)arg2 payload:(id)arg3 reply:(id /* block */)arg4;
- (bool)snapshotWithSignature:(id)arg1 withIDSDestinations:(id)arg2 validFor:(double)arg3 duration:(double)arg4 events:(id)arg5 payload:(id)arg6 actions:(id)arg7 reply:(id /* block */)arg8;
- (bool)startSessionWithSignature:(id)arg1 duration:(double)arg2 event:(id)arg3 payload:(id)arg4 reply:(id /* block */)arg5;
- (bool)startSessionWithSignature:(id)arg1 duration:(double)arg2 events:(id)arg3 payload:(id)arg4 actions:(id)arg5 reply:(id /* block */)arg6;
- (bool)startSessionWithSignature:(id)arg1 duration:(double)arg2 events:(id)arg3 payload:(id)arg4 actions:(id)arg5 wantsRemoteCase:(bool)arg6 reply:(id /* block */)arg7;
- (bool)startSessionWithSignature:(id)arg1 duration:(double)arg2 events:(id)arg3 payload:(id)arg4 reply:(id /* block */)arg5;
- (bool)startSessionWithSignature:(id)arg1 duration:(double)arg2 events:(id)arg3 payload:(id)arg4 wantsRemoteCase:(bool)arg5 reply:(id /* block */)arg6;
- (bool)startSessionWithSignature:(id)arg1 duration:(double)arg2 payload:(id)arg3 reply:(id /* block */)arg4;
- (bool)startSessionWithSignature:(id)arg1 withIDSDestinations:(id)arg2 validFor:(double)arg3 duration:(double)arg4 events:(id)arg5 payload:(id)arg6 actions:(id)arg7 reply:(id /* block */)arg8;
- (bool)triggerRemoteSessionForSignature:(id)arg1 caseGroupID:(id)arg2 reply:(id /* block */)arg3;

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