<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>_SFPBCardSectionValue.h</title>
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

/protocols/_SFPBCardSectionValue.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
 */

@protocol _SFPBCardSectionValue <NSObject>

@required

- (_SFPBActivityIndicatorCardSection *)activityIndicatorCardSection;
- (_SFPBAppLinkCardSection *)appLinkCardSection;
- (_SFPBAudioPlaybackCardSection *)audioPlaybackCardSection;
- (_SFPBButtonCardSection *)buttonCardSection;
- (_SFPBDescriptionCardSection *)descriptionCardSection;
- (_SFPBDetailedRowCardSection *)detailedRowCardSection;
- (_SFPBFlightCardSection *)flightCardSection;
- (_SFPBHorizontalButtonCardSection *)horizontalButtonCardSection;
- (_SFPBHorizontalScrollCardSection *)horizontalScrollCardSection;
- (_SFPBImagesCardSection *)imagesCardSection;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (_SFPBKeyValueDataCardSection *)keyValueDataCardSection;
- (_SFPBMapCardSection *)mapCardSection;
- (_SFPBMapsDetailedRowCardSection *)mapsDetailedRowCardSection;
- (_SFPBMediaInfoCardSection *)mediaInfoCardSection;
- (_SFPBMediaPlayerCardSection *)mediaPlayerCardSection;
- (_SFPBMediaRemoteControlCardSection *)mediaRemoteControlCardSection;
- (_SFPBMessageCardSection *)messageCardSection;
- (_SFPBMetaInfoCardSection *)metaInfoCardSection;
- (_SFPBNowPlayingCardSection *)nowPlayingCardSection;
- (_SFPBProductCardSection *)productCardSection;
- (_SFPBRichTitleCardSection *)richTitleCardSection;
- (_SFPBRowCardSection *)rowCardSection;
- (_SFPBScoreboardCardSection *)scoreboardCardSection;
- (_SFPBSectionHeaderCardSection *)sectionHeaderCardSection;
- (_SFPBSelectableGridCardSection *)selectableGridCardSection;
- (void)setActivityIndicatorCardSection:(_SFPBActivityIndicatorCardSection *)arg1;
- (void)setAppLinkCardSection:(_SFPBAppLinkCardSection *)arg1;
- (void)setAudioPlaybackCardSection:(_SFPBAudioPlaybackCardSection *)arg1;
- (void)setButtonCardSection:(_SFPBButtonCardSection *)arg1;
- (void)setDescriptionCardSection:(_SFPBDescriptionCardSection *)arg1;
- (void)setDetailedRowCardSection:(_SFPBDetailedRowCardSection *)arg1;
- (void)setFlightCardSection:(_SFPBFlightCardSection *)arg1;
- (void)setHorizontalButtonCardSection:(_SFPBHorizontalButtonCardSection *)arg1;
- (void)setHorizontalScrollCardSection:(_SFPBHorizontalScrollCardSection *)arg1;
- (void)setImagesCardSection:(_SFPBImagesCardSection *)arg1;
- (void)setKeyValueDataCardSection:(_SFPBKeyValueDataCardSection *)arg1;
- (void)setMapCardSection:(_SFPBMapCardSection *)arg1;
- (void)setMapsDetailedRowCardSection:(_SFPBMapsDetailedRowCardSection *)arg1;
- (void)setMediaInfoCardSection:(_SFPBMediaInfoCardSection *)arg1;
- (void)setMediaPlayerCardSection:(_SFPBMediaPlayerCardSection *)arg1;
- (void)setMediaRemoteControlCardSection:(_SFPBMediaRemoteControlCardSection *)arg1;
- (void)setMessageCardSection:(_SFPBMessageCardSection *)arg1;
- (void)setMetaInfoCardSection:(_SFPBMetaInfoCardSection *)arg1;
- (void)setNowPlayingCardSection:(_SFPBNowPlayingCardSection *)arg1;
- (void)setProductCardSection:(_SFPBProductCardSection *)arg1;
- (void)setRichTitleCardSection:(_SFPBRichTitleCardSection *)arg1;
- (void)setRowCardSection:(_SFPBRowCardSection *)arg1;
- (void)setScoreboardCardSection:(_SFPBScoreboardCardSection *)arg1;
- (void)setSectionHeaderCardSection:(_SFPBSectionHeaderCardSection *)arg1;
- (void)setSelectableGridCardSection:(_SFPBSelectableGridCardSection *)arg1;
- (void)setSocialMediaPostCardSection:(_SFPBSocialMediaPostCardSection *)arg1;
- (void)setStockChartCardSection:(_SFPBStockChartCardSection *)arg1;
- (void)setSuggestionCardSection:(_SFPBSuggestionCardSection *)arg1;
- (void)setTableHeaderRowCardSection:(_SFPBTableHeaderRowCardSection *)arg1;
- (void)setTableRowCardSection:(_SFPBTableRowCardSection *)arg1;
- (void)setTextColumnsCardSection:(_SFPBTextColumnsCardSection *)arg1;
- (void)setTitleCardSection:(_SFPBTitleCardSection *)arg1;
- (void)setTrackListCardSection:(_SFPBTrackListCardSection *)arg1;
- (void)setVerticalLayoutCardSection:(_SFPBVerticalLayoutCardSection *)arg1;
- (void)setWatchListCardSection:(_SFPBWatchListCardSection *)arg1;
- (void)setWebCardSection:(_SFPBWebCardSection *)arg1;
- (_SFPBSocialMediaPostCardSection *)socialMediaPostCardSection;
- (_SFPBStockChartCardSection *)stockChartCardSection;
- (_SFPBSuggestionCardSection *)suggestionCardSection;
- (_SFPBTableHeaderRowCardSection *)tableHeaderRowCardSection;
- (_SFPBTableRowCardSection *)tableRowCardSection;
- (_SFPBTextColumnsCardSection *)textColumnsCardSection;
- (_SFPBTitleCardSection *)titleCardSection;
- (_SFPBTrackListCardSection *)trackListCardSection;
- (_SFPBVerticalLayoutCardSection *)verticalLayoutCardSection;
- (_SFPBWatchListCardSection *)watchListCardSection;
- (_SFPBWebCardSection *)webCardSection;

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
