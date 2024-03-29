<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>VMUProcessDescription.h</title>
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

/PrivateFrameworks/Symbolication.framework/VMUProcessDescription.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication (64492.3)
 */

@interface VMUProcessDescription : NSObject {
    NSDictionary * _binaryImageHints;
    bool  _binaryImagePostProcessingComplete;
    NSMutableArray * _binaryImages;
    NSDictionary * _buildVersionDictionary;
    int  _cpuType;
    NSDate * _date;
    NSMutableDictionary * _environment;
    unsigned long long  _executableLoadAddress;
    NSString * _executablePath;
    bool  _executablePathNeedsCorrection;
    NSString * _hardwareModel;
    bool  _is64Bit;
    NSDictionary * _lsApplicationInformation;
    struct mapped_memory_t { } * _mappedMemory;
    NSDictionary * _osVersionDictionary;
    NSString * _parentExecutablePath;
    NSString * _parentProcessName;
    unsigned long long  _physicalFootprint;
    unsigned long long  _physicalFootprintPeak;
    int  _pid;
    int  _ppid;
    struct timeval { 
        long long tv_sec; 
        int tv_usec; 
    }  _proc_starttime;
    NSString * _processName;
    bool  _processNameNeedsCorrection;
    NSArray * _sortedBinaryImages;
    struct _CSTypeRef { 
        unsigned long long _opaque_1; 
        unsigned long long _opaque_2; 
    }  _symbolicator;
    unsigned int  _task;
    bool  _taskIsCorpse;
    NSArray * _unreadableBinaryImagePaths;
}

@property (nonatomic, readonly) unsigned long long physicalFootprint;
@property (nonatomic, readonly) unsigned long long physicalFootprintPeak;

+ (id)parseBinaryImagesDescription:(id)arg1;
+ (struct _CSTypeRef { unsigned long long x1; unsigned long long x2; })symbolicatorFromBinaryImagesDescription:(id)arg1;

- (void).cxx_destruct;
- (id)_binaryImagesDescriptionForRanges:(id)arg1;
- (id)_buildInfoDescription;
- (id)_buildVersionDictionary;
- (id)_bundleLock;
- (id)_cpuTypeDescription;
- (void)_libraryLoaded:(struct _CSTypeRef { unsigned long long x1; unsigned long long x2; })arg1;
- (id)_osVersionDictionary;
- (id)_rangesOfBinaryImages:(id)arg1 forBacktraces:(id)arg2;
- (id)_sanitizeVersion:(id)arg1;
- (id)_systemVersionDescription;
- (id)binaryImageDictionaryForAddress:(unsigned long long)arg1;
- (id)binaryImages;
- (id)binaryImagesDescription;
- (id)binaryImagesDescriptionForBacktraces:(id)arg1;
- (id)bundleIdentifier;
- (void)cleansePathsIncludingBinaryImageList:(bool)arg1;
- (void)clearCrashReporterInfo;
- (int)cpuType;
- (id)date;
- (id)dateAndVersionDescription;
- (void)dealloc;
- (id)description;
- (id)displayName;
- (id)executablePath;
- (bool)initFromCorpse;
- (void)initFromLiveProcess;
- (id)initWithPid:(int)arg1 orTask:(unsigned int)arg2;
- (id)initWithTask:(unsigned int)arg1 getBinariesList:(bool)arg2;
- (bool)is64Bit;
- (bool)isAppleApplication;
- (int)parentPid;
- (id)parentProcessName;
- (id)parentProcessPath;
- (unsigned long long)physicalFootprint;
- (unsigned long long)physicalFootprintPeak;
- (int)pid;
- (id)processDescriptionHeader;
- (id)processIdentifier;
- (id)processName;
- (id)processStatisticsDescription;
- (id)processVersion;
- (id)processVersionDictionary;
- (void)setCrashReporterInfo;
- (unsigned int)task;
- (id)valueForEnvVar:(id)arg1;

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
