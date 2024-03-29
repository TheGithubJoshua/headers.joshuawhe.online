<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>MTLSamplerDescriptorInternal.h</title>
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

/Frameworks/Metal.framework/MTLSamplerDescriptorInternal.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/Metal.framework/Metal (161.6.2)
 */

@interface MTLSamplerDescriptorInternal : MTLSamplerDescriptor {
    struct MTLSamplerDescriptorPrivate { 
        union { 
            struct { 
                unsigned int minFilter : 2; 
                unsigned int magFilter : 2; 
                unsigned int mipFilter : 2; 
                unsigned int sAddressMode : 3; 
                unsigned int tAddressMode : 3; 
                unsigned int rAddressMode : 3; 
                unsigned int normalizedCoords : 1; 
                unsigned int lodAverage : 1; 
                unsigned int compareFunction : 3; 
                unsigned int supportArgumentBuffers : 1; 
                unsigned int forceResourceIndex : 1; 
            } ; 
            unsigned int miscHash; 
        } ; 
        union { 
            unsigned int lodMinClampHash; 
            float lodMinClamp; 
        } ; 
        union { 
            unsigned int lodMaxClampHash; 
            float lodMaxClamp; 
        } ; 
        union { 
            unsigned int lodBiasHash; 
            float lodBias; 
        } ; 
        unsigned long long maxAnisotropy; 
        NSString *label; 
        unsigned int resourceIndex; 
    }  _private;
}

- (unsigned long long)compareFunction;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (const struct MTLSamplerDescriptorPrivate { union { struct { unsigned int x_1_2_1 : 2; unsigned int x_1_2_2 : 2; unsigned int x_1_2_3 : 2; unsigned int x_1_2_4 : 3; unsigned int x_1_2_5 : 3; unsigned int x_1_2_6 : 3; unsigned int x_1_2_7 : 1; unsigned int x_1_2_8 : 1; unsigned int x_1_2_9 : 3; unsigned int x_1_2_10 : 1; unsigned int x_1_2_11 : 1; } x_1_1_1; unsigned int x_1_1_2; } x1; union { unsigned int x_2_1_1; float x_2_1_2; } x2; union { unsigned int x_3_1_1; float x_3_1_2; } x3; union { unsigned int x_4_1_1; float x_4_1_2; } x4; unsigned long long x5; id x6; unsigned int x7; }*)descriptorPrivate;
- (bool)forceResourceIndex;
- (id)formattedDescription:(unsigned long long)arg1;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)label;
- (bool)lodAverage;
- (float)lodBias;
- (float)lodMaxClamp;
- (float)lodMinClamp;
- (unsigned long long)magFilter;
- (unsigned long long)maxAnisotropy;
- (unsigned long long)minFilter;
- (unsigned long long)mipFilter;
- (bool)normalizedCoordinates;
- (unsigned long long)rAddressMode;
- (unsigned long long)resourceIndex;
- (unsigned long long)sAddressMode;
- (void)setCompareFunction:(unsigned long long)arg1;
- (void)setForceResourceIndex:(bool)arg1;
- (void)setLabel:(id)arg1;
- (void)setLodAverage:(bool)arg1;
- (void)setLodBias:(float)arg1;
- (void)setLodMaxClamp:(float)arg1;
- (void)setLodMinClamp:(float)arg1;
- (void)setMagFilter:(unsigned long long)arg1;
- (void)setMaxAnisotropy:(unsigned long long)arg1;
- (void)setMinFilter:(unsigned long long)arg1;
- (void)setMipFilter:(unsigned long long)arg1;
- (void)setNormalizedCoordinates:(bool)arg1;
- (void)setRAddressMode:(unsigned long long)arg1;
- (void)setResourceIndex:(unsigned long long)arg1;
- (void)setSAddressMode:(unsigned long long)arg1;
- (void)setSupportArgumentBuffers:(bool)arg1;
- (void)setTAddressMode:(unsigned long long)arg1;
- (bool)supportArgumentBuffers;
- (unsigned long long)tAddressMode;

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
