//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface FRURLRouterManager : NSObject
{
    NSMutableArray *_routers;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000006acbb
@property(readonly, nonatomic) NSMutableArray *routers; // @synthesize routers=_routers;
- (void)addRoutable:(id)arg1;	// IMP=0x001000000006ac3f
- (_Bool)handleOpenURL:(id)arg1 options:(id)arg2 analyticsReferral:(id)arg3;	// IMP=0x001000000006a9c4
- (id)init;	// IMP=0x001000000006a96e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

