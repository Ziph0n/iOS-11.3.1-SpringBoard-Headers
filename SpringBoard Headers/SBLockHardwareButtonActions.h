//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBHardwareButtonGestureParametersProviderBase.h"

#import "SBHardwareButtonGestureParametersObserver.h"

@class NSString, SBAccessibilityHardwareButtonInteraction, SBApplication, SBHardwareButtonGestureParameters, SBHardwareButtonService, SBProximitySensorManager, SBSiriHardwareButtonInteraction, SBSleepWakeHardwareButtonInteraction, SBWalletPreArmController, SOSManager;

@interface SBLockHardwareButtonActions : SBHardwareButtonGestureParametersProviderBase <SBHardwareButtonGestureParametersObserver>
{
    long long _homeButtonType;
    SBApplication *_lastLockButtonEventRecipient;
    SBProximitySensorManager *_proximitySensorManager;
    SBHardwareButtonService *_hardwareButtonService;
    SBWalletPreArmController *_walletPreArmController;
    SOSManager *_sosManager;
    SBHardwareButtonGestureParameters *_accessibilityGestureParameters;
    SBHardwareButtonGestureParameters *_siriGestureParameters;
    SBHardwareButtonGestureParameters *_proximitySensorGestureParameters;
    long long _sosTriggerMechanism;
    _Bool _isButtonDown;
    SBSiriHardwareButtonInteraction *_siriButtonInteraction;
    SBAccessibilityHardwareButtonInteraction *_accessibilityButtonInteraction;
    SBSleepWakeHardwareButtonInteraction *_sleepWakeButtonInteraction;
    id <SBHardwareButtonInteraction><SBHardwareButtonGestureParametersProvider> _proximitySensorButtonInteraction;
}

- (void).cxx_destruct;
- (id)_foregroundAppRegisteredForLockButtonEvents;
- (_Bool)_isSOSActive;
- (void)_performSOSDidTriggerActions;
- (void)_registeredLockButtonAppsDidChange:(id)arg1;
- (_Bool)_sendButtonDownToRegisteredApp;
- (void)_sendButtonEventToApp:(id)arg1 down:(_Bool)arg2;
- (_Bool)_sendButtonUpToRegisteredApp;
- (_Bool)_shouldWaitForDoublePress;
- (void)_showPowerDownAlertOnForceReset;
@property(retain, nonatomic) SBAccessibilityHardwareButtonInteraction *accessibilityButtonInteraction; // @synthesize accessibilityButtonInteraction=_accessibilityButtonInteraction;
- (_Bool)disallowsDoublePressForReason:(id *)arg1;
- (_Bool)disallowsLongPressForReason:(id *)arg1;
- (_Bool)disallowsSinglePressForReason:(id *)arg1;
- (_Bool)disallowsTriplePressForReason:(id *)arg1;
- (id)hardwareButtonGestureParameters;
- (id)initWithHomeButtonType:(long long)arg1 proximitySensorManager:(id)arg2;
@property(readonly, nonatomic) _Bool isButtonDown; // @synthesize isButtonDown=_isButtonDown;
- (_Bool)performButtonUpPreActions;
- (void)performDoublePressActions;
- (void)performFinalButtonUpActions;
- (void)performForceResetSequenceBeganActions;
- (void)performInitialButtonDownActions;
- (void)performInitialButtonUpActions;
- (void)performLongPressActions;
- (void)performLongPressCancelledActions;
- (void)performSOSActionsWithUUID:(id)arg1 triggerMechanism:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)performSOSGestureBeganActions;
- (void)performSOSGestureEndedActions;
- (void)performSecondButtonDownActions;
- (void)performSinglePressAction;
- (void)performTriplePressActions;
- (void)provider:(id)arg1 didUpdateButtonGestureParameters:(id)arg2;
@property(retain, nonatomic) id <SBHardwareButtonInteraction><SBHardwareButtonGestureParametersProvider> proximitySensorButtonInteraction; // @synthesize proximitySensorButtonInteraction=_proximitySensorButtonInteraction;
- (_Bool)reverseFadeOutIfNeeded;
@property(retain, nonatomic) SBSiriHardwareButtonInteraction *siriButtonInteraction; // @synthesize siriButtonInteraction=_siriButtonInteraction;
@property(retain, nonatomic) SBSleepWakeHardwareButtonInteraction *sleepWakeButtonInteraction; // @synthesize sleepWakeButtonInteraction=_sleepWakeButtonInteraction;
- (_Bool)shouldBeginDoublePressGestureWhileObjectWithinProximity;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

