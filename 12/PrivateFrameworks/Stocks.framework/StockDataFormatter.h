<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>StockDataFormatter.h</title>
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

/PrivateFrameworks/Stocks.framework/StockDataFormatter.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks ()
 */

@interface StockDataFormatter : NSObject {
    NSNumberFormatter * _decimalFormatter;
    NSObject<OS_dispatch_queue> * _decimalFormatterQueue;
    bool  _localeUsesASCII;
    NSNumberFormatter * _percentFormatter;
    NSObject<OS_dispatch_queue> * _percentFormatterQueue;
}

@property (nonatomic, retain) NSNumberFormatter *decimalFormatter;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *decimalFormatterQueue;
@property (getter=doesLocaleUseASCII, nonatomic, readonly) bool localeUsesASCII;
@property (nonatomic, retain) NSNumberFormatter *percentFormatter;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *percentFormatterQueue;
@property (nonatomic, readonly) NSString *percentSymbol;

+ (id)sharedDataFormatter;

- (void).cxx_destruct;
- (id)_locked_formatNumber:(id)arg1 withPrecision:(unsigned long long)arg2 useGroupSeparator:(bool)arg3;
- (id)_locked_formatPercent:(id)arg1 withPrecision:(unsigned long long)arg2;
- (void)_resetLocale:(id)arg1;
- (void)dealloc;
- (id)decimalFormatter;
- (id)decimalFormatterQueue;
- (bool)doesLocaleUseASCII;
- (id)formattedChangeInPercentForStock:(id)arg1;
- (id)formattedChangeInPointsForStock:(id)arg1 withPrecision:(unsigned long long)arg2;
- (id)formattedChangeInPointsForStock:(id)arg1 withPrecision:(unsigned long long)arg2 droppingFractionDigitsIfLengthExceeds:(unsigned long long)arg3;
- (id)formattedNumber:(id)arg1 withPrecision:(unsigned long long)arg2 useGroupSeparator:(bool)arg3;
- (id)formattedNumber:(id)arg1 withPrecision:(unsigned long long)arg2 useGroupSeparator:(bool)arg3 droppingFractionDigitsIfLengthExceeds:(unsigned long long)arg4;
- (id)formattedPercent:(id)arg1;
- (id)formattedPercent:(id)arg1 withPrecision:(unsigned long long)arg2;
- (id)formattedPriceForStock:(id)arg1 withPrecision:(unsigned long long)arg2;
- (id)formattedPriceForStock:(id)arg1 withPrecision:(unsigned long long)arg2 droppingFractionDigitsIfLengthExceeds:(unsigned long long)arg3;
- (id)initPrivate;
- (id)percentFormatter;
- (id)percentFormatterQueue;
- (id)percentSymbol;
- (void)setDecimalFormatter:(id)arg1;
- (void)setDecimalFormatterQueue:(id)arg1;
- (void)setPercentFormatter:(id)arg1;
- (void)setPercentFormatterQueue:(id)arg1;

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