//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NNCompanionSyncServiceManager, NSString, SYService;

@interface NNCompanionSyncService : NSObject
{
    _Bool _updatingHeadlines;	// 8 = 0x8
    SYService *_service;	// 16 = 0x10
    NNCompanionSyncServiceManager *_serviceManager;	// 24 = 0x18
}

+ (id)sharedCompanionSyncService;	// IMP=0x0020000000005f6d
- (void).cxx_destruct;	// IMP=0x0020000000007118
@property(nonatomic) _Bool updatingHeadlines; // @synthesize updatingHeadlines=_updatingHeadlines;
@property(readonly, nonatomic) NNCompanionSyncServiceManager *serviceManager; // @synthesize serviceManager=_serviceManager;
@property(readonly, nonatomic) SYService *service; // @synthesize service=_service;
- (void)_updateHeadlines;	// IMP=0x0010000000006843
- (void)companionSyncServiceManagerDidFinshSync:(id)arg1;	// IMP=0x0010000000006831
- (void)companionSyncServiceManagerRequestsHeadlineUpdate:(id)arg1;	// IMP=0x001000000000681f
- (void)updateHeadlines;	// IMP=0x001000000000680d
- (void)resumeSync;	// IMP=0x00100000000065b8
- (void)attemptSyncWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000063e8
- (id)init;	// IMP=0x00100000000063da
- (id)_init;	// IMP=0x0010000000006002

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

