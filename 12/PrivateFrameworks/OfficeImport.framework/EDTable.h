<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>EDTable.h</title>
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

/PrivateFrameworks/OfficeImport.framework/EDTable.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport (257.9)
 */

@interface EDTable : NSObject {
    EDCollection * mColumnFilters;
    unsigned long long  mDataAreaBorderDxfIndex;
    unsigned long long  mDataAreaDxfIndex;
    NSString * mDisplayName;
    unsigned long long  mHeaderRowBorderDxfIndex;
    unsigned long long  mHeaderRowCount;
    unsigned long long  mHeaderRowDxfIndex;
    NSString * mName;
    EDResources * mResources;
    bool  mShowColumnStripes;
    bool  mShowFirstColumn;
    bool  mShowLastColumn;
    bool  mShowRowStripes;
    unsigned long long  mStyleIndex;
    NSString * mStyleName;
    unsigned long long  mTableBorderDxfIndex;
    EDCollection * mTableColumns;
    EDReference * mTableRange;
    unsigned long long  mTotalsRowBorderDxfIndex;
    unsigned long long  mTotalsRowCount;
    unsigned long long  mTotalsRowDxfIndex;
}

+ (id)tableWithResources:(id)arg1;

- (id)columnFilters;
- (id)dataAreaBorderDxf;
- (unsigned long long)dataAreaBorderDxfIndex;
- (id)dataAreaDxf;
- (unsigned long long)dataAreaDxfIndex;
- (void)dealloc;
- (id)description;
- (id)displayName;
- (id)headerRowBorderDxf;
- (unsigned long long)headerRowBorderDxfIndex;
- (unsigned long long)headerRowCount;
- (id)headerRowDxf;
- (unsigned long long)headerRowDxfIndex;
- (id)initWithResources:(id)arg1;
- (id)name;
- (void)setDataAreaBorderDxf:(id)arg1;
- (void)setDataAreaBorderDxfIndex:(unsigned long long)arg1;
- (void)setDataAreaDxf:(id)arg1;
- (void)setDataAreaDxfIndex:(unsigned long long)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setHeaderRowBorderDxf:(id)arg1;
- (void)setHeaderRowBorderDxfIndex:(unsigned long long)arg1;
- (void)setHeaderRowCount:(unsigned long long)arg1;
- (void)setHeaderRowDxf:(id)arg1;
- (void)setHeaderRowDxfIndex:(unsigned long long)arg1;
- (void)setName:(id)arg1;
- (void)setShowColumnStripes:(bool)arg1;
- (void)setShowFirstColumn:(bool)arg1;
- (void)setShowLastColumn:(bool)arg1;
- (void)setShowRowStripes:(bool)arg1;
- (void)setStyle:(id)arg1;
- (void)setStyleIndex:(unsigned long long)arg1;
- (void)setStyleName:(id)arg1;
- (void)setTableBorderDxf:(id)arg1;
- (void)setTableBorderDxfIndex:(unsigned long long)arg1;
- (void)setTableRange:(id)arg1;
- (void)setTotalsRowBorderDxf:(id)arg1;
- (void)setTotalsRowBorderDxfIndex:(unsigned long long)arg1;
- (void)setTotalsRowCount:(unsigned long long)arg1;
- (void)setTotalsRowDxf:(id)arg1;
- (void)setTotalsRowDxfIndex:(unsigned long long)arg1;
- (bool)showColumnStripes;
- (bool)showFirstColumn;
- (bool)showLastColumn;
- (bool)showRowStripes;
- (id)style;
- (unsigned long long)styleIndex;
- (id)styleName;
- (id)tableBorderDxf;
- (unsigned long long)tableBorderDxfIndex;
- (id)tableColumns;
- (id)tableRange;
- (id)totalsRowBorderDxf;
- (unsigned long long)totalsRowBorderDxfIndex;
- (unsigned long long)totalsRowCount;
- (id)totalsRowDxf;
- (unsigned long long)totalsRowDxfIndex;

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