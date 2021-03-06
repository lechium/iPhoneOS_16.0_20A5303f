//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSString;

@interface SagaCloudAddPlaylistOperation
{
    NSString *_playlistGlobalID;	// 8 = 0x8
    NSDictionary *_globalIDToSagaIDMap;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00400000000d4086
- (void).cxx_destruct;	// IMP=0x00200000000d3bd5
@property(retain, nonatomic) NSDictionary *globalIDToSagaIDMap; // @synthesize globalIDToSagaIDMap=_globalIDToSagaIDMap;
- (void)removePendingAddedItemsForPermanentlyFailedOperation;	// IMP=0x00100000000d3911
- (void)processAddedItems:(id)arg1;	// IMP=0x00100000000d3836
- (void)logCloudAddRequestDescription;	// IMP=0x00100000000d3797
- (id)cloudAddRequestWithDatabaseID:(unsigned int)arg1;	// IMP=0x00100000000d3747
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000000d36ca
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000000d362f
- (id)initWithConfiguration:(id)arg1 clientIdentity:(id)arg2 playlistGlobalID:(id)arg3;	// IMP=0x00100000000d35ad
- (id)initWithClientIdentity:(id)arg1 playlistGlobalID:(id)arg2;	// IMP=0x00100000000d3529

@end

