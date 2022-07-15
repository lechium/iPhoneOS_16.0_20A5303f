//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableOrderedSet, NSOrderedSet;

__attribute__((visibility("hidden")))
@interface CNCalculatesMultiValueDiff : NSObject
{
    NSArray *_multiValue1;	// 8 = 0x8
    NSArray *_multiValue2;	// 16 = 0x10
    NSOrderedSet *_originalIdentifiers;	// 24 = 0x18
    NSOrderedSet *_finalIdentifiers;	// 32 = 0x20
    NSMutableOrderedSet *_addedIdentifiers;	// 40 = 0x28
    NSMutableOrderedSet *_removedIdentifiers;	// 48 = 0x30
    NSMutableOrderedSet *_sameIdentifiers;	// 56 = 0x38
    NSMutableOrderedSet *_calculatedFinalIdentifiers;	// 64 = 0x40
    NSMutableArray *_updates;	// 72 = 0x48
}

+ (id)diffMultiValue:(id)arg1 toMultiValue:(id)arg2;	// IMP=0x006000000002ab39
- (void).cxx_destruct;	// IMP=0x000000000002b87d
- (id)updates;	// IMP=0x000000000002b86f
- (void)calculateDiff;	// IMP=0x000000000002b7d9
- (void)appendReorderUpdates;	// IMP=0x000000000002b679
- (void)appendReplaceUpdates;	// IMP=0x000000000002b435
- (void)appendAddUpdates;	// IMP=0x000000000002b25a
- (void)appendRemoveUpdates;	// IMP=0x000000000002b07f
- (void)setupCalculatedFinalIdentifiers;	// IMP=0x000000000002b019
- (void)setupSameIdentifiers;	// IMP=0x000000000002afc5
- (void)setupAddedIdentifiers;	// IMP=0x000000000002af71
- (void)setupRemovedIdentifiers;	// IMP=0x000000000002af1d
- (void)setupFinalIdentifiers;	// IMP=0x000000000002ae3e
- (void)setupOriginalIdentifiers;	// IMP=0x000000000002ad5f
- (id)initWithMultiValue1:(id)arg1 multiValue2:(id)arg2;	// IMP=0x000000000002ac9d

@end
