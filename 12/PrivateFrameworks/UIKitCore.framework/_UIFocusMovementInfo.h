<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>_UIFocusMovementInfo.h</title>
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

/PrivateFrameworks/UIKitCore.framework/_UIFocusMovementInfo.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore (61000)
 */

@interface _UIFocusMovementInfo : NSObject <BSXPCCoding, NSCopying> {
    unsigned long long  _heading;
    bool  _isInitialMovement;
    bool  _isVelocityBased;
    _UIFocusMovementInfo * _primaryMovementInfo;
    unsigned long long  _secondaryHeading;
    _UIFocusMovementInfo * _secondaryMovementInfo;
    struct CGVector { 
        double dx; 
        double dy; 
    }  _velocity;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (setter=_setHeading:, nonatomic) unsigned long long heading;
@property (getter=_isInitialMovement, setter=_setIsInitialMovement:, nonatomic) bool isInitialMovement;
@property (getter=_isVelocityBased, setter=_setIsVelocityBased:, nonatomic) bool isVelocityBased;
@property (nonatomic, readonly) _UIFocusMovementInfo *primaryMovementInfo;
@property (getter=_secondaryHeading, setter=_setSecondaryHeading:, nonatomic) unsigned long long secondaryHeading;
@property (nonatomic, readonly) _UIFocusMovementInfo *secondaryMovementInfo;
@property (readonly) Class superclass;
@property (getter=_velocity, setter=_setVelocity:, nonatomic) struct CGVector { double x1; double x2; } velocity;

+ (id)_movementWithHeading:(unsigned long long)arg1 isInitial:(bool)arg2;
+ (id)_movementWithHeading:(unsigned long long)arg1 secondaryHeading:(unsigned long long)arg2 velocity:(struct CGVector { double x1; double x2; })arg3 isInitial:(bool)arg4;
+ (id)_movementWithHeading:(unsigned long long)arg1 velocity:(struct CGVector { double x1; double x2; })arg2 isInitial:(bool)arg3;
+ (id)_movementWithVelocity:(struct CGVector { double x1; double x2; })arg1 isInitial:(bool)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_isInitialMovement;
- (bool)_isVelocityBased;
- (unsigned long long)_secondaryHeading;
- (void)_setHeading:(unsigned long long)arg1;
- (void)_setIsInitialMovement:(bool)arg1;
- (void)_setIsVelocityBased:(bool)arg1;
- (void)_setSecondaryHeading:(unsigned long long)arg1;
- (void)_setVelocity:(struct CGVector { double x1; double x2; })arg1;
- (struct CGVector { double x1; double x2; })_velocity;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (unsigned long long)heading;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)primaryMovementInfo;
- (id)secondaryMovementInfo;

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