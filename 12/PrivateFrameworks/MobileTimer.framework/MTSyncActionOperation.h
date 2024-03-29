<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>MTSyncActionOperation.h</title>
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

/PrivateFrameworks/MobileTimer.framework/MTSyncActionOperation.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer (1)
 */

@interface MTSyncActionOperation : NSObject <MTSyncOperation> {
    long long  _action;
    NSDate * _actionDate;
    NSString * _identifier;
    bool  _isFromSync;
    MTTrigger * _trigger;
    NSString * _uuid;
}

@property (nonatomic) long long action;
@property (nonatomic, copy) NSDate *actionDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) bool isFromSync;
@property (nonatomic, readonly) long long priority;
@property (readonly) Class superclass;
@property (nonatomic, retain) MTTrigger *trigger;
@property (nonatomic, copy) NSString *uuid;

+ (id)_stringForAction:(long long)arg1;
+ (id)operationFromMetaData:(id)arg1;
+ (id)operationWithAction:(long long)arg1 actionDate:(id)arg2 identifier:(id)arg3 trigger:(id)arg4;
+ (id)operationWithAction:(long long)arg1 identifier:(id)arg2 trigger:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)action;
- (id)actionDate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithAction:(long long)arg1 actionDate:(id)arg2 identifier:(id)arg3 trigger:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUID:(id)arg1 fromSync:(bool)arg2 action:(long long)arg3 actionDate:(id)arg4 identifier:(id)arg5 trigger:(id)arg6;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToOperation:(id)arg1;
- (bool)isEquivalentToOperation:(id)arg1;
- (bool)isFromSync;
- (id)operationMetaData;
- (long long)priority;
- (bool)requiresResponse;
- (id)responseOperation;
- (void)setAction:(long long)arg1;
- (void)setActionDate:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIsFromSync:(bool)arg1;
- (void)setTrigger:(id)arg1;
- (void)setUuid:(id)arg1;
- (bool)shouldRetry;
- (id)trigger;
- (id)uuid;

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
