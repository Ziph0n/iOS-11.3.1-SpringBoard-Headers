//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PGPictureInPictureControllerDelegate.h"
#import "SBAlertItemsControllerObserver.h"
#import "SBAlertManagerObserver.h"
#import "SBAssistantObserver.h"

@class NSMutableDictionary, NSMutableSet, NSString, PGPictureInPictureController, SBMainScreenActiveInterfaceOrientationWindow;

@interface SBPIPController : NSObject <PGPictureInPictureControllerDelegate, SBAlertManagerObserver, SBAlertItemsControllerObserver, SBAssistantObserver>
{
    PGPictureInPictureController *_pictureInPictureController;
    SBMainScreenActiveInterfaceOrientationWindow *_pictureInPictureWindow;
    struct UIEdgeInsets _pictureInPictureWindowMargin;
    NSMutableSet *_pictureInPictureWindowHiddenReasons;
    NSMutableDictionary *_pictureInPictureInsetsForSource;
}

+ (_Bool)isAutoPictureInPictureSupported;
+ (_Bool)isPictureInPictureSupported;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_adjustPIPInsetsForKeyboardFrameChangeNotification:(id)arg1;
- (void)_appSwitcherWillQuitApp:(id)arg1;
- (void)_bulletinWillDismiss:(id)arg1;
- (void)_bulletinWillPresent:(id)arg1;
- (void)_createWindowAndRootViewControllerIfNeeded;
- (void)_destroyWindowAndRootViewControllerIfPossible;
- (void)_floatingDockHeightWillChange:(id)arg1;
- (void)_keyboardWillChangeFrame:(id)arg1;
- (void)_keyboardWillDisappear:(id)arg1;
- (void)_keyboardWillRotate:(id)arg1;
- (void)_lockStateDidChange:(id)arg1;
- (void)_managePictureInPictureWindowLevel;
- (void)_managePictureInPictureWindowVisibilityAnimated:(_Bool)arg1;
- (void)_nowPlayingStateChangedForPartialMedusaDevice;
- (id)_pictureInPictureApplicationForProcessIdentifier:(int)arg1;
- (id)_pipWindow;
- (_Bool)_pointInside:(struct CGPoint)arg1;
- (void)_setPictureInPictureWindowMargin:(struct UIEdgeInsets)arg1 animationDuration:(double)arg2 animationOptions:(unsigned long long)arg3;
- (void)_updateFloatingDockInsets;
- (void)_updatePictureInPictureOverlayInsetsWithDuration:(double)arg1;
- (void)alertItemsController:(id)arg1 didActivateAlertItem:(id)arg2;
- (void)alertItemsController:(id)arg1 didDeactivateAlertItem:(id)arg2 forReason:(int)arg3;
- (void)alertItemsController:(id)arg1 willActivateAlertItem:(id)arg2;
- (void)alertManager:(id)arg1 didCreateAlertWindow:(id)arg2;
- (void)alertManager:(id)arg1 didTearDownAlertWindow:(id)arg2;
- (void)applyPictureInPictureInsets:(struct UIEdgeInsets)arg1 fromSource:(long long)arg2 duration:(double)arg3;
- (void)assistant:(id)arg1 viewDidDisappear:(long long)arg2;
- (void)assistant:(id)arg1 viewWillAppear:(long long)arg2;
- (void)dealloc;
- (id)init;
- (_Bool)isPictureInPictureWindowVisible;
- (void)pictureInPictureController:(id)arg1 didCreatePictureInPictureViewController:(id)arg2;
- (void)pictureInPictureController:(id)arg1 willDestroyPictureInPictureViewController:(id)arg2;
- (void)pictureInPictureController:(id)arg1 willHidePictureInPictureViewController:(id)arg2;
- (void)pictureInPictureInterruptionBegan;
- (void)pictureInPictureInterruptionEnded;
- (void)setPictureInPictureWindowHidden:(_Bool)arg1 withReason:(id)arg2;
- (_Bool)shouldStartPictureInPictureForApplicationWithProcessIdentifierEnteringBackground:(int)arg1;
- (void)startPictureInPictureForApplicationWithProcessIdentifierEnteringBackground:(int)arg1 animated:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

