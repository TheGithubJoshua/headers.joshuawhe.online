<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>AWAttentionAwarenessConfiguration.h</title>
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

/PrivateFrameworks/AttentionAwareness.framework/AWAttentionAwarenessConfiguration.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/AttentionAwareness.framework/AttentionAwareness (34.200.9)
 */

@interface AWAttentionAwarenessConfiguration : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary * _attentionLostTimeoutDictionary;
    NSSet * _attentionLostTimeouts;
    unsigned long long  _eventMask;
    NSString * _identifier;
    double  _samplingDelay;
    bool  _samplingDelayExplicitlySet;
    double  _samplingInterval;
    <NSCopying> * _tag;
    unsigned long long  _tagIndex;
}

@property (nonatomic, copy) NSDictionary *attentionLostTimeoutDictionary;
@property (nonatomic, copy) NSSet *attentionLostTimeouts;
@property (nonatomic) unsigned long long eventMask;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) double samplingDelay;
@property (nonatomic) double samplingInterval;
@property (nonatomic, copy) <NSCopying> *tag;

+ (void)cancelNotification:(struct AWNotification_s { }*)arg1;
+ (void)initialize;
+ (struct AWNotification_s { }*)notifySupportedEventsChangedWithQueue:(id)arg1 block:(id /* block */)arg2;
+ (unsigned long long)supportedEvents;
+ (id)supportedEventsString;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attentionLostTimeoutDictionary;
- (id)attentionLostTimeouts;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)eventMask;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (double)samplingDelay;
- (double)samplingInterval;
- (void)setAttentionLostTimeout:(double)arg1;
- (void)setAttentionLostTimeoutDictionary:(id)arg1;
- (void)setAttentionLostTimeouts:(id)arg1;
- (void)setEventMask:(unsigned long long)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setSamplingDelay:(double)arg1;
- (void)setSamplingInterval:(double)arg1;
- (void)setTag:(id)arg1;
- (id)tag;
- (unsigned long long)tagIndex;

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
