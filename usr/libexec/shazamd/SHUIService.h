//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ShazamKit/SHService.h>

@class NSString, SHMediaItemPresenter;
@protocol SHServiceDelegate;

@interface SHUIService : SHService
{
    SHMediaItemPresenter *_mediaItemPresenter;	// 8 = 0x8
    id <SHServiceDelegate> _serviceDelegate;	// 16 = 0x10
}

+ (id)machServiceName;	// IMP=0x002000000003c7cb
+ (void)initializeGlobalServiceState;	// IMP=0x001000000003c7c5
- (void).cxx_destruct;	// IMP=0x002000000003c81a
- (void)setServiceDelegate:(id)arg1;	// IMP=0x001000000003c806
- (id)serviceDelegate;	// IMP=0x001000000003c7ed
- (void)stop;	// IMP=0x001000000003c7e7
- (_Bool)shouldStartWorker:(id)arg1;	// IMP=0x001000000003c7df
- (id)workers;	// IMP=0x001000000003c741
- (void)workerUpdated:(id)arg1 withRunningState:(_Bool)arg2;	// IMP=0x001000000003c641
@property(readonly, nonatomic) SHMediaItemPresenter *mediaItemPresenter; // @synthesize mediaItemPresenter=_mediaItemPresenter;
- (void)presentMediaItem:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000003c566

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

