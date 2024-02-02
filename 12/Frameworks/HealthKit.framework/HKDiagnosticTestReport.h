<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>HKDiagnosticTestReport.h</title>
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

/Frameworks/HealthKit.framework/HKDiagnosticTestReport.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit (1)
 */

@interface HKDiagnosticTestReport : HKMedicalRecord <HDCoding, NSCopying, NSSecureCoding> {
    NSArray * _diagnosticTestCodings;
    HKMedicalDate * _effectiveEndDate;
    HKMedicalDate * _effectiveStartDate;
    HKMedicalDate * _issueDate;
    NSString * _panelName;
    NSArray * _results;
    HKMedicalCoding * _status;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSArray *diagnosticTestCodings;
@property (readonly, copy) HKDiagnosticTestReportType *diagnosticTestReportType;
@property (readonly, copy) HKMedicalDate *effectiveEndDate;
@property (readonly, copy) HKMedicalDate *effectiveStartDate;
@property (readonly) unsigned long long hash;
@property (readonly, copy) HKMedicalDate *issueDate;
@property (readonly, copy) NSString *panelName;
@property (readonly, copy) NSArray *results;
@property (readonly, copy) HKMedicalCoding *status;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (bool)_isConcreteObjectClass;
+ (id)defaultDisplayString;
+ (id)diagnosticTestCodingsPreferredSystems;
+ (id)diagnosticTestReportWithType:(id)arg1 note:(id)arg2 enteredInError:(bool)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 extractionVersion:(long long)arg6 device:(id)arg7 metadata:(id)arg8 diagnosticTestCodings:(id)arg9 panelName:(id)arg10 results:(id)arg11 effectiveStartDate:(id)arg12 status:(id)arg13 effectiveEndDate:(id)arg14 issueDate:(id)arg15;
+ (id)diagnosticTestReportWithType:(id)arg1 note:(id)arg2 enteredInError:(bool)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 extractionVersion:(long long)arg6 device:(id)arg7 metadata:(id)arg8 sortDate:(id)arg9 diagnosticTestCodings:(id)arg10 panelName:(id)arg11 results:(id)arg12 effectiveStartDate:(id)arg13 status:(id)arg14 effectiveEndDate:(id)arg15 issueDate:(id)arg16;
+ (id)statusPreferredSystems;
+ (bool)supportsEquivalence;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_setDiagnosticTestCodings:(id)arg1;
- (void)_setEffectiveEndDate:(id)arg1;
- (void)_setEffectiveStartDate:(id)arg1;
- (void)_setIssueDate:(id)arg1;
- (void)_setPanelName:(id)arg1;
- (void)_setResults:(id)arg1;
- (void)_setStatus:(id)arg1;
- (id)_validateConfiguration;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)diagnosticTestCodings;
- (id)diagnosticTestCodingsTasks;
- (id)diagnosticTestReportType;
- (id)effectiveEndDate;
- (id)effectiveStartDate;
- (void)encodeWithCoder:(id)arg1;
- (id)indexKeywords;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEquivalent:(id)arg1;
- (id)issueDate;
- (id)medicalRecordCodings;
- (id)medicalRecordPreferredSystems;
- (id)panelName;
- (id)results;
- (id)status;
- (id)statusTasks;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (id)createWithCodable:(id)arg1;
+ (Class)hd_dataEntityClass;

- (bool)addCodableRepresentationToCollection:(id)arg1;
- (id)codableRepresentationForSync;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

- (id)sortDateTitle;

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