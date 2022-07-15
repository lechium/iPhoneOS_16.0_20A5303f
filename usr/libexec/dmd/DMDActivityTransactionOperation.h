//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject;
@protocol OS_os_transaction;

@interface DMDActivityTransactionOperation
{
    NSObject<OS_os_transaction> *_transaction;	// 8 = 0x8
}

+ (id)requiredEntitlements;	// IMP=0x00400000000119d0
+ (id)whitelistedClassesForRequest;	// IMP=0x001000000001199e
+ (_Bool)validateRequest:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000011874
- (void).cxx_destruct;	// IMP=0x0020000000011b0a
@property(retain, nonatomic) NSObject<OS_os_transaction> *transaction; // @synthesize transaction=_transaction;
- (void)runWithRequest:(id)arg1;	// IMP=0x0010000000011a6b
- (void)endOperationIfNeeded;	// IMP=0x0010000000011a32
- (void)cancel;	// IMP=0x00100000000119e5
- (_Bool)runOnMainThread;	// IMP=0x00100000000119dd
- (_Bool)runConcurrently;	// IMP=0x001000000001186c

@end
