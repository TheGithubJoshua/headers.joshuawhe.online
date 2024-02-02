<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>TIContact.h</title>
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

/PrivateFrameworks/TextInputCore.framework/TIContact.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore ()
 */

@interface TIContact : NSObject {
    NSArray * _cities;
    NSString * _familyName;
    NSString * _givenName;
    bool  _hasRelevancyScore;
    NSString * _jobTitle;
    NSString * _middleName;
    NSString * _nickname;
    NSString * _organizationName;
    NSString * _phoneticFamilyName;
    NSString * _phoneticGivenName;
    NSString * _phoneticMiddleName;
    NSArray * _relations;
    float  _relevancyScore;
}

@property (nonatomic, retain) NSArray *cities;
@property (nonatomic, retain) NSString *familyName;
@property (nonatomic, retain) NSString *givenName;
@property (nonatomic) bool hasRelevancyScore;
@property (nonatomic, retain) NSString *jobTitle;
@property (nonatomic, retain) NSString *middleName;
@property (nonatomic, retain) NSString *nickname;
@property (nonatomic, retain) NSString *organizationName;
@property (nonatomic, retain) NSString *phoneticFamilyName;
@property (nonatomic, retain) NSString *phoneticGivenName;
@property (nonatomic, retain) NSString *phoneticMiddleName;
@property (nonatomic, retain) NSArray *relations;
@property (nonatomic) float relevancyScore;

- (void).cxx_destruct;
- (id)cities;
- (id)familyName;
- (id)flatten;
- (id)givenName;
- (bool)hasRelevancyScore;
- (id)jobTitle;
- (id)middleName;
- (id)nickname;
- (id)organizationName;
- (id)phoneticFamilyName;
- (id)phoneticGivenName;
- (id)phoneticMiddleName;
- (id)relations;
- (float)relevancyScore;
- (void)setCities:(id)arg1;
- (void)setFamilyName:(id)arg1;
- (void)setGivenName:(id)arg1;
- (void)setHasRelevancyScore:(bool)arg1;
- (void)setJobTitle:(id)arg1;
- (void)setMiddleName:(id)arg1;
- (void)setNickname:(id)arg1;
- (void)setOrganizationName:(id)arg1;
- (void)setPhoneticFamilyName:(id)arg1;
- (void)setPhoneticGivenName:(id)arg1;
- (void)setPhoneticMiddleName:(id)arg1;
- (void)setRelations:(id)arg1;
- (void)setRelevancyScore:(float)arg1;

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