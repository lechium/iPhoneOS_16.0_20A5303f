//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GEOActiveTileGroup, NSDictionary, NSString, NSXPCConnection;

@interface WatchDebugController
{
    NSDictionary *_debugInfo;	// 8 = 0x8
    GEOActiveTileGroup *_activeTileGroup;	// 16 = 0x10
    NSXPCConnection *_connection;	// 24 = 0x18
}

+ (id)navigationDestinationTitle;	// IMP=0x0020000000748209
- (void).cxx_destruct;	// IMP=0x0020000000749861
- (void)updateDroppedPin:(id)arg1;	// IMP=0x001000000074985b
- (void)updateDirectionsStatusWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000749850
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0010000000748e57
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0010000000748c04
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0010000000748bea
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;	// IMP=0x0010000000748b78
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x0010000000748b62
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0010000000748b48
- (void)dealloc;	// IMP=0x0010000000748ae9
- (id)init;	// IMP=0x0010000000748216

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

