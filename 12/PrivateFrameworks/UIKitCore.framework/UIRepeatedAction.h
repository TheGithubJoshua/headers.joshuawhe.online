<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>UIRepeatedAction.h</title>
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

/PrivateFrameworks/UIKitCore.framework/UIRepeatedAction.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore (61000)
 */

@interface UIRepeatedAction : NSObject {
    bool  _didCompleteInvocationDelay;
    bool  _didCompletePreInvocationDelay;
    bool  _disableRepeat;
    NSInvocation * _invocation;
    id  _invocationArgument;
    double  _invocationDelay;
    double  _preInvocationDelay;
    double  _repeatedDelay;
    bool  _skipInitialFire;
    NSTimer * _timer;
}

@property (nonatomic) bool disableRepeat;
@property (nonatomic, retain) NSInvocation *invocation;
@property (nonatomic, retain) id invocationArgument;
@property (nonatomic) double invocationDelay;
@property (nonatomic) double preInvocationDelay;
@property (nonatomic) double repeatedDelay;
@property (nonatomic) bool skipInitialFire;
@property (nonatomic, retain) NSTimer *timer;

+ (id)_invocationForTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;
+ (id)actionWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;

- (void).cxx_destruct;
- (void)_invocationTimerFire;
- (void)_preInvocationTimerFire;
- (void)_repeatedTimerFire;
- (void)dealloc;
- (bool)disableRepeat;
- (id)initWithInvocation:(id)arg1;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;
- (void)invalidate;
- (id)invocation;
- (id)invocationArgument;
- (double)invocationDelay;
- (bool)invoke;
- (double)preInvocationDelay;
- (double)repeatedDelay;
- (void)reset;
- (void)schedule;
- (void)scheduleWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;
- (void)setDisableRepeat:(bool)arg1;
- (void)setInvocation:(id)arg1;
- (void)setInvocationArgument:(id)arg1;
- (void)setInvocationDelay:(double)arg1;
- (void)setPreInvocationDelay:(double)arg1;
- (void)setRepeatedDelay:(double)arg1;
- (void)setSkipInitialFire:(bool)arg1;
- (void)setTimer:(id)arg1;
- (bool)skipInitialFire;
- (id)timer;

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
