//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SBBootDefaults, UMUser;

@interface SBStartupTransitionContextPersistence : NSObject
{
    SBBootDefaults *_bootDefaults;
    UMUser *_user;
}

- (void).cxx_destruct;
- (id)initWithBootDefaults:(id)arg1 user:(id)arg2;
- (id)readTransitionContext;
- (void)saveContext:(id)arg1;

@end

