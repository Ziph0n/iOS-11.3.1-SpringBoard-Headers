//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSMutableSet, SBLockScreenManager, SBLockStateAggregator, SBQuietModeStateAggregator;

@interface SBNCSoundController : NSObject
{
    SBLockScreenManager *_lockScreenManager;
    SBLockStateAggregator *_lockStateAggregator;
    SBQuietModeStateAggregator *_quietModeStateAggregator;
    NSMutableDictionary *_playingSounds;
    NSMutableSet *_requestsRequiringExplicitKill;
}

- (void).cxx_destruct;
- (void)_hardwareButtonPressed:(id)arg1;
- (_Bool)_isDeviceUILocked;
- (_Bool)_isQuietModeEnabledAndActive;
- (void)_killSounds;
- (id)_soundWithNotificationSound:(id)arg1;
- (_Bool)canPlaySoundForNotificationRequest:(id)arg1;
- (id)init;
- (id)initWithLockScreenManager:(id)arg1 lockStateAggregator:(id)arg2 quietModeStateAggregator:(id)arg3;
@property(retain, nonatomic) SBLockScreenManager *lockScreenManager; // @synthesize lockScreenManager=_lockScreenManager;
@property(retain, nonatomic) SBLockStateAggregator *lockStateAggregator; // @synthesize lockStateAggregator=_lockStateAggregator;
- (void)playSoundForNotificationRequest:(id)arg1;
- (void)playSoundIfPossibleForNotificationRequest:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *playingSounds; // @synthesize playingSounds=_playingSounds;
@property(retain, nonatomic) SBQuietModeStateAggregator *quietModeStateAggregator; // @synthesize quietModeStateAggregator=_quietModeStateAggregator;
@property(retain, nonatomic) NSMutableSet *requestsRequiringExplicitKill; // @synthesize requestsRequiringExplicitKill=_requestsRequiringExplicitKill;
- (void)stopSoundForNotificationRequest:(id)arg1;

@end
