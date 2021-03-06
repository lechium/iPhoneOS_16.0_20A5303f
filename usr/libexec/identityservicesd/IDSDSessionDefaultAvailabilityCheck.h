//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IMNetworkAvailability;

@interface IDSDSessionDefaultAvailabilityCheck : NSObject
{
    IMNetworkAvailability *_availability;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000056fe10
@property(retain, nonatomic) IMNetworkAvailability *availability; // @synthesize availability=_availability;
- (void)checkLocalConnectivityForSession:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000056f390
- (void)availabilityTimerCancel;	// IMP=0x001000000056f320
- (void)checkNetworkAvailabilityForSession:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000056d830
- (long long)networkCheckOverrideBehavior;	// IMP=0x001000000056d720

@end

