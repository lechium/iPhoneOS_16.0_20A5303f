//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSSet, NSString, SDBonjourBrowser;

@interface SDWorkgroupBrowser : NSObject
{
    int _clientCount;	// 8 = 0x8
    SDBonjourBrowser *_browser;	// 16 = 0x10
}

+ (id)sharedBrowser;	// IMP=0x00200000000deefd
- (void).cxx_destruct;	// IMP=0x00200000000df31e
- (void)stop;	// IMP=0x00100000000df2cf
- (void)start;	// IMP=0x00100000000df1dc
- (void)bonjourNodesDidChange:(id)arg1;	// IMP=0x00100000000df18c
@property(readonly, copy) NSSet *workgroups;
@property(readonly, copy) NSArray *nodes;
- (id)init;	// IMP=0x00100000000def52

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

