<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>NEPathControllerNetworkAgent.h</title>
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

/Frameworks/NetworkExtension.framework/NEPathControllerNetworkAgent.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension (1)
 */

@interface NEPathControllerNetworkAgent : NENetworkAgent {
    NSString * _advisoryAgentDomain;
    NSString * _advisoryAgentType;
    NWInterface * _advisoryInterface;
    id /* block */  _internalAssertHandler;
    id /* block */  _internalUnassertHandler;
    bool  _noAdvisoryTimer;
    NWInterface * _predictedInterface;
    bool  _weakAdvisory;
}

@property (retain) NSString *advisoryAgentDomain;
@property (retain) NSString *advisoryAgentType;
@property (retain) NWInterface *advisoryInterface;
@property (copy) id /* block */ internalAssertHandler;
@property (copy) id /* block */ internalUnassertHandler;
@property bool noAdvisoryTimer;
@property (retain) NWInterface *predictedInterface;
@property bool weakAdvisory;

+ (id)agentFromData:(id)arg1;
+ (id)agentType;

- (void).cxx_destruct;
- (id)advisoryAgentDomain;
- (id)advisoryAgentType;
- (id)advisoryInterface;
- (bool)assertAgentWithOptions:(id)arg1;
- (id)copyAgentData;
- (id)initWithAdvisoryAgentDomain:(id)arg1 agentType:(id)arg2 advisoryMode:(unsigned long long)arg3;
- (id)initWithAdvisoryInterface:(id)arg1 advisoryMode:(unsigned long long)arg2;
- (id /* block */)internalAssertHandler;
- (id /* block */)internalUnassertHandler;
- (bool)noAdvisoryTimer;
- (id)predictedInterface;
- (void)setAdvisoryAgentDomain:(id)arg1;
- (void)setAdvisoryAgentType:(id)arg1;
- (void)setAdvisoryInterface:(id)arg1;
- (void)setAssertHandler:(id /* block */)arg1;
- (void)setInternalAssertHandler:(id /* block */)arg1;
- (void)setInternalUnassertHandler:(id /* block */)arg1;
- (void)setNoAdvisoryTimer:(bool)arg1;
- (void)setPredictedInterface:(id)arg1;
- (void)setUnassertHandler:(id /* block */)arg1;
- (void)setWeakAdvisory:(bool)arg1;
- (void)unassertAgentWithOptions:(id)arg1;
- (bool)weakAdvisory;

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
