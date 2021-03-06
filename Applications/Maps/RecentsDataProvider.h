//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOObserverHashTable, NSArray, NSString;

@interface RecentsDataProvider : NSObject
{
    GEOObserverHashTable *_observers;	// 8 = 0x8
    _Bool _active;	// 16 = 0x10
    _Bool _hasInitialData;	// 17 = 0x11
    NSArray *_recents;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000071fe80
@property(readonly, nonatomic) NSArray *recents; // @synthesize recents=_recents;
@property(readonly, nonatomic) _Bool hasInitialData; // @synthesize hasInitialData=_hasInitialData;
@property(nonatomic) _Bool active; // @synthesize active=_active;
- (void)deleteAllRecentsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000071fd2b
- (void)deleteRecents:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000071fbd6
- (void)_recentsDidChange:(id)arg1;	// IMP=0x001000000071fbbf
- (id)_recentsEngine;	// IMP=0x001000000071fba6
@property(readonly, nonatomic) GEOObserverHashTable *observers;
- (void)_updateAndNotifyObservers:(_Bool)arg1;	// IMP=0x001000000071f8ec
- (id)init;	// IMP=0x001000000071f7af

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

