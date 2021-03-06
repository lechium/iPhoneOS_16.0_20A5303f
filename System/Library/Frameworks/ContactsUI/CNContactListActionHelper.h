//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNContactListActionConfiguration, CNContactListActionExecutor, CNContactOrbActionsController, NSArray, NSString;
@protocol CNContactListActionHelperDelegate;

__attribute__((visibility("hidden")))
@interface CNContactListActionHelper : NSObject
{
    _Bool _includesContactOrbActions;	// 8 = 0x8
    _Bool _includesEditingActions;	// 9 = 0x9
    id <CNContactListActionHelperDelegate> _delegate;	// 16 = 0x10
    CNContactListActionConfiguration *_actionConfiguration;	// 24 = 0x18
    NSArray *_contacts;	// 32 = 0x20
    CNContactListActionExecutor *_actionExecutor;	// 40 = 0x28
    CNContactOrbActionsController *_contactActionsController;	// 48 = 0x30
}

+ (id)descriptorForRequiredKeys;	// IMP=0x0010000000274416
- (void).cxx_destruct;	// IMP=0x000000000027413d
@property(retain, nonatomic) CNContactOrbActionsController *contactActionsController; // @synthesize contactActionsController=_contactActionsController;
@property(retain, nonatomic) CNContactListActionExecutor *actionExecutor; // @synthesize actionExecutor=_actionExecutor;
@property(retain, nonatomic) NSArray *contacts; // @synthesize contacts=_contacts;
@property(nonatomic) _Bool includesEditingActions; // @synthesize includesEditingActions=_includesEditingActions;
@property(nonatomic) _Bool includesContactOrbActions; // @synthesize includesContactOrbActions=_includesContactOrbActions;
@property(retain, nonatomic) CNContactListActionConfiguration *actionConfiguration; // @synthesize actionConfiguration=_actionConfiguration;
@property(nonatomic) __weak id <CNContactListActionHelperDelegate> delegate; // @synthesize delegate=_delegate;
- (id)presentingViewControllerForActionsController:(id)arg1;	// IMP=0x0000000000274074
- (void)contactOrbActionsController:(id)arg1 didUpdateWithMenu:(id)arg2;	// IMP=0x0000000000273f4c
- (id)presentingViewControllerForActions;	// IMP=0x0000000000273efc
- (void)actionDidFinish:(id)arg1;	// IMP=0x0000000000273e8a
- (void)action:(id)arg1 presentViewController:(id)arg2;	// IMP=0x0000000000273e04
- (_Bool)canShowContactActionsForContacts:(id)arg1;	// IMP=0x0000000000273daf
- (id)contactActionsMenuFromItems:(id)arg1;	// IMP=0x0000000000273d73
- (id)contactActionsMenuForContact:(id)arg1;	// IMP=0x0000000000273c6d
- (void)copyContacts:(id)arg1;	// IMP=0x0000000000273bc3
- (_Bool)canShowSetAsMyCardActionForContacts:(id)arg1;	// IMP=0x0000000000273b15
- (void)updateMeContact:(id)arg1;	// IMP=0x0000000000273a44
- (_Bool)canShowMergeActionForContacts:(id)arg1;	// IMP=0x0000000000273a27
- (void)mergeContacts:(id)arg1;	// IMP=0x0000000000273956
- (void)deleteContacts:(id)arg1 dataSourceFilter:(id)arg2;	// IMP=0x00000000002738c0
- (void)deleteContacts:(id)arg1;	// IMP=0x00000000002737ef
- (void)shareContacts:(id)arg1 sourceView:(id)arg2;	// IMP=0x0000000000273723
- (_Bool)canRemoveFromGroup;	// IMP=0x0000000000273633
- (void)removeContactsFromGroup:(id)arg1 withConfirmation:(_Bool)arg2;	// IMP=0x0000000000273558
- (id)trailingSwipeActionsForContact:(id)arg1 dataSourceFilter:(id)arg2;	// IMP=0x00000000002733a1
- (id)actionsForContacts:(id)arg1 dataSourceFilter:(id)arg2 sourceView:(id)arg3;	// IMP=0x00000000002727a5
- (id)searchActionsForContacts:(id)arg1;	// IMP=0x00000000002726dd
- (id)initWithContactStore:(id)arg1 environment:(id)arg2 contactFormatter:(id)arg3 undoManager:(id)arg4;	// IMP=0x000000000027257d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

