//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface MCProvisioningProfileJanitor : NSObject
{
    NSObject<OS_dispatch_queue> *_workQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_misValidationQueue;	// 16 = 0x10
}

+ (id)sharedJanitor;	// IMP=0x004000000005bcd8
- (void).cxx_destruct;	// IMP=0x002000000005bfcb
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *misValidationQueue; // @synthesize misValidationQueue=_misValidationQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (_Bool)_updateTrustedCodeSigningIdentitiesWithManagedAppSigners:(id)arg1 outError:(id *)arg2;	// IMP=0x001000000005bdc2
- (id)earliestRequiredManagedAppValidationDate;	// IMP=0x001000000005bdba
- (void)revalidateManagedApps;	// IMP=0x001000000005bda8
- (void)_misValidateUPPProfileUUIDs:(id)arg1 profileType:(id)arg2;	// IMP=0x001000000005bda2
- (void)_workQueueUpdateMISUPPTrustWithTrustCodeSigningIdentities:(id)arg1 validateApps:(id)arg2 validateManagedApps:(_Bool)arg3;	// IMP=0x001000000005bd4f
- (void)updateMISTrust;	// IMP=0x001000000005bd33
- (void)updateMISTrustAndValidateApps:(id)arg1 validateManagedApps:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000005bd2d
- (id)init;	// IMP=0x001000000005bc1f

@end
