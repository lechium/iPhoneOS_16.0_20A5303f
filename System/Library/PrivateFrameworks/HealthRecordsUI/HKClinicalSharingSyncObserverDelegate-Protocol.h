//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HKClinicalSharingSyncInfo, HKClinicalSharingSyncObserver, NSError;

@protocol HKClinicalSharingSyncObserverDelegate
- (void)clinicalSharingSyncObserver:(HKClinicalSharingSyncObserver *)arg1 syncDidFinishWithError:(NSError *)arg2;
- (void)clinicalSharingSyncObserver:(HKClinicalSharingSyncObserver *)arg1 syncDidStartWithInfo:(HKClinicalSharingSyncInfo *)arg2;
@end

