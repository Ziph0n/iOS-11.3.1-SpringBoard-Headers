//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SBApplicationSceneBackgroundView.h"

@class NSString, SBWallpaperEffectView;

@interface SBApplicationSceneBackgroundView : UIView <SBApplicationSceneBackgroundView>
{
    long long _wallpaperStyle;
    SBWallpaperEffectView *_backgroundWallpaperEffectView;
    _Bool _needsClassicModeBackground;
    _Bool _shouldUseBrightMaterial;
}

- (void).cxx_destruct;
- (id)_backgroundWallpaperEffectView;
- (_Bool)_isTranslucent;
- (id)_opaqueBackgroundColorOrClearColor;
- (void)_setupBackground;
- (void)_teardownBackgroundWallpaperEffectView;
@property(readonly, copy) NSString *description;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) _Bool needsClassicModeBackground; // @synthesize needsClassicModeBackground=_needsClassicModeBackground;
@property(nonatomic) _Bool shouldUseBrightMaterial; // @synthesize shouldUseBrightMaterial=_shouldUseBrightMaterial;
@property(nonatomic) long long wallpaperStyle; // @synthesize wallpaperStyle=_wallpaperStyle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

