<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>RUITableViewRow.h</title>
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

/PrivateFrameworks/RemoteUI.framework/RUITableViewRow.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI (1)
 */

@interface RUITableViewRow : RUIElement <RUIWebContainerViewDelegate, UIPickerViewDelegate, UITextFieldDelegate> {
    long long  _alignment;
    float  _cachedHeight;
    bool  _configured;
    NSData * _data;
    NSDate * _date;
    NSDate * _dateMax;
    NSDate * _dateMin;
    NSDateFormatter * _datePickerFormatter;
    long long  _datePickerMode;
    <RUITableViewRowDelegate> * _delegate;
    NSDictionary * _deleteAction;
    RUIDetailButtonElement * _detailButton;
    bool  _focused;
    double  _height;
    RUIPage * _linkedPage;
    UIView * _pickerView;
    bool  _rowInvalid;
    NSMutableArray * _selectOptions;
    bool  _selected;
    long long  _selectedRow;
    bool  _showingProgressIndicator;
    UISwitch * _switchControl;
    bool  _switchValue;
    RemoteUITableViewCell * _tableCell;
    <RUITextFieldChangeObserver> * _textFieldChangeObserver;
}

@property (nonatomic) long long alignment;
@property (nonatomic) bool configured;
@property (nonatomic, readonly) UIControl *control;
@property (nonatomic, retain) NSData *data;
@property (nonatomic, retain) NSDate *date;
@property (nonatomic, retain) NSDate *dateMax;
@property (nonatomic, retain) NSDate *dateMin;
@property (nonatomic, readonly) long long datePickerMode;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <RUITableViewRowDelegate> *delegate;
@property (nonatomic, retain) NSDictionary *deleteAction;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) RUIDetailButtonElement *detailButton;
@property (getter=isFocused, nonatomic) bool focused;
@property (readonly) unsigned long long hash;
@property (nonatomic) double height;
@property (nonatomic, readonly) bool indentWhileEditing;
@property (nonatomic) RUIPage *linkedPage;
@property (nonatomic, retain) UIView *pickerView;
@property (nonatomic) bool rowInvalid;
@property (getter=isSelected, nonatomic) bool selected;
@property (nonatomic, readonly) long long selectedRow;
@property (getter=isShowingProgressIndicator, nonatomic) bool showingProgressIndicator;
@property (readonly) Class superclass;
@property (nonatomic) <RUITextFieldChangeObserver> *textFieldChangeObserver;

+ (id)_formatterForDateYMD;
+ (id)_formatterForMonthAndDay;
+ (id)_formatterForShortDate;
+ (id)_formatterForYearAndMonth;
+ (id)_timeZoneAdjustedDateFromDate:(id)arg1;
+ (void)initialize;
+ (void)resetLocale;

- (void).cxx_destruct;
- (void)_datePickerChanged:(id)arg1;
- (id)_datePickerFormatter;
- (void)_switchFlipped:(id)arg1;
- (void)_updateContentForDisabledState;
- (void)_updateTextColors;
- (void)accessoryImageLoaded;
- (long long)alignment;
- (void)clearCachedHeight;
- (bool)configured;
- (id)control;
- (id)data;
- (id)date;
- (id)dateFormatterCalendarIdentifier;
- (id)dateMax;
- (id)dateMin;
- (long long)datePickerMode;
- (void)dealloc;
- (id)delegate;
- (id)deleteAction;
- (id)description;
- (id)detailButton;
- (void)detailLabelActivatedLinkFromCell:(id)arg1 completion:(id /* block */)arg2;
- (double)height;
- (bool)indentWhileEditing;
- (bool)isFocused;
- (bool)isSelected;
- (bool)isShowingProgressIndicator;
- (id)linkedPage;
- (bool)loadAccessoryImage;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (id)pickerView;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (void)populatePostbackDictionary:(id)arg1;
- (id)radioGroupSelectedColor;
- (float)rowHeightWithMax:(float)arg1 peggedHeight:(float)arg2 tableView:(id)arg3 indexPath:(id)arg4;
- (bool)rowInvalid;
- (bool)rowSupportsLoadingIndicator;
- (id)selectOptions;
- (long long)selectedRow;
- (void)setAlignment:(long long)arg1;
- (void)setAttributes:(id)arg1;
- (void)setConfigured:(bool)arg1;
- (void)setData:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setDateMax:(id)arg1;
- (void)setDateMin:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDeleteAction:(id)arg1;
- (void)setDetailButton:(id)arg1;
- (void)setEditableTextFieldValue:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setFocused:(bool)arg1;
- (void)setHeight:(double)arg1;
- (void)setImage:(id)arg1;
- (void)setImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setLinkedPage:(id)arg1;
- (void)setPickerView:(id)arg1;
- (void)setRowInvalid:(bool)arg1;
- (bool)setSelectPageRowValue:(id)arg1;
- (void)setSelectRowValue:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)setShowingProgressIndicator:(bool)arg1;
- (void)setTextFieldChangeObserver:(id)arg1;
- (void)setValueFromString:(id)arg1;
- (void)setValueFromString:(id)arg1 notify:(bool)arg2;
- (id)sourceURL;
- (bool)supportsAutomaticSelection;
- (void)switchCanceled;
- (id)tableCell;
- (Class)tableCellClass;
- (long long)tableCellStyle;
- (id)textColorForAttributeName:(id)arg1;
- (bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementString:(id)arg3;
- (id)textFieldChangeObserver;
- (bool)textFieldShouldReturn:(id)arg1;
- (void)webContainerView:(id)arg1 didClickLinkWithURL:(id)arg2;

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
