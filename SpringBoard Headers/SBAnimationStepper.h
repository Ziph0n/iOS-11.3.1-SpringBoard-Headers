//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CAAnimationDelegate.h"
#import "SBUIAnimationStepping.h"

@class BSAnimationSettings, CADisplayLink, NSArray, NSMutableSet, NSString;

@interface SBAnimationStepper : NSObject <CAAnimationDelegate, SBUIAnimationStepping>
{
    BSAnimationSettings *_animationSettings;
    NSMutableSet *_views;
    NSMutableSet *_finishedAnimatingViews;
    CADisplayLink *_displayLink;
    CDUnknownBlockType _completion;
    double _percentage;
    _Bool _invalidated;
    _Bool _completed;
    _Bool _finishingForward;
    _Bool _finishingBackward;
    _Bool _animatingToStepPercent;
    double _animatedSteppingTimestamp;
    double _animatedSteppingStartPercent;
    double _animatedSteppingTargetPercent;
    double _finishBackwardTimestamp;
    double _finishBackwardDuration;
    double _finishBackwardPercentage;
    _Bool _adjustsDurationForLongestAnimation;
    double _duration;
    double _finishSpeed;
}

- (void).cxx_destruct;
- (void)_adjustDurationForLongestAnimation;
- (void)_checkForCompletion;
- (void)_displayLinkFired:(id)arg1;
- (void)_displayLinkFiredForBackwardToStart:(id)arg1;
- (void)_makeSubviewTree:(id)arg1 fromView:(id)arg2;
- (double)_nextCommitTime;
- (void)_setStepPercentage:(double)arg1;
- (void)_updateAnimationSteppingTarget:(double)arg1;
@property(nonatomic) _Bool adjustsDurationForLongestAnimation; // @synthesize adjustsDurationForLongestAnimation=_adjustsDurationForLongestAnimation;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)dealloc;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double finishSpeed; // @synthesize finishSpeed=_finishSpeed;
- (void)finishSteppingBackwardToStart;
- (void)finishSteppingBackwardToStartWithCompletion:(CDUnknownBlockType)arg1;
- (void)finishSteppingForwardToEnd;
- (void)finishSteppingForwardToEndWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithAnimationSettings:(id)arg1;
- (void)invalidate;
@property(readonly, nonatomic, getter=isStepped) _Bool stepped;
@property(nonatomic) double stepPercentage;
- (void)startSteppingAnimationsInView:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
@property(readonly, nonatomic) NSArray *views; // @dynamic views;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
