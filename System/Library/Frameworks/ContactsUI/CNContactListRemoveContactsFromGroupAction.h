//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CNContactStore, CNUIExternalComponentsFactory, NSArray;

__attribute__((visibility("hidden")))
@interface CNContactListRemoveContactsFromGroupAction
{
    _Bool _confirmAction;	// 8 = 0x8
    CNUIExternalComponentsFactory *_componentsFactory;	// 16 = 0x10
    CNContactStore *_contactStore;	// 24 = 0x18
    long long _originalContactCount;	// 32 = 0x20
    NSArray *_actions;	// 40 = 0x28
}

+ (id)actionForContact:(id)arg1 configuration:(id)arg2;	// IMP=0x006000000009d190
+ (id)descriptorForRequiredKeys;	// IMP=0x006000000009d0b6
+ (id)log;	// IMP=0x006000000009d086
- (void).cxx_destruct;	// IMP=0x000000000009ccdd
@property(nonatomic) _Bool confirmAction; // @synthesize confirmAction=_confirmAction;
@property(retain, nonatomic) NSArray *actions; // @synthesize actions=_actions;
@property(nonatomic) long long originalContactCount; // @synthesize originalContactCount=_originalContactCount;
@property(retain, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
@property(readonly, nonatomic) CNUIExternalComponentsFactory *componentsFactory; // @synthesize componentsFactory=_componentsFactory;
- (id)groupToRemoveFrom;	// IMP=0x000000000009c977
- (void)performUndoAction;	// IMP=0x000000000009c8f4
- (_Bool)editRequiresAuthorizationCheckForActions:(id)arg1;	// IMP=0x000000000009c8a2
- (_Bool)editRequiresAuthorization;	// IMP=0x000000000009c84f
- (void)showRemoveFromGroupFailureAlert;	// IMP=0x000000000009c66a
- (void)performAuthorizedRemoveFromGroup:(id)arg1;	// IMP=0x000000000009c4df
- (void)performAction;	// IMP=0x000000000009c190
- (_Bool)shouldReloadListOnCompletion;	// IMP=0x000000000009c188
- (_Bool)shouldClearSelectionOnCompletion;	// IMP=0x000000000009c16e
- (id)initWithContacts:(id)arg1 configuration:(id)arg2 withConfirmation:(_Bool)arg3;	// IMP=0x000000000009bf8f

@end
