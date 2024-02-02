<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PTSection.h</title>
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

/PrivateFrameworks/PrototypeTools.framework/PTSection.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools (1)
 */

@interface PTSection : NSObject <PTRowObserver, PTSettingsKeyPathObserver> {
    NSMutableArray * _allRows;
    NSArray * _appearanceConditions;
    NSMutableArray * _enabledRows;
    id /* block */  _footerTextGetter;
    NSHashTable * _observers;
    NSArray * _rows;
    PTSettings * _settings;
    NSString * _submoduleKeyPath;
    NSString * _title;
    id /* block */  _unregisterBlock;
}

@property (nonatomic, retain) NSArray *appearanceConditions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ footerTextGetter;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PTSettings *settings;
@property (nonatomic, retain) NSString *submoduleKeyPath;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, copy) id /* block */ unregisterBlock;

- (void).cxx_destruct;
- (void)_reloadEnabledRows;
- (void)_sendInserts:(id)arg1 deletes:(id)arg2;
- (void)_sendReload;
- (bool)_shouldEnableRow:(id)arg1;
- (void)_updateEnabledRows;
- (void)addObserver:(id)arg1;
- (id)appearanceConditions;
- (void)dealloc;
- (void)enumerateAllRowsUsingBlock:(id /* block */)arg1;
- (void)enumerateEnabledRowsUsingBlock:(id /* block */)arg1;
- (id /* block */)footerTextGetter;
- (unsigned long long)indexOfRow:(id)arg1;
- (id)initWithRows:(id)arg1;
- (unsigned long long)numberOfRows;
- (void)reloadSection;
- (void)removeObserver:(id)arg1;
- (id)rowAtIndex:(unsigned long long)arg1;
- (void)rowDidReload:(id)arg1;
- (void)setAppearanceConditions:(id)arg1;
- (void)setFooterTextGetter:(id /* block */)arg1;
- (void)setSettings:(id)arg1;
- (void)setSubmoduleKeyPath:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUnregisterBlock:(id /* block */)arg1;
- (id)settings;
- (void)settings:(id)arg1 changedValueForKeyPath:(id)arg2;
- (id)submoduleKeyPath;
- (id)title;
- (id /* block */)unregisterBlock;

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