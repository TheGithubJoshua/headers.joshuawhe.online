<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>_KSUserWordsSynchroniser.h</title>
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

/PrivateFrameworks/KeyboardServices.framework/_KSUserWordsSynchroniser.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices (1)
 */

@interface _KSUserWordsSynchroniser : NSObject {
    bool  _attemptingConnection;
    _KSCloudKitManager * _cloudKitManager;
    _KSControlFileController * _controlFile;
    _KSRequestThrottle * _identityThrottle;
    NSArray * _languagesIfOffline;
    bool  _needRetry;
    _KSSystemTask * _pushTask;
    bool  _retryPending;
    bool  _taskRun;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, retain) NSArray *requiredLanguages;

+ (id)generateKeyWithSize:(unsigned long long)arg1;
+ (id)generateRecordNameForFilename:(id)arg1 withKey:(id)arg2;
+ (Class)infoClass;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)accountDidChange:(id)arg1;
- (void)checkConfiguration;
- (bool)checkErrors:(id)arg1;
- (void)checkForDownload:(id)arg1 uploads:(id)arg2 allLanguages:(id)arg3;
- (void)checkProgress:(int)arg1 withInfo:(id)arg2;
- (id)containerID;
- (void)dealloc;
- (void)deleteZoneWithCompletionHandler:(id /* block */)arg1;
- (void)deltaDownloadForLanguages:(id)arg1;
- (void)disable;
- (void)dumpAllRecordsWithCompletionHandler:(id /* block */)arg1;
- (id)filenameForLanguage:(id)arg1;
- (void)firstTimeDownloadWithKey:(id)arg1;
- (void)generateKeyWithCompletionHandler:(id /* block */)arg1;
- (id)generateRecordListForLanguages:(id)arg1;
- (void)identitiesDidChange:(id)arg1;
- (id)information;
- (id)init;
- (id)initForTestingWithManager:(id)arg1 enablePushing:(bool)arg2;
- (void)keyboardUsed;
- (void)loadKeyWithCompletion:(id /* block */)arg1;
- (void)modifyInformationWithOperations:(id /* block */)arg1;
- (void)overwriteFilesWithRecords:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)readFilesWithRecordIDs:(id)arg1 forColumns:(id)arg2 priority:(unsigned long long)arg3 withCompletionHandler:(id /* block */)arg4;
- (id)recordIDForLanguage:(id)arg1 withKey:(id)arg2;
- (id)requiredLanguages;
- (void)saveKey:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)setRequiredLanguages:(id)arg1;

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