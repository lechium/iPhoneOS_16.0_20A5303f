//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface BCSXPCLaunchEventPrefetchTrigger : NSObject
{
    NSString *_activityName;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000001a2c
@property(copy, nonatomic) NSString *activityName; // @synthesize activityName=_activityName;
@property(readonly, copy) NSString *description;
- (void)triggerFetchForReason:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000001963
- (void)scheduleFetchBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000017a1
- (id)initWithActivityName:(id)arg1;	// IMP=0x001000000000172e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
