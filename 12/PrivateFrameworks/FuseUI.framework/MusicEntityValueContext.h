<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>MusicEntityValueContext.h</title>
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

/PrivateFrameworks/FuseUI.framework/MusicEntityValueContext.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI (1)
 */

@interface MusicEntityValueContext : NSObject <NSCoding, NSCopying> {
    <MusicEntityProviding> * _containerDownloadInformationEntityProvider;
    <MusicEntityValueProviding> * _containerEntityValueProvider;
    MPUContentItemIdentifierCollection * _containerIdentifierCollection;
    MPPlaybackContext * _containerPlaybackContext;
    <MusicEntityValueProviding> * _itemEntityValueProvider;
    unsigned long long  _itemGlobalIndex;
    MPUContentItemIdentifierCollection * _itemIdentifierCollection;
    MPPlaybackContext * _itemPlaybackContext;
    bool  _wantsContainerDownloadInformationEntityProvider;
    bool  _wantsContainerEntityValueProvider;
    bool  _wantsContainerIdentifierCollection;
    bool  _wantsContainerPlaybackContext;
    bool  _wantsItemEntityValueProvider;
    bool  _wantsItemGlobalIndex;
    bool  _wantsItemIdentifierCollection;
    bool  _wantsItemPlaybackContext;
}

@property (nonatomic, retain) <MusicEntityProviding> *containerDownloadInformationEntityProvider;
@property (nonatomic, retain) <MusicEntityValueProviding> *containerEntityValueProvider;
@property (nonatomic, copy) MPUContentItemIdentifierCollection *containerIdentifierCollection;
@property (nonatomic, retain) MPPlaybackContext *containerPlaybackContext;
@property (nonatomic, readonly) <MusicEntityValueProviding> *entityValueProvider;
@property (nonatomic, retain) <MusicEntityValueProviding> *itemEntityValueProvider;
@property (nonatomic) unsigned long long itemGlobalIndex;
@property (nonatomic, copy) MPUContentItemIdentifierCollection *itemIdentifierCollection;
@property (nonatomic, retain) MPPlaybackContext *itemPlaybackContext;
@property (nonatomic) bool wantsContainerDownloadInformationEntityProvider;
@property (nonatomic) bool wantsContainerEntityValueProvider;
@property (nonatomic) bool wantsContainerIdentifierCollection;
@property (nonatomic) bool wantsContainerPlaybackContext;
@property (nonatomic) bool wantsItemEntityValueProvider;
@property (nonatomic) bool wantsItemGlobalIndex;
@property (nonatomic) bool wantsItemIdentifierCollection;
@property (nonatomic) bool wantsItemPlaybackContext;

- (void).cxx_destruct;
- (void)configureWithMediaEntity:(id)arg1;
- (id)containerDownloadInformationEntityProvider;
- (id)containerEntityValueProvider;
- (id)containerIdentifierCollection;
- (id)containerPlaybackContext;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)entityValueProvider;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)itemEntityValueProvider;
- (unsigned long long)itemGlobalIndex;
- (id)itemIdentifierCollection;
- (id)itemPlaybackContext;
- (void)resetOutputValues;
- (void)setContainerDownloadInformationEntityProvider:(id)arg1;
- (void)setContainerEntityValueProvider:(id)arg1;
- (void)setContainerIdentifierCollection:(id)arg1;
- (void)setContainerPlaybackContext:(id)arg1;
- (void)setItemEntityValueProvider:(id)arg1;
- (void)setItemGlobalIndex:(unsigned long long)arg1;
- (void)setItemIdentifierCollection:(id)arg1;
- (void)setItemPlaybackContext:(id)arg1;
- (void)setWantsContainerDownloadInformationEntityProvider:(bool)arg1;
- (void)setWantsContainerEntityValueProvider:(bool)arg1;
- (void)setWantsContainerIdentifierCollection:(bool)arg1;
- (void)setWantsContainerPlaybackContext:(bool)arg1;
- (void)setWantsItemEntityValueProvider:(bool)arg1;
- (void)setWantsItemGlobalIndex:(bool)arg1;
- (void)setWantsItemIdentifierCollection:(bool)arg1;
- (void)setWantsItemPlaybackContext:(bool)arg1;
- (bool)wantsContainerDownloadInformationEntityProvider;
- (bool)wantsContainerEntityValueProvider;
- (bool)wantsContainerIdentifierCollection;
- (bool)wantsContainerPlaybackContext;
- (bool)wantsItemEntityValueProvider;
- (bool)wantsItemGlobalIndex;
- (bool)wantsItemIdentifierCollection;
- (bool)wantsItemPlaybackContext;

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
