//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SBAttentionAwarenessClient;

@protocol SBAttentionAwarenessClientDelegate <NSObject>
- (void)client:(SBAttentionAwarenessClient *)arg1 attentionLostTimeoutDidExpire:(double)arg2 forConfigurationGeneration:(unsigned long long)arg3 withAssociatedObject:(id)arg4;
- (void)clientDidResetForUserAttention:(SBAttentionAwarenessClient *)arg1;
@end
