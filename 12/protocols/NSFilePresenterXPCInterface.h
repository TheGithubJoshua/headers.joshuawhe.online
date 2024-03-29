<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>NSFilePresenterXPCInterface.h</title>
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

/protocols/NSFilePresenterXPCInterface.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
 */

@protocol NSFilePresenterXPCInterface <NSFileCoordinationDebugInfoXPCInteface>

@required

- (void)accommodateDeletionOfSubitemAtURL:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSURLPromisePair *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (oneway void)logSuspensionWarning;
- (oneway void)observeChangeOfUbiquityAttributes:(NSSet *)arg1;
- (oneway void)observeChangeWithSubitemURL:(NSURLPromisePair *)arg1;
- (oneway void)observeDisconnection;
- (oneway void)observeMoveToURL:(NSURLPromisePair *)arg1 withSubitemURL:(NSURLPromisePair *)arg2 byWriterWithPurposeID:(id)arg3;
- (oneway void)observePresenterChange:(bool)arg1 forSubitemAtURL:(NSURLPromisePair *)arg2;
- (oneway void)observeReconnection;
- (oneway void)observeSharingChangeWithSubitemURL:(NSURLPromisePair *)arg1;
- (oneway void)observeUbiquityChangeWithSubitemURL:(NSURLPromisePair *)arg1;
- (oneway void)observeVersionChangeOfKind:(NSString *)arg1 toItemAtURL:(NSURLPromisePair *)arg2 withClientID:(NSString *)arg3 name:(NSString *)arg4;
- (oneway void)reacquireFromReadingClaimForID:(id)arg1;
- (void)reacquireFromWritingClaimForID:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 6: id, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)relinquishToReadingClaimWithID:(void *)arg1 options:(void *)arg2 purposeID:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: id, unsigned long long, id, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)relinquishToWritingClaimWithID:(void *)arg1 options:(void *)arg2 purposeID:(void *)arg3 subitemURL:(void *)arg4 completionHandler:(void *)arg5; // needs 5 arg types, found 10: id, unsigned long long, id, NSURLPromisePair *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)saveChangesWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (oneway void)setProviderPurposeIdentifier:(NSString *)arg1;
- (oneway void)updateLastEventID:(unsigned long long)arg1;

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
