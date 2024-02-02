<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>HUEditRoomViewController.h</title>
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

/PrivateFrameworks/HomeUI.framework/HUEditRoomViewController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI (1)
 */

@interface HUEditRoomViewController : HUItemTableViewController <HUWallpaperEditingViewControllerDelegate, HUWallpaperPickerInlineViewControllerDelegate, HUWallpaperPickerViewControllerDelegate, HUWallpaperThumbnailCellDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, UITextFieldDelegate> {
    <HUEditRoomViewControllerAddRoomDelegate> * _addRoomDelegate;
    HUEditableTextCell * _nameCell;
    <HUEditRoomViewControllerPresentationDelegate> * _presentationDelegate;
    HFRoomBuilder * _roomBuilder;
    HUEditRoomItemManager * _roomItemManager;
    UIBarButtonItem * _savedButtonBarItem;
    HUWallpaperPickerInlineViewController * _wallpaperPickerController;
    HUZoneModuleController * _zoneModuleController;
}

@property (nonatomic, readonly) <HUEditRoomViewControllerAddRoomDelegate> *addRoomDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) HUEditableTextCell *nameCell;
@property (nonatomic, readonly) <HUEditRoomViewControllerPresentationDelegate> *presentationDelegate;
@property (nonatomic, readonly) HFRoomBuilder *roomBuilder;
@property (nonatomic) HUEditRoomItemManager *roomItemManager;
@property (nonatomic, retain) UIBarButtonItem *savedButtonBarItem;
@property (readonly) Class superclass;
@property (nonatomic, retain) HUWallpaperPickerInlineViewController *wallpaperPickerController;
@property (nonatomic, retain) HUZoneModuleController *zoneModuleController;

- (void).cxx_destruct;
- (id)_allTextFields;
- (void)_resignTextFieldFirstResponder;
- (void)addButtonPressed:(id)arg1;
- (id)addRoomDelegate;
- (unsigned long long)automaticDisablingReasonsForItem:(id)arg1;
- (void)cancelButtonPressed:(id)arg1;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (void)doneButtonPressed:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (id)initWithRoomBuilder:(id)arg1 presentationDelegate:(id)arg2 addRoomDelegate:(id)arg3;
- (id)itemModuleControllers;
- (id)nameCell;
- (void)nameFieldTextChanged:(id)arg1;
- (void)presentWallpaperEditingViewControllerWithImage:(id)arg1 wallpaper:(id)arg2;
- (id)presentationDelegate;
- (id)roomBuilder;
- (id)roomItemManager;
- (id)savedButtonBarItem;
- (void)setNameCell:(id)arg1;
- (void)setRoomItemManager:(id)arg1;
- (void)setSavedButtonBarItem:(id)arg1;
- (void)setWallpaperPickerController:(id)arg1;
- (void)setZoneModuleController:(id)arg1;
- (void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 editActionsForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (bool)textFieldShouldReturn:(id)arg1;
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(bool)arg4;
- (void)updateTitle;
- (void)updateWallpaper:(id)arg1 image:(id)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)wallpaperEditing:(id)arg1 didFinishWithWallpaper:(id)arg2 image:(id)arg3;
- (void)wallpaperEditingDidCancel:(id)arg1;
- (void)wallpaperPicker:(id)arg1 didReceiveDroppedImage:(id)arg2;
- (void)wallpaperPicker:(id)arg1 didSelectWallpaper:(id)arg2 withImage:(id)arg3;
- (id)wallpaperPickerController;
- (void)wallpaperPickerDidFinish:(id)arg1 wallpaper:(id)arg2 image:(id)arg3;
- (void)wallpaperPickerRequestOpenWallpaperEditor:(id)arg1;
- (void)wallpaperThumbnailCell:(id)arg1 didReceiveDroppedImage:(id)arg2;
- (id)zoneModuleController;

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