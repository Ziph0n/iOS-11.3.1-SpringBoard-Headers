//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NCNotificationAlertDestination.h"
#import "NCNotificationViewControllerDelegate.h"
#import "NCNotificationViewControllerDelegatePrivate.h"
#import "NCNotificationViewControllerObserving.h"
#import "SBAssistantObserver.h"
#import "SBDashBoardExternalBehaviorProviding.h"
#import "SBMotionGestureObserver.h"
#import "SBNotificationDestinationHomeButtonPressHandler.h"
#import "SBNotificationExtensionVisibilityProviding.h"
#import "SBNotificationHomeAffordanceControllerClient.h"

@class BSSimpleAssertion, FBUIApplicationSceneDeactivationAssertion, NCNotificationViewController, NSMutableSet, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>, NSObject<OS_dispatch_source>, NSString, SBAppStatusBarSettingsAssertion, SBAssistantController, SBLockScreenManager, SBNotificationBannerWindow, SBNotificationLongLookBannerDestination, SBQuietModeStateAggregator, SBSetupManager;

@interface SBNotificationBannerDestination : NSObject <NCNotificationViewControllerDelegatePrivate, SBDashBoardExternalBehaviorProviding, SBMotionGestureObserver, SBAssistantObserver, SBNotificationHomeAffordanceControllerClient, NCNotificationAlertDestination, SBNotificationDestinationHomeButtonPressHandler, SBNotificationExtensionVisibilityProviding, NCNotificationViewControllerDelegate, NCNotificationViewControllerObserving>
{
    _Bool _userInteractionInProgress;
    id <NCNotificationAlertDestinationDelegate> _delegate;
    SBAssistantController *_assistantController;
    SBLockScreenManager *_lockScreenManager;
    SBQuietModeStateAggregator *_quietModeStateAggregator;
    SBSetupManager *_setupManager;
    SBNotificationBannerWindow *_bannerWindow;
    NCNotificationViewController *_presentedBanner;
    NSMutableSet *_presentedBanners;
    NSObject<OS_dispatch_source> *_presentTimer;
    NSObject<OS_dispatch_source> *_replaceTimer;
    NSObject<OS_dispatch_source> *_dismissTimer;
    NSObject<OS_dispatch_queue> *_bannerPresentationQueue;
    NSObject<OS_dispatch_semaphore> *_bannerPresentationSemaphore;
    NSObject<OS_dispatch_semaphore> *_pendingTransitionSemaphore;
    FBUIApplicationSceneDeactivationAssertion *_resignActiveAssertion;
    SBAppStatusBarSettingsAssertion *_systemStatusBarAssertion;
    BSSimpleAssertion *_appsStatusBarAssertion;
    SBNotificationLongLookBannerDestination *_longLookDestination;
    NSMutableSet *_destinationObservers;
    id <BSInvalidatable> _idleTimerDisableAssertion;
}

+ (id)notificationRequestForBannerWithIcon;
- (void).cxx_destruct;
- (_Bool)_canReceiveNotificationRequestIfLocked:(id)arg1;
- (void)_cancelDismissTimer;
- (void)_cancelReplaceAndDismissTimers;
- (void)_cancelReplaceTimer;
- (void)_cleanupRootViewControllerPresentationStack;
- (void)_clearPresentedBanner:(id)arg1;
- (void)_dismissBannerCompleted:(id)arg1;
- (void)_dismissPresentedBannerAndClearNotification:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)_isContentSuppressedForNotificationRequest:(id)arg1;
- (_Bool)_isDeviceAuthenticated;
- (_Bool)_isInSetupMode;
- (_Bool)_isPendingBannerPresentation;
- (_Bool)_isPresentedBannerBeingDragged;
- (_Bool)_isPresentingActiveAlert;
- (_Bool)_isPresentingBanner;
- (_Bool)_isPresentingBannerForAudioMessage;
- (_Bool)_isPresentingBannerInLongLook;
- (_Bool)_isPresentingBannerPreventingAutomaticLock;
- (_Bool)_isPresentingBannerWithHiddenPreview;
- (_Bool)_isPresentingOrDismissingBanner;
- (_Bool)_isPresentingOrDismissingBannerForRequest:(id)arg1;
- (_Bool)_isPresentingStickyBanner;
- (_Bool)_isQuietModeEnabledAndActive;
- (_Bool)_isShowingShortLookAtRest;
- (_Bool)_isUILocked;
- (void)_lockStateChanged;
- (id)_notificationViewControllerForRequest:(id)arg1;
- (void)_postNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_postNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2 modal:(_Bool)arg3 sourceAction:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_presentNotificationViewController:(id)arg1 modal:(_Bool)arg2 forRequest:(id)arg3 sourceAction:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (_Bool)_presentedBannerMatchesNotificationRequest:(id)arg1;
- (void)_publishDidPresentBannerForNotificationRequest:(id)arg1;
- (void)_resetPresentTimer;
- (id)_rootViewController;
- (void)_runBannerPresentationTestWithBeginBlock:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_runLongLookDismissAndClearTestWithBeginBlock:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_runLongLookDismissAndReParkTestWithBeginBlock:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_runLongLookDismissalTestAndClearNotifications:(_Bool)arg1 withBeginBlock:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_runLongLookPresentationTestWithBeginBlock:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_scheduleNotificationViewControllerPresentationBlock:(CDUnknownBlockType)arg1;
@property(retain, nonatomic, setter=_setPresentedBanner:) NCNotificationViewController *presentedBanner; // @synthesize presentedBanner=_presentedBanner;
- (void)_setReadyForNotificationRequests;
- (void)_setReadyForNotificationRequestsCoalescingWith:(id)arg1;
- (void)_setStatusBarsHidden:(_Bool)arg1 withDuration:(double)arg2;
- (void)_setupModeChanged;
- (void)_setupSystemStateChangeNotifications;
- (void)_setupTimers;
- (_Bool)_shouldHideStatusBar;
- (void)_startDismissTimer;
- (void)_startReplaceAndDismissTimersForRequest:(id)arg1;
- (void)_startReplaceTimer;
- (id)_startTimerWithDelay:(unsigned long long)arg1 eventHandler:(CDUnknownBlockType)arg2;
- (id)_topPresentedViewController;
- (void)_updateMotionGestureObservation;
- (id)_viewControllerForPresentation;
@property(retain, nonatomic) BSSimpleAssertion *appsStatusBarAssertion; // @synthesize appsStatusBarAssertion=_appsStatusBarAssertion;
- (void)assistant:(id)arg1 viewDidDisappear:(long long)arg2;
- (void)assistant:(id)arg1 viewWillAppear:(long long)arg2;
@property(retain, nonatomic) SBAssistantController *assistantController; // @synthesize assistantController=_assistantController;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *bannerPresentationQueue; // @synthesize bannerPresentationQueue=_bannerPresentationQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *bannerPresentationSemaphore; // @synthesize bannerPresentationSemaphore=_bannerPresentationSemaphore;
@property(retain, nonatomic) SBNotificationBannerWindow *bannerWindow; // @synthesize bannerWindow=_bannerWindow;
- (_Bool)canReceiveNotificationRequest:(id)arg1;
@property(readonly, copy, nonatomic) NSString *dashBoardIdentifier;
- (void)dealloc;
@property(nonatomic) __weak id <NCNotificationDestinationDelegate> delegate;
@property(retain, nonatomic) NSMutableSet *destinationObservers; // @synthesize destinationObservers=_destinationObservers;
- (void)didReceiveRaiseGesture;
- (void)dismissPresentedBannerAnimated:(_Bool)arg1;
- (void)dismissPresentedBannerAnimated:(_Bool)arg1 forceIfSticky:(_Bool)arg2;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *dismissTimer; // @synthesize dismissTimer=_dismissTimer;
- (_Bool)handleHomeButtonPress;
- (id)hideHomeAffordanceAnimationSettingsForNotificationViewController:(id)arg1;
- (void)homeGestureParticipantOwningHomeGestureDidChange:(id)arg1;
@property(readonly, nonatomic) NSString *identifier;
@property(retain, nonatomic) id <BSInvalidatable> idleTimerDisableAssertion; // @synthesize idleTimerDisableAssertion=_idleTimerDisableAssertion;
@property(readonly, nonatomic) long long idleTimerDuration;
@property(readonly, nonatomic) long long idleTimerMode;
@property(readonly, nonatomic) long long idleWarnMode;
- (id)init;
@property(readonly, nonatomic, getter=isDismissingBanner) _Bool dismissingBanner;
- (_Bool)isNotificationContentExtensionVisible:(id)arg1;
@property(readonly, nonatomic, getter=isPresentingBanner) _Bool presentingBanner;
@property(readonly, nonatomic, getter=isPresentingBannerInLongLook) _Bool presentingBannerInLongLook;
@property(readonly, nonatomic, getter=isPreventingAutomaticLock) _Bool preventingAutomaticLock;
@property(nonatomic, getter=isUserInteractionInProgress) _Bool userInteractionInProgress; // @synthesize userInteractionInProgress=_userInteractionInProgress;
@property(retain, nonatomic) SBLockScreenManager *lockScreenManager; // @synthesize lockScreenManager=_lockScreenManager;
@property(retain, nonatomic) SBNotificationLongLookBannerDestination *longLookDestination; // @synthesize longLookDestination=_longLookDestination;
- (void)longLookDidDismissForNotificationViewController:(id)arg1;
- (void)longLookDidPresentForNotificationViewController:(id)arg1;
- (void)longLookWillDismissForNotificationViewController:(id)arg1;
- (void)longLookWillPresentForNotificationViewController:(id)arg1;
- (void)modifyNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2;
@property(readonly, nonatomic) long long notificationBehavior;
- (id)notificationUsageTrackingStateForNotificationViewController:(id)arg1;
- (void)notificationViewController:(id)arg1 executeAction:(id)arg2 withParameters:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)notificationViewController:(id)arg1 requestPermissionToExecuteAction:(id)arg2 withParameters:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)notificationViewController:(id)arg1 shouldFinishLongLookTransitionWithCompletionBlock:(CDUnknownBlockType)arg2;
- (id)notificationViewController:(id)arg1 staticContentProviderForNotificationRequest:(id)arg2;
- (_Bool)notificationViewController:(id)arg1 suggestsDismissingShortLookWithSource:(id)arg2;
- (void)notificationViewControllerDidDismiss:(id)arg1;
- (void)notificationViewControllerDidEndUserInteraction:(id)arg1;
- (void)notificationViewControllerIsReadyToBePresented:(id)arg1;
- (_Bool)notificationViewControllerShouldInterpretTapAsDefaultAction:(id)arg1;
- (_Bool)notificationViewControllerShouldPan:(id)arg1;
- (void)notificationViewControllerWillBeginUserInteraction:(id)arg1;
- (void)notificationViewControllerWillDismiss:(id)arg1;
- (void)notificationViewControllerWillPresent:(id)arg1;
@property(readonly, nonatomic) long long participantState;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *pendingTransitionSemaphore; // @synthesize pendingTransitionSemaphore=_pendingTransitionSemaphore;
- (void)postNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2;
- (void)prepareDestinationToReceiveCriticalNotificationRequest:(id)arg1;
- (void)presentModalBannerAndExpandForNotificationRequest:(id)arg1;
- (void)presentModalBannerForNotificationRequest:(id)arg1;
- (void)presentModalBannerForNotificationRequest:(id)arg1 sourceAction:(id)arg2;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *presentTimer; // @synthesize presentTimer=_presentTimer;
@property(retain, nonatomic) NSMutableSet *presentedBanners; // @synthesize presentedBanners=_presentedBanners;
@property(readonly, nonatomic) long long proximityDetectionMode;
@property(retain, nonatomic) SBQuietModeStateAggregator *quietModeStateAggregator; // @synthesize quietModeStateAggregator=_quietModeStateAggregator;
- (void)registerNotificationBannerDestinationObserver:(id)arg1;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *replaceTimer; // @synthesize replaceTimer=_replaceTimer;
@property(retain, nonatomic) FBUIApplicationSceneDeactivationAssertion *resignActiveAssertion; // @synthesize resignActiveAssertion=_resignActiveAssertion;
@property(readonly, nonatomic) unsigned long long restrictedCapabilities;
@property(readonly, nonatomic) long long scrollingStrategy;
@property(retain, nonatomic) SBSetupManager *setupManager; // @synthesize setupManager=_setupManager;
@property(retain, nonatomic) SBAppStatusBarSettingsAssertion *systemStatusBarAssertion; // @synthesize systemStatusBarAssertion=_systemStatusBarAssertion;
- (id)settleHomeAffordanceAnimationBehaviorDescriptionForNotificationViewController:(id)arg1;
- (_Bool)shouldLoadAudioAccessoryViewForNotificationViewController:(id)arg1;
- (id)unhideHomeAffordanceAnimationSettingsForNotificationViewController:(id)arg1;
- (void)unregisterNotificationBannerDestinationObserver:(id)arg1;
- (void)withdrawNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

