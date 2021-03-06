//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSUserDefaults;

__attribute__((visibility("hidden")))
@interface _UIFeedbackPreferences : NSObject
{
    NSMutableDictionary *_enabledFeedbackTypes;	// 8 = 0x8
    NSDictionary *_defaultFeedbackTypes;	// 16 = 0x10
    NSUserDefaults *_userDefaults;	// 24 = 0x18
}

+ (id)sharedPreferences;	// IMP=0x00600000006bf880
- (void).cxx_destruct;	// IMP=0x00000000006c05c0
@property(retain, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property(readonly, nonatomic) NSDictionary *defaultFeedbackTypes; // @synthesize defaultFeedbackTypes=_defaultFeedbackTypes;
- (void)_accessibilityForceTouchChanged:(id)arg1;	// IMP=0x00000000006c059a
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000000006c0553
- (void)_invalidate;	// IMP=0x00000000006c04eb
- (void)_setEnabledFeedbackTypes:(unsigned long long)arg1 forCategory:(id)arg2;	// IMP=0x00000000006c04d3
- (void)_setEnabledFeedbackTypes:(unsigned long long)arg1 forCategory:(id)arg2 postNotification:(_Bool)arg3;	// IMP=0x00000000006c03f9
- (void)_updateEnabledFeedbackTypes:(unsigned long long *)arg1 forKey:(id)arg2 type:(unsigned long long)arg3;	// IMP=0x00000000006c02d5
- (unsigned long long)_enabledFeedbackTypesForCategory:(id)arg1;	// IMP=0x00000000006c0049
- (unsigned long long)enabledFeedbackTypesForCategory:(id)arg1;	// IMP=0x00000000006bff7a
- (id)_defaultKeyForCategoryKey:(id)arg1 type:(unsigned long long)arg2;	// IMP=0x00000000006bff3c
- (id)_categoryKeyForCategory:(id)arg1 type:(unsigned long long)arg2;	// IMP=0x00000000006bfe63
- (id)_categoryForNullableCategory:(id)arg1;	// IMP=0x00000000006bfe4b
- (void)_startObservingDefaults;	// IMP=0x00000000006bfbc3
- (unsigned long long)_defaultFeedbackTypesForCategory:(id)arg1;	// IMP=0x00000000006bfa43
- (id)init;	// IMP=0x00000000006bf905

@end

