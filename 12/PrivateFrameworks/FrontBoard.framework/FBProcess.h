<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>FBProcess.h</title>
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

/PrivateFrameworks/FrontBoard.framework/FBProcess.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard (486.52)
 */

@interface FBProcess : NSObject <BSDescriptionProviding, FBSProcessIdentity, FBSProcessInternal, FBUIProcess> {
    long long  _backgroundingPolicy;
    NSString * _bundleIdentifier;
    NSObject<OS_dispatch_queue> * _callOutQueue;
    <FBProcessDelegate> * _delegate;
    long long  _executableOnSystemPartition;
    NSString * _executablePath;
    BSProcessHandle * _handle;
    NSString * _jobLabel;
    NSString * _name;
    NSHashTable * _observers;
    int  _pid;
    BSProcessDeathWatcher * _processDeathObserver;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _running;
    FBProcessState * _state;
    bool  _supportsSuspendOnLock;
    bool  _updatingState;
    FBWorkspace * _workspace;
}

@property (nonatomic, readonly) long long backgroundingPolicy;
@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <FBProcessDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool executableLivesOnSystemPartition;
@property (getter=isForeground, nonatomic, readonly) bool foreground;
@property (nonatomic, readonly, retain) FBSProcessHandle *handle;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *jobLabel;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) int pid;
@property (getter=_queue_executablePath, setter=_queue_setExecutablePath:, nonatomic, copy) NSString *queue_executablePath;
@property (getter=_queue_jobLabel, setter=_queue_setJobLabel:, nonatomic, copy) NSString *queue_jobLabel;
@property (getter=_queue_name, setter=_queue_setName:, nonatomic, copy) NSString *queue_name;
@property (getter=_queue_pid, setter=_queue_setPid:, nonatomic) int queue_pid;
@property (getter=_queue_isRunning, setter=_queue_setRunning:, nonatomic) bool queue_running;
@property (getter=_queue_taskState, setter=_queue_setTaskState:, nonatomic) int queue_taskState;
@property (getter=_queue_visibility, setter=_queue_setVisibility:, nonatomic) int queue_visibility;
@property (getter=isRunning, nonatomic, readonly) bool running;
@property (nonatomic, readonly, copy) FBProcessState *state;
@property (readonly) Class superclass;
@property (getter=_queue_supportsSuspendOnLock, setter=_queue_setSupportsSuspendOnLock:, nonatomic) bool supportsSuspendOnLock;
@property (nonatomic, readonly, retain) BSMachPortTaskNameRight *taskNameRight;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) FBWorkspace *workspace;

- (void).cxx_destruct;
- (id)_createWorkspace;
- (int)_effectiveVisibilityForSceneSettings:(id)arg1 underLock:(bool)arg2;
- (int)_effectiveVisibilityForVisibility:(int)arg1 underLock:(bool)arg2;
- (bool)_isEffectivelyForegroundForSceneSettings:(id)arg1 underLock:(bool)arg2;
- (id)_queue;
- (void)_queue_callExitObservers;
- (void)_queue_configureWithHandle:(id)arg1;
- (bool)_queue_consideredUnderLock;
- (int)_queue_effectiveVisibilityForVisibility:(int)arg1;
- (void)_queue_enumerateObserversWithBlock:(id /* block */)arg1;
- (bool)_queue_executableLivesOnSystemPartition;
- (id)_queue_executablePath;
- (bool)_queue_isForeground;
- (bool)_queue_isRunning;
- (id)_queue_jobLabel;
- (id)_queue_name;
- (id)_queue_newWatchdogForContext:(id)arg1 completion:(id /* block */)arg2;
- (void)_queue_noteSceneCreationAcknowledged:(id)arg1;
- (int)_queue_pid;
- (void)_queue_processDidExit;
- (void)_queue_sceneLifecycleStateChanged:(id)arg1;
- (void)_queue_setExecutablePath:(id)arg1;
- (void)_queue_setJobLabel:(id)arg1;
- (void)_queue_setName:(id)arg1;
- (void)_queue_setPid:(int)arg1;
- (void)_queue_setRunning:(bool)arg1;
- (void)_queue_setSupportsSuspendOnLock:(bool)arg1;
- (void)_queue_setTaskState:(int)arg1;
- (void)_queue_setVisibility:(int)arg1;
- (bool)_queue_supportsSuspendOnLock;
- (int)_queue_taskState;
- (void)_queue_toggleProcessDeathObserver:(bool)arg1;
- (void)_queue_updateStateWithBlock:(id /* block */)arg1;
- (int)_queue_visibility;
- (void)_terminateWithRequest:(id)arg1 forWatchdog:(id)arg2;
- (bool)_watchdog:(id)arg1 shouldTerminateWithDeclineReason:(out id*)arg2;
- (id)_watchdog:(id)arg1 terminationRequestForViolatedProvision:(id)arg2 error:(id)arg3;
- (void)_watchdogStarted:(id)arg1;
- (void)_watchdogStopped:(id)arg1;
- (id)_workspace;
- (void)addObserver:(id)arg1;
- (long long)backgroundingPolicy;
- (id)bundleIdentifier;
- (void)dealloc;
- (id)debugDescription;
- (id)delegate;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (bool)executableLivesOnSystemPartition;
- (id)handle;
- (bool)hasEntitlement:(id)arg1;
- (id)init;
- (id)initWithBundleID:(id)arg1 pid:(int)arg2 callOutQueue:(id)arg3;
- (id)initWithProcessHandle:(id)arg1 callOutQueue:(id)arg2;
- (bool)isApplicationProcess;
- (bool)isExtensionProcess;
- (bool)isForeground;
- (bool)isRunning;
- (bool)isSystemApplicationProcess;
- (id)jobLabel;
- (id)name;
- (int)pid;
- (void)removeObserver:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)state;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)taskNameRight;
- (long long)type;
- (id)valueForEntitlement:(id)arg1;
- (id)workspace;

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