//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthUI/HKTableViewController.h>

@class NSArray, NSDictionary, NSSet, NSUserDefaults;

__attribute__((visibility("hidden")))
@interface WDRemoteFeatureAvailabilityInternalSettingsViewController : HKTableViewController
{
    int _featureAvailabilityConditionsDidUpdateNotificationToken;	// 8 = 0x8
    NSSet *_conditions;	// 16 = 0x10
    NSUserDefaults *_userDefaults;	// 24 = 0x18
    NSDictionary *_userDefaultsContent;	// 32 = 0x20
    NSArray *_userDefaultsContentKeys;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000077a7a
@property(retain, nonatomic) NSArray *userDefaultsContentKeys; // @synthesize userDefaultsContentKeys=_userDefaultsContentKeys;
@property(retain, nonatomic) NSDictionary *userDefaultsContent; // @synthesize userDefaultsContent=_userDefaultsContent;
@property(readonly, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property(nonatomic) int featureAvailabilityConditionsDidUpdateNotificationToken; // @synthesize featureAvailabilityConditionsDidUpdateNotificationToken=_featureAvailabilityConditionsDidUpdateNotificationToken;
@property(retain, nonatomic) NSSet *conditions; // @synthesize conditions=_conditions;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000000000779bd
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000000000775d6
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;	// IMP=0x000000000007751f
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000000000774d1
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0000000000077486
- (id)currentlocaleCountryCode;	// IMP=0x000000000007742f
- (id)evaluateRulesForCondition:(id)arg1;	// IMP=0x0000000000077232
- (id)jsonStringFromDictionary:(id)arg1;	// IMP=0x0000000000077189
- (void)reloadUserDefaultsContent;	// IMP=0x0000000000076fd2
- (void)_featureAvailabilityConditionsDidUpdate;	// IMP=0x0000000000076f85
- (void)_unregisterForNotifications;	// IMP=0x0000000000076f55
- (void)_registerForNotifications;	// IMP=0x0000000000076e44
- (void)viewDidLoad;	// IMP=0x0000000000076dcd
- (void)dealloc;	// IMP=0x0000000000076d8f
- (id)initWithConditions:(id)arg1;	// IMP=0x0000000000076cc6

@end

