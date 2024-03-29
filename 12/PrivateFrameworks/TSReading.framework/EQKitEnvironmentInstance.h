<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>EQKitEnvironmentInstance.h</title>
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

/PrivateFrameworks/TSReading.framework/EQKitEnvironmentInstance.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport (440)
 */

@interface EQKitEnvironmentInstance : EQKitEnvironment {
    struct Config { struct set<wchar_t, std::__1::less<wchar_t>, std::__1::allocator<wchar_t> > { struct __tree<wchar_t, std::__1::less<wchar_t>, std::__1::allocator<wchar_t> > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_2_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<wchar_t, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::less<wchar_t> > { unsigned long long x_3_3_1; } x_1_2_3; } x_1_1_1; } x1; struct set<wchar_t, std::__1::less<wchar_t>, std::__1::allocator<wchar_t> > { struct __tree<wchar_t, std::__1::less<wchar_t>, std::__1::allocator<wchar_t> > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_2_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<wchar_t, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::less<wchar_t> > { unsigned long long x_3_3_1; } x_1_2_3; } x_2_1_1; } x2; } * mBlahtexConfig;
    NSDictionary * mConfig;
    struct Manager { int (**x1)(); struct Collection {} *x2; struct EQKitCacheLRUCounter { unsigned long long x_3_1_1; } x3; } * mFontManager;
    struct Manager { struct EQKitCache<EQKit::OpticalKern::Glyph::Key, std::__1::shared_ptr<EQKit::OpticalKern::Edge::Path>, std::__1::shared_ptr<const EQKit::OpticalKern::Edge::Path> > {} *x1; struct EQKitCacheLRUCounter { unsigned long long x_2_1_1; } x2; bool x3; struct QuantizationConfig { unsigned long long x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; } x4; } * mKerningManager;
    struct Config { int x1; bool x2; bool x3; bool x4; bool x5; } * mLayoutConfig;
    struct Dictionary { struct IdentifierMap { unsigned short x_1_1_1; struct map<std::__1::basic_string<char>, unsigned short, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, unsigned short> > > { struct __tree<std::__1::__value_type<std::__1::basic_string<char>, unsigned short>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, unsigned short>, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, unsigned short> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_3_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, unsigned short>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_5_1; } x_2_4_1; } x_1_3_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, unsigned short>, std::__1::less<std::__1::basic_string<char> >, true> > { unsigned long long x_3_4_1; } x_1_3_3; } x_2_2_1; } x_1_1_2; } x1; } * mOperatorDictionary;
}

@property (nonatomic) bool kerning;

+ (id)dataForDefaultEnvironment;
+ (id)dataForEnvironment:(id)arg1;
+ (id)defaultEnvironment;
+ (id)environmentFromData:(id)arg1;

- (void)beginLayout;
- (const struct Config { struct set<wchar_t, std::__1::less<wchar_t>, std::__1::allocator<wchar_t> > { struct __tree<wchar_t, std::__1::less<wchar_t>, std::__1::allocator<wchar_t> > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_2_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<wchar_t, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::less<wchar_t> > { unsigned long long x_3_3_1; } x_1_2_3; } x_1_1_1; } x1; struct set<wchar_t, std::__1::less<wchar_t>, std::__1::allocator<wchar_t> > { struct __tree<wchar_t, std::__1::less<wchar_t>, std::__1::allocator<wchar_t> > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_2_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<wchar_t, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::less<wchar_t> > { unsigned long long x_3_3_1; } x_1_2_3; } x_2_1_1; } x2; }*)blahtexConfig;
- (void)dealloc;
- (void)endLayout;
- (const struct Manager { int (**x1)(); struct Collection {} *x2; struct EQKitCacheLRUCounter { unsigned long long x_3_1_1; } x3; }*)fontManager;
- (id)initWithConfig:(id)arg1;
- (bool)kerning;
- (const struct Manager { struct EQKitCache<EQKit::OpticalKern::Glyph::Key, std::__1::shared_ptr<EQKit::OpticalKern::Edge::Path>, std::__1::shared_ptr<const EQKit::OpticalKern::Edge::Path> > {} *x1; struct EQKitCacheLRUCounter { unsigned long long x_2_1_1; } x2; bool x3; struct QuantizationConfig { unsigned long long x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; } x4; }*)kerningManager;
- (const struct Config { int x1; bool x2; bool x3; bool x4; bool x5; }*)layoutConfig;
- (id)newDictionaryForArchiving;
- (const struct Dictionary { struct IdentifierMap { unsigned short x_1_1_1; struct map<std::__1::basic_string<char>, unsigned short, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, unsigned short> > > { struct __tree<std::__1::__value_type<std::__1::basic_string<char>, unsigned short>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, unsigned short>, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, unsigned short> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_3_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, unsigned short>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_5_1; } x_2_4_1; } x_1_3_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, unsigned short>, std::__1::less<std::__1::basic_string<char> >, true> > { unsigned long long x_3_4_1; } x_1_3_3; } x_2_2_1; } x_1_1_2; } x1; }*)operatorDictionary;
- (void)setKerning:(bool)arg1;

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
