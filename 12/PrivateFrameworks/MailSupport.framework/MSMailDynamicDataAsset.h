<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>MSMailDynamicDataAsset.h</title>
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

/PrivateFrameworks/MailSupport.framework/MSMailDynamicDataAsset.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/MailSupport.framework/MailSupport (3445.120.0.1.2)
 */

@interface MSMailDynamicDataAsset : NSObject {
    NSSet * _ignoredDomains;
    bool  _internal;
    MSAssetDownloadScheduler * _scheduler;
    bool  _shouldIgnoreUserAccountDomains;
}

@property (getter=_isInternal, nonatomic) bool _internal;
@property (retain) NSSet *ignoredDomains;
@property (nonatomic, retain) MSAssetDownloadScheduler *scheduler;
@property bool shouldIgnoreUserAccountDomains;

+ (id)_ignoredDomainsFallback;
+ (id)log;

- (void).cxx_destruct;
- (void)_downloadAssetAndUpdateWithCompletion:(id /* block */)arg1;
- (void)_downloadAssetCatalogWithCompletion:(id /* block */)arg1;
- (bool)_isInternal;
- (void)_queryForAssetWithCompletion:(id /* block */)arg1;
- (void)_updateFromLocalAsset;
- (void)_updateIgnoredDomains:(id)arg1;
- (bool)_updateStateFromAsset:(id)arg1;
- (void)_updateStateFromLocalAssetURL:(id)arg1;
- (id)ignoredDomains;
- (id)initForInternalDevice:(bool)arg1;
- (id)scheduler;
- (void)setIgnoredDomains:(id)arg1;
- (void)setScheduler:(id)arg1;
- (void)setShouldIgnoreUserAccountDomains:(bool)arg1;
- (void)set_internal:(bool)arg1;
- (bool)shouldIgnoreDomain:(id)arg1;
- (bool)shouldIgnoreUserAccountDomains;

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