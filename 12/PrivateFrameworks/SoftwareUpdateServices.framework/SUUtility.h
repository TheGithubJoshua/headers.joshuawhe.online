<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>SUUtility.h</title>
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

/PrivateFrameworks/SoftwareUpdateServices.framework/SUUtility.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices (1)
 */

@interface SUUtility : NSObject

+ (id)URLIfFileExists:(id)arg1;
+ (id)addToDate:(id)arg1 numberOfDays:(long long)arg2;
+ (bool)alarmSetBeforeDate:(id)arg1;
+ (long long)appDemoteableSpace;
+ (bool)appDemotionIsEnabled;
+ (void)assignError:(id*)arg1 withCode:(long long)arg2;
+ (void)assignError:(id*)arg1 withError:(id)arg2 translate:(bool)arg3;
+ (long long)cacheDelete:(id)arg1;
+ (bool)cellularDataIsEnabled;
+ (id)currentProductBuild;
+ (id)currentProductCategory;
+ (id)currentProductType;
+ (id)currentProductVersion;
+ (id)currentReleaseType;
+ (long long)demoteApps:(unsigned long long)arg1 withError:(id*)arg2;
+ (unsigned long long)devicePadding:(id)arg1;
+ (void)enableAppDemotion:(bool)arg1;
+ (id)errorWithCode:(long long)arg1;
+ (id)errorWithCode:(long long)arg1 originalError:(id)arg2;
+ (bool)freeCachedSpaceSynchronous:(unsigned long long)arg1 timeout:(double)arg2;
+ (bool)freeCachedSpaceSynchronous:(unsigned long long)arg1 timeout:(double)arg2 isAutoDownload:(bool)arg3;
+ (bool)freeCachedSpaceSynchronous:(unsigned long long)arg1 timeout:(double)arg2 isAutoDownload:(bool)arg3 disableCDLevelFour:(bool)arg4 disableSiriDeletion:(bool)arg5 disableAppDemotion:(bool)arg6;
+ (id)gregorianCalendar;
+ (bool)hasCellularRadio;
+ (bool)hasEnoughDiskSpace:(unsigned long long)arg1 growth:(unsigned long long)arg2;
+ (bool)hasEnoughDiskSpace:(unsigned long long)arg1 growth:(unsigned long long)arg2 deltaSpaceNeeded:(unsigned long long*)arg3;
+ (bool)hasEnoughDiskSpace:(unsigned long long)arg1 growth:(unsigned long long)arg2 deltaSpaceNeeded:(unsigned long long*)arg3 isAutoDownload:(bool)arg4;
+ (bool)hasEnoughDiskSpace:(unsigned long long)arg1 growth:(unsigned long long)arg2 deltaSpaceNeeded:(unsigned long long*)arg3 isAutoDownload:(bool)arg4 disableCDLevelFour:(bool)arg5 disableCDLevelThree:(bool)arg6 disableSiriDeletion:(bool)arg7 disableAppDemotion:(bool)arg8;
+ (bool)hasEnoughDiskSpace:(unsigned long long)arg1 growth:(unsigned long long)arg2 deltaSpaceNeeded:(unsigned long long*)arg3 isAutoDownload:(bool)arg4 includePurging:(bool)arg5;
+ (bool)isCellularDataCapable;
+ (bool)isDaemon;
+ (bool)isWiFiCapable;
+ (void)postAutoUpdateInformationalNotification:(id)arg1 body:(id)arg2 buttonText:(id)arg3 altButtonText:(id)arg4 withCompletion:(id /* block */)arg5;
+ (void)postFailureNotification:(id)arg1 body:(id)arg2 buttonText:(id)arg3 altButtonText:(id)arg4;
+ (id)prettyPrintDate:(id)arg1;
+ (void)purgeV1SUAssets;
+ (id)serialNumber;
+ (void)setCacheable:(bool)arg1;
+ (void)setIsDaemon:(bool)arg1;
+ (id)systemContainerURL;
+ (id)taskQueue;
+ (unsigned long long)totalPurgeableSpace:(id)arg1;
+ (id)translateError:(id)arg1;
+ (id)translateError:(id)arg1 withAddedUserInfo:(id)arg2;
+ (long long)translateErrorCodeFromError:(id)arg1;

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
