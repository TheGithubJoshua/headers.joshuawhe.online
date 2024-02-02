<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>HSHomeSharingLibrary.h</title>
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

/PrivateFrameworks/HomeSharing.framework/HSHomeSharingLibrary.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing (1)
 */

@interface HSHomeSharingLibrary : NSObject {
    bool  __hasPendingUpdateRequest;
    bool  _available;
    NSURL * _baseURL;
    HSConnection * _connection;
    NSObject<OS_dispatch_queue> * _connectionAccessQueue;
    long long  _connectionType;
    NSString * _homeSharingGroupID;
    NSString * _name;
    bool  _requiresPassword;
    NSNetService * _service;
    NSString * _uniqueIdentifier;
    unsigned int  _version;
}

@property (nonatomic) bool _hasPendingUpdateRequest;
@property (getter=isAvailable, nonatomic, readonly) bool available;
@property (nonatomic, readonly) unsigned int basePlaylistContainerID;
@property (nonatomic, readonly, retain) NSURL *baseURL;
@property (nonatomic, retain) HSConnection *connection;
@property (nonatomic, readonly) long long connectionState;
@property (nonatomic, readonly) long long connectionType;
@property (nonatomic, readonly) unsigned int databaseID;
@property (nonatomic, readonly) NSString *deviceGUID;
@property (nonatomic, readonly, copy) NSString *homeSharingGroupID;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) bool requiresPassword;
@property (nonatomic, retain) NSNetService *service;
@property (nonatomic, readonly, copy) NSString *uniqueIdentifier;
@property (nonatomic, readonly) unsigned int version;

- (void).cxx_destruct;
- (bool)_hasPendingUpdateRequest;
- (void)_onQueue_ensureConnection;
- (void)_sendUpdateRequest;
- (unsigned int)basePlaylistContainerID;
- (id)baseURL;
- (void)connectWithCompletionHandler:(id /* block */)arg1;
- (id)connection;
- (long long)connectionState;
- (long long)connectionType;
- (unsigned int)databaseID;
- (id)deviceGUID;
- (void)disconnect;
- (unsigned long long)hash;
- (id)homeSharingGroupID;
- (id)initWithName:(id)arg1 uniqueIdentifier:(id)arg2 version:(unsigned int)arg3 baseURL:(id)arg4 homeSharingGroupID:(id)arg5 connectionType:(long long)arg6;
- (bool)isAvailable;
- (bool)isEqual:(id)arg1;
- (id)name;
- (bool)requiresPassword;
- (id)securityInfoForURL:(id)arg1;
- (void)sendRequest:(id)arg1 withResponseHandler:(id /* block */)arg2;
- (id)service;
- (void)setConnection:(id)arg1;
- (void)setService:(id)arg1;
- (void)set_hasPendingUpdateRequest:(bool)arg1;
- (id)signedRequestFromURLRequest:(id)arg1;
- (id)uniqueIdentifier;
- (id)urlForRequest:(id)arg1;
- (unsigned int)version;

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