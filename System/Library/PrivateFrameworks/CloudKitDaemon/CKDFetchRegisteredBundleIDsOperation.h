//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CKDOperation.h"

@class NSArray;
@protocol CKFetchRegisteredBundleIDsOperationCallbacks;

@interface CKDFetchRegisteredBundleIDsOperation : CKDOperation
{
    NSArray *_bundleIDs;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000044e3
@property(copy, nonatomic) NSArray *bundleIDs; // @synthesize bundleIDs=_bundleIDs;
- (void)main;	// IMP=0x0000000000003b42
- (int)operationType;	// IMP=0x0000000000003b37
- (id)activityCreate;	// IMP=0x0000000000003b0e
- (id)initWithOperationInfo:(id)arg1 container:(id)arg2;	// IMP=0x0000000000003adf
- (id)_unitTestBundleIDsByContainerID:(id)arg1;	// IMP=0x0000000000003a53

// Remaining properties
@property(retain, nonatomic) id <CKFetchRegisteredBundleIDsOperationCallbacks> clientOperationCallbackProxy; // @dynamic clientOperationCallbackProxy;

@end

