//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _HKFeatureFlags : NSObject
{
    struct _HKLazyLoader<bool> _acacia;	// 8 = 0x8
    struct _HKLazyLoader<bool> _bloodPressureTrends;	// 16 = 0x10
    struct _HKLazyLoader<bool> _checklistDataTypeDetail;	// 24 = 0x18
    struct _HKLazyLoader<bool> _frequentCloudSync;	// 32 = 0x20
    struct _HKLazyLoader<bool> _ginkgo;	// 40 = 0x28
    struct _HKLazyLoader<bool> _heartRatePush;	// 48 = 0x30
    struct _HKLazyLoader<bool> _percentInRange;	// 56 = 0x38
    struct _HKLazyLoader<bool> _shardedOntology;	// 64 = 0x40
    struct _HKLazyLoader<bool> _sleepCloudKitManatee;	// 72 = 0x48
    struct _HKLazyLoader<bool> _sleepCloudKitSync;	// 80 = 0x50
    struct _HKLazyLoader<bool> _sleepOnIpad;	// 88 = 0x58
    struct _HKLazyLoader<bool> _sleepOnMac;	// 96 = 0x60
    struct _HKLazyLoader<bool> _vrx;	// 104 = 0x68
    struct _HKLazyLoader<bool> _csOtherDataTypes;	// 112 = 0x70
    struct _HKLazyLoader<bool> _csMeds;	// 120 = 0x78
    struct _HKLazyLoader<bool> _autobahn;	// 128 = 0x80
}

- (id).cxx_construct;	// IMP=0x00000000001ec84a
@property(nonatomic) _Bool autobahn;
@property(nonatomic) _Bool csMeds;
@property(nonatomic) _Bool csOtherDataTypes;
@property(nonatomic) _Bool vrx;
@property(nonatomic) _Bool sleepOnMac;
@property(nonatomic) _Bool sleepOnIpad;
@property(nonatomic) _Bool sleepCloudKitSync;
@property(nonatomic) _Bool sleepCloudKitManatee;
@property(nonatomic) _Bool shardedOntology;
@property(nonatomic) _Bool percentInRange;
@property(nonatomic) _Bool heartRatePush;
@property(nonatomic) _Bool ginkgo;
@property(nonatomic) _Bool frequentCloudSync;
@property(nonatomic) _Bool checklistDataTypeDetail;
@property(nonatomic) _Bool bloodPressureTrends;
@property(nonatomic) _Bool acacia;

@end
