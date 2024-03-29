<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>TPPageMaster.h</title>
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

/PrivateFrameworks/iWorkImport.framework/TPPageMaster.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport (440)
 */

@interface TPPageMaster : TSPObject <TPMasterDrawableProvider, TSKDocumentObject, TSKModel, TSPCopying, TSWPHeaderFooterProvider> {
    TPDocumentRoot * _documentRoot;
    TSWPStorage * _headerFooters;
    NSMutableArray * _masterDrawables;
    TSUUUIDPath * _pageTemplateUUIDPath;
    TPSection * _section;
}

@property (nonatomic, readonly) double bodyWidth;
@property (nonatomic, readonly) unsigned long long countOfMasterDrawables;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) TSKDocumentRoot *documentRoot;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSEnumerator *headerFooterFragmentEnumerator;
@property (nonatomic, readonly) NSArray *masterDrawables;
@property (nonatomic, readonly) TSUUUIDPath *pageTemplateUUIDPath;
@property (nonatomic) TPSection *section;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool usesSingleHeaderFooter;

+ (bool)needsObjectUUID;
+ (id)pageMasterForPageTemplate:(id)arg1 withSection:(id)arg2;

- (void).cxx_destruct;
- (void)addMasterDrawable:(id)arg1 atIndex:(unsigned long long)arg2 insertContext:(id)arg3 suppressDOLC:(bool)arg4;
- (void)addMasterDrawables:(id)arg1 atIndex:(unsigned long long)arg2 insertContext:(id)arg3 suppressDOLC:(bool)arg4;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (double)bodyWidth;
- (id)childEnumerator;
- (bool)containsModelObject:(id)arg1;
- (id)copyWithContext:(id)arg1;
- (unsigned long long)countOfMasterDrawables;
- (void)dealloc;
- (id)description;
- (id)documentRoot;
- (double)footerHeight;
- (id)headerFooter:(long long)arg1 fragmentAtIndex:(long long)arg2;
- (id)headerFooterFragmentEnumerator;
- (long long)headerFooterTypeForModel:(id)arg1;
- (long long)headerFragmentIndexForModel:(id)arg1;
- (double)headerHeight;
- (void)i_addMasterDrawable:(id)arg1;
- (void)i_copyHeadersAndFootersFrom:(id)arg1 dolcContext:(id)arg2 withBlock:(id /* block */)arg3;
- (void)i_createHeadersFooters:(long long)arg1 stylesheet:(id)arg2 paragraphStyle:(id)arg3 context:(id)arg4 mayAlreadyExist:(bool)arg5;
- (void)i_ensureHeaderFooterStoragesExistWithStylesheet:(id)arg1 paragraphStyle:(id)arg2 context:(id)arg3;
- (void)i_importHeaderFooter:(id)arg1 headerType:(long long)arg2 dolcContext:(id)arg3 splitHeaders:(bool)arg4;
- (id)i_pageTemplate;
- (void)i_setDocumentRoot:(id)arg1;
- (void)i_setHeaderFooter:(long long)arg1 storage:(id)arg2 fragmentIndex:(long long)arg3;
- (void)i_setPageTemplateUUIDPath:(id)arg1;
- (void)i_splitHeaderFooter:(id)arg1 storages:(id*)arg2 dolcContext:(id)arg3 bodyWidth:(double)arg4;
- (unsigned long long)indexOfMasterDrawable:(id)arg1;
- (id)initWithSection:(id)arg1;
- (bool)isHeaderFooterEmpty:(long long)arg1;
- (bool)isHeaderFooterEmpty:(long long)arg1 fragmentAtIndex:(long long)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (id)masterDrawables;
- (id)masterDrawablesSortedByZOrder:(id)arg1;
- (id)objectUUIDPath;
- (double)pHeightOfHeaderFooter:(long long)arg1;
- (void)p_filterParagraphStylesOnHeaderFooterStorage:(id)arg1 stylesheet:(id)arg2;
- (id)p_headerAndFooterStorages;
- (long long)p_headerFragmentIndexForTabIndex:(unsigned int)arg1 paragraphStyle:(id)arg2 bodyWidth:(double)arg3;
- (bool)p_isInDocument;
- (void)p_makeHeadersFootersPerformSelector:(SEL)arg1 documentRoot:(id)arg2;
- (void)p_makeHeadersFootersPerformSelector:(SEL)arg1 documentRoot:(id)arg2 context:(id)arg3;
- (void)p_makeHeadersFootersPerformSelector:(SEL)arg1 withStylesheet:(id)arg2 withMapper:(id)arg3;
- (void)p_makeMasterDrawablesPerformSelector:(SEL)arg1 documentRoot:(id)arg2;
- (void)p_makeMasterDrawablesPerformSelector:(SEL)arg1 documentRoot:(id)arg2 context:(id)arg3;
- (void)p_makeMasterDrawablesPerformSelector:(SEL)arg1 withStylesheet:(id)arg2 withMapper:(id)arg3;
- (void)p_splitHeaderFooterByTabs:(id)arg1 storages:(id*)arg2 dolcContext:(id)arg3 bodyWidth:(double)arg4;
- (id)pageTemplateUUIDPath;
- (void)removeMasterDrawable:(id)arg1 suppressDOLC:(bool)arg2;
- (void)saveToArchiver:(id)arg1;
- (id)section;
- (void)setParentStorage:(id)arg1;
- (void)setSection:(id)arg1;
- (id)topLevelParentInfoForInfo:(id)arg1;
- (bool)usesSingleHeaderFooter;
- (void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;

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
