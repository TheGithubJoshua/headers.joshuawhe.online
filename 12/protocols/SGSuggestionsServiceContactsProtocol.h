<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>SGSuggestionsServiceContactsProtocol.h</title>
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

/protocols/SGSuggestionsServiceContactsProtocol.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
 */

@protocol SGSuggestionsServiceContactsProtocol <_SGSuggestionsServiceBaseProtocol, _SGSuggestionsServiceContactsConfirmRejectProtocol, _SGSuggestionsServiceContactsObserverProtocol>

@required

- (void)allContactsLimitedTo:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 8: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)cnContactMatchesForRecordId:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 8: SGRecordId *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (NSArray *)cnContactMatchesForRecordIds:(NSArray *)arg1 error:(id*)arg2;
- (void)cnContactMatchesForRecordIds:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 8: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (SGContact *)contactFromRecordID:(SGRecordId *)arg1 error:(id*)arg2;
- (void)contactFromRecordID:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 8: SGRecordId *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SGContact *, NSError *, void*
- (NSArray *)contactMatchesByEmailAddress:(NSString *)arg1 error:(id*)arg2;
- (void)contactMatchesByEmailAddress:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (NSArray *)contactMatchesByPhoneNumber:(NSString *)arg1 error:(id*)arg2;
- (void)contactMatchesByPhoneNumber:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)contactMatchesOrLookupIdByEmailAddress:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SGContactMatchArrayOption *, NSError *, void*
- (void)contactMatchesOrLookupIdByPhoneNumber:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SGContactMatchArrayOption *, NSError *, void*
- (void)contactMatchesWithContact:(void *)arg1 limitTo:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 9: CNContact *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (NSArray *)contactMatchesWithContactIdentifier:(NSString *)arg1 limitTo:(unsigned long long)arg2 error:(id*)arg3;
- (void)contactMatchesWithContactIdentifier:(void *)arg1 limitTo:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 9: NSString *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (NSArray *)contactMatchesWithContactIdentifiers:(NSArray *)arg1 limitTo:(unsigned long long)arg2 error:(id*)arg3;
- (void)contactMatchesWithContactIdentifiers:(void *)arg1 limitTo:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 9: NSArray *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)namesForDetail:(void *)arg1 limitTo:(void *)arg2 prependMaybe:(void *)arg3 withCompletion:(void *)arg4; // needs 4 arg types, found 10: NSString *, unsigned long long, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)namesForUnknownDetail:(void *)arg1 limitTo:(void *)arg2 prependMaybe:(void *)arg3 withCompletion:(void *)arg4; // needs 4 arg types, found 10: NSString *, unsigned long long, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (SGOrigin *)originFromRecordId:(SGRecordId *)arg1 error:(id*)arg2;
- (void)originFromRecordId:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 8: SGRecordId *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SGOrigin *, NSError *, void*
- (NSArray *)suggestContactMatchesWithFullTextSearch:(NSString *)arg1 limitTo:(unsigned long long)arg2 error:(id*)arg3;
- (void)suggestContactMatchesWithFullTextSearch:(void *)arg1 limitTo:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 9: NSString *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (NSArray *)suggestContactMatchesWithMessagingPrefix:(NSString *)arg1 limitTo:(unsigned long long)arg2 error:(id*)arg3;
- (void)suggestContactMatchesWithMessagingPrefix:(void *)arg1 limitTo:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 9: NSString *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*

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