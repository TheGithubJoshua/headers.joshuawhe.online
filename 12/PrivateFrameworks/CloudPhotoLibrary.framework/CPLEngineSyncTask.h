<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CPLEngineSyncTask.h</title>
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

/PrivateFrameworks/CloudPhotoLibrary.framework/CPLEngineSyncTask.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary (3462.1.170)
 */

@interface CPLEngineSyncTask : NSObject {
    bool  _cancelled;
    <CPLEngineSyncTaskDelegate> * _delegate;
    CPLEngineLibrary * _engineLibrary;
    bool  _forceSync;
    bool  _foreground;
    <NSCoding> * _transportUserIdentifier;
}

@property (getter=isCancelled, setter=_setCancelled:) bool cancelled;
@property (retain) <CPLEngineSyncTaskDelegate> *delegate;
@property (nonatomic, readonly) CPLEngineLibrary *engineLibrary;
@property (nonatomic) bool forceSync;
@property (nonatomic) bool foreground;
@property (nonatomic, readonly) NSString *taskIdentifier;
@property (nonatomic, retain) <NSCoding> *transportUserIdentifier;

+ (id)taskWithEngineLibrary:(id)arg1;

- (void).cxx_destruct;
- (void)_setCancelled:(bool)arg1;
- (void)cancel;
- (id)delegate;
- (id)description;
- (unsigned long long)diskPressureState;
- (id)engineLibrary;
- (bool)forceSync;
- (bool)foreground;
- (id)initWithEngineLibrary:(id)arg1;
- (bool)isCancelled;
- (void)launch;
- (void)setDelegate:(id)arg1;
- (void)setForceSync:(bool)arg1;
- (void)setForeground:(bool)arg1;
- (void)setTransportUserIdentifier:(id)arg1;
- (void)taskDidFinishWithError:(id)arg1;
- (void)taskDidProgress:(float)arg1 userInfo:(id)arg2;
- (id)taskIdentifier;
- (id)transportUserIdentifier;

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
