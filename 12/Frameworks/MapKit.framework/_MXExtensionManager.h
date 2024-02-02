<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>_MXExtensionManager.h</title>
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

/Frameworks/MapKit.framework/_MXExtensionManager.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/MapKit.framework/MapKit (1.0)
 */

@interface _MXExtensionManager : NSObject {
    <_MXExtensionManagerDelegate> * _delegate;
    _MXExtensionProvider * _extensionProvider;
    <_MXExtensionLookupPolicy> * _lookupPolicy;
    id  _matchingContext;
}

@property (nonatomic) <_MXExtensionManagerDelegate> *delegate;
@property (nonatomic, retain) _MXExtensionProvider *extensionProvider;
@property (nonatomic, readonly) <_MXExtensionLookupPolicy> *lookupPolicy;
@property (nonatomic, retain) id matchingContext;

+ (id)_extensionsWithLookupPolicy:(id)arg1;
+ (id)_lookupPolicyForAllExtensions;
+ (id)_lookupPolicyForExtensionSupportsIntentClassNames:(id)arg1;
+ (id)_lookupPolicyForExtensionWithContainingAppIdentifier:(id)arg1 supportsIntentClassNames:(id)arg2;
+ (id)_lookupPolicyForExtensionWithIdentifier:(id)arg1;
+ (id)_lookupPolicyForIntentsExtensions;
+ (id)_lookupPolicyForNonUIExtension;
+ (id)_lookupPolicyForUIExtension;
+ (id)_lookupPolicyWithBlock:(id /* block */)arg1;
+ (id)_lookupPolicyWithExtensionPointNames:(id)arg1;
+ (id)_maps_lookupPolicyForEnabledRidesharingNonUIExtensions;
+ (id)_maps_lookupPolicyForRidesharingNonUIExtensions;
+ (id)_maps_ridesharingAllIntentClassesForNonUIHandling;
+ (id)_maps_ridesharingIntentClassesForUIInteraction;
+ (id)_maps_ridesharingOptionalIntentClassesForNonUIHandling;
+ (id)_maps_ridesharingRequiredIntentClassesForNonUIHandling;
+ (void)_maps_updateRideBookingExtensions:(id)arg1;
+ (id)_queue;
+ (void)imageForKey:(id)arg1 extension:(id)arg2 completion:(id /* block */)arg3;
+ (id)lookupPolicyForExtensionWithCapabilities:(id)arg1;
+ (id)lookupPolicyForExtensionWithCapability:(id)arg1;
+ (id)lookupPolicyForRestaurantQueueingExtensionWithContainingAppIdentifier:(id)arg1;
+ (id)lookupPolicyForRestaurantQueueingExtensions;
+ (id)lookupPolicyForRestaurantReservationExtensionWithContainingAppIdentifier:(id)arg1;
+ (id)lookupPolicyForRestaurantReservationExtensions;
+ (id)lookupPolicyForRideSharingExtensions;
+ (id)managerWithExtensionLookupPolicy:(id)arg1 updateHandler:(id /* block */)arg2;
+ (id)managerWithLookupPolicy:(id)arg1 delegate:(id)arg2;
+ (id)restaurantQueueingIntentClassNames;
+ (id)restaurantReservationIntentClassNames;

- (void).cxx_destruct;
- (id)_applyExtensionPredicateWithExtensionsIfNeeded:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)extensionProvider;
- (id)initWithLookupPolicy:(id)arg1 delegate:(id)arg2;
- (id)initWithLookupPolicy:(id)arg1 delegate:(id)arg2 extensionProvider:(id)arg3;
- (void)invalidate;
- (id)lookupPolicy;
- (id)matchingContext;
- (void)setDelegate:(id)arg1;
- (void)setExtensionProvider:(id)arg1;
- (void)setMatchingContext:(id)arg1;

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