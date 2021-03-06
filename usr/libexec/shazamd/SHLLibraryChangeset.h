//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableSet;

@interface SHLLibraryChangeset : NSObject
{
    NSMutableSet *_trackSetToAdd;	// 8 = 0x8
    NSMutableSet *_trackSetToDelete;	// 16 = 0x10
    NSMutableSet *_groupSetToAdd;	// 24 = 0x18
    NSMutableSet *_groupSetToDelete;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000011bd3
@property(retain, nonatomic) NSMutableSet *groupSetToDelete; // @synthesize groupSetToDelete=_groupSetToDelete;
@property(retain, nonatomic) NSMutableSet *groupSetToAdd; // @synthesize groupSetToAdd=_groupSetToAdd;
@property(retain, nonatomic) NSMutableSet *trackSetToDelete; // @synthesize trackSetToDelete=_trackSetToDelete;
@property(retain, nonatomic) NSMutableSet *trackSetToAdd; // @synthesize trackSetToAdd=_trackSetToAdd;
- (id)description;	// IMP=0x0010000000011a44
- (void)mergeChangeset:(id)arg1;	// IMP=0x001000000001193e
- (void)deleteGroups:(id)arg1;	// IMP=0x00100000000117f7
- (void)addGroups:(id)arg1;	// IMP=0x00100000000114c5
- (void)deleteTracks:(id)arg1;	// IMP=0x001000000001137e
- (void)addTracks:(id)arg1;	// IMP=0x0010000000011237
@property(readonly, nonatomic) NSArray *groupIDsToDelete;
@property(readonly, nonatomic) NSArray *trackIDsToDelete;
@property(readonly, nonatomic) NSArray *groupsToDelete;
@property(readonly, nonatomic) NSArray *groupsToAdd;
@property(readonly, nonatomic) NSArray *tracksToDelete;
@property(readonly, nonatomic) NSArray *tracksToAdd;
- (id)init;	// IMP=0x0010000000010e60

@end

