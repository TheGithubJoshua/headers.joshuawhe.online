<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>AXMDiagnosticMetric.h</title>
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

/PrivateFrameworks/AXMediaUtilities.framework/AXMDiagnosticMetric.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities (1)
 */

@interface AXMDiagnosticMetric : NSObject <NSSecureCoding> {
    struct mach_task_basic_info { 
        unsigned long long virtual_size; 
        unsigned long long resident_size; 
        unsigned long long resident_size_max; 
        struct time_value { 
            int seconds; 
            int microseconds; 
        } user_time; 
        struct time_value { 
            int seconds; 
            int microseconds; 
        } system_time; 
        int policy; 
        int suspend_count; 
    }  _endTaskInfo;
    unsigned long long  _endTime;
    struct task_vm_info { 
        unsigned long long virtual_size; 
        int region_count; 
        int page_size; 
        unsigned long long resident_size; 
        unsigned long long resident_size_peak; 
        unsigned long long device; 
        unsigned long long device_peak; 
        unsigned long long internal; 
        unsigned long long internal_peak; 
        unsigned long long external; 
        unsigned long long external_peak; 
        unsigned long long reusable; 
        unsigned long long reusable_peak; 
        unsigned long long purgeable_volatile_pmap; 
        unsigned long long purgeable_volatile_resident; 
        unsigned long long purgeable_volatile_virtual; 
        unsigned long long compressed; 
        unsigned long long compressed_peak; 
        unsigned long long compressed_lifetime; 
        unsigned long long phys_footprint; 
        unsigned long long min_address; 
        unsigned long long max_address; 
    }  _endVMInfo;
    NSString * _name;
    long long  _representedMetrics;
    struct mach_task_basic_info { 
        unsigned long long virtual_size; 
        unsigned long long resident_size; 
        unsigned long long resident_size_max; 
        struct time_value { 
            int seconds; 
            int microseconds; 
        } user_time; 
        struct time_value { 
            int seconds; 
            int microseconds; 
        } system_time; 
        int policy; 
        int suspend_count; 
    }  _startTaskInfo;
    unsigned long long  _startTime;
    struct task_vm_info { 
        unsigned long long virtual_size; 
        int region_count; 
        int page_size; 
        unsigned long long resident_size; 
        unsigned long long resident_size_peak; 
        unsigned long long device; 
        unsigned long long device_peak; 
        unsigned long long internal; 
        unsigned long long internal_peak; 
        unsigned long long external; 
        unsigned long long external_peak; 
        unsigned long long reusable; 
        unsigned long long reusable_peak; 
        unsigned long long purgeable_volatile_pmap; 
        unsigned long long purgeable_volatile_resident; 
        unsigned long long purgeable_volatile_virtual; 
        unsigned long long compressed; 
        unsigned long long compressed_peak; 
        unsigned long long compressed_lifetime; 
        unsigned long long phys_footprint; 
        unsigned long long min_address; 
        unsigned long long max_address; 
    }  _startVMInfo;
    long long  _state;
}

@property (nonatomic, readonly) NSNumber *elapsedTime;
@property (nonatomic, readonly) NSNumber *finalPhysicalFootprint;
@property (nonatomic, readonly) NSNumber *finalResidentMemory;
@property (nonatomic, readonly) NSNumber *finalResidentMemoryPeak;
@property (nonatomic, readonly) NSNumber *finalTime;
@property (nonatomic, readonly) NSNumber *initialPhysicalFootprint;
@property (nonatomic, readonly) NSNumber *initialResidentMemory;
@property (nonatomic, readonly) NSNumber *initialResidentMemoryPeak;
@property (nonatomic, readonly) NSNumber *initialTime;
@property (nonatomic, readonly) bool isElapsedTimeMetric;
@property (nonatomic, readonly) bool isMemoryFootprintMetric;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, readonly) NSNumber *physicalFootprintDelta;
@property (nonatomic) long long representedMetrics;
@property (nonatomic, readonly) NSNumber *residentMemoryDelta;
@property (nonatomic, readonly) NSNumber *residentMemoryPeakDelta;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_capturMachAbsoluteTime:(unsigned long long*)arg1 taskInfo:(struct mach_task_basic_info { unsigned long long x1; unsigned long long x2; unsigned long long x3; struct time_value { int x_4_1_1; int x_4_1_2; } x4; struct time_value { int x_5_1_1; int x_5_1_2; } x5; int x6; int x7; }*)arg2 vmInfo:(struct task_vm_info { unsigned long long x1; int x2; int x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; unsigned long long x15; unsigned long long x16; unsigned long long x17; unsigned long long x18; unsigned long long x19; unsigned long long x20; unsigned long long x21; unsigned long long x22; }*)arg3;
- (void)_commonInit;
- (id)elapsedTime;
- (void)encodeWithCoder:(id)arg1;
- (id)finalPhysicalFootprint;
- (id)finalResidentMemory;
- (id)finalResidentMemoryPeak;
- (id)finalTime;
- (void)finish;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 metrics:(long long)arg2;
- (id)initialPhysicalFootprint;
- (id)initialResidentMemory;
- (id)initialResidentMemoryPeak;
- (id)initialTime;
- (bool)isElapsedTimeMetric;
- (bool)isMemoryFootprintMetric;
- (id)name;
- (id)physicalFootprintDelta;
- (long long)representedMetrics;
- (id)residentMemoryDelta;
- (id)residentMemoryPeakDelta;
- (void)setName:(id)arg1;
- (void)setRepresentedMetrics:(long long)arg1;
- (void)start;

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
