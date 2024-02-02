<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>HKHealthWrapEncryptor.h</title>
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

/Frameworks/HealthKit.framework/HKHealthWrapEncryptor.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit (1)
 */

@interface HKHealthWrapEncryptor : NSObject {
    unsigned int  _algorithm;
    NSMutableData * _buffer;
    struct __SecCertificate { } * _certificate;
    bool  _compressionEnabled;
    struct _CCCryptor { } * _cryptor;
    unsigned long long  _encryptedBytesCount;
    HKHealthWrapCodableMessageHeader * _header;
    unsigned int  _hmacAlgorithm;
    struct { 
        unsigned int ctx[96]; 
    }  _hmacContext;
    unsigned int  _keySize;
    unsigned int  _options;
    NSOutputStream * _outputStream;
    struct CC_SHA256state_st { 
        unsigned int count[2]; 
        unsigned int hash[8]; 
        unsigned int wbuf[16]; 
    }  _sha256Context;
    NSUUID * _studyUUID;
    NSUUID * _uuid;
}

- (void).cxx_destruct;
- (bool)_appendEncryptedBytes:(const char *)arg1 length:(unsigned long long)arg2 error:(id*)arg3;
- (struct __SecKey { }*)_copyAndVerifyPublicKeyFromCertificate:(struct __SecCertificate { }*)arg1 error:(id*)arg2;
- (id)_encryptData:(id)arg1 withCertificate:(struct __SecCertificate { }*)arg2 error:(id*)arg3;
- (bool)_finalizeCryptorWithError:(id*)arg1;
- (bool)_startCryptorWithError:(id*)arg1;
- (bool)_updateCryptorWithData:(id)arg1 error:(id*)arg2;
- (bool)_updateHeaderWithKey:(id)arg1 iv:(id)arg2 hmacKey:(id)arg3 error:(id*)arg4;
- (bool)_writeStream:(const char *)arg1 length:(unsigned long long)arg2 hash:(bool)arg3 error:(id*)arg4;
- (bool)appendData:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (bool)finalizeWithError:(id*)arg1;
- (id)initWithOutputStream:(id)arg1 certificate:(struct __SecCertificate { }*)arg2 algorithm:(unsigned int)arg3 options:(unsigned int)arg4 keySize:(unsigned int)arg5 uuid:(id)arg6 studyUUID:(id)arg7 compressionEnabled:(bool)arg8;
- (bool)startWithError:(id*)arg1;

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