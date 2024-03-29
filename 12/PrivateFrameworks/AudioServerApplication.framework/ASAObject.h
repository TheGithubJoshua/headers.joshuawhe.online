<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>ASAObject.h</title>
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

/PrivateFrameworks/AudioServerApplication.framework/ASAObject.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/AudioServerApplication.framework/AudioServerApplication (440.1)
 */

@interface ASAObject : NSObject {
    unsigned int  _objectID;
}

@property (nonatomic, readonly) unsigned int baseClass;
@property (nonatomic, readonly) unsigned int objectClass;
@property (nonatomic, readonly) unsigned int objectID;
@property (nonatomic, readonly, copy) NSArray *ownedObjectIDs;
@property (nonatomic, readonly) unsigned int ownerID;

- (unsigned int)baseClass;
- (id)coreAudioClassName;
- (id)diagnosticDescriptionWithIndent:(id)arg1 walkTree:(bool)arg2;
- (bool)getGlobalProperty:(unsigned int)arg1 ofElement:(unsigned int)arg2 withData:(void*)arg3 ofSize:(unsigned int*)arg4 withQualifier:(void*)arg5 ofSize:(unsigned int)arg6;
- (bool)getInputProperty:(unsigned int)arg1 ofElement:(unsigned int)arg2 withData:(void*)arg3 ofSize:(unsigned int*)arg4 withQualifier:(void*)arg5 ofSize:(unsigned int)arg6;
- (bool)getMasterGlobalProperty:(unsigned int)arg1 withData:(void*)arg2 ofSize:(unsigned int*)arg3 withQualifier:(void*)arg4 ofSize:(unsigned int)arg5;
- (bool)getMasterInputProperty:(unsigned int)arg1 withData:(void*)arg2 ofSize:(unsigned int*)arg3 withQualifier:(void*)arg4 ofSize:(unsigned int)arg5;
- (bool)getMasterOutputProperty:(unsigned int)arg1 withData:(void*)arg2 ofSize:(unsigned int*)arg3 withQualifier:(void*)arg4 ofSize:(unsigned int)arg5;
- (bool)getOutputProperty:(unsigned int)arg1 ofElement:(unsigned int)arg2 withData:(void*)arg3 ofSize:(unsigned int*)arg4 withQualifier:(void*)arg5 ofSize:(unsigned int)arg6;
- (bool)getProperty:(unsigned int)arg1 scope:(unsigned int)arg2 ofElement:(unsigned int)arg3 withData:(void*)arg4 ofSize:(unsigned int*)arg5 withQualifier:(void*)arg6 ofSize:(unsigned int)arg7;
- (bool)hasGlobalProperty:(unsigned int)arg1 ofElement:(unsigned int)arg2;
- (bool)hasInputProperty:(unsigned int)arg1 ofElement:(unsigned int)arg2;
- (bool)hasMasterGlobalProperty:(unsigned int)arg1;
- (bool)hasMasterInputProperty:(unsigned int)arg1;
- (bool)hasMasterOutputProperty:(unsigned int)arg1;
- (bool)hasOutputProperty:(unsigned int)arg1 ofElement:(unsigned int)arg2;
- (bool)hasProperty:(unsigned int)arg1 scope:(unsigned int)arg2 ofElement:(unsigned int)arg3;
- (id)init;
- (id)initWithAudioObjectID:(unsigned int)arg1;
- (bool)isGlobalPropertySettable:(unsigned int)arg1 ofElement:(unsigned int)arg2;
- (bool)isInputPropertySettable:(unsigned int)arg1 ofElement:(unsigned int)arg2;
- (bool)isMasterGlobalPropertySettable:(unsigned int)arg1;
- (bool)isMasterInputPropertySettable:(unsigned int)arg1;
- (bool)isMasterOutputPropertySettable:(unsigned int)arg1;
- (bool)isOutputPropertySettable:(unsigned int)arg1 ofElement:(unsigned int)arg2;
- (bool)isPropertySettable:(unsigned int)arg1 scope:(unsigned int)arg2 ofElement:(unsigned int)arg3;
- (unsigned int)objectClass;
- (unsigned int)objectID;
- (bool)onQueue:(id)arg1 forGlobalProperty:(unsigned int)arg2 ofElement:(unsigned int)arg3 addListener:(id /* block */)arg4;
- (bool)onQueue:(id)arg1 forGlobalProperty:(unsigned int)arg2 ofElement:(unsigned int)arg3 removeListener:(id /* block */)arg4;
- (bool)onQueue:(id)arg1 forInputProperty:(unsigned int)arg2 ofElement:(unsigned int)arg3 addListener:(id /* block */)arg4;
- (bool)onQueue:(id)arg1 forInputProperty:(unsigned int)arg2 ofElement:(unsigned int)arg3 removeListener:(id /* block */)arg4;
- (bool)onQueue:(id)arg1 forMasterGlobalProperty:(unsigned int)arg2 addListener:(id /* block */)arg3;
- (bool)onQueue:(id)arg1 forMasterGlobalProperty:(unsigned int)arg2 removeListener:(id /* block */)arg3;
- (bool)onQueue:(id)arg1 forMasterInputProperty:(unsigned int)arg2 addListener:(id /* block */)arg3;
- (bool)onQueue:(id)arg1 forMasterInputProperty:(unsigned int)arg2 removeListener:(id /* block */)arg3;
- (bool)onQueue:(id)arg1 forMasterOutputProperty:(unsigned int)arg2 addListener:(id /* block */)arg3;
- (bool)onQueue:(id)arg1 forMasterOutputProperty:(unsigned int)arg2 removeListener:(id /* block */)arg3;
- (bool)onQueue:(id)arg1 forOutputProperty:(unsigned int)arg2 ofElement:(unsigned int)arg3 addListener:(id /* block */)arg4;
- (bool)onQueue:(id)arg1 forOutputProperty:(unsigned int)arg2 ofElement:(unsigned int)arg3 removeListener:(id /* block */)arg4;
- (bool)onQueue:(id)arg1 forProperty:(unsigned int)arg2 scope:(unsigned int)arg3 ofElement:(unsigned int)arg4 addListener:(id /* block */)arg5;
- (bool)onQueue:(id)arg1 forProperty:(unsigned int)arg2 scope:(unsigned int)arg3 ofElement:(unsigned int)arg4 removeListener:(id /* block */)arg5;
- (id)ownedObjectIDs;
- (unsigned int)ownerID;
- (bool)setGlobalProperty:(unsigned int)arg1 ofElement:(unsigned int)arg2 withData:(void*)arg3 ofSize:(unsigned int)arg4 withQualifier:(void*)arg5 ofSize:(unsigned int)arg6;
- (bool)setInputProperty:(unsigned int)arg1 ofElement:(unsigned int)arg2 withData:(void*)arg3 ofSize:(unsigned int)arg4 withQualifier:(void*)arg5 ofSize:(unsigned int)arg6;
- (bool)setMasterGlobalProperty:(unsigned int)arg1 withData:(void*)arg2 ofSize:(unsigned int)arg3 withQualifier:(void*)arg4 ofSize:(unsigned int)arg5;
- (bool)setMasterInputProperty:(unsigned int)arg1 withData:(void*)arg2 ofSize:(unsigned int)arg3 withQualifier:(void*)arg4 ofSize:(unsigned int)arg5;
- (bool)setMasterOutputProperty:(unsigned int)arg1 withData:(void*)arg2 ofSize:(unsigned int)arg3 withQualifier:(void*)arg4 ofSize:(unsigned int)arg5;
- (bool)setOutputProperty:(unsigned int)arg1 ofElement:(unsigned int)arg2 withData:(void*)arg3 ofSize:(unsigned int)arg4 withQualifier:(void*)arg5 ofSize:(unsigned int)arg6;
- (bool)setProperty:(unsigned int)arg1 scope:(unsigned int)arg2 ofElement:(unsigned int)arg3 withData:(void*)arg4 ofSize:(unsigned int)arg5 withQualifier:(void*)arg6 ofSize:(unsigned int)arg7;
- (unsigned int)sizeOfGlobalProperty:(unsigned int)arg1 ofElement:(unsigned int)arg2 withQualifier:(void*)arg3 ofSize:(unsigned int)arg4;
- (unsigned int)sizeOfInputProperty:(unsigned int)arg1 ofElement:(unsigned int)arg2 withQualifier:(void*)arg3 ofSize:(unsigned int)arg4;
- (unsigned int)sizeOfMasterGlobalProperty:(unsigned int)arg1 withQualifier:(void*)arg2 ofSize:(unsigned int)arg3;
- (unsigned int)sizeOfMasterInputProperty:(unsigned int)arg1 withQualifier:(void*)arg2 ofSize:(unsigned int)arg3;
- (unsigned int)sizeOfMasterOutputProperty:(unsigned int)arg1 withQualifier:(void*)arg2 ofSize:(unsigned int)arg3;
- (unsigned int)sizeOfOutputProperty:(unsigned int)arg1 ofElement:(unsigned int)arg2 withQualifier:(void*)arg3 ofSize:(unsigned int)arg4;
- (unsigned int)sizeOfProperty:(unsigned int)arg1 scope:(unsigned int)arg2 ofElement:(unsigned int)arg3 withQualifier:(void*)arg4 ofSize:(unsigned int)arg5;

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
