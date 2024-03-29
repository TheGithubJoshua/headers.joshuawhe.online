<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>MPCPlayerResponseBuilder.h</title>
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

/protocols/MPCPlayerResponseBuilder.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
 */

@protocol MPCPlayerResponseBuilder <NSObject>

@required

- (MPCMediaRemoteController *)controller:(MPCMediaRemoteController *)arg1 chain:(MPMiddlewareChain *)arg2;
- (bool)playerCommandEnabled:(bool)arg1 command:(unsigned int)arg2 chain:(MPMiddlewareChain *)arg3;
- (id)playerCommandOptionValue:(id)arg1 forKey:(NSString *)arg2 command:(unsigned int)arg3 chain:(MPMiddlewareChain *)arg4;
- (bool)playerCommandSupported:(bool)arg1 command:(unsigned int)arg2 chain:(MPMiddlewareChain *)arg3;
- (long long)playerGlobalItemCount:(long long)arg1 chain:(MPMiddlewareChain *)arg2;
- (NSArray *)playerItemCurrentLanguageOptions:(NSArray *)arg1 atIndexPath:(NSIndexPath *)arg2 chain:(MPMiddlewareChain *)arg3;
- (struct { double x1; double x2; double x3; double x4; double x5; float x6; float x7; bool x8; bool x9; })playerItemDuration:(struct { double x1; double x2; double x3; double x4; double x5; float x6; float x7; bool x8; bool x9; })arg1 atIndexPath:(NSIndexPath *)arg2 chain:(MPMiddlewareChain *)arg3;
- (long long)playerItemEditingStyleFlags:(long long)arg1 atIndexPath:(NSIndexPath *)arg2 chain:(MPMiddlewareChain *)arg3;
- (bool)playerItemIsPlaceholder:(bool)arg1 atIndexPath:(NSIndexPath *)arg2 chain:(MPMiddlewareChain *)arg3;
- (NSArray *)playerItemLanguageOptionGroups:(NSArray *)arg1 atIndexPath:(NSIndexPath *)arg2 chain:(MPMiddlewareChain *)arg3;
- (long long)playerLastChangeDirection:(long long)arg1 chain:(MPMiddlewareChain *)arg2;
- (MPModelGenericObject *)playerModelObject:(MPModelGenericObject *)arg1 propertySet:(MPPropertySet *)arg2 atIndexPath:(NSIndexPath *)arg3 chain:(MPMiddlewareChain *)arg4;
- (unsigned long long)playerNumberOfItems:(unsigned long long)arg1 inSection:(unsigned long long)arg2 chain:(MPMiddlewareChain *)arg3;
- (unsigned long long)playerNumberOfSections:(unsigned long long)arg1 chain:(MPMiddlewareChain *)arg2;
- (long long)playerPlayingItemGlobalIndex:(long long)arg1 chain:(MPMiddlewareChain *)arg2;
- (NSIndexPath *)playerPlayingItemIndexPath:(NSIndexPath *)arg1 chain:(MPMiddlewareChain *)arg2;
- (long long)playerRepeatType:(long long)arg1 chain:(MPMiddlewareChain *)arg2;
- (long long)playerShuffleType:(long long)arg1 chain:(MPMiddlewareChain *)arg2;
- (long long)playerState:(long long)arg1 chain:(MPMiddlewareChain *)arg2;
- (long long)playerUpNextItemCount:(long long)arg1 chain:(MPMiddlewareChain *)arg2;
- (UIView<MPCVideoView> *)playerVideoView:(UIView<MPCVideoView> *)arg1 chain:(MPMiddlewareChain *)arg2;
- (NSString *)tracklistUniqueIdentifier:(NSString *)arg1 chain:(MPMiddlewareChain *)arg2;

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
