<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>WebCoreMotionManager.h</title>
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

/PrivateFrameworks/WebCore.framework/WebCoreMotionManager.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore (8607.3.18)
 */

@interface WebCoreMotionManager : NSObject {
    struct HashSet<WebCore::DeviceMotionClientIOS *, WTF::PtrHash<WebCore::DeviceMotionClientIOS *>, WTF::HashTraits<WebCore::DeviceMotionClientIOS *> > { 
        struct HashTable<WebCore::DeviceMotionClientIOS *, WebCore::DeviceMotionClientIOS *, WTF::IdentityExtractor, WTF::PtrHash<WebCore::DeviceMotionClientIOS *>, WTF::HashTraits<WebCore::DeviceMotionClientIOS *>, WTF::HashTraits<WebCore::DeviceMotionClientIOS *> > { 
            struct DeviceMotionClientIOS {} **m_table; 
            unsigned int m_tableSize; 
            unsigned int m_tableSizeMask; 
            unsigned int m_keyCount; 
            unsigned int m_deletedCount; 
        } m_impl; 
    }  m_deviceMotionClients;
    struct HashSet<WebCore::DeviceOrientationClientIOS *, WTF::PtrHash<WebCore::DeviceOrientationClientIOS *>, WTF::HashTraits<WebCore::DeviceOrientationClientIOS *> > { 
        struct HashTable<WebCore::DeviceOrientationClientIOS *, WebCore::DeviceOrientationClientIOS *, WTF::IdentityExtractor, WTF::PtrHash<WebCore::DeviceOrientationClientIOS *>, WTF::HashTraits<WebCore::DeviceOrientationClientIOS *>, WTF::HashTraits<WebCore::DeviceOrientationClientIOS *> > { 
            struct DeviceOrientationClientIOS {} **m_table; 
            unsigned int m_tableSize; 
            unsigned int m_tableSizeMask; 
            unsigned int m_keyCount; 
            unsigned int m_deletedCount; 
        } m_impl; 
    }  m_deviceOrientationClients;
    bool  m_gyroAvailable;
    bool  m_headingAvailable;
    bool  m_initialized;
    CLLocationManager * m_locationManager;
    CMMotionManager * m_motionManager;
    NSTimer * m_updateTimer;
}

+ (id)sharedManager;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addMotionClient:(struct DeviceMotionClientIOS { int (**x1)(); id x2; struct DeviceMotionController {} *x3; struct RefPtr<WebCore::DeviceMotionData, WTF::DumbPtrTraits<WebCore::DeviceMotionData> > { struct DeviceMotionData {} *x_4_1_1; } x4; bool x5; }*)arg1;
- (void)addOrientationClient:(struct DeviceOrientationClientIOS { int (**x1)(); id x2; struct DeviceOrientationController {} *x3; struct RefPtr<WebCore::DeviceOrientationData, WTF::DumbPtrTraits<WebCore::DeviceOrientationData> > { struct DeviceOrientationData {} *x_4_1_1; } x4; bool x5; }*)arg1;
- (void)checkClientStatus;
- (void)dealloc;
- (bool)gyroAvailable;
- (bool)headingAvailable;
- (id)init;
- (void)initializeOnMainThread;
- (void)removeMotionClient:(struct DeviceMotionClientIOS { int (**x1)(); id x2; struct DeviceMotionController {} *x3; struct RefPtr<WebCore::DeviceMotionData, WTF::DumbPtrTraits<WebCore::DeviceMotionData> > { struct DeviceMotionData {} *x_4_1_1; } x4; bool x5; }*)arg1;
- (void)removeOrientationClient:(struct DeviceOrientationClientIOS { int (**x1)(); id x2; struct DeviceOrientationController {} *x3; struct RefPtr<WebCore::DeviceOrientationData, WTF::DumbPtrTraits<WebCore::DeviceOrientationData> > { struct DeviceOrientationData {} *x_4_1_1; } x4; bool x5; }*)arg1;
- (void)sendAccelerometerData:(id)arg1;
- (void)sendMotionData:(id)arg1 withHeading:(id)arg2;
- (void)update;

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
