<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PVDataAccessor.h</title>
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

/PrivateFrameworks/PhotoVision.framework/PVDataAccessor.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/PhotoVision.framework/PhotoVision (3462.12.130)
 */

@interface PVDataAccessor : NSObject {
    unsigned int  _faceAlgorithmUmbrellaVersion;
    <PVPersistenceDelegate> * _persistenceDelegate;
    unsigned int  _sceneAlgorithmUmbrellaVersion;
}

@property (nonatomic) unsigned int faceAlgorithmUmbrellaVersion;
@property (nonatomic, retain) <PVPersistenceDelegate> *persistenceDelegate;
@property (nonatomic) unsigned int sceneAlgorithmUmbrellaVersion;

- (void).cxx_destruct;
- (id)activeFaceprintsByFaceLocalIdentifiers:(id)arg1 error:(id*)arg2;
- (id)allAlgorithmicFaceGroups:(id*)arg1;
- (unsigned long long)countOfAlgorithmicFaceGroups;
- (unsigned long long)countOfClusteredFaces;
- (unsigned long long)countOfClusteredFacesWithClusterSequenceNumbersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (unsigned long long)countOfClusteringEligibleFaces;
- (unsigned long long)countOfFaces;
- (bool)deleteEmptyGroupsAndReturnError:(id*)arg1;
- (id)deterministicallyOrderedFaceIdentifiersWithLocalIdentifiers:(id)arg1 faceprintVersion:(unsigned int)arg2;
- (unsigned int)faceAlgorithmUmbrellaVersion;
- (id)facesAlgorithmicallyGroupedWithFacesWithClusterSequenceNumbers:(id)arg1 includeSingletons:(bool)arg2 error:(id*)arg3;
- (id)facesForClusteringWithLocalIdentifiers:(id)arg1 faceprintVersion:(unsigned int)arg2 excludeClustered:(bool)arg3;
- (id)facesForPersonWithLocalIdentifier:(id)arg1 error:(id*)arg2;
- (id)groupedClusterSequenceNumbersOfFacesInFaceGroupsOfMinimumSize:(unsigned long long)arg1 error:(id*)arg2;
- (id)invalidFaceClusterSequenceNumbersInClusterSequenceNumbers:(id)arg1 canceler:(id)arg2 error:(id*)arg3;
- (id)keyFacesFromAlgorithmicGroupsContainingFacesWithClusterSequenceNumbers:(id)arg1 includeSingletons:(bool)arg2 error:(id*)arg3;
- (id)localIdentifiersOfFacesAlgorithmicallyGroupedWithFacesWithLocalIdentifiers:(id)arg1 error:(id*)arg2;
- (id)localIdentifiersOfKeyFacesFromAlgorithmicGroupsContainingFacesWithLocalIdentifiers:(id)arg1 error:(id*)arg2;
- (bool)persistGeneratedFaceCrops:(id)arg1 error:(id*)arg2;
- (id)persistenceDelegate;
- (id)personForLocalIdentifier:(id)arg1 error:(id*)arg2;
- (id)personWithFaceLocalIdentifier:(id)arg1 error:(id*)arg2;
- (id)personsForLocalIdentifiers:(id)arg1 error:(id*)arg2;
- (id)rejectedFaceClusterSequenceNumbersForPersonWithLocalIdentifier:(id)arg1 error:(id*)arg2;
- (id)rejectedFaceLocalIdentifiersForPersonWithLocalIdentifier:(id)arg1 error:(id*)arg2;
- (id)rejectedFacesForPersonWithLocalIdentifier:(id)arg1 error:(id*)arg2;
- (bool)removeAlgorithmicallyGroupedFacesWithLocalIdentifiers:(id)arg1 error:(id*)arg2;
- (bool)resetClusterSequenceNumberOfFacesWithLocalIdentifiers:(id)arg1 error:(id*)arg2;
- (bool)resetLibraryClustersWithCanceler:(id)arg1 error:(id*)arg2;
- (unsigned int)sceneAlgorithmUmbrellaVersion;
- (void)setFaceAlgorithmUmbrellaVersion:(unsigned int)arg1;
- (void)setPersistenceDelegate:(id)arg1;
- (void)setSceneAlgorithmUmbrellaVersion:(unsigned int)arg1;
- (id)unclusteredClusteringEligibleFaceLocalIdentifiers:(id*)arg1;
- (id)unverifiedVisibleFacesFromFaceGroupContainingFacesWithClusterSequenceNumbers:(id)arg1 withFaceprintVersion:(unsigned int)arg2;

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
