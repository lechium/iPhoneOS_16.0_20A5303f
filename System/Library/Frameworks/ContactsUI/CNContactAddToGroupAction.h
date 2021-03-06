//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNContactAction.h"

@class CNContactStore, CNGroup, NSArray, NSString, UINavigationController;

__attribute__((visibility("hidden")))
@interface CNContactAddToGroupAction : CNContactAction
{
    CNContactStore *_contactStore;	// 8 = 0x8
    NSArray *_contactParentGroups;	// 16 = 0x10
    CNGroup *_selectedGroup;	// 24 = 0x18
    NSArray *_contactParentGroupIdentifiers;	// 32 = 0x20
    UINavigationController *_groupPickerNavigationViewController;	// 40 = 0x28
}

+ (id)os_log;	// IMP=0x0010000000081d8c
- (void).cxx_destruct;	// IMP=0x0000000000082282
@property(retain, nonatomic) UINavigationController *groupPickerNavigationViewController; // @synthesize groupPickerNavigationViewController=_groupPickerNavigationViewController;
@property(retain, nonatomic) NSArray *contactParentGroupIdentifiers; // @synthesize contactParentGroupIdentifiers=_contactParentGroupIdentifiers;
@property(retain, nonatomic) CNGroup *selectedGroup; // @synthesize selectedGroup=_selectedGroup;
@property(retain, nonatomic) NSArray *contactParentGroups; // @synthesize contactParentGroups=_contactParentGroups;
@property(retain, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
- (_Bool)contactViewController:(id)arg1 shouldPerformDefaultActionForContact:(id)arg2 propertyKey:(id)arg3 labeledValue:(id)arg4;	// IMP=0x00000000000821d5
- (void)groupPickerDidCancel:(id)arg1;	// IMP=0x0000000000082161
- (void)groupPicker:(id)arg1 didSelectGroup:(id)arg2;	// IMP=0x00000000000820a6
- (_Bool)groupPicker:(id)arg1 shouldEnableGroupWithIdentifier:(id)arg2;	// IMP=0x0000000000082039
- (void)performActionWithSender:(id)arg1;	// IMP=0x0000000000081de8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

