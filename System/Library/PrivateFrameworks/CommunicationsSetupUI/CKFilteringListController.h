//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSListController.h>

@class CKNSExtension, NSArray, NSDictionary, NSMutableArray, NSString, PSSpecifier;

__attribute__((visibility("hidden")))
@interface CKFilteringListController : PSListController
{
    _Bool _showingParentViewController;	// 192 = 0xc0
    _Bool _addCheckmark;	// 193 = 0xc1
    NSArray *_extensionIDArray;	// 200 = 0xc8
    NSDictionary *_extensionNameMapping;	// 208 = 0xd0
    long long _spamFilterState;	// 216 = 0xd8
    id _beginMappingID;	// 224 = 0xe0
    CKNSExtension *_ckExtension;	// 232 = 0xe8
    NSString *_currentExtensionID;	// 240 = 0xf0
    PSSpecifier *_selectedSpecifier;	// 248 = 0xf8
    NSMutableArray *_specifierListArray;	// 256 = 0x100
}

- (void).cxx_destruct;	// IMP=0x00000000000453eb
@property(retain, nonatomic) NSMutableArray *specifierListArray; // @synthesize specifierListArray=_specifierListArray;
@property(retain, nonatomic) PSSpecifier *selectedSpecifier; // @synthesize selectedSpecifier=_selectedSpecifier;
@property(retain, nonatomic) NSString *currentExtensionID; // @synthesize currentExtensionID=_currentExtensionID;
@property(retain, nonatomic) CKNSExtension *ckExtension; // @synthesize ckExtension=_ckExtension;
@property(retain, nonatomic) id beginMappingID; // @synthesize beginMappingID=_beginMappingID;
@property(nonatomic) _Bool addCheckmark; // @synthesize addCheckmark=_addCheckmark;
@property(nonatomic) long long spamFilterState; // @synthesize spamFilterState=_spamFilterState;
@property(nonatomic) _Bool showingParentViewController; // @synthesize showingParentViewController=_showingParentViewController;
@property(retain, nonatomic) NSDictionary *extensionNameMapping; // @synthesize extensionNameMapping=_extensionNameMapping;
@property(retain, nonatomic) NSArray *extensionIDArray; // @synthesize extensionIDArray=_extensionIDArray;
- (void)_updateSMSFilteringParams;	// IMP=0x0000000000045265
- (id)specifiers;	// IMP=0x0000000000045056
- (void)grayOutSMSFilteringIfNecessary:(id)arg1;	// IMP=0x0000000000044f7f
- (id)getSpamSpecifiers;	// IMP=0x000000000004468c
- (void)showPrivacyLegalVC;	// IMP=0x0000000000044622
- (void)appendAboutWiFiCallingFooterToGroupSpecifier:(id)arg1;	// IMP=0x00000000000443ee
- (_Bool)verifyCurrentExtensionIDValidity;	// IMP=0x00000000000441d5
- (void)findSpamExtensions;	// IMP=0x0000000000043f79
- (id)getExtensionNameAndWarning:(id)arg1;	// IMP=0x0000000000043eba
- (void)userChangedSpamFilteringSettings;	// IMP=0x0000000000043e72
- (void)tappedNoFilterCell:(id)arg1;	// IMP=0x0000000000043dee
- (void)tappedSpamAppCell:(id)arg1;	// IMP=0x0000000000043dbe
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x0000000000043da4
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000000000438ed
- (id)isSpamFilteringEnabled:(id)arg1;	// IMP=0x0000000000043839
- (void)setIsSpamFilteringDefaultEnabled;	// IMP=0x00000000000437ba
- (id)getDefaultExtension;	// IMP=0x0000000000043768
- (void)disableSpamFiltering;	// IMP=0x00000000000436d2
- (unsigned char)enableSpamForExtensionID:(id)arg1 withName:(id)arg2;	// IMP=0x0000000000043586
- (void)shouldShowPrivacyAccessWarning:(id)arg1;	// IMP=0x0000000000043125
- (void)enableSpamFiltering:(id)arg1;	// IMP=0x0000000000043088
- (void)setConversationListFilteringEnabled:(id)arg1 specifier:(id)arg2;	// IMP=0x0000000000042f19
- (id)isConversationListFilteringEnabled:(id)arg1;	// IMP=0x0000000000042e96
- (void)endMatchingExtensions;	// IMP=0x0000000000042e5e
- (void)applicationDidResume;	// IMP=0x0000000000042e10
- (void)applicationWillSuspend;	// IMP=0x0000000000042dcf
- (void)dealloc;	// IMP=0x0000000000042d91
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000000042d50
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000000042d04
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000042cae
- (id)init;	// IMP=0x0000000000042c53
- (id)_syncManager;	// IMP=0x0000000000042c22

@end

