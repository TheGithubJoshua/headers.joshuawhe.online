<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PTPDeviceInfoDataset.h</title>
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

/PrivateFrameworks/ImageCapture.framework/PTPDeviceInfoDataset.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture (1534.2)
 */

@interface PTPDeviceInfoDataset : NSObject {
    NSMutableArray * _captureFormats;
    NSMutableData * _content;
    NSMutableArray * _devicePropertiesSupported;
    NSString * _deviceVersion;
    bool  _dirty;
    NSMutableArray * _eventsSupported;
    unsigned short  _functionalMode;
    NSMutableArray * _imageFormats;
    NSString * _manufacturer;
    NSString * _model;
    NSMutableArray * _operationsSupported;
    bool  _readOnlyObject;
    NSString * _serialNumber;
    unsigned short  _standardVersion;
    NSString * _vendorExtensionDescription;
    unsigned int  _vendorExtensionID;
    unsigned short  _vendorExtensionVersion;
}

- (id)canonicalManufacturer;
- (id)captureFormats;
- (id)content;
- (void)dealloc;
- (id)description;
- (id)devicePropertiesSupported;
- (id)deviceVersion;
- (id)eventsSupported;
- (unsigned short)functionalMode;
- (id)imageFormats;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithMutableData:(id)arg1;
- (id)manufacturer;
- (id)model;
- (id)operationsSupported;
- (id)serialNumber;
- (void)setCaptureFormats:(id)arg1;
- (void)setContent:(id)arg1;
- (void)setDevicePropertiesSupported:(id)arg1;
- (void)setDeviceVersion:(id)arg1;
- (void)setEventsSupported:(id)arg1;
- (void)setFunctionalMode:(unsigned short)arg1;
- (void)setImageFormats:(id)arg1;
- (void)setManufacturer:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setOperationsSupported:(id)arg1;
- (void)setSerialNumber:(id)arg1;
- (void)setStandardVersion:(unsigned short)arg1;
- (void)setVendorExtensionDescription:(id)arg1;
- (void)setVendorExtensionID:(unsigned int)arg1;
- (void)setVendorExtensionVersion:(unsigned short)arg1;
- (unsigned short)standardVersion;
- (void)updateContent;
- (id)vendorExtensionDescription;
- (unsigned int)vendorExtensionID;
- (unsigned short)vendorExtensionVersion;

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
