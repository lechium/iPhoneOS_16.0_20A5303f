//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface SharingMessage
{
}

+ (id)properties;	// IMP=0x0040000000171a55
+ (id)_propertyValuesForSharingMessage:(id)arg1 storePayload:(_Bool)arg2;	// IMP=0x001000000017171d
+ (id)_sharingMessageForProperties:(id)arg1 values:(id *)arg2;	// IMP=0x001000000017144b
+ (id)_predicateForPayloadHash:(id)arg1;	// IMP=0x0010000000171428
+ (id)_predicateForCreatedAtOlderThenDate:(id)arg1;	// IMP=0x00100000001713c0
+ (id)_predicateForNonNullPayload;	// IMP=0x00100000001713a0
+ (id)_predicateForMessageIdentifier:(id)arg1;	// IMP=0x001000000017137d
+ (id)_predicateForTransportIdentifier:(id)arg1;	// IMP=0x001000000017135a
+ (id)_sharingMessagesWithQuery:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000171057
+ (id)allOutstandingSharingMessagesInDatabase:(id)arg1;	// IMP=0x0010000000170ddb
+ (void)deleteSharingMessagesOlderThen:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000170d42
+ (void)deleteSharingMessagesForTransportIdentifier:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000170ca9
+ (void)deleteSharingMessageForIdentifier:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000170c10
+ (id)sharingMessageForMessageIdentifier:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000170add
+ (id)sharingMessagesForTransportIdentifier:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000170a30
+ (id)transportIdentifierForSharingMessage:(id)arg1 inDatabase:(id)arg2;	// IMP=0x001000000017095a
+ (_Bool)hasSharingMessage:(id)arg1 transportIdentifier:(id)arg2 inDatabase:(id)arg3;	// IMP=0x00100000001706ba
+ (void)insertOrUpdateSharingMessages:(id)arg1 storePayloads:(_Bool)arg2 transportIdentifier:(id)arg3 inDatabase:(id)arg4;	// IMP=0x0010000000170346
+ (id)databaseTable;	// IMP=0x00100000001701e4
- (id)sharingMessage;	// IMP=0x00400000001711af
- (void)updateWithSharingMessage:(id)arg1 storePayload:(_Bool)arg2;	// IMP=0x00100000001702c6
- (id)initWithSharingMessage:(id)arg1 storePayload:(_Bool)arg2 forTransportIdentifier:(id)arg3 inDatabase:(id)arg4;	// IMP=0x00100000001701f1

@end

