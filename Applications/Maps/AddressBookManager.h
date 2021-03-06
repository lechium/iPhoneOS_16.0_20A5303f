//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AddressBookAddress, CNContact, CNContactStore, MapsSuggestionsCorrectedMapItemProvider, MapsSuggestionsShortcutManager, NSArray, NSDictionary, NSMutableDictionary, NSTimer, NSURL;
@protocol OS_dispatch_group;

@interface AddressBookManager : NSObject
{
    NSObject<OS_dispatch_group> *_collectGroup;	// 8 = 0x8
    _Bool _firstCollected;	// 16 = 0x10
    CNContactStore *_contactStore;	// 24 = 0x18
    CNContact *_meCard;	// 32 = 0x20
    _Bool _needsCollectAddresses;	// 40 = 0x28
    struct os_unfair_lock_s _lock;	// 44 = 0x2c
    NSDictionary *_homeAddresses;	// 48 = 0x30
    NSDictionary *_workAddresses;	// 56 = 0x38
    NSDictionary *_schoolAddresses;	// 64 = 0x40
    NSDictionary *_otherAddresses;	// 72 = 0x48
    NSTimer *_coalesceTimer;	// 80 = 0x50
    NSMutableDictionary *_contactCache;	// 88 = 0x58
    MapsSuggestionsCorrectedMapItemProvider *_msgCorrectedMapItemProvider;	// 96 = 0x60
    MapsSuggestionsShortcutManager *_shortcutManager;	// 104 = 0x68
}

+ (id)sharedManager;	// IMP=0x00400000002e4fdc
+ (_Bool)addressBookAllowed;	// IMP=0x00100000002e4fb9
- (void).cxx_destruct;	// IMP=0x00100000002e7384
- (id)addressForAddressObject:(id)arg1;	// IMP=0x00100000002e6f4e
- (id)addressForIdentifier:(id)arg1;	// IMP=0x00100000002e6d86
- (id)senderNameForAddress:(id)arg1 ofType:(id)arg2;	// IMP=0x00100000002e6a30
- (id)contactForCNContactIdentifier:(id)arg1;	// IMP=0x00100000002e669f
- (id)contactForRecordId:(int)arg1;	// IMP=0x00100000002e6430
- (id)mapItemFormShortcutForCNIdentifier:(id)arg1;	// IMP=0x00100000002e636a
- (void)collectAddress;	// IMP=0x00100000002e5c2f
@property(readonly, nonatomic) NSArray *allOtherAddresses;
@property(readonly, nonatomic) NSArray *allSchoolAddresses;
@property(readonly, nonatomic) NSArray *allWorkAddresses;
@property(readonly, nonatomic) NSArray *allHomeAddresses;
@property(readonly, nonatomic) AddressBookAddress *meCardSchoolAddress;
@property(readonly, nonatomic) AddressBookAddress *meCardWorkAddress;
@property(readonly, nonatomic) AddressBookAddress *meCardHomeAddress;
- (_Bool)addressBookSetMe:(id)arg1;	// IMP=0x00100000002e581b
@property(readonly, nonatomic) NSURL *meCardPunchOutURL;
@property(readonly, nonatomic) _Bool meCardExists;
@property(readonly, nonatomic) CNContact *meCard;
@property(readonly, copy, nonatomic) NSArray *properties;
@property(readonly, copy, nonatomic) CNContactStore *contactStore;
- (void)_updateImmediately;	// IMP=0x00100000002e5518
- (void)setNeedsUpdate;	// IMP=0x00100000002e5470
- (void)setNeedsUpdateWithCoalescing;	// IMP=0x00100000002e53f7
- (void)_updateStoreWithCoalescing:(_Bool)arg1;	// IMP=0x00100000002e5372
- (void)updateStoreImmediately:(id)arg1;	// IMP=0x00100000002e535e
- (void)updateStore:(id)arg1;	// IMP=0x00100000002e5347
@property(readonly, nonatomic) MapsSuggestionsCorrectedMapItemProvider *msgCorrectedMapItemProvider;
- (id)init;	// IMP=0x00100000002e5031
- (void)afterFirstCollection:(CDUnknownBlockType)arg1;	// IMP=0x00100000004bb542

@end

