//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSUserActivity;

@interface CSDUserActivity : NSObject
{
    NSUserActivity *_userActivity;	// 8 = 0x8
    NSString *_dynamicIdentifier;	// 16 = 0x10
}

+ (id)_userActivityTypeStringForActivityType:(unsigned int)arg1;	// IMP=0x004000000018a423
+ (unsigned int)activityTypeForUserActivityTypeString:(id)arg1;	// IMP=0x001000000018a1e3
+ (_Bool)activityTypeRequiresBestAppSuggestionListener:(unsigned int)arg1;	// IMP=0x001000000018a1d1
+ (_Bool)activityTypeSupportsDynamicIdentifierRegistration:(unsigned int)arg1;	// IMP=0x001000000018a1af
+ (void)unregisterActivityType:(unsigned int)arg1 dynamicIdentifier:(id)arg2;	// IMP=0x001000000018a04e
+ (void)registerActivityType:(unsigned int)arg1 dynamicIdentifier:(id)arg2;	// IMP=0x0010000000189eed
+ (id)activityWithType:(unsigned int)arg1 dynamicIdentifier:(id)arg2 userInfo:(id)arg3;	// IMP=0x0010000000189c55
+ (id)appHistoryActivityWithTitle:(id)arg1 subtitle:(id)arg2 keywords:(id)arg3 userInfo:(id)arg4;	// IMP=0x0010000000189a2c
- (void).cxx_destruct;	// IMP=0x002000000018a851
@property(retain, nonatomic) NSString *dynamicIdentifier; // @synthesize dynamicIdentifier=_dynamicIdentifier;
@property(retain, nonatomic) NSUserActivity *userActivity; // @synthesize userActivity=_userActivity;
- (void)invalidate;	// IMP=0x001000000018a728
- (void)resignCurrent;	// IMP=0x001000000018a635
- (void)becomeCurrent;	// IMP=0x001000000018a542
- (void)addUserInfoEntriesFromDictionary:(id)arg1;	// IMP=0x001000000018a4a0
- (id)description;	// IMP=0x001000000018a29e

@end

