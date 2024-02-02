<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>DAAction.h</title>
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

/PrivateFrameworks/DataAccess.framework/DAAction.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess (1.0)
 */

@interface DAAction : NSObject <NSSecureCoding> {
    int  _changeId;
    id  _changedItem;
    id  _forwardedAttendeeUUIDs;
    id  _forwardedAttendees;
    id  _instanceId;
    unsigned long long  _itemChangeType;
    id  _serverId;
}

@property (nonatomic) int changeId;
@property (setter=_setChangedItem:, nonatomic, retain) id changedItem;
@property (nonatomic, retain) id forwardedAttendeeUUIDs;
@property (nonatomic, retain) id forwardedAttendees;
@property (nonatomic, retain) id instanceId;
@property (nonatomic) unsigned long long itemChangeType;
@property (nonatomic, retain) id serverId;

// Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_setChangedItem:(id)arg1;
- (int)changeId;
- (id)changedItem;
- (struct ASContact { Class x1; id x2; id x3; int x4; int x5; id x6; int x7; id /* block */ x8; int x9; id x10; }*)contact;
- (id)deletedContactID;
- (id)deletedEventID;
- (id)deletedNoteID;
- (id)deletedToDoID;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (struct ASEvent { Class x1; id x2; id x3; int x4; int x5; id x6; int x7; id /* block */ x8; int x9; id x10; }*)event;
- (id)forwardedAttendeeUUIDs;
- (id)forwardedAttendees;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithItemChangeType:(unsigned long long)arg1 changedItem:(id)arg2 serverId:(id)arg3;
- (id)initWithItemChangeType:(unsigned long long)arg1 changedItem:(id)arg2 serverId:(id)arg3 instanceId:(id)arg4;
- (id)instanceId;
- (bool)isEqual:(id)arg1;
- (unsigned long long)itemChangeType;
- (id)message;
- (struct ASNote { Class x1; id x2; id x3; int x4; int x5; id x6; int x7; id /* block */ x8; int x9; id x10; }*)note;
- (id)serverId;
- (void)setChangeId:(int)arg1;
- (void)setForwardedAttendeeUUIDs:(id)arg1;
- (void)setForwardedAttendees:(id)arg1;
- (void)setInstanceId:(id)arg1;
- (void)setItemChangeType:(unsigned long long)arg1;
- (void)setServerId:(id)arg1;
- (id)stringForItemChangeType:(unsigned long long)arg1;
- (struct ASToDo { Class x1; id x2; id x3; int x4; int x5; id x6; int x7; id /* block */ x8; int x9; id x10; }*)toDo;

// Image: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS

- (void)appendApplicationDataForTask:(id)arg1 toWBXMLData:(id)arg2;
- (id)asClientID;
- (id)asInstanceID;
- (id)asServerID;

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