//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBScaleIconZoomAnimator.h"

@class SBCrossfadeZoomSettings, UIView;

@interface SBCrossfadeIconZoomAnimator : SBScaleIconZoomAnimator
{
    UIView *_crossfadeView;
    _Bool _performsTrueCrossfade;
    _Bool _masksCorners;
}

- (void).cxx_destruct;
- (double)_appSnapshotCornerRadiusForFraction:(double)arg1;
- (void)_assertCrossfadeViewSizeIfNecessary;
- (void)_cleanupAnimation;
- (void)_cleanupZoom;
- (void)_delayedForRotation;
- (unsigned long long)_numberOfSignificantAnimations;
- (void)_performAnimationToFraction:(double)arg1 withCentralAnimationSettings:(id)arg2 delay:(double)arg3 alreadyAnimating:(_Bool)arg4 sharedCompletion:(CDUnknownBlockType)arg5;
- (void)_prepareAnimation;
- (void)_setAnimationFraction:(double)arg1;
- (struct CGRect)_zoomedFrame;
- (struct CGPoint)_zoomedIconCenter;
- (_Bool)fadesHomeScreen;
- (id)initWithFolderController:(id)arg1 crossfadeView:(id)arg2 icon:(id)arg3;
@property(nonatomic) _Bool masksCorners; // @synthesize masksCorners=_masksCorners;
- (double)maxHomeScreenZoomScale;
@property(nonatomic) _Bool performsTrueCrossfade; // @synthesize performsTrueCrossfade=_performsTrueCrossfade;

// Remaining properties
@property(retain, nonatomic) SBCrossfadeZoomSettings *settings; // @dynamic settings;

@end
