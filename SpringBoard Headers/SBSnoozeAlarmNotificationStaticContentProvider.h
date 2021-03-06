//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBNotificationStaticContentProvider.h"

@class NSTimer;

@interface SBSnoozeAlarmNotificationStaticContentProvider : SBNotificationStaticContentProvider
{
    double _fireTime;
    NSTimer *_tickTimer;
}

- (void).cxx_destruct;
- (id)_formatDuration:(double)arg1;
- (void)_tickTimerFired:(id)arg1;
- (void)dealloc;
@property(nonatomic) double fireTime; // @synthesize fireTime=_fireTime;
- (id)init;
- (id)initWithNotificationRequest:(id)arg1 viewController:(id)arg2;
- (void)invalidateTimer;
- (id)secondaryText;
@property(retain, nonatomic) NSTimer *tickTimer; // @synthesize tickTimer=_tickTimer;
- (id)title;

@end

