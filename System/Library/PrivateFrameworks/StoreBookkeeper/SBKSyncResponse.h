//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SBKResponse.h"

@class SBKSyncResponseData;

__attribute__((visibility("hidden")))
@interface SBKSyncResponse : SBKResponse
{
    SBKSyncResponseData *_syncResponseData;	// 8 = 0x8
}

+ (id)responseWithResponse:(id)arg1 transaction:(id)arg2;	// IMP=0x006000000001bceb
- (void).cxx_destruct;	// IMP=0x000000000001be09
@property(readonly, nonatomic) SBKSyncResponseData *syncResponseData; // @synthesize syncResponseData=_syncResponseData;
- (void)deserializeResponseBodyWithTransaction:(id)arg1;	// IMP=0x000000000001bd5f

@end
