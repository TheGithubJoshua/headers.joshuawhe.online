<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>RETrainingSimulationCoordinator.h</title>
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

/PrivateFrameworks/RelevanceEngine.framework/RETrainingSimulationCoordinator.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine (204.1.32)
 */

@interface RETrainingSimulationCoordinator : RESingleton <REElementActionDelegate, RETrainingSimulationServerInterface> {
    NSMapTable * _actionCompletionBlocks;
    NSMutableDictionary * _elementsAddedByEngine;
    bool  _isActivelyTraining;
    RETrainingSimulationServer * _server;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property bool isActivelyTraining;
@property (readonly) Class superclass;

+ (void)prewarm;

- (void).cxx_destruct;
- (id)_engineWithName:(id)arg1;
- (void)_relevanceEnginesDidChange;
- (id)_unavailableEngineWithNameError:(id)arg1;
- (void)availableRelevanceEngines:(id /* block */)arg1;
- (void)dealloc;
- (void)elementAction:(id)arg1 didFinishTask:(bool)arg2;
- (void)elementAction:(id)arg1 wantsToPerformTapActionForComplicationSlot:(id)arg2;
- (void)elementAction:(id)arg1 wantsViewControllerDisplayed:(id)arg2;
- (void)fetchAllElementIdentifiersInRelevanceEngine:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchAllElementsInRelevanceEngine:(id)arg1 completion:(id /* block */)arg2;
- (void)gatherDiagnosticLogsForRelevanceEngine:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (bool)isActivelyTraining;
- (void)relevanceEngine:(id)arg1 createElementFromDescription:(id)arg2 completion:(id /* block */)arg3;
- (void)relevanceEngine:(id)arg1 performCommand:(id)arg2 withOptions:(id)arg3 completion:(id /* block */)arg4;
- (void)relevanceEngine:(id)arg1 runActionOfElementWithDescription1:(id)arg2 completion:(id /* block */)arg3;
- (void)setIsActivelyTraining:(bool)arg1;

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