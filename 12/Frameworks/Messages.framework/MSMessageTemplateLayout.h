<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>MSMessageTemplateLayout.h</title>
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

/Frameworks/Messages.framework/MSMessageTemplateLayout.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/Messages.framework/Messages (1)
 */

@interface MSMessageTemplateLayout : MSMessageLayout <NSSecureCoding> {
    NSString * _caption;
    UIImage * _image;
    NSString * _imageSubtitle;
    NSString * _imageTitle;
    NSData * _mediaData;
    NSURL * _mediaFileURL;
    NSString * _mediaType;
    NSString * _subcaption;
    NSString * _trailingCaption;
    NSString * _trailingSubcaption;
}

@property (nonatomic, copy) NSString *caption;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, copy) NSString *imageSubtitle;
@property (nonatomic, copy) NSString *imageTitle;
@property (nonatomic, retain) NSData *mediaData;
@property (nonatomic, copy) NSURL *mediaFileURL;
@property (nonatomic, retain) NSString *mediaType;
@property (nonatomic, copy) NSString *subcaption;
@property (nonatomic, copy) NSString *trailingCaption;
@property (nonatomic, copy) NSString *trailingSubcaption;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)caption;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)image;
- (id)imageSubtitle;
- (id)imageTitle;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mediaData;
- (id)mediaFileURL;
- (id)mediaType;
- (void)setCaption:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImageSubtitle:(id)arg1;
- (void)setImageTitle:(id)arg1;
- (void)setMediaData:(id)arg1;
- (void)setMediaFileURL:(id)arg1;
- (void)setMediaType:(id)arg1;
- (void)setSubcaption:(id)arg1;
- (void)setTrailingCaption:(id)arg1;
- (void)setTrailingSubcaption:(id)arg1;
- (id)subcaption;
- (id)trailingCaption;
- (id)trailingSubcaption;

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
