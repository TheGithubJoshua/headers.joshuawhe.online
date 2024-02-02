<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>SGPipeline.h</title>
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

/PrivateFrameworks/CoreSuggestionsInternals.framework/SGPipeline.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals (680.125)
 */

@interface SGPipeline : SGPipelineDissector {
    NSDictionary * _dissectorsAndDependencies;
}

+ (id)customPipeline:(id)arg1;
+ (id)dependencyClassesForDissectorClass:(Class)arg1;
+ (id)emptyPipeline;
+ (id)fullPipeline;
+ (id)parallelPipeline:(id)arg1;
+ (id)quotedRegionPipeline;
+ (id)quotedRegionPipelineForIpsosTesting;
+ (id)retrainingPipeline;
+ (id)sharedBackgroundProcessingQueue;
+ (id)sharedBackgroundStorageQueue;

- (void).cxx_destruct;
- (void)_dissectEntity:(id)arg1 inContext:(id)arg2 andThen:(id /* block */)arg3;
- (void)dissect:(id)arg1;
- (void)dissect:(id)arg1 andStore:(id)arg2;
- (void)dissect:(id)arg1 inContext:(id)arg2;
- (void)dissectAndStore:(id)arg1 inContext:(id)arg2;
- (void)dissectAndStoreEntity:(id)arg1 inContext:(id)arg2;
- (void)dissectAndStoreEntity:(id)arg1 inContext:(id)arg2 destinationStore:(id)arg3;
- (void)dissectAndStoreSpotlightEntity:(id)arg1 bundleIdentifier:(id)arg2 uniqueIdentifier:(id)arg3 domainIdentifier:(id)arg4 inContext:(id)arg5;
- (void)dissectEntity:(id)arg1 andStore:(id)arg2;
- (id)dissectOperations:(id)arg1;
- (id)dissectOperations:(id)arg1 inContext:(id)arg2;
- (id)geocodeOperation:(id)arg1 withDependencies:(id)arg2;
- (id)storeOperation:(id)arg1 spotlightBundleIdentifier:(id)arg2 spotlightUniqueIdentifier:(id)arg3 spotlightDomainIdentifier:(id)arg4 withStore:(id)arg5 dependencies:(id)arg6;
- (id)storeOperation:(id)arg1 spotlightBundleIdentifier:(id)arg2 spotlightUniqueIdentifier:(id)arg3 spotlightDomainIdentifier:(id)arg4 withStore:(id)arg5 dependencies:(id)arg6 originalEnrichmentCount:(unsigned long long)arg7;
- (id)storeOperation:(id)arg1 withStore:(id)arg2 dependencies:(id)arg3;
- (id)storeOperation:(id)arg1 withStore:(id)arg2 dependencies:(id)arg3 originalEnrichmentCount:(unsigned long long)arg4;

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