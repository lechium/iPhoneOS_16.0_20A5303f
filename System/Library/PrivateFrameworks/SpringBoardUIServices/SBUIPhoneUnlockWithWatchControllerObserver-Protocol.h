//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardUIServices/NSObject-Protocol.h>

@class NSError, SBUIPhoneUnlockWithWatchController;

@protocol SBUIPhoneUnlockWithWatchControllerObserver <NSObject>
- (void)phoneUnlockWithWatchControllerAttemptFailed:(SBUIPhoneUnlockWithWatchController *)arg1 withError:(NSError *)arg2;
- (void)phoneUnlockWithWatchControllerAttemptSucceeded:(SBUIPhoneUnlockWithWatchController *)arg1;
@end
