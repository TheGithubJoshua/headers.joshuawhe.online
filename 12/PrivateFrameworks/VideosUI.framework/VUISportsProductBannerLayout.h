<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>VUISportsProductBannerLayout.h</title>
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

/PrivateFrameworks/VideosUI.framework/VUISportsProductBannerLayout.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI (282.60.36)
 */

@interface VUISportsProductBannerLayout : TVViewLayout {
    TVImageLayout * _availabilityImageLayout;
    VUITextLayout * _availabilityTextLayout;
    VUITextLayout * _descriptionTextLayout;
    VUITextLayout * _footerTextLayout;
    VUITextLayout * _losingRowTextLayout;
    VUITextLayout * _losingScoreTextLayout;
    VUITextLayout * _rowTextLayout;
    VUITextLayout * _scoreTextLayout;
    VUITextLayout * _titleTextLayout;
}

@property (nonatomic, readonly) TVImageLayout *availabilityImageLayout;
@property (nonatomic, readonly) VUITextLayout *availabilityTextLayout;
@property (nonatomic, readonly) VUITextLayout *descriptionTextLayout;
@property (nonatomic, readonly) VUITextLayout *footerTextLayout;
@property (nonatomic, readonly) VUITextLayout *losingRowTextLayout;
@property (nonatomic, readonly) VUITextLayout *losingScoreTextLayout;
@property (nonatomic, readonly) VUITextLayout *rowTextLayout;
@property (nonatomic, readonly) VUITextLayout *scoreTextLayout;
@property (nonatomic, readonly) VUITextLayout *titleTextLayout;

+ (id)layoutWithLayout:(id)arg1 element:(id)arg2 sizeClass:(long long)arg3;
+ (bool)shouldDisplayScoresBelowLabels;
+ (bool)shouldUseVerticalLayout;

- (void).cxx_destruct;
- (id)availabilityImageLayout;
- (id)availabilityTextLayout;
- (id)descriptionTextLayout;
- (id)footerTextLayout;
- (id)init;
- (id)initWithSizeClass:(long long)arg1;
- (id)losingRowTextLayout;
- (id)losingScoreTextLayout;
- (id)rowTextLayout;
- (id)scoreTextLayout;
- (id)titleTextLayout;

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
