<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PSAppCellularUsageSpecifier.h</title>
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

/PrivateFrameworks/Preferences.framework/PSAppCellularUsageSpecifier.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences (1.0)
 */

@interface PSAppCellularUsageSpecifier : PSSpecifier {
    NSString * _appName;
    NSString * _bundleID;
    bool  _canEnable;
    int  _selectedBillingCycle;
    bool  _shouldShowUsage;
    bool  _shouldUseBillingCycleData;
    PSCellularUsage * _usage;
}

@property (nonatomic, retain) NSString *appName;
@property (nonatomic, retain) NSString *bundleID;
@property (nonatomic) bool canEnable;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic) int selectedBillingCycle;
@property (nonatomic) bool shouldShowUsage;
@property (nonatomic) bool shouldUseBillingCycleData;
@property (nonatomic, copy) PSCellularUsage *usage;

+ (id)_specifierWithCellTitle:(id)arg1 appName:(id)arg2 bundleID:(id)arg3 canBeEnabled:(bool)arg4 shouldShowUsage:(bool)arg5 target:(id)arg6 set:(SEL)arg7 get:(SEL)arg8 icon:(id)arg9;
+ (id)appSpecifierWithUsage:(id)arg1 target:(id)arg2 set:(SEL)arg3 get:(SEL)arg4;
+ (id)systemPolicySpecifierForAppName:(id)arg1 bundleID:(id)arg2 icon:(id)arg3 enabled:(bool)arg4;

- (void).cxx_destruct;
- (id)appName;
- (id)bundleID;
- (bool)canEnable;
- (id)cellularUsagePolicy;
- (double)dataUsage;
- (id)dataUsageString;
- (id)initWithName:(id)arg1 usage:(id)arg2;
- (bool)isEnabled;
- (void)prefetchCellularUsagePolicy;
- (int)selectedBillingCycle;
- (void)setAppName:(id)arg1;
- (void)setBundleID:(id)arg1;
- (void)setCanEnable:(bool)arg1;
- (bool)setCellularUsagePolicy:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setSelectedBillingCycle:(int)arg1;
- (void)setShouldShowUsage:(bool)arg1;
- (void)setShouldUseBillingCycleData:(bool)arg1;
- (void)setUsage:(id)arg1;
- (bool)shouldShowUsage;
- (bool)shouldUseBillingCycleData;
- (id)usage;

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
