<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>GSProtocol.h</title>
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

/protocols/GSProtocol.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
 */

@protocol GSProtocol

@required

- (void)checkItemAtURLValidInsidePermanentStorage:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)createAdditionInStorage:(void *)arg1 stagedFileDescriptor:(void *)arg2 creationInfo:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 12: long long, NSFileHandle *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSData *, NSData *, NSError *, void*
- (void)getAdditionInStorage:(void *)arg1 andNameSpace:(void *)arg2 named:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 12: long long, NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSData *, NSData *, NSError *, void*
- (void)getAdditionsInStorage:(void *)arg1 andNameSpace:(void *)arg2 named:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 12: long long, NSString *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSData *, NSData *, NSError *, void*
- (void)getFileIdForDocumentId:(void *)arg1 onDevice:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: unsigned long long, int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, int, void*
- (void)hintDocIDCreationForFileHandle:(NSFileHandle *)arg1;
- (void)isPermanentStorageSupportedForHandle:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSFileHandle *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)listAdditionsOfStorage:(void *)arg1 nameSpace:(void *)arg2 withOptions:(void *)arg3 withoutOptions:(void *)arg4 andEnumerationState:(void *)arg5 completionHandler:(void *)arg6; // needs 6 arg types, found 15: long long, NSString *, unsigned long long, unsigned long long, id, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSData *, NSData *, id, NSError *, void*
- (void)mergeAdditionInfoValueInStorage:(void *)arg1 nameSpace:(void *)arg2 additionName:(void *)arg3 value:(void *)arg4 reply:(void *)arg5; // needs 5 arg types, found 11: long long, NSString *, NSString *, NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (oneway void)permanentStorageClose:(unsigned long long)arg1;
- (void)permanentStorageIDForHandle:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSFileHandle *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, NSError *, void*
- (void)permanentStorageOpenForHandle:(void *)arg1 withRemoteID:(void *)arg2 andDocumentID:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 12: NSFileHandle *, unsigned long long, GSDocumentIdentifier *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSNumber *, NSData *, NSData *, NSError *, void*
- (void)permanentStoragePrefixForHandle:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSFileHandle *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)removeAdditionsInStorage:(void *)arg1 removalSpec:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: long long, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)requestFreeSpace:(void *)arg1 forVolume:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: unsigned long long, NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)setAdditionDisplayNameInStorage:(void *)arg1 nameSpace:(void *)arg2 additionName:(void *)arg3 value:(void *)arg4 reply:(void *)arg5; // needs 5 arg types, found 11: long long, NSString *, NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)setAdditionNameSpaceInStorage:(void *)arg1 nameSpace:(void *)arg2 additionName:(void *)arg3 value:(void *)arg4 completionHandler:(void *)arg5; // needs 5 arg types, found 11: long long, NSString *, NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)setAdditionOptionsInStorage:(void *)arg1 nameSpace:(void *)arg2 additionName:(void *)arg3 value:(void *)arg4 reply:(void *)arg5; // needs 5 arg types, found 11: long long, NSString *, NSString *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)stagingPrefixForDevice:(void *)arg1 volumeUUID:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 10: int, NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSData *, NSError *, void*
- (oneway void)stagingPrefixRelinquish:(NSString *)arg1;

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