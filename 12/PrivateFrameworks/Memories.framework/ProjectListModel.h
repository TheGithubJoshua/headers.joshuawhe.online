<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>ProjectListModel.h</title>
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

/PrivateFrameworks/Memories.framework/ProjectListModel.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories (4267.0.31)
 */

@interface ProjectListModel : NSObject {
    NSMutableArray * _cloudDownloadsToRestart;
    <CloudSynchDelegate> * _cloudSynchDelegate;
    NSMutableArray * _maybeInTheCloud;
    NSMetadataQuery * _ubiquitousQuery;
    NSMutableArray * m_iTunesSharedProjects;
    NSMutableArray * m_jailedProjects;
    NSMutableArray * m_projects;
    NSMutableArray * m_unscannedMedia;
}

@property (nonatomic, retain) NSMutableArray *cloudDownloadsToRestart;
@property <CloudSynchDelegate> *cloudSynchDelegate;
@property (nonatomic, retain) NSMutableArray *maybeInTheCloud;
@property (nonatomic, retain) NSMetadataQuery *ubiquitousQuery;

+ (id)sharedInstance;
+ (id)unscannedMediaFromPaths:(id)arg1;

- (void)addProject:(id)arg1;
- (void)addQueryObservers;
- (void)appendJailedProject:(id)arg1;
- (void)appendProject:(id)arg1;
- (void)appendiTunesSharedProject:(id)arg1;
- (id)cloudDownloadsToRestart;
- (id)cloudSynchDelegate;
- (void)createProjectPlaceholders;
- (void)dealloc;
- (void)deleteProject:(id)arg1;
- (void)deleteUneditedProject:(id)arg1;
- (void)didStart:(id)arg1;
- (void)didUpdate:(id)arg1;
- (void)duplicateProject:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)finishGathering:(id)arg1;
- (void)gathering:(id)arg1;
- (id)iTunesSharedProjects;
- (id)jailedProjects;
- (void)loadProjectAtIndex:(unsigned long long)arg1;
- (id)maybeInTheCloud;
- (void)moveJailedProjectToPrivateProject:(id)arg1;
- (bool)moveSafeSaveProject:(id)arg1;
- (void)noteApplicationWillTerminate:(id)arg1;
- (id)pendingCloudProjectWithPath:(id)arg1;
- (int)pendingCloudProjectsCount;
- (id)placeHolderForProject:(id)arg1;
- (void)projectPathDidChange:(id)arg1;
- (id)projectPathsInDirectory:(id)arg1;
- (id)projectPathsInDirectory:(id)arg1 otherPaths:(id*)arg2;
- (id)projectPathsInImportExportDirectoryAndOtherPaths:(id*)arg1;
- (id)projectPathsInPrivateDocumentsDirectory;
- (id)projectWithPath:(id)arg1;
- (id)projects;
- (void)queryTheCloud;
- (void)queueTrashOrphanedRenderedMovies;
- (void)removeProject:(id)arg1;
- (void)removeQueryObservers;
- (void)setCloudDownloadsToRestart:(id)arg1;
- (void)setCloudSynchDelegate:(id)arg1;
- (void)setMaybeInTheCloud:(id)arg1;
- (void)setUbiquitousQuery:(id)arg1;
- (void)skeletalProjectDidDownload:(id)arg1;
- (void)startCloudQuery;
- (void)stopCloudQuery;
- (void)trashOrphanedRenderedMovies;
- (id)ubiquitousQuery;
- (void)undeleteProject:(id)arg1;
- (void)unloadAllExceptProject:(id)arg1;
- (void)unloadProject:(id)arg1;
- (void)unloadProjectAtIndex:(unsigned long long)arg1;
- (id)unscannedMedia;
- (void)verifyCloudDownloads;

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