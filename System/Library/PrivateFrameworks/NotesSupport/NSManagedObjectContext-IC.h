//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObjectContext.h>

@class NSString;

@interface NSManagedObjectContext (IC)
- (void)ic_refreshObject:(id)arg1 mergeChanges:(_Bool)arg2;	// IMP=0x0030000000030102
- (id)ic_objectsWithIDs:(id)arg1;	// IMP=0x003000000002ff04
- (id)ic_existingObjectWithID:(id)arg1;	// IMP=0x003000000002fee8
- (void)ic_performBlockAndWait:(CDUnknownBlockType)arg1 andPerformBlockAndWaitOnMainThread:(CDUnknownBlockType)arg2;	// IMP=0x003000000002fe2d
- (void)ic_performBlock:(CDUnknownBlockType)arg1 andPerformBlockOnMainThread:(CDUnknownBlockType)arg2;	// IMP=0x003000000002fd0e
- (_Bool)ic_saveWithLogDescription:(id)arg1;	// IMP=0x003000000002facb
- (_Bool)ic_save;	// IMP=0x003000000002fab5
@property(readonly, nonatomic) _Bool ic_isMainThreadContext;
@property(retain, nonatomic) NSString *ic_debugName;
@end

