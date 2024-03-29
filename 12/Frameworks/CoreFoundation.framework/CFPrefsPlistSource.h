<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CFPrefsPlistSource.h</title>
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

/Frameworks/CoreFoundation.framework/CFPrefsPlistSource.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation (1575.23)
 */

@interface CFPrefsPlistSource : CFPrefsSource {
    _Atomic bool  _avoidsDaemonCache;
    _Atomic bool  _checkedInvalidHome;
    _Atomic bool  _disableBackup;
    _Atomic int  _fileProtectionClass;
    _Atomic bool  _isByHost;
    _Atomic bool  _lastWriteFailed;
    _Atomic struct __CFDictionary {} * _locallySetDict;
    _Atomic bool  _observing;
    _Atomic bool  _readonly;
    _Atomic bool  _restrictedAccess;
    _Atomic bool  _volatile;
    _Atomic char * accessPath;
    struct __CFString { } * container;
    struct __CFString { } * domainIdentifier;
    struct __CFString { } * userIdentifier;
}

- (void)_sharedCleanup;
- (void)addPIDImpersonationIfNecessary:(id)arg1;
- (void)alreadylocked_clearCache;
- (struct __CFDictionary { }*)alreadylocked_copyDictionary;
- (struct __CFArray { }*)alreadylocked_copyKeyList;
- (void*)alreadylocked_copyValueForKey:(struct __CFString { }*)arg1;
- (long long)alreadylocked_generationCount;
- (bool)alreadylocked_requestNewData;
- (void)alreadylocked_setPrecopiedValues:(const void**)arg1 forKeys:(const struct __CFString {}**)arg2 count:(long long)arg3 from:(id)arg4;
- (void)alreadylocked_updateObservingRemoteChanges;
- (bool)attachAccessTokenToMessage:(id)arg1 accessType:(int)arg2;
- (struct __CFString { }*)container;
- (void*)copyValueForKey:(struct __CFString { }*)arg1;
- (id)createRequestNewContentMessageForDaemon:(int)arg1;
- (id)createSynchronizeMessage;
- (void)dealloc;
- (struct __CFString { }*)domainIdentifier;
- (long long)generationCount;
- (void)goReadOnlyAfterTryingToWriteKey:(struct __CFString { }*)arg1 value:(void*)arg2;
- (void)goVolatileAfterTryingToWriteKey:(struct __CFString { }*)arg1 value:(void*)arg2;
- (bool)handleErrorReply:(id)arg1 fromMessageSettingKey:(struct __CFString { }*)arg2 toValue:(void*)arg3 retryCount:(int)arg4 retryContinuation:(id /* block */)arg5;
- (bool)handleErrorReply:(id)arg1 retryCount:(int)arg2 retryContinuation:(id /* block */)arg3;
- (void)handleReply:(id)arg1 toRequestNewDataMessage:(id)arg2 onConnection:(id)arg3 retryCount:(int)arg4 error:(bool*)arg5;
- (id)initWithDomain:(struct __CFString { }*)arg1 user:(struct __CFString { }*)arg2 byHost:(bool)arg3 containerPath:(struct __CFString { }*)arg4 containingPreferences:(id)arg5;
- (bool)isByHost;
- (bool)isVolatile;
- (void)requestPlistValidation;
- (void)sendFullyPreparedMessage:(id)arg1 toConnection:(id)arg2 settingValue:(void*)arg3 forKey:(struct __CFString { }*)arg4 retryCount:(int)arg5;
- (long long)sendMessageSettingValue:(void*)arg1 forKey:(struct __CFString { }*)arg2;
- (void)sendRequestNewDataMessage:(id)arg1 toConnection:(id)arg2 retryCount:(int)arg3 error:(bool*)arg4;
- (void)setAccessRestricted:(bool)arg1;
- (void)setBackupDisabled:(bool)arg1;
- (void)setContainer:(struct __CFString { }*)arg1;
- (void)setDaemonCacheEnabled:(bool)arg1;
- (void)setDomainIdentifier:(struct __CFString { }*)arg1;
- (void)setFileProtectionClass:(int)arg1;
- (void)setUserIdentifier:(struct __CFString { }*)arg1;
- (bool)synchronize;
- (struct __CFString { }*)userIdentifier;
- (bool)volatilizeIfInvalidHomeDir;
- (void)writeFailedForKey:(struct __CFString { }*)arg1 value:(void*)arg2;

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
