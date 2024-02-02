<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CNUnifiedContacts.h</title>
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

/Frameworks/Contacts.framework/CNUnifiedContacts.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/Contacts.framework/Contacts (2413)
 */

@interface CNUnifiedContacts : NSObject

+ (id)_unifyContactsSortedByPreference:(id)arg1 includingMainStoreContacts:(bool)arg2;
+ (void)addLinkedIdentifier:(id)arg1 toLabeledValue:(id)arg2;
+ (void)addLinkedLabeledValue:(id)arg1 toLabeledValue:(id)arg2;
+ (bool)canUnifyLabel:(id)arg1 withLabel:(id)arg2 forProperty:(id)arg3;
+ (bool)canUnifyLabeledValuePair:(id)arg1 withLabeledValuePair:(id)arg2 forProperty:(id)arg3;
+ (void)correlateIdentifiersOfUnifiedMap:(id)arg1 toIdentifiersOfMultiValueMap:(id)arg2 intoMap:(id)arg3 forProperty:(id)arg4;
+ (unsigned long long)countOfLabel:(id)arg1 value:(id)arg2 inMultiValue:(id)arg3 forProperty:(id)arg4;
+ (unsigned long long)countOfLabelIncludingEquivalents:(id)arg1 value:(id)arg2 inMultiValue:(id)arg3 forProperty:(id)arg4;
+ (unsigned long long)countOfLabelsUnifiableWithLabel:(id)arg1 valuesUnifiableWithValue:(id)arg2 inMultiValue:(id)arg3 forProperty:(id)arg4;
+ (bool)doesMultiValue:(id)arg1 needLabeledValue:(id)arg2 fromMultiValue:(id)arg3 forProperty:(id)arg4;
+ (id /* block */)equivalentLabeledValueFilterForLabeledValue:(id)arg1 property:(id)arg2;
+ (id)findFirstIdentifier:(id)arg1 inMultiValue:(id)arg2;
+ (id)firstNonNilValueForProperty:(id)arg1 inContacts:(id)arg2;
+ (id)identifierMapForUnifiedContact:(id)arg1 backingContacts:(id)arg2;
+ (id)identifierMapForUnifiedMultiValue:(id)arg1 backingMultiValues:(id)arg2 forProperty:(id)arg3;
+ (void)identifierMapForUnifiedMultiValue:(id)arg1 backingMultiValues:(id)arg2 intoMap:(id)arg3 forProperty:(id)arg4;
+ (id)imageValuePropertiesByKey;
+ (id)imageValuePropertyKeys;
+ (unsigned long long)indexOfPreferredContactForImage:(id)arg1;
+ (unsigned long long)indexOfPreferredContactForUnifying:(id)arg1 includingMainStoreContacts:(bool)arg2;
+ (unsigned long long)indexOfUnifiedIdentifier:(id)arg1 onNonUnifiedMultiValue:(id)arg2 withIdentifierMap:(id)arg3;
+ (unsigned long long)indexOfValueMostInferiorTo:(id)arg1 inMultiValue:(id)arg2 forProperty:(id)arg3;
+ (id)indexesOfLabeledValuesUnifiableWithLabelValuePair:(id)arg1 inMultiValue:(id)arg2 forProperty:(id)arg3;
+ (id)indexesOfValuesInferiorTo:(id)arg1 inMultiValue:(id)arg2 forProperty:(id)arg3;
+ (id)makeNonNameSingleValuePropertiesByKey;
+ (id)nonNameSingleValuePropertiesByKey;
+ (void)replaceInferiorValueInMultiValue:(id)arg1 withEntryAtIndex:(unsigned long long)arg2 fromMultiValue:(id)arg3 forProperty:(id)arg4;
+ (bool)shouldIncludeLabeledValue:(id)arg1 fromSource:(id)arg2 inDestination:(id)arg3 forProperty:(id)arg4;
+ (bool)shouldLabeledValue:(id)arg1 replaceInferiorValueInMultiValue:(id)arg2 forProperty:(id)arg3;
+ (id)unifiedIdentifiersForLabeledValue:(id)arg1 inUnifiedMap:(id)arg2 forProperty:(id)arg3;
+ (id)unifiedIdentifiersForValue:(id)arg1 inUnifiedMap:(id)arg2 forProperty:(id)arg3;
+ (id)unifyAvailableKeysOfContacts:(id)arg1;
+ (void)unifyImageOfContacts:(id)arg1 intoContact:(id)arg2 availableKeyDescriptor:(id)arg3;
+ (void)unifyMultiValue:(id)arg1 intoMultiValue:(id)arg2 forProperty:(id)arg3;
+ (void)unifyMultiValuesOfContacts:(id)arg1 intoContact:(id)arg2 availableKeyDescriptor:(id)arg3;
+ (id)unifyMultivalues:(id)arg1 forProperty:(id)arg2;
+ (void)unifyNamesOfContacts:(id)arg1 withPreferredContact:(id)arg2 intoContact:(id)arg3 availableKeyDescriptor:(id)arg4;
+ (void)unifyNonNameSingleValuesOfContacts:(id)arg1 withPreferredContact:(id)arg2 intoContact:(id)arg3 availableKeyDescriptor:(id)arg4;
+ (void)unifySingleValuesProperties:(id)arg1 ofContacts:(id)arg2 intoContact:(id)arg3 availableKeyDescriptor:(id)arg4;

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