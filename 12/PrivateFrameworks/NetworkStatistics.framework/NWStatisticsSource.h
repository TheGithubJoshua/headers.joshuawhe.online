<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>NWStatisticsSource.h</title>
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

/PrivateFrameworks/NetworkStatistics.framework/NWStatisticsSource.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/NetworkStatistics.framework/NetworkStatistics (1)
 */

@interface NWStatisticsSource : NSObject {
    unsigned long long  _countsSeqno;
    <NWStatisticsSourceDelegate> * _delegate;
    unsigned long long  _descriptorSeqno;
    unsigned int  _filter;
    struct nstat_counts { 
        unsigned long long nstat_rxpackets; 
        unsigned long long nstat_rxbytes; 
        unsigned long long nstat_txpackets; 
        unsigned long long nstat_txbytes; 
        unsigned long long nstat_cell_rxbytes; 
        unsigned long long nstat_cell_txbytes; 
        unsigned long long nstat_wifi_rxbytes; 
        unsigned long long nstat_wifi_txbytes; 
        unsigned long long nstat_wired_rxbytes; 
        unsigned long long nstat_wired_txbytes; 
        unsigned int nstat_rxduplicatebytes; 
        unsigned int nstat_rxoutoforderbytes; 
        unsigned int nstat_txretransmit; 
        unsigned int nstat_connectattempts; 
        unsigned int nstat_connectsuccesses; 
        unsigned int nstat_min_rtt; 
        unsigned int nstat_avg_rtt; 
        unsigned int nstat_var_rtt; 
    }  _last_counts;
    NWStatisticsManager * _manager;
    unsigned int  _provider;
    unsigned long long  _reference;
    bool  _removing;
}

@property (readonly) const struct nstat_counts { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; }*_nstat_counts;
@property unsigned long long countsSeqno;
@property (retain) <NWStatisticsSourceDelegate> *delegate;
@property unsigned long long descriptorSeqno;
@property (readonly) NWStatisticsManager *manager;
@property (readonly) unsigned int provider;
@property unsigned long long reference;
@property bool removing;
@property (readonly) unsigned long long snapshotRevision;
@property (readonly) unsigned long long sourceIdentifier;

+ (id)createSourceForProvider:(unsigned int)arg1 srcRef:(unsigned long long)arg2 manager:(id)arg3;

- (void).cxx_destruct;
- (id)_currentSnapshot;
- (bool)_handleDescriptor:(void*)arg1 length:(unsigned long long)arg2;
- (const struct nstat_counts { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; }*)_nstat_counts;
- (unsigned long long)countsSeqno;
- (id)currentSnapshot;
- (id)delegate;
- (unsigned long long)descriptorSeqno;
- (bool)handleCounts:(const struct nstat_counts { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; }*)arg1;
- (int)handleDescriptor:(void*)arg1 length:(unsigned long long)arg2;
- (bool)handleMessage:(struct nstat_msg_hdr { unsigned long long x1; unsigned int x2; unsigned short x3; unsigned short x4; }*)arg1 length:(long long)arg2;
- (id)init;
- (id)initWithManager:(id)arg1 source:(unsigned long long)arg2 provider:(unsigned int)arg3;
- (id)manager;
- (unsigned int)provider;
- (void)queryCounts;
- (void)queryDescription;
- (void)queryUpdate;
- (unsigned long long)reference;
- (bool)removing;
- (void)setCountsSeqno:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDescriptorSeqno:(unsigned long long)arg1;
- (void)setReference:(unsigned long long)arg1;
- (void)setRemoving:(bool)arg1;
- (unsigned long long)snapshotRevision;
- (unsigned long long)sourceIdentifier;

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
