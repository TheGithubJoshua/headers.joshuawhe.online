<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>SKConstraint.h</title>
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

/Frameworks/SpriteKit.framework/SKConstraint.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit (1)
 */

@interface SKConstraint : NSObject <NSCopying, NSSecureCoding> {
    bool  _enabled;
    SKNode * _referenceNode;
}

@property bool enabled;
@property (nonatomic, retain) SKNode *referenceNode;

+ (id)distance:(id)arg1 toNode:(id)arg2;
+ (id)distance:(id)arg1 toPoint:(struct CGPoint { double x1; double x2; })arg2;
+ (id)distance:(id)arg1 toPoint:(struct CGPoint { double x1; double x2; })arg2 inNode:(id)arg3;
+ (id)height:(id)arg1;
+ (id)orientToNode:(id)arg1 offset:(id)arg2;
+ (id)orientToPoint:(struct CGPoint { double x1; double x2; })arg1 inNode:(id)arg2 offset:(id)arg3;
+ (id)orientToPoint:(struct CGPoint { double x1; double x2; })arg1 offset:(id)arg2;
+ (id)positionX:(id)arg1;
+ (id)positionX:(id)arg1 Y:(id)arg2;
+ (id)positionY:(id)arg1;
+ (id)scale:(id)arg1;
+ (id)scaleX:(id)arg1;
+ (id)scaleX:(id)arg1 scaleY:(id)arg2;
+ (id)scaleY:(id)arg1;
+ (bool)supportsSecureCoding;
+ (id)width:(id)arg1;
+ (id)width:(id)arg1 height:(id)arg2;
+ (id)zRotation:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)enabled;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqualToConstraint:(id)arg1;
- (id)referenceNode;
- (void)setEnabled:(bool)arg1;
- (void)setReferenceNode:(id)arg1;

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
