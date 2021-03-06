//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBDashBoardViewControllerBase.h"

#import "SBDashBoardQuickActionsDelegate.h"
#import "SBUIFlashlightObserver.h"

@class NSString, SBDashBoardViewController, SBUIFlashlightController;

@interface SBDashBoardQuickActionsViewController : SBDashBoardViewControllerBase <SBDashBoardQuickActionsDelegate, SBUIFlashlightObserver>
{
    SBUIFlashlightController *_flashlight;
    SBDashBoardViewController *_dashBoardViewController;
}

+ (_Bool)deviceSupportsButtons;
+ (Class)viewClass;
- (void).cxx_destruct;
- (void)_deviceBlockStateDidChangeNotification:(id)arg1;
- (void)_featureLockStateDidChangeNotification:(id)arg1;
- (_Bool)_isFlashlightOn;
- (void)_launchCamera;
- (void)_resetIdleTimer;
- (void)_setupFlashlight;
- (_Bool)_supportsCamera;
- (void)_tearDownFlashlight;
- (void)_tearDownFlashlightIfOff;
- (void)_toggleFlashlight;
- (void)_updateState;
- (_Bool)allowsCameraPress;
- (_Bool)allowsFlashlight;
@property(nonatomic) __weak SBDashBoardViewController *dashBoardViewController; // @synthesize dashBoardViewController=_dashBoardViewController;
- (void)dealloc;
- (void)fireActionForButton:(id)arg1;
- (void)flashlightAvailabilityDidChange:(_Bool)arg1;
- (void)flashlightLevelDidChange:(unsigned long long)arg1;
- (void)flashlightOverheatedDidChange:(_Bool)arg1;
- (_Bool)handleEvent:(id)arg1;
- (_Bool)hasCamera;
- (_Bool)hasFlashlight;
- (_Bool)isPortrait;
- (void)loadView;
- (long long)presentationPriority;
- (long long)presentationStyle;
- (long long)presentationType;
- (id)quickActionsView;
- (id)quickActionsViewIfLoaded;
- (void)touchBeganForButton:(id)arg1;
- (void)touchEndedForButton:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

