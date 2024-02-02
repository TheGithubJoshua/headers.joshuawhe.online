<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CNCardGroup.h</title>
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

/Frameworks/ContactsUI.framework/CNCardGroup.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI (492)
 */

@interface CNCardGroup : NSObject <NSCopying> {
    NSArray * _actionItems;
    NSMutableArray * _actions;
    bool  _addSpacerFromPreviousGroup;
    CNContact * _contact;
    NSMutableArray * _items;
    NSString * _title;
    bool  _useSplitActions;
}

@property (nonatomic, readonly) NSArray *actionItems;
@property (nonatomic, readonly) NSArray *actions;
@property (nonatomic) bool addSpacerFromPreviousGroup;
@property (nonatomic, retain) CNContact *contact;
@property (nonatomic, readonly) NSArray *displayItems;
@property (nonatomic, readonly) NSArray *editingItems;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic) bool useSplitActions;

+ (id)groupForContact:(id)arg1;

- (void).cxx_destruct;
- (id)_loadActionItems;
- (id)actionItems;
- (id)actions;
- (void)addAction:(id)arg1 withTitle:(id)arg2;
- (void)addAction:(id)arg1 withTitle:(id)arg2 color:(id)arg3 transportType:(long long)arg4;
- (id)addActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3;
- (id)addActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 destructive:(bool)arg4;
- (bool)addSpacerFromPreviousGroup;
- (id)contact;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)displayItems;
- (id)editingItems;
- (id)initWithContact:(id)arg1;
- (void)removeActionWithTarget:(id)arg1 selector:(SEL)arg2;
- (void)removeActionWithTitle:(id)arg1;
- (void)setAddSpacerFromPreviousGroup:(bool)arg1;
- (void)setContact:(id)arg1;
- (void)setUseSplitActions:(bool)arg1;
- (id)title;
- (SEL)unwrappedSelectorForAction:(id)arg1;
- (id)unwrappedTargetForAction:(id)arg1;
- (bool)useSplitActions;

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