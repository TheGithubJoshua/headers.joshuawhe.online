<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>VNValidationUtilities.h</title>
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

/Frameworks/Vision.framework/VNValidationUtilities.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/Vision.framework/Vision (2.0.70)
 */

@interface VNValidationUtilities : NSObject

+ (bool)_validateFaceObservations:(id)arg1 withMinimumCount:(unsigned long long)arg2 forOptionalRequest:(id)arg3 error:(id*)arg4;
+ (bool)getArray:(id*)arg1 forKey:(id)arg2 inOptions:(id)arg3 withElementsOfClass:(Class)arg4 requiredMinimumCount:(unsigned long long)arg5 allowedMaximumCount:(unsigned long long)arg6 error:(id*)arg7;
+ (bool)getDoubleValue:(double*)arg1 forKey:(id)arg2 inOptions:(id)arg3 error:(id*)arg4;
+ (bool)getDoubleValue:(double*)arg1 forKey:(id)arg2 inOptions:(id)arg3 withDefaultValue:(double)arg4 error:(id*)arg5;
+ (bool)getFloatValue:(float*)arg1 forKey:(id)arg2 inOptions:(id)arg3 error:(id*)arg4;
+ (bool)getFloatValue:(float*)arg1 forKey:(id)arg2 inOptions:(id)arg3 withDefaultValue:(float)arg4 error:(id*)arg5;
+ (bool)getNSUIntegerValue:(unsigned long long*)arg1 forKey:(id)arg2 inOptions:(id)arg3 error:(id*)arg4;
+ (bool)getOptionalArray:(id*)arg1 forKey:(id)arg2 inOptions:(id)arg3 withElementsOfClass:(Class)arg4 error:(id*)arg5;
+ (bool)getOptionalInputFacesArray:(id*)arg1 inOptions:(id)arg2 error:(id*)arg3;
+ (bool)getOptionalObject:(id*)arg1 ofClass:(Class)arg2 forKey:(id)arg3 inOptions:(id)arg4 error:(id*)arg5;
+ (bool)getRequiredRequestRevision:(unsigned long long*)arg1 fromSupportedRevisionsForRequestClass:(Class)arg2 inOptions:(id)arg3 error:(id*)arg4;
+ (bool)getRequiredRequestRevision:(unsigned long long*)arg1 inOptions:(id)arg2 error:(id*)arg3;
+ (id)requiredArrayForKey:(id)arg1 inOptions:(id)arg2 withElementsOfClass:(Class)arg3 error:(id*)arg4;
+ (id)requiredFaceObservationInOptions:(id)arg1 withOptionName:(id)arg2 error:(id*)arg3;
+ (id)requiredInputFacesArrayInOptions:(id)arg1 error:(id*)arg2;
+ (id)requiredObjectOfClass:(Class)arg1 forKey:(id)arg2 inOptions:(id)arg3 error:(id*)arg4;
+ (bool)validateArray:(id)arg1 named:(id)arg2 hasElementsOfClass:(Class)arg3 requiredMinimumCount:(unsigned long long)arg4 allowedMaximumCount:(unsigned long long)arg5 error:(id*)arg6;
+ (bool)validateClassArray:(id)arg1 named:(id)arg2 hasElementsAncestoredFromClass:(Class)arg3 requiredMinimumCount:(unsigned long long)arg4 allowedMaximumCount:(unsigned long long)arg5 error:(id*)arg6;
+ (bool)validateFaceprintedFaceObservation:(id)arg1 error:(id*)arg2;
+ (bool)validateNonZeroImageWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 componentNameProvidingBlock:(id /* block */)arg3 error:(id*)arg4;
+ (bool)validateOptionalFaceObservations:(id)arg1 error:(id*)arg2;
+ (bool)validateOptionalFaceObservations:(id)arg1 forRequest:(id)arg2 error:(id*)arg3;
+ (bool)validateRequiredClusterIDs:(id)arg1 error:(id*)arg2;
+ (bool)validateRequiredFaceObservations:(id)arg1 error:(id*)arg2;
+ (bool)validateRequiredFaceObservations:(id)arg1 forRequest:(id)arg2 error:(id*)arg3;

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