<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>RPSession.h</title>
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

/PrivateFrameworks/Rapport.framework/RPSession.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/Rapport.framework/Rapport (174.26)
 */

@interface RPSession : NSObject <NSSecureCoding, RPAuthenticatable, RPCompanionLinkXPCClientInterface, RPMessageable> {
    bool  _activateCalled;
    id /* block */  _authCompletionHandler;
    RPConnection * _cnx;
    unsigned long long  _controlFlags;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    id /* block */  _hidePasswordHandler;
    id /* block */  _interruptionHandler;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    id /* block */  _invalidationHandler;
    NSString * _label;
    unsigned int  _pairSetupFlags;
    unsigned int  _pairVerifyFlags;
    NSString * _password;
    int  _passwordType;
    int  _passwordTypeActual;
    RPEndpoint * _peerEndpoint;
    NSString * _peerID;
    id /* block */  _promptForPasswordHandler;
    NSString * _serviceType;
    unsigned long long  _sessionID;
    id /* block */  _showPasswordHandler;
    unsigned long long  _startTicks;
    struct LogCategory { int x1; int x2; char *x3; unsigned int x4; char *x5; char *x6; int x7; struct LogCategory {} *x8; struct LogOutput {} *x9; struct LogOutput {} *x10; unsigned long long x11; unsigned long long x12; unsigned int x13; unsigned int x14; char *x15; struct LogCategoryPrivate {} *x16; } * _ucat;
    NSXPCConnection * _xpcCnx;
}

@property (nonatomic, copy) id /* block */ authCompletionHandler;
@property (nonatomic, retain) RPConnection *cnx;
@property (nonatomic) unsigned long long controlFlags;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id /* block */ hidePasswordHandler;
@property (nonatomic, copy) id /* block */ interruptionHandler;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, copy) NSString *label;
@property (nonatomic) unsigned int pairSetupFlags;
@property (nonatomic) unsigned int pairVerifyFlags;
@property (nonatomic, copy) NSString *password;
@property (nonatomic) int passwordType;
@property (nonatomic, readonly) int passwordTypeActual;
@property (nonatomic, retain) RPEndpoint *peerEndpoint;
@property (nonatomic, copy) NSString *peerID;
@property (nonatomic, copy) id /* block */ promptForPasswordHandler;
@property (nonatomic, retain) NSString *serviceType;
@property (nonatomic) unsigned long long sessionID;
@property (nonatomic, copy) id /* block */ showPasswordHandler;
@property (nonatomic) unsigned long long startTicks;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_activateWithCompletion:(id /* block */)arg1 reactivate:(bool)arg2;
- (void)_ensureXPCStarted;
- (void)_interrupted;
- (void)_invalidated;
- (void)activateWithCompletion:(id /* block */)arg1;
- (id /* block */)authCompletionHandler;
- (id)cnx;
- (unsigned long long)controlFlags;
- (void)dealloc;
- (void)deregisterEventID:(id)arg1;
- (void)deregisterRequestID:(id)arg1;
- (id)description;
- (id)descriptionWithLevel:(int)arg1;
- (id)dispatchQueue;
- (void)encodeWithCoder:(id)arg1;
- (id /* block */)hidePasswordHandler;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id /* block */)interruptionHandler;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (id)label;
- (unsigned int)pairSetupFlags;
- (unsigned int)pairVerifyFlags;
- (id)password;
- (int)passwordType;
- (int)passwordTypeActual;
- (id)peerEndpoint;
- (id)peerID;
- (id /* block */)promptForPasswordHandler;
- (void)registerEventID:(id)arg1 options:(id)arg2 handler:(id /* block */)arg3;
- (void)registerRequestID:(id)arg1 options:(id)arg2 handler:(id /* block */)arg3;
- (void)sendEventID:(id)arg1 event:(id)arg2 destinationID:(id)arg3 options:(id)arg4 completion:(id /* block */)arg5;
- (void)sendEventID:(id)arg1 event:(id)arg2 options:(id)arg3 completion:(id /* block */)arg4;
- (void)sendRequestID:(id)arg1 request:(id)arg2 destinationID:(id)arg3 options:(id)arg4 responseHandler:(id /* block */)arg5;
- (void)sendRequestID:(id)arg1 request:(id)arg2 options:(id)arg3 responseHandler:(id /* block */)arg4;
- (id)serviceType;
- (unsigned long long)sessionID;
- (void)setAuthCompletionHandler:(id /* block */)arg1;
- (void)setCnx:(id)arg1;
- (void)setControlFlags:(unsigned long long)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setHidePasswordHandler:(id /* block */)arg1;
- (void)setInterruptionHandler:(id /* block */)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setLabel:(id)arg1;
- (void)setPairSetupFlags:(unsigned int)arg1;
- (void)setPairVerifyFlags:(unsigned int)arg1;
- (void)setPassword:(id)arg1;
- (void)setPasswordType:(int)arg1;
- (void)setPeerEndpoint:(id)arg1;
- (void)setPeerID:(id)arg1;
- (void)setPromptForPasswordHandler:(id /* block */)arg1;
- (void)setServiceType:(id)arg1;
- (void)setSessionID:(unsigned long long)arg1;
- (void)setShowPasswordHandler:(id /* block */)arg1;
- (void)setStartTicks:(unsigned long long)arg1;
- (id /* block */)showPasswordHandler;
- (unsigned long long)startTicks;
- (void)tryPassword:(id)arg1;

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
