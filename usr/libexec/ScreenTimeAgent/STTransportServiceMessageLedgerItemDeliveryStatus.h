//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface STTransportServiceMessageLedgerItemDeliveryStatus : NSObject
{
    long long _state;	// 8 = 0x8
    long long _numberOfAttempts;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000000a1438
+ (_Bool)_canTransitionFromState:(long long)arg1 toState:(long long)arg2;	// IMP=0x00100000000a1297
@property(readonly) long long numberOfAttempts; // @synthesize numberOfAttempts=_numberOfAttempts;
@property(readonly) long long state; // @synthesize state=_state;
- (unsigned long long)hash;	// IMP=0x00100000000a1531
- (_Bool)isEqualToStatus:(id)arg1;	// IMP=0x00100000000a14a3
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000a1440
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000000a13ca
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000000a134d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000a1300
- (id)statusWithIncrementedAttempts;	// IMP=0x00100000000a1243
- (id)statusWithUpdatedState:(long long)arg1;	// IMP=0x00100000000a11c0
- (id)description;	// IMP=0x00100000000a112d
- (id)_initWithState:(long long)arg1 numberOfAttempts:(long long)arg2;	// IMP=0x00100000000a10ea
- (id)init;	// IMP=0x00100000000a10d4

@end
