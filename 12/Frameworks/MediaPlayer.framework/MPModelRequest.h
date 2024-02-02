<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>MPModelRequest.h</title>
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

/Frameworks/MediaPlayer.framework/MPModelRequest.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer (1.0)
 */

@interface MPModelRequest : NSObject <NSCopying, NSSecureCoding> {
    MPModelKind * _itemKind;
    MPPropertySet * _itemProperties;
    NSArray * _itemSortDescriptors;
    NSString * _label;
    MPModelKind * _sectionKind;
    MPPropertySet * _sectionProperties;
    NSArray * _sectionSortDescriptors;
    bool  _shouldIncludeContentItemID;
}

@property (nonatomic, retain) Class itemClass;
@property (nonatomic, retain) MPModelKind *itemKind;
@property (nonatomic, copy) MPPropertySet *itemProperties;
@property (nonatomic, copy) NSArray *itemSortDescriptors;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, retain) Class sectionClass;
@property (nonatomic, retain) MPModelKind *sectionKind;
@property (nonatomic, copy) MPPropertySet *sectionProperties;
@property (nonatomic, copy) NSArray *sectionSortDescriptors;
@property (nonatomic) bool shouldIncludeContentItemID;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (id)sharedQueue;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_kindForClass:(Class)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (Class)itemClass;
- (id)itemKind;
- (id)itemProperties;
- (id)itemSortDescriptors;
- (id)label;
- (id)newOperationWithResponseHandler:(id /* block */)arg1;
- (void)performWithResponseHandler:(id /* block */)arg1;
- (Class)sectionClass;
- (id)sectionKind;
- (id)sectionProperties;
- (id)sectionSortDescriptors;
- (void)setItemClass:(Class)arg1;
- (void)setItemKind:(id)arg1;
- (void)setItemProperties:(id)arg1;
- (void)setItemSortDescriptors:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setSectionClass:(Class)arg1;
- (void)setSectionKind:(id)arg1;
- (void)setSectionProperties:(id)arg1;
- (void)setSectionSortDescriptors:(id)arg1;
- (void)setShouldIncludeContentItemID:(bool)arg1;
- (bool)shouldIncludeContentItemID;

// Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore

+ (void)MPC_consumeSiriAssetInfo:(id)arg1 withCompletion:(id /* block */)arg2;

- (id)playbackIntentWithStartItemIdentifiers:(id)arg1;

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