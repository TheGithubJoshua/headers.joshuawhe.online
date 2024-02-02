<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>NTKCFaceDetailComplicationPickerCell.h</title>
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

/PrivateFrameworks/NanoTimeKitCompanion.framework/NTKCFaceDetailComplicationPickerCell.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion (1)
 */

@interface NTKCFaceDetailComplicationPickerCell : NTKCDetailTableViewCell <UIPickerViewDataSource, UIPickerViewDelegate> {
    NSArray * _complications;
    bool  _dateSlot;
    <NTKCFaceDetailComplicationPickerCellDelegate> * _delegate;
    UIPickerView * _picker;
    long long  _selectedIndex;
    CAShapeLayer * _selectionIndicator;
    NSString * _slot;
}

@property (nonatomic, readonly) NSArray *complications;
@property (nonatomic, readonly) bool dateSlot;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NTKCFaceDetailComplicationPickerCellDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIPickerView *picker;
@property (nonatomic, retain) NTKComplication *selectedComplication;
@property (nonatomic, retain) CAShapeLayer *selectionIndicator;
@property (nonatomic, readonly) NSString *slot;
@property (readonly) Class superclass;

+ (id)reuseIdentifier;
+ (double)rowHeight;

- (void).cxx_destruct;
- (id)_nameForRow:(long long)arg1;
- (id)complications;
- (bool)dateSlot;
- (id)delegate;
- (id)init;
- (void)layoutSubviews;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (id)picker;
- (id)pickerView:(id)arg1 attributedTitleForRow:(long long)arg2 forComponent:(long long)arg3;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;
- (id)selectedComplication;
- (id)selectionIndicator;
- (void)setComplications:(id)arg1 forSlot:(id)arg2 dateSlot:(bool)arg3;
- (void)setDelegate:(id)arg1;
- (void)setPicker:(id)arg1;
- (void)setSelectedComplication:(id)arg1;
- (void)setSelectionIndicator:(id)arg1;
- (id)slot;

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