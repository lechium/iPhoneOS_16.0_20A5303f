//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ABSContactsSyncManager, ABSFavoritesSyncManager;

@interface ABSSyncController : NSObject
{
    ABSContactsSyncManager *_abSyncManager;	// 8 = 0x8
    ABSFavoritesSyncManager *_favoritesSyncManager;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000331c7
- (void)deleteUnmarked;	// IMP=0x00100000000331b1
- (void)clearShadowMarks;	// IMP=0x001000000003319b
- (void)resetSyncState;	// IMP=0x0010000000033160
- (void)deleteSyChange:(id)arg1;	// IMP=0x0010000000032f96
- (void)updateSyChange:(id)arg1 forSession:(id)arg2;	// IMP=0x0010000000032a6d
- (void)addSyChanges:(id)arg1 forSession:(id)arg2;	// IMP=0x00100000000327a1
- (id)init;	// IMP=0x001000000003272c

@end
