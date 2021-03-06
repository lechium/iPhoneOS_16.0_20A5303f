//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "COMeshNotification.h"

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface COStateUpdateNotification : COMeshNotification
{
    NSDictionary *_updates;	// 8 = 0x8
    NSDictionary *_removals;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0060000000041ce7
- (void).cxx_destruct;	// IMP=0x0000000000041d11
@property(readonly, copy, nonatomic) NSDictionary *removals; // @synthesize removals=_removals;
@property(readonly, copy, nonatomic) NSDictionary *updates; // @synthesize updates=_updates;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000041c13
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000041422
- (id)initWithUpdates:(id)arg1 removals:(id)arg2;	// IMP=0x0000000000041380

@end

