<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>NSMutableString.h</title>
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

/Frameworks/Foundation.framework/NSMutableString.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/Foundation.framework/Foundation (1575.23)
 */

@interface NSMutableString : NSString

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (void)initialize;
+ (id)stringWithCapacity:(unsigned long long)arg1;

- (void)_cfAppendCString:(const char *)arg1 length:(long long)arg2;
- (void)_cfCapitalize:(const void*)arg1;
- (void)_cfLowercase:(const void*)arg1;
- (void)_cfNormalize:(long long)arg1;
- (void)_cfPad:(struct __CFString { }*)arg1 length:(unsigned int)arg2 padIndex:(unsigned int)arg3;
- (void)_cfTrim:(struct __CFString { }*)arg1;
- (void)_cfTrimWS;
- (void)_cfUppercase:(const void*)arg1;
- (unsigned long long)_replaceOccurrencesOfRegularExpressionPattern:(id)arg1 withTemplate:(id)arg2 options:(unsigned long long)arg3 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
- (void)_trimWithCharacterSet:(id)arg1;
- (void)appendCharacters:(const unsigned short*)arg1 length:(unsigned long long)arg2;
- (void)appendFormat:(id)arg1;
- (void)appendString:(id)arg1;
- (bool)applyTransform:(id)arg1 reverse:(bool)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 updatedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg4;
- (Class)classForCoder;
- (void)deleteCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)initWithCapacity:(unsigned long long)arg1;
- (void)insertString:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withCString:(const char *)arg2 length:(unsigned long long)arg3;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withCharacters:(const unsigned short*)arg2 length:(unsigned long long)arg3;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withString:(id)arg2;
- (unsigned long long)replaceOccurrencesOfString:(id)arg1 withString:(id)arg2 options:(unsigned long long)arg3 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
- (void)setString:(id)arg1;

// Image: /System/Library/Frameworks/Network.framework/Network

- (void)appendPrettyBOOL:(bool)arg1 withName:(id)arg2 indent:(int)arg3;
- (void)appendPrettyInt:(int)arg1 withName:(id)arg2 indent:(int)arg3;
- (void)appendPrettyObject:(id)arg1 withName:(id)arg2 indent:(int)arg3 showFullContent:(bool)arg4;

// Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension

- (void)appendPrettyBOOL:(bool)arg1 withName:(id)arg2 andIndent:(int)arg3 options:(unsigned long long)arg4;
- (void)appendPrettyInt:(int)arg1 withName:(id)arg2 andIndent:(int)arg3 options:(unsigned long long)arg4;
- (void)appendPrettyObject:(id)arg1 withName:(id)arg2 andIndent:(int)arg3 options:(unsigned long long)arg4;
- (void)appendToStringAtColumnWithContent:(int*)arg1 column:(unsigned char)arg2 content:(const char *)arg3 appendAsNewLine:(bool)arg4 addNewLine:(bool)arg5;

// Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities

+ (id)axmIndentationString:(long long)arg1;

- (void)axmAppendIndentation:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV

- (void)replaceOccurrencesOfString:(id)arg1 withString:(id)arg2;
- (void)searchAndReplaceInString:(id)arg1 withString:(id)arg2;

// Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation

- (void)replaceOccurrencesOfString:(id)arg1 withString:(id)arg2;
- (void)searchAndReplaceInString:(id)arg1 withString:(id)arg2;

// Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation

- (void)_cn_appendNonNilString:(id)arg1;
- (void)_cn_deleteCharactersInSet:(id)arg1;
- (void)_cn_deleteCharactersInSet:(id)arg1 options:(unsigned long long)arg2;
- (unsigned long long)_cn_replaceStrings:(id)arg1;
- (void)_cn_trim;
- (void)_cn_trimLeadingWhitespace;
- (void)_cn_trimTrailingWhitespace;

// Image: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS

- (void)appendString:(id)arg1 withSeparator:(id)arg2;
- (void)convertLineEndingsTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/DataDetectorsCore

- (void)dd_appendSpaces:(unsigned int)arg1;

// Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation

- (void)replaceNewlinesWithSpaces;

// Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore

- (void)indentBy:(unsigned long long)arg1;

// Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport

- (void)tc_replaceAllSubstr:(id)arg1 with:(id)arg2;
- (void)tc_replaceAllSubstr:(id)arg1 with:(id)arg2 escStr:(id)arg3;
- (void)tc_replaceAllSubstr:(id)arg1 with:(id)arg2 escStr:(id)arg3 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
- (void)tc_replaceAllSubstr:(id)arg1 with:(id)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (bool)tc_replaceSubstr:(id)arg1 with:(id)arg2;
- (bool)tc_replaceSubstr:(id)arg1 with:(id)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)tsu_appendCharacter:(unsigned short)arg1;
- (void)tsu_appendSeparator:(id)arg1 format:(id)arg2;
- (void)tsu_indentBy:(unsigned long long)arg1;
- (void)tsu_insertCharacter:(unsigned short)arg1 atIndex:(unsigned long long)arg2;

// Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore

- (void)addMathIndicators;

// Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI

- (void)siriUIAppendStringWithCommaSeparation:(id)arg1;

// Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading

- (void)replaceBreaksWithPlainTextVersions;

// Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility

- (void)tsu_appendCharacter:(unsigned short)arg1;
- (void)tsu_appendSeparator:(id)arg1 format:(id)arg2;
- (void)tsu_indentBy:(unsigned long long)arg1;
- (void)tsu_insertCharacter:(unsigned short)arg1 atIndex:(unsigned long long)arg2;

// Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput

- (void)_removeCharactersFromSet:(struct __CFCharacterSet { }*)arg1;
- (void)_removeOccurrencesOfCharacter:(unsigned int)arg1;
- (void)_replaceOccurrencesOfCharacter:(unsigned int)arg1 withCharacter:(unsigned int)arg2;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (void)standardizeWhitespace;

// Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar

- (void)_ICSEscapeParameterQuotedValue;
- (void)_ICSEscapeParameterValue;
- (void)_ICSEscapePropertyValue;
- (void)_ICSRemoveCharactersFromSet:(id)arg1;
- (void)_ICSStripControlChracters;
- (id)controlCharacterSet;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport

- (void)gqd_insertCharacter:(unsigned short)arg1 atIndex:(unsigned short)arg2;
- (void)tsce_appendSpaces:(int)arg1;
- (void)tsce_appendWhitespace:(char *)arg1 startingIndex:(int*)arg2;
- (void)tsce_replaceCharactersInSet:(id)arg1 withString:(id)arg2;
- (void)tsu_appendCharacter:(unsigned short)arg1;
- (void)tsu_appendSeparator:(id)arg1 format:(id)arg2;
- (void)tsu_indentBy:(unsigned long long)arg1;
- (void)tsu_insertCharacter:(unsigned short)arg1 atIndex:(unsigned long long)arg2;

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