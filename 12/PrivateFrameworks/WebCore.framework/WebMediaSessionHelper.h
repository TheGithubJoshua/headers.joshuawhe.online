<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>WebMediaSessionHelper.h</title>
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

/PrivateFrameworks/WebCore.framework/WebMediaSessionHelper.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore (8607.3.18)
 */

@interface WebMediaSessionHelper : NSObject {
    struct MediaSessionManageriOS { int (**x1)(); int (**x2)(); int (**x3)(); unsigned int x4[6]; struct Vector<WebCore::PlatformMediaSession *, 0, WTF::CrashOnOverflow, 16> { struct PlatformMediaSession {} **x_5_1_1; unsigned int x_5_1_2; unsigned int x_5_1_3; } x5; struct unique_ptr<WebCore::RemoteCommandListener, std::__1::default_delete<WebCore::RemoteCommandListener> > { struct __compressed_pair<WebCore::RemoteCommandListener *, std::__1::default_delete<WebCore::RemoteCommandListener> > { struct RemoteCommandListener {} *x_1_2_1; } x_6_1_1; } x6; struct unique_ptr<PAL::SystemSleepListener, std::__1::default_delete<PAL::SystemSleepListener> > { struct __compressed_pair<PAL::SystemSleepListener *, std::__1::default_delete<PAL::SystemSleepListener> > { struct SystemSleepListener {} *x_1_2_1; } x_7_1_1; } x7; struct RefPtr<WebCore::AudioHardwareListener, WTF::DumbPtrTraits<WebCore::AudioHardwareListener> > { struct AudioHardwareListener {} *x_8_1_1; } x8; bool x9; bool x10; bool x11; int x12; bool x13; bool x14; bool x15; struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl {} *x_1_2_1; } x_16_1_1; } x16; } * _callback;
    bool  _monitoringAirPlayRoutes;
    struct RetainPtr<AVRouteDetector> { 
        void *m_ptr; 
    }  _routeDetector;
    bool  _startMonitoringAirPlayRoutesPending;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)clearCallback;
- (void)dealloc;
- (bool)hasWirelessTargetsAvailable;
- (id)initWithCallback:(struct MediaSessionManageriOS { int (**x1)(); int (**x2)(); int (**x3)(); unsigned int x4[6]; struct Vector<WebCore::PlatformMediaSession *, 0, WTF::CrashOnOverflow, 16> { struct PlatformMediaSession {} **x_5_1_1; unsigned int x_5_1_2; unsigned int x_5_1_3; } x5; struct unique_ptr<WebCore::RemoteCommandListener, std::__1::default_delete<WebCore::RemoteCommandListener> > { struct __compressed_pair<WebCore::RemoteCommandListener *, std::__1::default_delete<WebCore::RemoteCommandListener> > { struct RemoteCommandListener {} *x_1_2_1; } x_6_1_1; } x6; struct unique_ptr<PAL::SystemSleepListener, std::__1::default_delete<PAL::SystemSleepListener> > { struct __compressed_pair<PAL::SystemSleepListener *, std::__1::default_delete<PAL::SystemSleepListener> > { struct SystemSleepListener {} *x_1_2_1; } x_7_1_1; } x7; struct RefPtr<WebCore::AudioHardwareListener, WTF::DumbPtrTraits<WebCore::AudioHardwareListener> > { struct AudioHardwareListener {} *x_8_1_1; } x8; bool x9; bool x10; bool x11; int x12; bool x13; bool x14; bool x15; struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl {} *x_1_2_1; } x_16_1_1; } x16; }*)arg1;
- (void)interruption:(id)arg1;
- (void)startMonitoringAirPlayRoutes;
- (void)stopMonitoringAirPlayRoutes;
- (void)wirelessRoutesAvailableDidChange:(id)arg1;

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
