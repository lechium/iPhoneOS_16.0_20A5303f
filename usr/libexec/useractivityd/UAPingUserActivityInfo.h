//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UserActivity/UAUserActivityInfo.h>

@interface UAPingUserActivityInfo : UAUserActivityInfo
{
    CDUnknownBlockType _wasContinuedBlock;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000004ae7
@property(copy) CDUnknownBlockType wasContinuedBlock; // @synthesize wasContinuedBlock=_wasContinuedBlock;
- (id)statusString;	// IMP=0x00100000000049ef
- (id)initFromPing:(id)arg1;	// IMP=0x001000000000495c
- (id)initWithPayloadSize:(unsigned long long)arg1;	// IMP=0x001000000000484b

@end

