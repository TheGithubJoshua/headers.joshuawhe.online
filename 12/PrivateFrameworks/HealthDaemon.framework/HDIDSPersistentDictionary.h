<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>HDIDSPersistentDictionary.h</title>
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

/PrivateFrameworks/HealthDaemon.framework/HDIDSPersistentDictionary.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon (1)
 */

@interface HDIDSPersistentDictionary : NSObject {
    HDSQLiteDatabase * _database;
    NSURL * _databaseURL;
    Class  _objectClass;
}

- (void).cxx_destruct;
- (bool)_createSchemaWithError:(id*)arg1;
- (id)_dataFromObject:(id)arg1;
- (void)_handleError:(id)arg1 format:(id)arg2;
- (id)_objectFromData:(id)arg1;
- (void)_obliterateWithReason:(id)arg1 preserveCopy:(bool)arg2 generateStackshot:(bool)arg3;
- (bool)_openDB;
- (bool)_reallyOpenDB;
- (void)_recordMappingOfRequest:(id)arg1 toResponse:(id)arg2;
- (void)_recordMessage:(id)arg1 deviceID:(id)arg2 type:(int)arg3 outgoing:(bool)arg4 request:(bool)arg5 length:(long long)arg6;
- (void)dealloc;
- (void)didCancel:(id)arg1;
- (void)didFinishSending:(id)arg1;
- (void)didReceiveError:(id)arg1 forMessageID:(id)arg2;
- (void)didReceiveRequest:(id)arg1 deviceID:(id)arg2 type:(int)arg3 length:(long long)arg4;
- (void)didReceiveResponse:(id)arg1 toRequest:(id)arg2 deviceID:(id)arg3 type:(int)arg4 length:(long long)arg5;
- (void)didSendRequest:(id)arg1 deviceID:(id)arg2 type:(int)arg3 length:(long long)arg4;
- (void)didSendResponse:(id)arg1 toRequest:(id)arg2 deviceID:(id)arg3 type:(int)arg4 length:(long long)arg5;
- (void)enumerateObjectsSortedByExpirationDate:(id /* block */)arg1;
- (id)initWithURL:(id)arg1 objectClass:(Class)arg2;
- (void)invalidate;
- (id)messageIDsForPendingOutgoingMessagesWithType:(int)arg1 deviceID:(id)arg2;
- (id)objectForKey:(id)arg1;
- (void)obliterateWithReason:(id)arg1 preserveCopy:(bool)arg2;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2 expires:(double)arg3;

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
