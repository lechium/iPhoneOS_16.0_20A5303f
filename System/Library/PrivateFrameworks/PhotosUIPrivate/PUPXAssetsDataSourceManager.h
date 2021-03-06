//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "PUAssetsDataSourceManager.h"

@class NSString, PXAssetsDataSourceManager;

__attribute__((visibility("hidden")))
@interface PUPXAssetsDataSourceManager : PUAssetsDataSourceManager
{
    PXAssetsDataSourceManager *_underlyingDataSourceManager;	// 8 = 0x8
    long long __currentUpdateID;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000002e0a54
@property(nonatomic, setter=_setCurrentUpdateId:) long long _currentUpdateID; // @synthesize _currentUpdateID=__currentUpdateID;
@property(readonly, nonatomic) PXAssetsDataSourceManager *underlyingDataSourceManager; // @synthesize underlyingDataSourceManager=_underlyingDataSourceManager;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x00000000002e0967
- (void)_update;	// IMP=0x00000000002e08ca
- (void)_handleScheduledUpdateWithID:(long long)arg1;	// IMP=0x00000000002e0892
- (void)_scheduleUpdate;	// IMP=0x00000000002e07d5
- (id)photosDataSource;	// IMP=0x00000000002e0735
- (id)initWithUnderlyingDataSourceManager:(id)arg1;	// IMP=0x00000000002e0694
- (id)init;	// IMP=0x00000000002e061a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

