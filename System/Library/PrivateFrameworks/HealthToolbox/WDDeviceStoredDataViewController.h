//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HKDevice, NSString;

__attribute__((visibility("hidden")))
@interface WDDeviceStoredDataViewController
{
    HKDevice *_device;	// 8 = 0x8
    NSString *_displayName;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000002fba4
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) HKDevice *device; // @synthesize device=_device;
- (void)deleteAllStoredData;	// IMP=0x000000000002f896
- (_Bool)shouldShowDeleteAllDataButton;	// IMP=0x000000000002f7ba
- (id)storedDataDisplayName;	// IMP=0x000000000002f749
- (id)storedDataPredicate;	// IMP=0x000000000002f6b2

@end

