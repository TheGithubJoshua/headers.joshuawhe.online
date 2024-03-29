<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>_CTFontFallbacksArray.h</title>
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

/Frameworks/CoreText.framework/_CTFontFallbacksArray.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/CoreText.framework/CoreText (352.0)
 */

@interface _CTFontFallbacksArray : NSArray {
    const struct TBaseFont { int (**x1)(); struct atomic<int> { _Atomic int x_2_1_1; } x2; struct TCFRef<const __CFData *> { struct TAtomicPtr<const __CFData *> { _Atomic struct __CFData {} *x_1_2_1; } x_3_1_1; } x3; struct TCFRef<const __CFData *> { struct TAtomicPtr<const __CFData *> { _Atomic struct __CFData {} *x_1_2_1; } x_4_1_1; } x4; struct TCFRef<const __CFData *> { struct TAtomicPtr<const __CFData *> { _Atomic struct __CFData {} *x_1_2_1; } x_5_1_1; } x5; struct TCFRef<const __CFData *> { struct TAtomicPtr<const __CFData *> { _Atomic struct __CFData {} *x_1_2_1; } x_6_1_1; } x6; struct TCFRef<const __CFData *> { struct TAtomicPtr<const __CFData *> { _Atomic struct __CFData {} *x_1_2_1; } x_7_1_1; } x7; struct TCFRef<const __CFData *> { struct TAtomicPtr<const __CFData *> { _Atomic struct __CFData {} *x_1_2_1; } x_8_1_1; } x8; struct TCFRef<const __CFData *> { struct TAtomicPtr<const __CFData *> { _Atomic struct __CFData {} *x_1_2_1; } x_9_1_1; } x9; struct TCFRef<const __CFData *> { struct TAtomicPtr<const __CFData *> { _Atomic struct __CFData {} *x_1_2_1; } x_10_1_1; } x10; } * _baseFont;
    NSArray * _cascade;
    unsigned long long  _count;
    NSMutableArray * _fallbacks;
    unsigned long long  _hash;
    struct TUnfairLock { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } fLock; 
    }  _lock;
    const struct TTraitsValues { unsigned int x1; double x2; double x3; double x4; } * _refTraits;
    struct TTraitsValues { 
        unsigned int fSymbolic; 
        double fWeight; 
        double fWidth; 
        double fSlant; 
    }  _traitsValue;
}

- (id).cxx_construct;
- (struct __CTFontDescriptor { }*)cachedDescriptorForCharacter:(unsigned short)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (void)dealloc;
- (void)getObjects:(id*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)initWithBaseFont:(const struct TBaseFont { int (**x1)(); struct atomic<int> { _Atomic int x_2_1_1; } x2; struct TCFRef<const __CFData *> { struct TAtomicPtr<const __CFData *> { _Atomic struct __CFData {} *x_1_2_1; } x_3_1_1; } x3; struct TCFRef<const __CFData *> { struct TAtomicPtr<const __CFData *> { _Atomic struct __CFData {} *x_1_2_1; } x_4_1_1; } x4; struct TCFRef<const __CFData *> { struct TAtomicPtr<const __CFData *> { _Atomic struct __CFData {} *x_1_2_1; } x_5_1_1; } x5; struct TCFRef<const __CFData *> { struct TAtomicPtr<const __CFData *> { _Atomic struct __CFData {} *x_1_2_1; } x_6_1_1; } x6; struct TCFRef<const __CFData *> { struct TAtomicPtr<const __CFData *> { _Atomic struct __CFData {} *x_1_2_1; } x_7_1_1; } x7; struct TCFRef<const __CFData *> { struct TAtomicPtr<const __CFData *> { _Atomic struct __CFData {} *x_1_2_1; } x_8_1_1; } x8; struct TCFRef<const __CFData *> { struct TAtomicPtr<const __CFData *> { _Atomic struct __CFData {} *x_1_2_1; } x_9_1_1; } x9; struct TCFRef<const __CFData *> { struct TAtomicPtr<const __CFData *> { _Atomic struct __CFData {} *x_1_2_1; } x_10_1_1; } x10; }*)arg1 cascade:(id)arg2;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)objectAtIndex:(unsigned long long)arg1 shouldLock:(bool)arg2 addRanges:(bool)arg3;

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
