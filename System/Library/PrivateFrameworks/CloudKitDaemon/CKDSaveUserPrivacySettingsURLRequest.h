//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CKDURLRequest.h"

@class NSString;

@interface CKDSaveUserPrivacySettingsURLRequest : CKDURLRequest
{
    NSString *_bundleID;	// 8 = 0x8
    long long _discoverableTrinary;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000307833
@property(nonatomic) long long discoverableTrinary; // @synthesize discoverableTrinary=_discoverableTrinary;
@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (id)requestDidParseProtobufObject:(id)arg1;	// IMP=0x00000000003077e7
- (id)generateRequestOperations;	// IMP=0x00000000003075f6
- (_Bool)requiresTokenRegistration;	// IMP=0x00000000003075ee
- (id)requestOperationClasses;	// IMP=0x0000000000307582
- (long long)databaseScope;	// IMP=0x0000000000307577
- (void)setDiscoverable:(_Bool)arg1;	// IMP=0x000000000030754e
- (id)initWithOperation:(id)arg1;	// IMP=0x000000000030750b

@end

