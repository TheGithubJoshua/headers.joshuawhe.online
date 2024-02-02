<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>GKRemoteUIController.h</title>
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

/PrivateFrameworks/GameCenterPrivateUI.framework/GKRemoteUIController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI (577.8)
 */

@interface GKRemoteUIController : NSObject <GKRemoteUIAuxiliaryViewDelegate, RUILoaderDelegate, RUIObjectModelDelegate> {
    NSString * _alias;
    NSString * _altDSID;
    NSString * _appleID;
    NSDictionary * _authInfo;
    NSString * _authToken;
    bool  _complete;
    id /* block */  _completionHandler;
    NSError * _error;
    NSString * _firstName;
    bool  _isServerAuthenticated;
    NSString * _lastName;
    int  _layoutStyle;
    id /* block */  _loadHandler;
    RUILoader * _loader;
    bool  _loading;
    bool  _loadingInitialUI;
    UINavigationController * _navigationControllerWeak;
    NSMutableArray * _objectModels;
    GKLocalPlayer * _playerForRemoteUI;
    NSString * _playerID;
    GKRemoteUIController * _presentedRemoteUIController;
    bool  _previousUseCustomBackButtonActionValue;
    NSData * _pushToken;
    bool  _shouldApplyGameCenterTheme;
    NSArray * _staticViewControllers;
    NSURL * _url;
}

@property (nonatomic, retain) NSString *alias;
@property (nonatomic, retain) NSString *altDSID;
@property (nonatomic, retain) NSString *appleID;
@property (nonatomic, retain) NSDictionary *authInfo;
@property (nonatomic, retain) NSString *authToken;
@property (nonatomic, readonly) NSString *bagKey;
@property (nonatomic) bool complete;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, readonly) NSURL *fallbackURL;
@property (nonatomic, retain) NSString *firstName;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isServerAuthenticated;
@property (nonatomic, retain) NSString *lastName;
@property (nonatomic) int layoutStyle;
@property (nonatomic, copy) id /* block */ loadHandler;
@property (nonatomic, retain) RUILoader *loader;
@property (nonatomic) bool loading;
@property (nonatomic) bool loadingInitialUI;
@property (nonatomic) UINavigationController *navigationController;
@property (nonatomic, retain) NSMutableArray *objectModels;
@property (nonatomic, retain) GKLocalPlayer *playerForRemoteUI;
@property (nonatomic, retain) NSString *playerID;
@property (nonatomic, retain) GKRemoteUIController *presentedRemoteUIController;
@property (nonatomic) bool previousUseCustomBackButtonActionValue;
@property (nonatomic, retain) NSData *pushToken;
@property (nonatomic) bool shouldApplyGameCenterTheme;
@property (nonatomic, retain) NSArray *staticViewControllers;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSURL *url;
@property (getter=isUserInteractionEnabled, nonatomic) bool userInteractionEnabled;

+ (id)remoteUIController;

- (id)addThemeInfoToAttributes:(id)arg1;
- (id)alias;
- (id)altDSID;
- (id)appleID;
- (id)authInfo;
- (id)authToken;
- (void)auxiliaryView:(id)arg1 pressedButton:(id)arg2 attributes:(id)arg3;
- (void)auxiliaryView:(id)arg1 pressedLink:(id)arg2 attributes:(id)arg3;
- (id)bagKey;
- (bool)complete;
- (id /* block */)completionHandler;
- (void)configureFromBagKey:(id)arg1 player:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)dealloc;
- (void)didLoadURL:(id)arg1 data:(id)arg2 error:(id)arg3;
- (id)error;
- (id)fallbackURL;
- (void)finishLoadingWithError:(id)arg1;
- (void)fireCompletionHandler;
- (id)firstName;
- (long long)indexOfVisiblePage;
- (id)init;
- (id)initWithObjectModel:(id)arg1;
- (bool)isServerAuthenticated;
- (bool)isUserInteractionEnabled;
- (id)lastName;
- (int)layoutStyle;
- (id /* block */)loadHandler;
- (void)loadInitialRemoteUIForPlayer:(id)arg1 handler:(id /* block */)arg2;
- (void)loadInitialRemoteUIWithHandler:(id /* block */)arg1;
- (void)loadURL:(id)arg1 forPlayer:(id)arg2 postBody:(id)arg3;
- (void)loadURL:(id)arg1 forPlayer:(id)arg2 postData:(id)arg3;
- (void)loadURL:(id)arg1 postBody:(id)arg2;
- (void)loadURL:(id)arg1 postData:(id)arg2;
- (id)loader;
- (void)loader:(id)arg1 didFailWithError:(id)arg2;
- (void)loader:(id)arg1 receivedObjectModel:(id)arg2 actionSignal:(unsigned long long)arg3;
- (bool)loading;
- (bool)loadingInitialUI;
- (id)navigationController;
- (void)objectModel:(id)arg1 configureTableRow:(id)arg2 page:(id)arg3;
- (void)objectModel:(id)arg1 configureTableSection:(id)arg2 page:(id)arg3;
- (void)objectModel:(id)arg1 configureTableView:(id)arg2 page:(id)arg3;
- (Class)objectModel:(id)arg1 customFooterClassForSection:(id)arg2;
- (Class)objectModel:(id)arg1 customHeaderClassForSection:(id)arg2;
- (void)objectModel:(id)arg1 elementDidChange:(id)arg2;
- (void)objectModel:(id)arg1 page:(id)arg2 toggledEditing:(bool)arg3;
- (void)objectModel:(id)arg1 pressedLink:(id)arg2 httpMethod:(id)arg3;
- (bool)objectModel:(id)arg1 shouldShowModalHTMLViewWithURL:(id)arg2;
- (id)objectModel:(id)arg1 tableFooterViewForAttributes:(id)arg2 page:(id)arg3;
- (id)objectModel:(id)arg1 tableHeaderViewForAttributes:(id)arg2 page:(id)arg3;
- (void)objectModelDidChange:(id)arg1;
- (void)objectModelPressedBack:(id)arg1;
- (id)objectModels;
- (id)parentViewControllerForObjectModel:(id)arg1;
- (void)performAction:(unsigned long long)arg1 withObjectModel:(id)arg2;
- (id)playerForRemoteUI;
- (id)playerID;
- (void)popObjectModelAnimated:(bool)arg1;
- (id)postBodyForInitialLoad;
- (id)postbackDataForDictionary:(id)arg1;
- (int)preferredLayoutStyle;
- (void)presentInParentNavigationController:(id)arg1 animated:(bool)arg2;
- (void)presentObjectModel:(id)arg1 animated:(bool)arg2;
- (id)presentedRemoteUIController;
- (bool)previousUseCustomBackButtonActionValue;
- (void)pushObjectModel:(id)arg1 animated:(bool)arg2;
- (id)pushToken;
- (void)replaceObjectModelAtIndex:(unsigned long long)arg1 withObjectObjectModel:(id)arg2;
- (void)setAlias:(id)arg1;
- (void)setAltDSID:(id)arg1;
- (void)setAppleID:(id)arg1;
- (void)setAuthInfo:(id)arg1;
- (void)setAuthToken:(id)arg1;
- (void)setComplete:(bool)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setError:(id)arg1;
- (void)setFirstName:(id)arg1;
- (void)setIsServerAuthenticated:(bool)arg1;
- (void)setLastName:(id)arg1;
- (void)setLayoutStyle:(int)arg1;
- (void)setLoadHandler:(id /* block */)arg1;
- (void)setLoader:(id)arg1;
- (void)setLoading:(bool)arg1;
- (void)setLoadingInitialUI:(bool)arg1;
- (void)setNavigationController:(id)arg1;
- (void)setObjectModels:(id)arg1;
- (void)setPlayerForRemoteUI:(id)arg1;
- (void)setPlayerID:(id)arg1;
- (void)setPresentedRemoteUIController:(id)arg1;
- (void)setPreviousUseCustomBackButtonActionValue:(bool)arg1;
- (void)setPushToken:(id)arg1;
- (void)setShouldApplyGameCenterTheme:(bool)arg1;
- (void)setStaticViewControllers:(id)arg1;
- (void)setUrl:(id)arg1;
- (void)setUserInteractionEnabled:(bool)arg1;
- (bool)shouldApplyGameCenterTheme;
- (id)staticViewControllers;
- (void)takeValuesFromClientInfo:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)updateAccountAndMarkComplete:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)updatePostbackDictionary:(id)arg1 withHandler:(id /* block */)arg2;
- (id)url;
- (id)viewControllerForAlertPresentation;
- (id)viewControllers;

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