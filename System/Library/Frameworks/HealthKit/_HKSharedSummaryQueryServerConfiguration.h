//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HKQueryServerConfiguration.h"

@class HKSharedSummaryTransaction, NSString;

__attribute__((visibility("hidden")))
@interface _HKSharedSummaryQueryServerConfiguration : HKQueryServerConfiguration
{
    HKSharedSummaryTransaction *_transaction;	// 8 = 0x8
    NSString *_package;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x006000000017375a
- (void).cxx_destruct;	// IMP=0x0000000000173934
@property(copy, nonatomic) NSString *package; // @synthesize package=_package;
@property(copy, nonatomic) HKSharedSummaryTransaction *transaction; // @synthesize transaction=_transaction;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000173851
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000173762
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001736e4

@end
