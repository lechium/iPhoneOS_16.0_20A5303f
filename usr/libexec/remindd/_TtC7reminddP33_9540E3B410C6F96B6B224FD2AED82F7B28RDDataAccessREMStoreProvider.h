//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

@class MISSING_TYPE;

@interface _TtC7reminddP33_9540E3B410C6F96B6B224FD2AED82F7B28RDDataAccessREMStoreProvider : _TtCs12_SwiftObject
{
    MISSING_TYPE *rdDaemonController;	// 16 = 0x10
    MISSING_TYPE *storeController;	// 24 = 0x18
}

- (id)rd_base64EncodedHMACStringFromString:(id)arg1 usingPersonIDSalt:(id)arg2;	// IMP=0x00200000005f2100
- (_Bool)rd_isPersonIDSaltInitiallyNilError:(id)arg1;	// IMP=0x00100000005f2050
- (void)rd_unobservePrimaryCloudKitAccountPersonIDSaltChanges:(id)arg1;	// IMP=0x00100000005f1f40
- (id)rd_observePrimaryCloudKitAccountPersonIDSaltChangesOnQueue:(id)arg1 successHandler:(CDUnknownBlockType)arg2 errorHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000005f1e60
- (id)rem_saveRequestForDataAccess;	// IMP=0x00100000005f1d20
- (_Bool)rem_supportsClearingOrphanedStores;	// IMP=0x00100000005f1c40
- (id)rem_storeForDataAccess;	// IMP=0x00100000005f1bc0

@end

