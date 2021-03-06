//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_source>, NSString;

@interface SBAssertion : NSObject
{
    id <SBAssertionDelegate> _delegate;
    NSString *_reason;
    unsigned int _clientPort;
    NSObject<OS_dispatch_source> *_source;
}

- (void).cxx_destruct;
- (void)dealloc;
@property(nonatomic) __weak id <SBAssertionDelegate> delegate; // @synthesize delegate=_delegate;
- (id)description;
- (id)initWithClientPort:(unsigned int)arg1 reason:(id)arg2;
@property(readonly, copy, nonatomic) NSString *reason; // @synthesize reason=_reason;

@end

