//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface SBApplicationBlurSnapshotGenerationContainerView : UIView
{
    UIView *_wallpaperView;
    UIView *_realSnapshotView;
    UIView *_liveBlurView;
}

- (void).cxx_destruct;
- (void)layoutSubviews;
@property(retain, nonatomic) UIView *liveBlurView; // @synthesize liveBlurView=_liveBlurView;
@property(retain, nonatomic) UIView *realSnapshotView; // @synthesize realSnapshotView=_realSnapshotView;
@property(retain, nonatomic) UIView *wallpaperView; // @synthesize wallpaperView=_wallpaperView;

@end

