//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSCoreDataCoreSpotlightDelegate.h>

@class MISSING_TYPE;

@interface _TtC7remindd31RDCoreDataCoreSpotlightDelegate : NSCoreDataCoreSpotlightDelegate
{
    MISSING_TYPE *$__lazy_storage_$_contactStore;	// 8 = 0x8
    MISSING_TYPE *shouldStart;	// 16 = 0x10
}

+ (void)deleteAllIndicesIfVersionOutdatedWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0020000000230390
- (void).cxx_destruct;	// IMP=0x0040000000230b90
- (id)initForStoreWithDescription:(id)arg1 coordinator:(id)arg2;	// IMP=0x0010000000230b00
@property(nonatomic) _Bool shouldStart; // @synthesize shouldStart;
- (void)reindexSearchableItemsWithIdentifiers:(id)arg1 acknowledgementHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000002308b0
- (void)reindexAllSearchableItemsWithAcknowledgementHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000002306d0
- (void)deleteAllIndicesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000230520
- (id)attributeSetForObject:(id)arg1;	// IMP=0x001000000022d5e0
- (id)protectionClass;	// IMP=0x001000000022ca00
- (id)bundleIdentifier;	// IMP=0x001000000022c9a0
- (id)indexName;	// IMP=0x001000000022c980

@end

