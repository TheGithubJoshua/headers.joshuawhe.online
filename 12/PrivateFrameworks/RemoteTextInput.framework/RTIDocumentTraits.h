<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>RTIDocumentTraits.h</title>
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

/PrivateFrameworks/RemoteTextInput.framework/RTIDocumentTraits.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/RemoteTextInput.framework/RemoteTextInput (1)
 */

@interface RTIDocumentTraits : NSObject <NSCopying, NSSecureCoding> {
    NSIndexSet * _PINEntrySeparatorIndexes;
    NSString * _appId;
    NSString * _appName;
    NSArray * _associatedDomains;
    NSDictionary * _autofillContext;
    unsigned long long  _autofillMode;
    NSString * _bundleId;
    NSString * _localizedAppName;
    NSString * _prompt;
    TITextInputTraits * _textInputTraits;
    NSString * _title;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _validTextRange;
}

@property (nonatomic, retain) NSIndexSet *PINEntrySeparatorIndexes;
@property (nonatomic, copy) NSString *appId;
@property (nonatomic, copy) NSString *appName;
@property (nonatomic, retain) NSArray *associatedDomains;
@property (nonatomic, retain) NSDictionary *autofillContext;
@property (nonatomic) unsigned long long autofillMode;
@property (nonatomic, copy) NSString *bundleId;
@property (nonatomic, copy) NSString *localizedAppName;
@property (nonatomic, copy) NSString *prompt;
@property (nonatomic, retain) TITextInputTraits *textInputTraits;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } validTextRange;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)PINEntrySeparatorIndexes;
- (id)appId;
- (id)appName;
- (id)associatedDomains;
- (id)autofillContext;
- (unsigned long long)autofillMode;
- (id)bundleId;
- (void)copyContextualPropertiesFromDocumentTraits:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)localizedAppName;
- (id)prompt;
- (void)setAppId:(id)arg1;
- (void)setAppName:(id)arg1;
- (void)setAssociatedDomains:(id)arg1;
- (void)setAutofillContext:(id)arg1;
- (void)setAutofillMode:(unsigned long long)arg1;
- (void)setBundleId:(id)arg1;
- (void)setLocalizedAppName:(id)arg1;
- (void)setPINEntrySeparatorIndexes:(id)arg1;
- (void)setPrompt:(id)arg1;
- (void)setTextInputTraits:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setValidTextRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)textInputTraits;
- (id)title;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })validTextRange;

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
