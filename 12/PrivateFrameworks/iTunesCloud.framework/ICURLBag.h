<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>ICURLBag.h</title>
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

/PrivateFrameworks/iTunesCloud.framework/ICURLBag.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud (1)
 */

@interface ICURLBag : NSObject {
    NSArray * _GUIDURLRegexPatterns;
    NSSet * _GUIDURLSchemes;
    NSDictionary * _bagValues;
    NSMutableDictionary * _convertedActionsCache;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) NSArray *GUIDURLRegexPatterns;
@property (nonatomic, retain) NSSet *GUIDURLSchemes;
@property (nonatomic, readonly, copy) NSDictionary *allValues;
@property (nonatomic, retain) NSDictionary *bagValues;
@property (nonatomic, readonly) bool canPostKeybagSyncData;
@property (nonatomic, retain) NSMutableDictionary *convertedActionsCache;
@property (nonatomic, readonly) ICURLBagLibraryDAAPConfiguration *libraryDAAPConfiguration;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) ICURLBagRadioConfiguration *radioConfiguration;
@property (nonatomic, readonly, copy) NSString *storefrontHeaderSuffix;

- (void).cxx_destruct;
- (id)GUIDURLRegexPatterns;
- (id)GUIDURLSchemes;
- (bool)_shouldMescalSignBodyForURL:(id)arg1 withSignatureConfiguration:(id)arg2;
- (void)_validateGUIDURLConfigIfNeeded;
- (id)allValues;
- (id)bagValues;
- (bool)boolValueForBagKey:(id)arg1;
- (bool)canPostKeybagSyncData;
- (id)convertedActionsCache;
- (bool)hasValueForBagKey:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (long long)int64ValueForBagKey:(id)arg1;
- (id)libraryDAAPConfiguration;
- (id)mescalConfigurationForRequestURL:(id)arg1;
- (id)mescalConfigurationForResponseURL:(id)arg1;
- (id)queue;
- (id)radioConfiguration;
- (void)setBagValues:(id)arg1;
- (void)setConvertedActionsCache:(id)arg1;
- (void)setGUIDURLRegexPatterns:(id)arg1;
- (void)setGUIDURLSchemes:(id)arg1;
- (void)setQueue:(id)arg1;
- (bool)shouldAppendDeviceGUIDForURL:(id)arg1;
- (bool)shouldAppendMachineDataHeadersForURL:(id)arg1;
- (id)storefrontHeaderSuffix;
- (id)urlForBagKey:(id)arg1;
- (id)valueForBagKey:(id)arg1;

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