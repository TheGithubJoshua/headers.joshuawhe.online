<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>FUFlightInfoView.h</title>
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

/PrivateFrameworks/FlightUtilities.framework/FUFlightInfoView.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/FlightUtilities.framework/FlightUtilities (115.11)
 */

@interface FUFlightInfoView : UIView {
    NSLayoutConstraint * _arrivalDelayConstraint;
    NSLayoutConstraint * _arrivalGateConstraint;
    NSLayoutConstraint * _arrivalTerminalConstraint;
    bool  _awake;
    NSLayoutConstraint * _bottomMargin;
    long long  _currentFocus;
    <FUFlightInfoViewProtocol> * _delegate;
    NSLayoutConstraint * _departureDelayConstraint;
    NSLayoutConstraint * _departureGateConstraint;
    NSLayoutConstraint * _departureTerminalConstraint;
    unsigned long long  _displayedLegId;
    FUFlight * _flight;
    UIButton * _flightButton;
    FULabel * _labelAirlineName;
    FULabel * _labelArrivalCity;
    FULabel * _labelArrivalCode;
    FULabel * _labelArrivalDate;
    FULabel * _labelArrivalDelay;
    FULabel * _labelArrivalInfo1;
    FULabel * _labelArrivalInfo2;
    FULabel * _labelArrivalTime;
    FULabel * _labelArrivalTitle;
    FULabel * _labelBaggageClaimTitle;
    FULabel * _labelBaggageClaimValue;
    FULabel * _labelDepartureCity;
    FULabel * _labelDepartureCode;
    FULabel * _labelDepartureDate;
    FULabel * _labelDepartureDelay;
    FULabel * _labelDepartureInfo1;
    FULabel * _labelDepartureInfo2;
    FULabel * _labelDepartureTime;
    FULabel * _labelDepartureTitle;
    FULabel * _labelDurationComplete;
    FULabel * _labelDurationTitle;
    FULabel * _labelDurationValue;
    FULabel * _labelFlightCode;
    FULabel * _labelStatus;
    FULabel * _labelStatusTitle;
    NSLayoutConstraint * _leadingInset;
    FUFlightLeg * _leg;
    bool  _multiFlights;
    FUSeparator * _sep1;
    FUSeparator * _sep2;
    FUSeparator * _sep3;
    FUSeparator * _sep4;
    FUSeparator * _sep5;
    unsigned long long  _style;
    FUStyleProvider * _styleProvider;
    NSLayoutConstraint * _trailingInset;
}

@property (nonatomic, retain) NSLayoutConstraint *arrivalDelayConstraint;
@property (nonatomic, retain) NSLayoutConstraint *arrivalGateConstraint;
@property (nonatomic, retain) NSLayoutConstraint *arrivalTerminalConstraint;
@property (nonatomic, retain) NSLayoutConstraint *bottomMargin;
@property long long currentFocus;
@property <FUFlightInfoViewProtocol> *delegate;
@property (nonatomic, retain) NSLayoutConstraint *departureDelayConstraint;
@property (nonatomic, retain) NSLayoutConstraint *departureGateConstraint;
@property (nonatomic, retain) NSLayoutConstraint *departureTerminalConstraint;
@property (nonatomic, readonly) FUFlight *flight;
@property UIButton *flightButton;
@property FULabel *labelAirlineName;
@property FULabel *labelArrivalCity;
@property FULabel *labelArrivalCode;
@property FULabel *labelArrivalDate;
@property FULabel *labelArrivalDelay;
@property FULabel *labelArrivalInfo1;
@property FULabel *labelArrivalInfo2;
@property FULabel *labelArrivalTime;
@property FULabel *labelArrivalTitle;
@property FULabel *labelBaggageClaimTitle;
@property FULabel *labelBaggageClaimValue;
@property FULabel *labelDepartureCity;
@property FULabel *labelDepartureCode;
@property FULabel *labelDepartureDate;
@property FULabel *labelDepartureDelay;
@property FULabel *labelDepartureInfo1;
@property FULabel *labelDepartureInfo2;
@property FULabel *labelDepartureTime;
@property FULabel *labelDepartureTitle;
@property FULabel *labelDurationComplete;
@property FULabel *labelDurationTitle;
@property FULabel *labelDurationValue;
@property FULabel *labelFlightCode;
@property FULabel *labelStatus;
@property FULabel *labelStatusTitle;
@property (nonatomic, retain) NSLayoutConstraint *leadingInset;
@property (nonatomic, readonly) FUFlightLeg *leg;
@property FUSeparator *sep1;
@property FUSeparator *sep2;
@property FUSeparator *sep3;
@property FUSeparator *sep4;
@property FUSeparator *sep5;
@property (nonatomic) unsigned long long style;
@property (nonatomic, retain) NSLayoutConstraint *trailingInset;

+ (id)flightViewForStyle:(unsigned long long)arg1 compact:(bool)arg2;

- (void).cxx_destruct;
- (void)addDateTimeAttributesToString:(id)arg1 striked:(bool)arg2 alignment:(long long)arg3;
- (id)arrivalDelayConstraint;
- (id)arrivalGateConstraint;
- (id)arrivalTerminalConstraint;
- (void)awakeFromNib;
- (id)bottomMargin;
- (long long)currentFocus;
- (void)dealloc;
- (id)delegate;
- (id)departureDelayConstraint;
- (id)departureGateConstraint;
- (id)departureTerminalConstraint;
- (id)flight;
- (id)flightButton;
- (void)flightButtonTapped:(id)arg1;
- (id)formattedDurationForDuration:(double)arg1;
- (id)labelAirlineName;
- (id)labelArrivalCity;
- (id)labelArrivalCode;
- (id)labelArrivalDate;
- (id)labelArrivalDelay;
- (id)labelArrivalInfo1;
- (id)labelArrivalInfo2;
- (id)labelArrivalTime;
- (id)labelArrivalTitle;
- (id)labelBaggageClaimTitle;
- (id)labelBaggageClaimValue;
- (id)labelDepartureCity;
- (id)labelDepartureCode;
- (id)labelDepartureDate;
- (id)labelDepartureDelay;
- (id)labelDepartureInfo1;
- (id)labelDepartureInfo2;
- (id)labelDepartureTime;
- (id)labelDepartureTitle;
- (id)labelDurationComplete;
- (id)labelDurationTitle;
- (id)labelDurationValue;
- (id)labelFlightCode;
- (id)labelStatus;
- (id)labelStatusTitle;
- (id)leadingInset;
- (id)leg;
- (id)sep1;
- (id)sep2;
- (id)sep3;
- (id)sep4;
- (id)sep5;
- (void)setArrivalDelayConstraint:(id)arg1;
- (void)setArrivalGateConstraint:(id)arg1;
- (void)setArrivalTerminalConstraint:(id)arg1;
- (void)setBottomMargin:(id)arg1;
- (void)setCurrentFocus:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDepartureDelayConstraint:(id)arg1;
- (void)setDepartureGateConstraint:(id)arg1;
- (void)setDepartureTerminalConstraint:(id)arg1;
- (void)setFlight:(id)arg1 legIndex:(unsigned long long)arg2 multiFlights:(bool)arg3 spotlightMode:(bool)arg4;
- (void)setFlightButton:(id)arg1;
- (void)setLabelAirlineName:(id)arg1;
- (void)setLabelArrivalCity:(id)arg1;
- (void)setLabelArrivalCode:(id)arg1;
- (void)setLabelArrivalDate:(id)arg1;
- (void)setLabelArrivalDelay:(id)arg1;
- (void)setLabelArrivalInfo1:(id)arg1;
- (void)setLabelArrivalInfo2:(id)arg1;
- (void)setLabelArrivalTime:(id)arg1;
- (void)setLabelArrivalTitle:(id)arg1;
- (void)setLabelBaggageClaimTitle:(id)arg1;
- (void)setLabelBaggageClaimValue:(id)arg1;
- (void)setLabelDepartureCity:(id)arg1;
- (void)setLabelDepartureCode:(id)arg1;
- (void)setLabelDepartureDate:(id)arg1;
- (void)setLabelDepartureDelay:(id)arg1;
- (void)setLabelDepartureInfo1:(id)arg1;
- (void)setLabelDepartureInfo2:(id)arg1;
- (void)setLabelDepartureTime:(id)arg1;
- (void)setLabelDepartureTitle:(id)arg1;
- (void)setLabelDurationComplete:(id)arg1;
- (void)setLabelDurationTitle:(id)arg1;
- (void)setLabelDurationValue:(id)arg1;
- (void)setLabelFlightCode:(id)arg1;
- (void)setLabelStatus:(id)arg1;
- (void)setLabelStatusTitle:(id)arg1;
- (void)setLeadingInset:(id)arg1;
- (void)setSep1:(id)arg1;
- (void)setSep2:(id)arg1;
- (void)setSep3:(id)arg1;
- (void)setSep4:(id)arg1;
- (void)setSep5:(id)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (void)setTrailingInset:(id)arg1;
- (void)setupLabelStylesWithStyle:(unsigned long long)arg1;
- (double)standardTableCellContentInset;
- (unsigned long long)style;
- (id)trailingInset;
- (void)updateAirlineInformation;
- (void)updateDateTimeForDeparture:(bool)arg1;
- (void)updateDelayInfo;
- (void)updateFlightButtonIcon;
- (void)updateFlightDates;
- (void)updateFlightStatus;
- (void)updateFlightTerminalInfo;
- (void)updateForFollowupContent:(bool)arg1;
- (void)updateLabelVisibility:(id)arg1 constraint:(id)arg2;
- (void)updateLocationInfo;
- (void)updateTimeLabel:(id)arg1 constraint:(id)arg2 withString:(id)arg3;

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