//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray;

@interface _TtC9appstored26UpdatesDatabaseMergeResult : NSObject
{
    MISSING_TYPE *availableUpdateCount;	// 8 = 0x8
    MISSING_TYPE *result;	// 16 = 0x10
    MISSING_TYPE *shouldNotifyOfChanges;	// 17 = 0x11
    MISSING_TYPE *bundleIDs;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00400000000074e0
- (id)init;	// IMP=0x0010000000007480
- (id)initWithAvailableUpdateCount:(long long)arg1 shouldNotifyOfChanges:(_Bool)arg2 bundleIDs:(id)arg3 result:(_Bool)arg4;	// IMP=0x0010000000007400
@property(nonatomic, readonly) NSArray *bundleIDs;
@property(nonatomic, readonly) _Bool shouldNotifyOfChanges; // @synthesize shouldNotifyOfChanges;
@property(nonatomic, readonly) _Bool result; // @synthesize result;
@property(nonatomic, readonly) long long availableUpdateCount; // @synthesize availableUpdateCount;

@end
