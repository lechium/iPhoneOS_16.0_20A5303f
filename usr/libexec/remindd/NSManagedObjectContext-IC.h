//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObjectContext.h>

@class NSString;

@interface NSManagedObjectContext (IC)
- (void)ic_performBlockAndWait:(CDUnknownBlockType)arg1 andPerformBlockAndWaitOnMainThread:(CDUnknownBlockType)arg2;	// IMP=0x0020000000099d69
- (void)ic_performBlock:(CDUnknownBlockType)arg1 andPerformBlockOnMainThread:(CDUnknownBlockType)arg2;	// IMP=0x0010000000099c4a
- (_Bool)ic_saveWithLogDescription:(id)arg1;	// IMP=0x00100000000999d3
- (_Bool)ic_save;	// IMP=0x00100000000999bd
@property(retain, nonatomic) NSString *ic_debugName;
@end

