//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SBKStoreClampsController : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSDictionary *_transactionClamps;	// 16 = 0x10
    double _accountIdentifierCheckTimestamp;	// 24 = 0x18
    double _authenticationNeededTimestamp;	// 32 = 0x20
    double _userAcceptedSyncTimestamp;	// 40 = 0x28
    double _networkingBlockedUntil;	// 48 = 0x30
    double _backOffUntil;	// 56 = 0x38
    double _userCancelledSignInBackOffUntil;	// 64 = 0x40
    double _nextUserCancelBackOffInterval;	// 72 = 0x48
    NSData *_pendingUserDefaultArchivedData;	// 80 = 0x50
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000005995
+ (id)sharedClampsController;	// IMP=0x0010000000005965
- (void).cxx_destruct;	// IMP=0x00000000000051d6
@property(retain, nonatomic) NSData *pendingUserDefaultArchivedData; // @synthesize pendingUserDefaultArchivedData=_pendingUserDefaultArchivedData;
@property(nonatomic) double nextUserCancelBackOffInterval; // @synthesize nextUserCancelBackOffInterval=_nextUserCancelBackOffInterval;
@property(nonatomic) double userCancelledSignInBackOffUntil; // @synthesize userCancelledSignInBackOffUntil=_userCancelledSignInBackOffUntil;
@property(nonatomic) double backOffUntil; // @synthesize backOffUntil=_backOffUntil;
@property(nonatomic) double networkingBlockedUntil; // @synthesize networkingBlockedUntil=_networkingBlockedUntil;
@property(nonatomic) double userAcceptedSyncTimestamp; // @synthesize userAcceptedSyncTimestamp=_userAcceptedSyncTimestamp;
@property(nonatomic) double authenticationNeededTimestamp; // @synthesize authenticationNeededTimestamp=_authenticationNeededTimestamp;
@property(nonatomic) double accountIdentifierCheckTimestamp; // @synthesize accountIdentifierCheckTimestamp=_accountIdentifierCheckTimestamp;
@property(retain, nonatomic) NSDictionary *transactionClamps; // @synthesize transactionClamps=_transactionClamps;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (_Bool)_canScheduleTransactionBasedOnUserCancelledSignIn:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000004f0b
- (_Bool)_canScheduleTransactionBasedOnBackOff:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000004d2f
- (_Bool)_canScheduleTransactionBasedOnAccountIdentifierCheck:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000004c1e
- (_Bool)_canScheduleTransactionBasedOfNetworkingBlocked:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000004aca
- (_Bool)_canScheduleTransactionBasedOnType:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000004850
- (id)_keyForTransaction:(id)arg1;	// IMP=0x000000000000483b
- (double)_rightNow;	// IMP=0x00000000000047e4
- (_Bool)isNetworkingBlocked;	// IMP=0x000000000000476f
- (void)clearNetworkingBlocked;	// IMP=0x000000000000475a
- (void)setNetworkingBlocked;	// IMP=0x0000000000004717
- (void)clearBackOff;	// IMP=0x00000000000046e6
- (void)backOffForTimeInterval:(double)arg1;	// IMP=0x0000000000004699
- (void)clearUserCancelledSignIn;	// IMP=0x000000000000465a
- (void)setUserCancelledSignIn;	// IMP=0x0000000000004469
- (_Bool)hasUserRecentlyAcceptedSync;	// IMP=0x00000000000043c9
- (void)clearUserAcceptedSyncTimestamp;	// IMP=0x0000000000004398
- (void)setUserAcceptedSyncTimestamp;	// IMP=0x000000000000435d
- (_Bool)hasAuthenticatedTooRecentlyForTransaction:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000041d9
- (void)clearAuthenticationRequest;	// IMP=0x00000000000041a8
- (void)setAuthenticationRequest;	// IMP=0x000000000000416d
- (void)clearAccountIdentifierCheckTimestamp;	// IMP=0x000000000000413c
- (void)setAccountIdentifierCheckTimestamp;	// IMP=0x0000000000004101
- (void)clearTimestampForTransaction:(id)arg1;	// IMP=0x000000000000405a
- (void)setTimestampForTransaction:(id)arg1;	// IMP=0x0000000000003fc8
- (void)reset;	// IMP=0x0000000000003ee6
- (_Bool)canScheduleTransaction:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000003e31
- (void)accessTransactionClampsWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000003da4
- (void)saveToUserDefaults;	// IMP=0x0000000000003cb5
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000003b0a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000039b1
- (id)description;	// IMP=0x00000000000037e4
- (id)init;	// IMP=0x0000000000003764

@end
