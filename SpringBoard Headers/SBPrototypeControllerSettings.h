//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUISettings.h"

@class NSString;

@interface SBPrototypeControllerSettings : SBUISettings
{
    _Bool _preventLockover;
    _Bool _allowPrototypeSettings;
    NSString *_testRecipeClassName;
    double _windowAlpha;
}

- (void).cxx_destruct;
@property _Bool allowPrototypeSettings; // @synthesize allowPrototypeSettings=_allowPrototypeSettings;
@property _Bool preventLockover; // @synthesize preventLockover=_preventLockover;
- (void)setDefaultValues;
@property(retain) NSString *testRecipeClassName; // @synthesize testRecipeClassName=_testRecipeClassName;
@property double windowAlpha; // @synthesize windowAlpha=_windowAlpha;

@end

