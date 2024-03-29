<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>FMFMapViewController.h</title>
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

/PrivateFrameworks/FMFUI.framework/FMFMapViewController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/FMFUI.framework/FMFUI (1)
 */

@interface FMFMapViewController : UIViewController <FMFMapOptionsViewControllerDelegate, FMFMapViewDelegateInternalDelegate, FMFNoLocationViewDelegate, FMFSessionDelegateInternal, MKUserTrackingView> {
    bool  __blockDidReceiveAnimation;
    NSSet * __internalHandlesShowingLocations;
    bool  __isRenderingInitialMap;
    NSSet * __preloadedHandles;
    bool  __refreshingIsPaused;
    bool  _alwaysShowAccuracy;
    UIColor * _annotationTintColor;
    UIImageView * _cachedMapView;
    long long  _currentTrackingMode;
    unsigned long long  _defaultMapType;
    <FMFMapViewControllerDelegate> * _delegate;
    UIBarButtonItem * _directionsBarButtonItem;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _edgeInsets;
    FMFSession * _fmfSession;
    UIBarButtonItem * _infoBarButtonItem;
    bool  _isMapCenteringDisabled;
    bool  _isSimpleMap;
    FMFMapOptionsViewController * _mapOptionsVC;
    bool  _mapTypeLoaded;
    MKMapView * _mapView;
    FMFMapViewDelegateInternal * _mapViewDelegate;
    FMFNoLocationView * _noLocationView;
    FMFRefreshBarButtonItem * _refreshButton;
    bool  _shouldZoomToFitMeAndLocations;
    bool  _shouldZoomToFitNewLocations;
    bool  _showFloatingMapLocationButton;
    FMFTitleView * _titleView;
    _MKUserTrackingButton * _userTrackingButton;
    UIBarButtonItem * _userTrackingButtonItem;
    bool  _viewWillAppearCalled;
    bool  _wasToolbarPreviouslyHidden;
}

@property (nonatomic) bool _blockDidReceiveAnimation;
@property (nonatomic, retain) NSSet *_internalHandlesShowingLocations;
@property (nonatomic) bool _isRenderingInitialMap;
@property (nonatomic, retain) NSSet *_preloadedHandles;
@property (nonatomic) bool _refreshingIsPaused;
@property (nonatomic) bool alwaysShowAccuracy;
@property (nonatomic, copy) UIColor *annotationTintColor;
@property (nonatomic, retain) UIImageView *cachedMapView;
@property (nonatomic) long long currentTrackingMode;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long defaultMapType;
@property (nonatomic) <FMFMapViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIBarButtonItem *directionsBarButtonItem;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } edgeInsets;
@property (nonatomic, retain) FMFSession *fmfSession;
@property (nonatomic, copy) NSSet *handlesShowingLocations;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIBarButtonItem *infoBarButtonItem;
@property (nonatomic) bool isMapCenteringDisabled;
@property (nonatomic) bool isSimpleMap;
@property (nonatomic, retain) FMFMapOptionsViewController *mapOptionsVC;
@property (nonatomic) bool mapTypeLoaded;
@property (nonatomic, retain) MKMapView *mapView;
@property (nonatomic, retain) FMFMapViewDelegateInternal *mapViewDelegate;
@property (nonatomic, retain) FMFNoLocationView *noLocationView;
@property (nonatomic, retain) FMFRefreshBarButtonItem *refreshButton;
@property (nonatomic) bool shouldZoomToFitMeAndLocations;
@property (nonatomic) bool shouldZoomToFitNewLocations;
@property (nonatomic) bool showFloatingMapLocationButton;
@property (readonly) Class superclass;
@property (nonatomic, retain) FMFTitleView *titleView;
@property (nonatomic, retain) _MKUserTrackingButton *userTrackingButton;
@property (nonatomic, retain) UIBarButtonItem *userTrackingButtonItem;
@property (nonatomic) bool viewWillAppearCalled;
@property (nonatomic) bool wasToolbarPreviouslyHidden;

+ (struct CGSize { double x1; double x2; })annotationImageSize;
+ (bool)hasUserLocation;

- (void).cxx_destruct;
- (void)_authorizeMonitoringLocation;
- (bool)_blockDidReceiveAnimation;
- (void)_dismiss:(id)arg1;
- (void)_enablePreloadedHandles:(id)arg1;
- (id)_internalAnnotationTintColor;
- (id)_internalHandlesShowingLocations;
- (bool)_isRenderingInitialMap;
- (id)_preloadedHandles;
- (bool)_refreshingIsPaused;
- (id)_selectedHandleAnnotation;
- (void)_setUserTrackingMode:(long long)arg1 animated:(bool)arg2 fromTrackingButton:(bool)arg3;
- (void)_updateDirectionsButtonEnabled;
- (void)_updateLocationButtonEnabled;
- (void)_updateTitleViewLocation:(id)arg1;
- (void)addHandlesToSession;
- (bool)alwaysShowAccuracy;
- (id)annotationImageForAnnotation:(id)arg1 andHandle:(id)arg2;
- (id)annotationTintColor;
- (void)applicationDidBecomeActive:(id)arg1;
- (id)cachedMapView;
- (bool)canRotateForHeading;
- (bool)canSelectAnnotation:(id)arg1;
- (bool)canShowNoLocation;
- (long long)currentTrackingMode;
- (void)dealloc;
- (unsigned long long)defaultMapType;
- (id)delegate;
- (void)deselectAllAnnotations;
- (void)destroySession;
- (void)didDeselectLocation:(id)arg1;
- (void)didMoveToParentViewController:(id)arg1;
- (void)didReceiveLocation:(id)arg1;
- (void)didReceiveLocationForDelegateCallback:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)didSelectLocation:(id)arg1;
- (void)didStopAbilityToGetLocationForHandle:(id)arg1;
- (void)didUpdateUserLocation:(id)arg1;
- (id)directionsBarButtonItem;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })edgeInsets;
- (void)enablePreloadedHandles;
- (id)fmfSession;
- (void)getDirections;
- (id)handlesShowingLocations;
- (bool)hasUserLocation;
- (void)hideCachedMap;
- (id)infoBarButtonItem;
- (void)infoButtonTapped:(id)arg1;
- (id)init;
- (id)initSimpleMapWithDelegate:(id)arg1 handles:(id)arg2;
- (id)initWithDelegate:(id)arg1 handles:(id)arg2;
- (void)initializeDefaults;
- (bool)isCompact;
- (bool)isCurrentlyRotated;
- (bool)isLocationAlreadyOnMap:(id)arg1;
- (bool)isMapCenteringDisabled;
- (bool)isSimpleMap;
- (void)loadCachedLocationsForHandles;
- (void)loadDelegate;
- (void)loadView;
- (id)locationOnMapForHandle:(id)arg1 enforceServerId:(bool)arg2;
- (bool)mapHasUserLocations;
- (id)mapOptionsVC;
- (void)mapTypeChanged:(unsigned long long)arg1;
- (void)mapTypeChangedNotification:(id)arg1;
- (bool)mapTypeLoaded;
- (id)mapView;
- (id)mapViewDelegate;
- (void)mapViewDidFinishRenderingMap;
- (id)noLocationView;
- (id)openInAppURL;
- (void)openInMapsButtonTapped:(id)arg1;
- (void)presentMapOptionsModal:(id)arg1;
- (void)reZoomToFit;
- (id)refreshButton;
- (void)refreshButtonTapped:(id)arg1;
- (void)regionDidChangeAnimated:(bool)arg1;
- (void)regionWillChangeAnimated:(bool)arg1;
- (void)removeAllFriendLocationsFromMap;
- (void)removeAnnotationsFromMapForHandle:(id)arg1;
- (void)removeHandlesFromSession;
- (void)resumeRefreshingLocations;
- (void)selectAnnotationIfSingleForMac;
- (void)selectAnnotationIfSingleFriend:(id)arg1;
- (bool)sessionContainsHandle:(id)arg1;
- (void)setAlwaysShowAccuracy:(bool)arg1;
- (void)setAnnotationTintColor:(id)arg1;
- (void)setCachedMapView:(id)arg1;
- (void)setCurrentTrackingMode:(long long)arg1;
- (void)setDefaultMapType:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDirectionsBarButtonItem:(id)arg1;
- (void)setEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setFmfSession:(id)arg1;
- (void)setHandlesShowingLocations:(id)arg1;
- (void)setInfoBarButtonItem:(id)arg1;
- (void)setIsMapCenteringDisabled:(bool)arg1;
- (void)setIsSimpleMap:(bool)arg1;
- (void)setMapOptionsVC:(id)arg1;
- (void)setMapTypeLoaded:(bool)arg1;
- (void)setMapView:(id)arg1;
- (void)setMapViewDelegate:(id)arg1;
- (void)setNoLocationView:(id)arg1;
- (void)setRefreshButton:(id)arg1;
- (void)setShouldZoomToFitMeAndLocations:(bool)arg1;
- (void)setShouldZoomToFitNewLocations:(bool)arg1;
- (void)setShowFloatingMapLocationButton:(bool)arg1;
- (void)setTitleView:(id)arg1;
- (void)setUserTrackingButton:(id)arg1;
- (void)setUserTrackingButtonItem:(id)arg1;
- (void)setViewWillAppearCalled:(bool)arg1;
- (void)setWasToolbarPreviouslyHidden:(bool)arg1;
- (void)set_blockDidReceiveAnimation:(bool)arg1;
- (void)set_internalHandlesShowingLocations:(id)arg1;
- (void)set_isRenderingInitialMap:(bool)arg1;
- (void)set_preloadedHandles:(id)arg1;
- (void)set_refreshingIsPaused:(bool)arg1;
- (void)setupToolbarItems;
- (bool)shouldZoomToFitMeAndLocations;
- (bool)shouldZoomToFitNewLocations;
- (bool)showFloatingMapLocationButton;
- (bool)singleAnnotationOnMap;
- (void)startShowingLocationsForHandles:(id)arg1;
- (void)stopRefreshingLocations;
- (void)stopShowingLocationsForHandles:(id)arg1;
- (id)titleView;
- (id)titleViewForSelectedHandle;
- (void)updateAllAnnotationsDueToAddressBookUpdate;
- (void)updateMapWithNewLocation:(id)arg1 animated:(bool)arg2;
- (void)updateNoLocationView:(bool)arg1;
- (void)updateRefreshForLocation:(id)arg1;
- (void)updateUserTrackingButtonState;
- (id)userTrackingButton;
- (id)userTrackingButtonItem;
- (long long)userTrackingMode;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (bool)viewWillAppearCalled;
- (void)viewWillAppearWillMoveToWindowSetup;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (bool)wasToolbarPreviouslyHidden;
- (void)willMoveToParentViewController:(id)arg1;
- (void)zoomAndSelectHandle:(id)arg1;
- (void)zoomToFit;
- (void)zoomToFit:(bool)arg1;

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
