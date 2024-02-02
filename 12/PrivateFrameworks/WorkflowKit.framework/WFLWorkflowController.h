<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>WFLWorkflowController.h</title>
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

/PrivateFrameworks/WorkflowKit.framework/WFLWorkflowController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit (1)
 */

@interface WFLWorkflowController : NSObject {
    WFLActionImplementation * _currentActionImplementation;
    unsigned long long  _currentActionIndex;
    <WFLWorkflowControllerDelegate> * _delegate;
    long long  _executionContext;
    INVoiceCommandDeviceInformation * _originDeviceInformation;
    WFLActionImplementation * _previousActionImplementation;
    NSProgress * _progress;
    bool  _running;
    WFLWorkflow * _workflow;
}

@property (nonatomic, retain) WFLActionImplementation *currentActionImplementation;
@property (nonatomic) unsigned long long currentActionIndex;
@property (nonatomic) <WFLWorkflowControllerDelegate> *delegate;
@property (nonatomic) long long executionContext;
@property (nonatomic, retain) INVoiceCommandDeviceInformation *originDeviceInformation;
@property (nonatomic, retain) WFLActionImplementation *previousActionImplementation;
@property (nonatomic, retain) NSProgress *progress;
@property (getter=isRunning, nonatomic) bool running;
@property (nonatomic, readonly) WFLWorkflow *workflow;

+ (void)initialize;

- (void).cxx_destruct;
- (id)createImplementationForAction:(id)arg1;
- (id)currentActionImplementation;
- (unsigned long long)currentActionIndex;
- (void)dealloc;
- (id)delegate;
- (long long)executionContext;
- (id)initWithWorkflow:(id)arg1;
- (bool)isRunning;
- (void)launchAppWithCompletionHandler:(id /* block */)arg1;
- (id)originDeviceInformation;
- (id)previousActionImplementation;
- (id)progress;
- (void)runWithInput:(id)arg1;
- (void)setCurrentActionImplementation:(id)arg1;
- (void)setCurrentActionIndex:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExecutionContext:(long long)arg1;
- (void)setOriginDeviceInformation:(id)arg1;
- (void)setPreviousActionImplementation:(id)arg1;
- (void)setProgress:(id)arg1;
- (void)setRunning:(bool)arg1;
- (void)stepWithInput:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)stop;
- (id)userInterfaceForRunningAction:(id)arg1;
- (id)workflow;
- (void)workflowControllerDidFinishRunningAction:(id)arg1;
- (void)workflowControllerDidFinishRunningWithOutput:(id)arg1;
- (void)workflowControllerDidStopWithError:(id)arg1;
- (void)workflowControllerWillRun;
- (void)workflowControllerWillRunAction:(id)arg1 withInput:(id)arg2 proceedHandler:(id /* block */)arg3;

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