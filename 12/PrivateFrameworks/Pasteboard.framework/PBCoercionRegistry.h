<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PBCoercionRegistry.h</title>
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

/PrivateFrameworks/Pasteboard.framework/PBCoercionRegistry.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/Pasteboard.framework/Pasteboard (1000)
 */

@interface PBCoercionRegistry : NSObject {
    NSObject<OS_dispatch_queue> * _memberQueue;
    NSMutableDictionary * _member_classCoercionByClass;
    NSMutableDictionary * _member_exporterByClass;
    NSMutableDictionary * _member_importerByClass;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *memberQueue;
@property (nonatomic, retain) NSMutableDictionary *member_classCoercionByClass;
@property (nonatomic, retain) NSMutableDictionary *member_exporterByClass;
@property (nonatomic, retain) NSMutableDictionary *member_importerByClass;

+ (id)archivedDataFromObject:(id)arg1 requestedType:(id)arg2 outError:(id*)arg3;
+ (id)defaultRegistry;
+ (id)objectFromArchivedData:(id)arg1 URL:(id)arg2 requestedClass:(Class)arg3 typeIdentifier:(id)arg4 outError:(id*)arg5;

- (void).cxx_destruct;
- (id)_availableClassesToCoerceFromClass:(Class)arg1;
- (id)_member_acceptableRepresentationTypesForCreatingObjectOfClass:(Class)arg1;
- (id)_member_availableClassesToCoerceToFromClass:(Class)arg1;
- (id)_member_availableDirectRepresentationTypesForClass:(Class)arg1;
- (id)_member_exporterFromClass:(Class)arg1 toType:(id)arg2;
- (void)_member_registerCoercionFromObjectOfClass:(Class)arg1 toObjectOfClass:(Class)arg2 coercionBlock:(id /* block */)arg3;
- (void)_member_registerCoercionFromObjectOfClass:(Class)arg1 toRepresentationOfType:(id)arg2 coercionBlock:(id /* block */)arg3;
- (void)_member_registerCoercionFromRepresentationConformingToType:(id)arg1 toObjectOfClass:(Class)arg2 coercionBlock:(id /* block */)arg3;
- (id)_newObjectOfClass:(Class)arg1 fromData:(id)arg2 URL:(id)arg3 ofType:(id)arg4 outError:(id*)arg5;
- (id)acceptableRepresentationTypesForCreatingObjectOfClass:(Class)arg1;
- (id)availableRepresentationTypesForClass:(Class)arg1;
- (bool)canCoerceFromRepresentationConformingToType:(id)arg1 toObjectOfClass:(Class)arg2;
- (bool)canCoerceObjectOfClass:(Class)arg1 toObjectOfClass:(Class)arg2;
- (bool)canCoerceObjectOfClass:(Class)arg1 toRepresentationConformingToType:(id)arg2;
- (id)init;
- (void)loadRepresentationOfObject:(id)arg1 asType:(id)arg2 completionBlock:(id /* block */)arg3;
- (id)memberQueue;
- (id)member_classCoercionByClass;
- (id)member_exporterByClass;
- (id)member_importerByClass;
- (id)newObjectOfClass:(Class)arg1 fromContentsOfURL:(id)arg2 ofType:(id)arg3 outError:(id*)arg4;
- (id)newObjectOfClass:(Class)arg1 fromData:(id)arg2 ofType:(id)arg3 outError:(id*)arg4;
- (void)registerCoercionFromObjectOfClass:(Class)arg1 toObjectOfClass:(Class)arg2 coercionBlock:(id /* block */)arg3;
- (void)registerCoercionFromObjectOfClass:(Class)arg1 toRepresentationOfType:(id)arg2 coercionBlock:(id /* block */)arg3;
- (void)registerCoercionFromRepresentationConformingToType:(id)arg1 toObjectOfClass:(Class)arg2 coercionBlock:(id /* block */)arg3;
- (void)setMemberQueue:(id)arg1;
- (void)setMember_classCoercionByClass:(id)arg1;
- (void)setMember_exporterByClass:(id)arg1;
- (void)setMember_importerByClass:(id)arg1;

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
