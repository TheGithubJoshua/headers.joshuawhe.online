<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>UIItemProvider.h</title>
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

/PrivateFrameworks/UIKitCore.framework/UIItemProvider.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore (61000)
 */

@interface UIItemProvider : NSItemProvider {
    NSDictionary * _teamMetadata;
}

@property (nonatomic) struct CGSize { double x1; double x2; } estimatedDisplayedSize;
@property (nonatomic, copy) NSDate *modificationDate;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSNumber *size;
@property (nonatomic, copy) NSDictionary *teamMetadata;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (void).cxx_destruct;
- (bool)canCreateObjectOfClass:(Class)arg1;
- (bool)canInstantiateObjectOfClass:(Class)arg1;
- (id)copyDataRepresentationForTypeIdentifier:(id)arg1 completionBlock:(id /* block */)arg2;
- (id)copyDataRepresentationForTypeIdentifier:(id)arg1 error:(id*)arg2;
- (void)copyDataRepresentationForTypeIdentifier:(id)arg1 options:(id)arg2 completionBlock:(id /* block */)arg3;
- (id)copyDataRepresentationForTypeIdentifier:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)copyFileRepresentationForTypeIdentifier:(id)arg1 completionBlock:(id /* block */)arg2;
- (id)copyFileRepresentationForTypeIdentifier:(id)arg1 error:(id*)arg2;
- (void)copyFileRepresentationForTypeIdentifier:(id)arg1 toURL:(id)arg2 options:(id)arg3 completionBlock:(id /* block */)arg4;
- (bool)copyFileRepresentationForTypeIdentifier:(id)arg1 toURL:(id)arg2 options:(id)arg3 error:(id*)arg4;
- (id)createObjectOfClass:(Class)arg1 completionBlock:(id /* block */)arg2;
- (id)createObjectOfClass:(Class)arg1 error:(id*)arg2;
- (struct CGSize { double x1; double x2; })estimatedDisplayedSize;
- (id)getInPlaceFileRepresentationForTypeIdentifier:(id)arg1 completionBlock:(id /* block */)arg2;
- (id)getInPlaceFileRepresentationForTypeIdentifier:(id)arg1 inPlace:(bool*)arg2 error:(id*)arg3;
- (void)getInPlaceFileRepresentationForTypeIdentifier:(id)arg1 options:(id)arg2 completionBlock:(id /* block */)arg3;
- (id)getInPlaceFileRepresentationForTypeIdentifier:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)initWithPBItem:(id)arg1;
- (void)instantiateObjectOfClass:(Class)arg1 options:(id)arg2 completionBlock:(id /* block */)arg3;
- (id)instantiateObjectOfClass:(Class)arg1 options:(id)arg2 error:(id*)arg3;
- (id)modificationDate;
- (id)name;
- (void)registerDataRepresentationForTypeIdentifier:(id)arg1 loadHandler:(id /* block */)arg2;
- (void)registerDataRepresentationForTypeIdentifier:(id)arg1 options:(id)arg2 loadHandler:(id /* block */)arg3;
- (void)registerFileProviderItemForTypeIdentifier:(id)arg1 visibility:(long long)arg2 loadHandler:(id /* block */)arg3;
- (void)registerFileRepresentationForTypeIdentifier:(id)arg1 fileOptions:(long long)arg2 loadHandler:(id /* block */)arg3;
- (void)registerFileRepresentationForTypeIdentifier:(id)arg1 fileOptions:(long long)arg2 options:(id)arg3 loadHandler:(id /* block */)arg4;
- (void)registerObject:(id)arg1 options:(id)arg2;
- (void)registerObjectOfClass:(Class)arg1 options:(id)arg2 loadHandler:(id /* block */)arg3;
- (void)setEstimatedDisplayedSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setModificationDate:(id)arg1;
- (void)setName:(id)arg1;
- (void)setSize:(id)arg1;
- (void)setTeamMetadata:(id)arg1;
- (id)size;
- (id)teamMetadata;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (bool)supportedInQLController;

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