//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSInvalidatable.h"

@class NSString, SBHIDInterface;

@interface SBHIDUILockAssertion : NSObject <BSInvalidatable>
{
    _Bool _suspendProximitySensor;
    _Bool _suspendMultitouch;
    long long _source;
    SBHIDInterface *_HIDInterface;
    NSString *_reason;
}

- (void).cxx_destruct;
@property(nonatomic) __weak SBHIDInterface *HIDInterface; // @synthesize HIDInterface=_HIDInterface;
@property(readonly, copy) NSString *description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)invalidate;
@property(copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(nonatomic) long long source; // @synthesize source=_source;
@property(nonatomic) _Bool suspendMultitouch; // @synthesize suspendMultitouch=_suspendMultitouch;
@property(nonatomic) _Bool suspendProximitySensor; // @synthesize suspendProximitySensor=_suspendProximitySensor;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
