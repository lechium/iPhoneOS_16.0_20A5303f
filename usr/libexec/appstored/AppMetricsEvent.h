//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSDictionary, NSString;

@interface AppMetricsEvent
{
    NSDate *_timestamp;	// 8 = 0x8
}

+ (Class)databaseEntityClass;	// IMP=0x002000000006257a
- (void).cxx_destruct;	// IMP=0x002000000006258b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000006246c
@property(readonly) NSDictionary *engagementData;
@property(retain) NSDictionary *data;
- (id)init;	// IMP=0x0010000000062052

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

