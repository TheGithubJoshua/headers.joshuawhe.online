<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>_DECNameItem.h</title>
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

/PrivateFrameworks/DuetExpertCenter.framework/_DECNameItem.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter (1)
 */

@interface _DECNameItem : _DECItem {
    NSArray * _cityNames;
    NSString * _firstName;
    NSString * _jobTitle;
    NSString * _lastName;
    NSString * _middleName;
    NSString * _nickname;
    NSString * _organizationName;
    NSString * _phoneticFirstName;
    NSString * _phoneticLastName;
    NSString * _phoneticMiddleName;
    NSDictionary * _relatedNames;
    double  _score;
    NSString * _source;
    NSArray * _streetNames;
}

@property (nonatomic, readonly) NSArray *cityNames;
@property (nonatomic, readonly) NSString *firstName;
@property (nonatomic, readonly) NSString *jobTitle;
@property (nonatomic, readonly) NSString *lastName;
@property (nonatomic, readonly) NSString *middleName;
@property (nonatomic, readonly) NSString *nickname;
@property (nonatomic, readonly) NSString *organizationName;
@property (nonatomic, readonly) NSString *phoneticFirstName;
@property (nonatomic, readonly) NSString *phoneticLastName;
@property (nonatomic, readonly) NSString *phoneticMiddleName;
@property (nonatomic, readonly) NSDictionary *relatedNames;
@property (nonatomic, readonly) double score;
@property (nonatomic, readonly) NSString *source;
@property (nonatomic, readonly) NSArray *streetNames;

+ (id)nameWithFirstName:(id)arg1 phoneticFirstName:(id)arg2 middleName:(id)arg3 phoneticMiddleName:(id)arg4 lastName:(id)arg5 phoneticLastName:(id)arg6 organizationName:(id)arg7 jobTitle:(id)arg8 nickname:(id)arg9 relatedNames:(id)arg10 score:(double)arg11 source:(id)arg12;
+ (id)nameWithFirstName:(id)arg1 phoneticFirstName:(id)arg2 middleName:(id)arg3 phoneticMiddleName:(id)arg4 lastName:(id)arg5 phoneticLastName:(id)arg6 organizationName:(id)arg7 jobTitle:(id)arg8 nickname:(id)arg9 relatedNames:(id)arg10 streetNames:(id)arg11 cityNames:(id)arg12 score:(double)arg13 source:(id)arg14;
+ (id)nameWithFirstName:(id)arg1 phoneticFirstName:(id)arg2 middleName:(id)arg3 phoneticMiddleName:(id)arg4 lastName:(id)arg5 phoneticLastName:(id)arg6 organizationName:(id)arg7 jobTitle:(id)arg8 nickname:(id)arg9 score:(double)arg10 source:(id)arg11;
+ (id)nameWithFirstName:(id)arg1 phoneticFirstName:(id)arg2 middleName:(id)arg3 phoneticMiddleName:(id)arg4 lastName:(id)arg5 phoneticLastName:(id)arg6 organizationName:(id)arg7 jobTitle:(id)arg8 nickname:(id)arg9 source:(id)arg10;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_isEqualToDECNameItem:(id)arg1;
- (id)cityNames;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)firstName;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithFirstName:(id)arg1 phoneticFirstName:(id)arg2 middleName:(id)arg3 phoneticMiddleName:(id)arg4 lastName:(id)arg5 phoneticLastName:(id)arg6 organizationName:(id)arg7 jobTitle:(id)arg8 nickname:(id)arg9 relatedNames:(id)arg10 streetNames:(id)arg11 cityNames:(id)arg12 score:(double)arg13 source:(id)arg14;
- (bool)isEqual:(id)arg1;
- (bool)isEquivalent:(id)arg1;
- (id)jobTitle;
- (id)lastName;
- (id)middleName;
- (id)nickname;
- (id)organizationName;
- (id)phoneticFirstName;
- (id)phoneticLastName;
- (id)phoneticMiddleName;
- (id)relatedNames;
- (double)score;
- (id)source;
- (id)streetNames;

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