<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>ENXPCTimer.h</title>
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

/PrivateFrameworks/ExposureNotificationDaemon.framework/ENXPCTimer.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/ExposureNotificationDaemon.framework/ExposureNotificationDaemon (100.1)
 */

@interface ENXPCTimer : NSObject {
    NSObject<OS_xpc_object> * _activity;
    id /* block */  _block;
    unsigned long long  _cadence;
    NSDate * _date;
    double  _gracePeriod;
    NSString * _name;
    unsigned long long  _options;
    long long  _priority;
}

@property (nonatomic, retain) NSObject<OS_xpc_object> *activity;
@property (nonatomic, copy) id /* block */ block;
@property (nonatomic) unsigned long long cadence;
@property (nonatomic, copy) NSDate *date;
@property (nonatomic) double gracePeriod;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) unsigned long long options;
@property (nonatomic) long long priority;

- (void).cxx_destruct;
- (id)activity;
- (id /* block */)activityHandler;
- (id /* block */)block;
- (unsigned long long)cadence;
- (id)criteria;
- (id)date;
- (id)description;
- (double)gracePeriod;
- (void)handleActivity;
- (id)initWithName:(id)arg1 date:(id)arg2 gracePeriod:(double)arg3 cadence:(unsigned long long)arg4 priority:(long long)arg5 options:(unsigned long long)arg6 block:(id /* block */)arg7;
- (id)initWithName:(id)arg1 date:(id)arg2 gracePeriod:(double)arg3 priority:(long long)arg4 options:(unsigned long long)arg5 block:(id /* block */)arg6;
- (id)initWithName:(id)arg1 date:(id)arg2 priority:(long long)arg3 options:(unsigned long long)arg4 block:(id /* block */)arg5;
- (id)initWithName:(id)arg1 delay:(double)arg2 gracePeriod:(double)arg3 cadence:(unsigned long long)arg4 priority:(long long)arg5 options:(unsigned long long)arg6 block:(id /* block */)arg7;
- (id)initWithName:(id)arg1 delay:(double)arg2 gracePeriod:(double)arg3 priority:(long long)arg4 options:(unsigned long long)arg5 block:(id /* block */)arg6;
- (id)initWithName:(id)arg1 timeInterval:(double)arg2 priority:(long long)arg3 options:(unsigned long long)arg4 block:(id /* block */)arg5;
- (void)invalidate;
- (id)name;
- (unsigned long long)options;
- (long long)priority;
- (void)setActivity:(id)arg1;
- (void)setBlock:(id /* block */)arg1;
- (void)setCadence:(unsigned long long)arg1;
- (void)setDate:(id)arg1;
- (void)setGracePeriod:(double)arg1;
- (void)setName:(id)arg1;
- (void)setOptions:(unsigned long long)arg1;
- (void)setPriority:(long long)arg1;

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