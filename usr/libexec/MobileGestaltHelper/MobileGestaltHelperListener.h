//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface MobileGestaltHelperListener : NSObject
{
}

- (_Bool)needsNewCachePostBoot;	// IMP=0x00200000000028b4
- (_Bool)setCacheSentinel;	// IMP=0x00100000000027af
- (id)getSentinelPath;	// IMP=0x00100000000027a7
- (id)queryBootUUID;	// IMP=0x0010000000002685
- (void)setCacheSentinel:(CDUnknownBlockType)arg1;	// IMP=0x0010000000002569
- (void)rebuildCache:(CDUnknownBlockType)arg1;	// IMP=0x001000000000245e
- (void)getAppleTVMode:(CDUnknownBlockType)arg1;	// IMP=0x0010000000002281
- (void)getServerAnswerForQuestion:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000001f00
- (void)getSpringboardRegionOverride:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000001b15
- (id)processNameForConnection:(id)arg1;	// IMP=0x00100000000018aa
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0010000000001807

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

