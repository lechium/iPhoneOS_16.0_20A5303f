//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class KVItemBuilder, NSNumber, NSString;

@interface KMMapper_SAPerson : NSObject
{
    KVItemBuilder *_builder;	// 8 = 0x8
    NSNumber *_sharedUserIdKey;	// 16 = 0x10
}

+ (Class)externalObjectClass;	// IMP=0x0010000000005850
- (void).cxx_destruct;	// IMP=0x0000000000005780
- (_Bool)_addLabeledFieldsForRelatedNames:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000005543
- (_Bool)_addLabeledFieldsForPostalAddresses:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000005357
- (_Bool)_addLabeledFieldsForEmails:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000516b
- (_Bool)_addLabeledFieldsForPhones:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000004f7f
- (id)itemsFromExternalObject:(id)arg1 additionalFields:(id)arg2 error:(id *)arg3;	// IMP=0x000000000000445a
- (long long)targetItemType;	// IMP=0x000000000000444f
- (id)init;	// IMP=0x00000000000043d4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
