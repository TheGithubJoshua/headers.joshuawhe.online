<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>BWHDRNode.h</title>
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

/PrivateFrameworks/Celestial.framework/BWHDRNode.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial (2290.13.1.3)
 */

@interface BWHDRNode : BWNode {
    bool  _alwaysRequestsPreBracketedEV0;
    int  _bracketCount;
    int  _clientPID;
    int (* _createSampleBufferProcessorFunction;
    FigCaptureStillImageSettings * _currentRequestedStillImageCaptureSettings;
    BWStillImageCaptureSettings * _currentResolvedStillImageCaptureSettings;
    unsigned int  _emittedFrameOrErrorCount;
    NSArray * _exposureValues;
    struct opaqueCMSampleBuffer {} * _pendingBracketBuffers;
    bool  _preBracketedFrameExpected;
    bool  _preBracketedFrameReceived;
    NSMutableArray * _receivedNodeErrors;
    struct OpaqueFigSampleBufferProcessor { } * _sampleBufferProcessor;
    NSDictionary * _sensorIDDictionary;
    FigCapturePixelConverter * _stereoFusionPixelConverter;
    bool  _supportsStereoFusionCaptures;
    BWPixelBufferPool * _telephotoHDREV0DisparityBufferPool;
    struct OpaqueVTPixelTransferSession { } * _telephotoHDREV0DisparityCopySession;
    struct opaqueCMFormatDescription { } * _telephotoHDREV0DisparityFormatDescription;
}

+ (void)initialize;

- (void)_clearCaptureRequestState;
- (void)_configureCaptureRequestStateWithRequestedStillImageCaptureSettings:(id)arg1 resolvedStillImageCaptureSettings:(id)arg2;
- (void)_emitNodeErrorToReportFailedOutputFrame;
- (void)_emitNodeErrorsIfNecessary;
- (void)_hdrProcessorOutputReady:(int)arg1 sampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2;
- (id)_initWithClientPID:(int)arg1 sensorIDDictionary:(id)arg2 sbpCreationFunction:(int (*)arg3;
- (bool)_receivedExpectedNumberOfInputFramesOrErrors;
- (int)_setupSampleBufferProcessor;
- (bool)alwaysRequestsPreBracketedEV0;
- (bool)attachesInputBracketToOutputSampleBuffer;
- (void)dealloc;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (void)handleNodeError:(id)arg1 forInput:(id)arg2;
- (id)initWithClientPID:(int)arg1 sensorIDDictionary:(id)arg2;
- (id)nodeSubType;
- (id)nodeType;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (void)setAlwaysRequestsPreBracketedEV0:(bool)arg1;
- (void)setAttachesInputBracketToOutputSampleBuffer:(bool)arg1;
- (void)setSupportsStereoFusionCaptures:(bool)arg1;
- (bool)supportsStereoFusionCaptures;

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