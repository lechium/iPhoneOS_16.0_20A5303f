//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/NSObject-Protocol.h>

@class PKWorldRegion, PKWorldRegionUpdater;

@protocol PKWorldRegionUpdaterObserver <NSObject>

@optional
- (void)worldRegionUpdated:(PKWorldRegionUpdater *)arg1 failedToUpdateRegion:(PKWorldRegion *)arg2;
- (void)worldRegionUpdated:(PKWorldRegionUpdater *)arg1 updatedRegion:(PKWorldRegion *)arg2;
@end

