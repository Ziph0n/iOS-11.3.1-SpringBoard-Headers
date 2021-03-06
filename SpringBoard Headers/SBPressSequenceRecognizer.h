//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BSTimer, NSMutableArray, SBPressSequenceValidator, SBPressTuple;

@interface SBPressSequenceRecognizer : NSObject
{
    double _lastPressDownEvent;
    double _lastPressUpEvent;
    BSTimer *_watchdogTimer;
    SBPressTuple *_currentPressTuple;
    NSMutableArray *_currentSequence;
    id <SBPressSequenceRecognizerDelegate> _delegate;
    SBPressSequenceValidator *_validator;
    unsigned long long _numberOfPresses;
}

- (void).cxx_destruct;
- (void)_complete;
- (void)_handlePressDownWithTimestamp:(double)arg1;
- (void)_handlePressUpWithTimestamp:(double)arg1;
- (void)_reset;
- (void)_resetAfterDelay:(double)arg1;
- (void)_resetAndNotify;
- (void)_resetWatchdogIfNecessary;
- (double)_watchdogTimeIntervalFromDelay:(double)arg1;
@property(nonatomic) __weak id <SBPressSequenceRecognizerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)init;
- (id)initWithValidator:(id)arg1 numberOfPresses:(unsigned long long)arg2;
@property(readonly, nonatomic) unsigned long long numberOfPresses; // @synthesize numberOfPresses=_numberOfPresses;
- (void)registerPressDownWithTimestamp:(double)arg1;
- (void)registerPressUpWithTimestamp:(double)arg1;
- (void)resetWithNewValidator:(id)arg1 numberOfPresses:(unsigned long long)arg2;
@property(readonly, nonatomic) SBPressSequenceValidator *validator; // @synthesize validator=_validator;

@end

