//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class VKAnalyticsSessionAccumulator;

__attribute__((visibility("hidden")))
@interface VKAnalyticsProcessor : NSObject
{
    VKAnalyticsSessionAccumulator *_sessionAccumulator;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000099945
@property(retain, nonatomic) VKAnalyticsSessionAccumulator *sessionAccumulator; // @synthesize sessionAccumulator=_sessionAccumulator;
- (void)sendCoreAnalyticsEvent:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00000000000998ae
- (void)processAndSendSession:(id)arg1;	// IMP=0x0000000000099803
- (void)processAndSendEvent:(id)arg1;	// IMP=0x00000000000996e6

@end
