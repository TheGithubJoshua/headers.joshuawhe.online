<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>FIUIChartAxisDescriptor.h</title>
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

/protocols/FIUIChartAxisDescriptor.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
 */

@protocol FIUIChartAxisDescriptor <NSObject>

@required

- (double)axisDescriptorPadding;
- (NSArray *)axisLabels;
- (Class)expectedDataType;
- (UIColor *)highlightedLabelColor;
- (UIFont *)labelFont;
- (id)maxValue;
- (id)minValue;
- (void)setAxisDescriptorPadding:(double)arg1;
- (void)setHighlightedLabelColor:(UIColor *)arg1;
- (void)setLabelFont:(UIFont *)arg1;
- (void)setMaxValue:(id)arg1;
- (void)setMinValue:(id)arg1;
- (void)setUnhighlightedLabelColor:(UIColor *)arg1;
- (UIColor *)unhighlightedLabelColor;

@optional

- (NSArray *)axisSubLabels;
- (bool)hideClippedLabels;
- (UIColor *)highlightedSubLabelColor;
- (id)highlightedValue;
- (unsigned long long)labelAlignment;
- (unsigned long long)numLabels;
- (unsigned long long)numSubLabels;
- (id)positionForLabelAtIndex:(unsigned long long)arg1;
- (id)positionForSubLabelAtIndex:(unsigned long long)arg1;
- (void)selectLabel:(bool)arg1 atIndex:(unsigned long long)arg2;
- (UIColor *)selectedLabelColor;
- (void)setHideClippedLabels:(bool)arg1;
- (void)setHighlightedSubLabelColor:(UIColor *)arg1;
- (void)setHighlightedValue:(id)arg1;
- (void)setLabelAlignment:(unsigned long long)arg1;
- (void)setSelectedLabelColor:(UIColor *)arg1;
- (void)setShadowBlur:(double)arg1;
- (void)setShadowColor:(UIColor *)arg1;
- (void)setShadowOffset:(struct CGSize { double x1; double x2; })arg1;
- (void)setSubAxisDescriptorPadding:(double)arg1;
- (void)setSubLabelAlignment:(unsigned long long)arg1;
- (void)setSubLabelFont:(UIFont *)arg1;
- (void)setUnhighlightedSubLabelColor:(UIColor *)arg1;
- (double)shadowBlur;
- (UIColor *)shadowColor;
- (struct CGSize { double x1; double x2; })shadowOffset;
- (double)subAxisDescriptorPadding;
- (unsigned long long)subLabelAlignment;
- (UIFont *)subLabelFont;
- (NSString *)textForLabelAtIndex:(unsigned long long)arg1;
- (NSString *)textForSubLabelAtIndex:(unsigned long long)arg1;
- (UIColor *)unhighlightedSubLabelColor;
- (NSArray *)xAxisLabelStringArray;

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