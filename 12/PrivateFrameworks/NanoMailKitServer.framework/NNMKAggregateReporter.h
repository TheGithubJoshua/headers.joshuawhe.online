<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>NNMKAggregateReporter.h</title>
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

/PrivateFrameworks/NanoMailKitServer.framework/NNMKAggregateReporter.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer (1)
 */

@interface NNMKAggregateReporter : NSObject

+ (void)_addScalarValue1ToKey:(id)arg1;
+ (id)_buildVersion;
+ (long long)_delayInMSFromDateSynced:(id)arg1;
+ (void)_postGroupedDelayInMS:(long long)arg1 key:(id)arg2;
+ (void)_postGroupedSizeInBytes:(long long)arg1 key:(id)arg2;
+ (void)_postGroupedValue:(float)arg1 key:(id)arg2;
+ (void)_postRawValue:(long long)arg1 key:(id)arg2;
+ (bool)_reportingEnabled;
+ (void)reportAppBackgroundRefreshed;
+ (void)reportAppLaunched;
+ (void)reportAppResumed;
+ (void)reportAttachmentDownloadDuration:(double)arg1;
+ (void)reportCellRighSwipeActionChanged:(id)arg1;
+ (void)reportCellRighSwipeActionIgnored;
+ (void)reportCellSwipeActionTypeExecuted:(id)arg1;
+ (void)reportComposedMessageSendFailure;
+ (void)reportComposedMessageSizeInBytes:(unsigned long long)arg1;
+ (void)reportContentDisplayedForMessageWithId:(id)arg1 hasMainAlternative:(bool)arg2 hasTextAlternative:(bool)arg3;
+ (void)reportContentDownloadDuration:(double)arg1;
+ (void)reportContentReceivedForMessageWithId:(id)arg1 sizeInBytes:(unsigned long long)arg2 fullSyncVersion:(unsigned long long)arg3 dateSynced:(id)arg4;
+ (void)reportCredentialsExpired;
+ (void)reportDisplayingHtmlMessage;
+ (void)reportDisplayingTextMessage;
+ (void)reportFetchForBatchResponseLatency:(double)arg1;
+ (void)reportFetchForBatchedResponse:(bool)arg1;
+ (void)reportFetchManualCloud;
+ (void)reportFetchManualInRange;
+ (void)reportFetchManualStandalone;
+ (void)reportFetchOlderMessages;
+ (void)reportFetchResumeCloud;
+ (void)reportFetchResumeInRange;
+ (void)reportFetchResumeStandalone;
+ (void)reportFullSyncRequestedFromWatch:(bool)arg1 corruptionDetected:(bool)arg2 migrationRelated:(bool)arg3 idsFailureRelated:(bool)arg4 fullSyncVersionMatchRelated:(bool)arg5;
+ (void)reportHaltSyncRequestedFromWatch:(bool)arg1;
+ (void)reportHtmlContentRenderingTime:(double)arg1;
+ (void)reportImageAttachmentReceivedForMessageWithId:(id)arg1 contentId:(id)arg2 sizeInBytes:(unsigned long long)arg3 fullSyncVersion:(unsigned long long)arg4 dateSynced:(id)arg5;
+ (void)reportMailAttachmentHandoffAdvertisedByNotification:(bool)arg1;
+ (void)reportMailAttachmentHandoffContinuedByNotification:(bool)arg1;
+ (void)reportMailLinkHandoffAdvertisedByNotification:(bool)arg1;
+ (void)reportMailLinkHandoffContinuedByNotification:(bool)arg1;
+ (void)reportMailboxSelectionChanged:(id)arg1 fromWatch:(bool)arg2;
+ (void)reportMessageDeletionCountFetchedOverCloudMessaging:(unsigned long long)arg1;
+ (void)reportMessageDeletionReceivedForMessageWithId:(id)arg1 fullSyncVersion:(unsigned long long)arg2 dateSynced:(id)arg3;
+ (void)reportMessageDeliveryDuration:(double)arg1;
+ (void)reportMessageReceivedWithId:(id)arg1 willGenerateNotification:(bool)arg2 fullSyncVersion:(unsigned long long)arg3 dateSynced:(id)arg4;
+ (void)reportMessageRepliedFromApp:(bool)arg1;
+ (void)reportMessageUpdateCountFetchedOverCloudMessaging:(unsigned long long)arg1;
+ (void)reportMessageUpdateReceivedForMessageWithId:(id)arg1 fullSyncVersion:(unsigned long long)arg2 dateSynced:(id)arg3;
+ (void)reportMoreMessagesReceivedConversationSpecific:(bool)arg1 fullSyncVersion:(unsigned long long)arg2 dateSynced:(id)arg3;
+ (void)reportNewMessageComposedFromApp:(bool)arg1 mailto:(bool)arg2;
+ (void)reportNewMessageCountFetchedOverCloudMessaging:(unsigned long long)arg1;
+ (void)reportNotificationAction:(unsigned long long)arg1;
+ (void)reportNotificationReceivedOverCloudMessaging;
+ (void)reportOriginalMessageContentSizeInBytes:(unsigned long long)arg1;
+ (void)reportRenderedNotificationUsingLocalContent:(bool)arg1 mailboxSynced:(bool)arg2 messageSynced:(bool)arg3 contentDownloaded:(bool)arg4;
+ (void)reportStandaloneAttachmentDownloadFailed;
+ (void)reportStandaloneContentDownloadFailed;
+ (void)reportStandaloneFetchFailed;
+ (void)reportStandaloneMessageDeliveryFailed;
+ (void)reportSyncAccountsStandaloneActiveCount:(unsigned long long)arg1;
+ (void)reportSyncAccountsStandaloneNotSupportCount:(unsigned long long)arg1;
+ (void)reportSyncAccountsStandalonePendingCount:(unsigned long long)arg1;
+ (void)reportTextContentRenderingTime:(double)arg1;
+ (void)reportWebKitLinkTapped;
+ (void)reportWebKitRenderingProcessCrash;
+ (void)reportWebKitZoomInteraction;

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
