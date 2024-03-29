<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CoreDAVXMLElementGenerator.h</title>
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

/PrivateFrameworks/CoreDAV.framework/CoreDAVXMLElementGenerator.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV (347)
 */

@interface CoreDAVXMLElementGenerator : NSObject <NSXMLParserDelegate> {
    NSURL * _baseURL;
    NSMutableData * _cDATA;
    NSDictionary * _cachedElementParseRules;
    NSMutableData * _characters;
    bool  _checkedElementValidityIfRootElement;
    CoreDAVXMLElementGenerator * _currentlyParsingSubItem;
    CoreDAVItem * _element;
    bool  _isUnrecognized;
    CoreDAVItem * _parentElement;
    SEL  _parentElementSetter;
    CoreDAVXMLElementGenerator * _parentGenerator;
    int  _parsingState;
}

@property (nonatomic, retain) NSURL *baseURL;
@property (nonatomic, retain) NSMutableData *cDATA;
@property (nonatomic, retain) NSDictionary *cachedElementParseRules;
@property (nonatomic, retain) NSMutableData *characters;
@property (nonatomic) bool checkedElementValidityIfRootElement;
@property (nonatomic, retain) CoreDAVXMLElementGenerator *currentlyParsingSubItem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CoreDAVItem *element;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isUnrecognized;
@property (nonatomic) SEL parentElementSetter;
@property (nonatomic) CoreDAVXMLElementGenerator *parentGenerator;
@property (nonatomic) int parsingState;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)baseURL;
- (id)cDATA;
- (id)cachedElementParseRules;
- (id)characters;
- (bool)checkedElementValidityIfRootElement;
- (id)currentlyParsingSubItem;
- (id)element;
- (id)initWithParser:(id)arg1 baseURL:(id)arg2 rootElementNameSpace:(id)arg3 elementName:(id)arg4 parseClass:(Class)arg5;
- (id)initWithParser:(id)arg1 parentGenerator:(id)arg2 parentElementSetter:(SEL)arg3 element:(id)arg4;
- (bool)isExpectedNameSpace:(id)arg1 andElementName:(id)arg2;
- (bool)isUnrecognized;
- (void)noteChildCascadingFailure;
- (void)notifyElement:(id)arg1 ofAttributesFound:(id)arg2;
- (SEL)parentElementSetter;
- (id)parentGenerator;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parser:(id)arg1 foundCDATA:(id)arg2;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 parseErrorOccurred:(id)arg2;
- (void)parser:(id)arg1 validationErrorOccurred:(id)arg2;
- (void)parserDidEndDocument:(id)arg1;
- (int)parsingState;
- (void)resumeParsingWithParser:(id)arg1;
- (void)setBaseURL:(id)arg1;
- (void)setCDATA:(id)arg1;
- (void)setCachedElementParseRules:(id)arg1;
- (void)setCharacters:(id)arg1;
- (void)setCheckedElementValidityIfRootElement:(bool)arg1;
- (void)setCurrentlyParsingSubItem:(id)arg1;
- (void)setElement:(id)arg1;
- (void)setIsUnrecognized:(bool)arg1;
- (void)setParentElementSetter:(SEL)arg1;
- (void)setParentGenerator:(id)arg1;
- (void)setParsingState:(int)arg1;
- (bool)tracksRootElement;

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
