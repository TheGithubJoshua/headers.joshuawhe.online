<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>HDHealthDatabase.h</title>
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

/protocols/HDHealthDatabase.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
 */

@protocol HDHealthDatabase <NSObject>

@required

- (bool)addJournalEntries:(NSArray *)arg1 error:(id*)arg2;
- (bool)addJournalEntry:(HDJournalEntry *)arg1 error:(id*)arg2;
- (void)addProtectedDataObserver:(id <HDDatabaseProtectedDataObserver>)arg1;
- (void)addProtectedDataObserver:(id <HDDatabaseProtectedDataObserver>)arg1 queue:(NSObject<OS_dispatch_queue> *)arg2;
- (HDAssertion *)cloneAccessibilityAssertion:(HDAssertion *)arg1 ownerIdentifier:(NSString *)arg2 error:(id*)arg3;
- (bool)isDataProtectedByFirstUnlockAvailable;
- (bool)isProtectedDataAvailable;
- (void)performAsynchronously:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (bool)performTransactionWithContext:(void *)arg1 options:(void *)arg2 error:(void *)arg3 block:(void *)arg4 inaccessibilityHandler:(void *)arg5; // needs 5 arg types, found 17: HDDatabaseTransactionContext *, unsigned long long, id*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, bool, id /* block */, HDDatabaseTransaction *, id*, void*, id /* block */, void*, bool, id /* block */, NSError *, id*, void*
- (bool)performTransactionWithOptions:(void *)arg1 error:(void *)arg2 block:(void *)arg3 inaccessibilityHandler:(void *)arg4; // needs 4 arg types, found 16: unsigned long long, id*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, bool, id /* block */, HDDatabaseTransaction *, id*, void*, id /* block */, void*, bool, id /* block */, NSError *, id*, void*
- (bool)performTransactionWithOptions:(void *)arg1 error:(void *)arg2 usingBlock:(void *)arg3 inaccessibilityHandler:(void *)arg4; // needs 4 arg types, found 16: unsigned long long, id*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, bool, id /* block */, HDSQLiteDatabase *, id*, void*, id /* block */, void*, bool, id /* block */, NSError *, id*, void*
- (void)performWhenDataProtectedByFirstUnlockIsAvailable:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (bool)performWithTransactionContext:(void *)arg1 error:(void *)arg2 block:(void *)arg3; // needs 3 arg types, found 8: HDDatabaseTransactionContext *, id*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, bool, id /* block */, id*, void*
- (void)removeProtectedDataObserver:(id <HDDatabaseProtectedDataObserver>)arg1;
- (HDAssertion *)takeAccessibilityAssertionWithOwnerIdentifier:(NSString *)arg1 timeout:(double)arg2 error:(id*)arg3;

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
