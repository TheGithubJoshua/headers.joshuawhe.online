<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PLAssetsdClient.h</title>
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

/PrivateFrameworks/AssetsLibraryServices.framework/PLAssetsdClient.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices (1)
 */

@interface PLAssetsdClient : NSObject {
    PLAssetsdCloudClient * _cloudClient;
    PLAssetsdCloudInternalClient * _cloudInternalClient;
    PLAssetsdDebugClient * _debugClient;
    PLAssetsdDemoClient * _demoClient;
    PLAssetsdDiagnosticsClient * _diagnosticsClient;
    NSObject<OS_dispatch_queue> * _isolationQueue;
    PLAssetsdLibraryClient * _libraryClient;
    PLAssetsdLibraryInternalClient * _libraryInternalClient;
    PLAssetsdMigrationClient * _migrationClient;
    PLAssetsdNotificationClient * _notificationClient;
    <PLXPCProxyCreating> * _proxyFactory;
    PLAssetsdResourceClient * _resourceClient;
    PLAssetsdResourceInternalClient * _resourceInternalClient;
    PLAssetsdResourceWriteOnlyClient * _resourceWriteOnlyClient;
    PLAssetsdSyncClient * _syncClient;
}

@property (readonly) PLAssetsdCloudClient *cloudClient;
@property (readonly) PLAssetsdCloudInternalClient *cloudInternalClient;
@property (readonly) PLAssetsdDebugClient *debugClient;
@property (readonly) PLAssetsdDemoClient *demoClient;
@property (readonly) PLAssetsdDiagnosticsClient *diagnosticsClient;
@property (readonly) PLAssetsdLibraryClient *libraryClient;
@property (readonly) PLAssetsdLibraryInternalClient *libraryInternalClient;
@property (readonly) PLAssetsdMigrationClient *migrationClient;
@property (readonly) PLAssetsdNotificationClient *notificationClient;
@property (readonly) PLAssetsdResourceClient *resourceClient;
@property (readonly) PLAssetsdResourceInternalClient *resourceInternalClient;
@property (readonly) PLAssetsdSyncClient *syncClient;

- (void).cxx_destruct;
- (id)cloudClient;
- (id)cloudInternalClient;
- (id)debugClient;
- (id)demoClient;
- (id)diagnosticsClient;
- (id)init;
- (id)initWithProxyFactory:(id)arg1;
- (id)libraryClient;
- (id)libraryInternalClient;
- (id)migrationClient;
- (id)notificationClient;
- (id)resourceClient;
- (id)resourceInternalClient;
- (id)resourceWriteOnlyClient;
- (void)sendDaemonJob:(id)arg1 shouldRunSerially:(bool)arg2 replyHandler:(id /* block */)arg3;
- (id)syncClient;

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