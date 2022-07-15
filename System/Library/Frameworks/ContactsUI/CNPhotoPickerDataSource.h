//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNContactViewCache, CNPhotoPickerVariantsManager, CNVisualIdentity, NSArray, NSIndexPath, NSMutableArray, NSString;
@protocol AVTAvatarStore, CNPhotoPickerProviderGroupDelegate;

__attribute__((visibility("hidden")))
@interface CNPhotoPickerDataSource : NSObject
{
    _Bool _allowsPhotoLibraryAccess;	// 8 = 0x8
    CNVisualIdentity *_visualIdentity;	// 16 = 0x10
    NSIndexPath *_activePhotoIndexPath;	// 24 = 0x18
    CNContactViewCache *_contactViewCache;	// 32 = 0x20
    id <CNPhotoPickerProviderGroupDelegate> _delegate;	// 40 = 0x28
    CNPhotoPickerVariantsManager *_variantsManager;	// 48 = 0x30
    id <AVTAvatarStore> _avatarStore;	// 56 = 0x38
    NSArray *_emojiSuggestionItems;	// 64 = 0x40
    NSArray *_providerGroups;	// 72 = 0x48
    NSMutableArray *_groupIsCollapsedState;	// 80 = 0x50
}

+ (id)avatarStore;	// IMP=0x00100000000985bd
- (void).cxx_destruct;	// IMP=0x00000000000982f3
@property(nonatomic) _Bool allowsPhotoLibraryAccess; // @synthesize allowsPhotoLibraryAccess=_allowsPhotoLibraryAccess;
@property(retain, nonatomic) NSMutableArray *groupIsCollapsedState; // @synthesize groupIsCollapsedState=_groupIsCollapsedState;
@property(readonly, nonatomic) NSArray *providerGroups; // @synthesize providerGroups=_providerGroups;
@property(retain, nonatomic) NSArray *emojiSuggestionItems; // @synthesize emojiSuggestionItems=_emojiSuggestionItems;
@property(readonly, nonatomic) id <AVTAvatarStore> avatarStore; // @synthesize avatarStore=_avatarStore;
@property(readonly, nonatomic) CNPhotoPickerVariantsManager *variantsManager; // @synthesize variantsManager=_variantsManager;
@property(nonatomic) __weak id <CNPhotoPickerProviderGroupDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) CNContactViewCache *contactViewCache; // @synthesize contactViewCache=_contactViewCache;
@property(retain, nonatomic) NSIndexPath *activePhotoIndexPath; // @synthesize activePhotoIndexPath=_activePhotoIndexPath;
@property(retain, nonatomic) CNVisualIdentity *visualIdentity; // @synthesize visualIdentity=_visualIdentity;
- (id)uniqueEmojiSuggestionItems:(id)arg1;	// IMP=0x0000000000098137
- (void)photoPickerProviderGroup:(id)arg1 didUpdateItem:(id)arg2;	// IMP=0x0000000000098083
- (void)photoPickerProviderGroupDidUpdate:(id)arg1;	// IMP=0x0000000000097fef
- (void)updateGroupCollapsedStateForSection:(long long)arg1;	// IMP=0x0000000000097ec2
- (id)removeItem:(id)arg1;	// IMP=0x0000000000097d2f
- (id)indexOfAddedItem:(id)arg1 inGroupOfType:(long long)arg2;	// IMP=0x0000000000097be5
- (id)findActiveIndexPathInGroup:(id)arg1 withImageData:(id)arg2;	// IMP=0x0000000000097a6f
- (id)injectedItemsGroup;	// IMP=0x00000000000979bf
- (id)suggestionsGroup;	// IMP=0x000000000009790f
- (id)monogramProviderMonogramItemWithSize:(struct CGSize)arg1;	// IMP=0x0000000000097811
- (id)monogramProviderDefaultItemWithSize:(struct CGSize)arg1;	// IMP=0x000000000009776e
- (id)providerItemAtIndexPath:(id)arg1;	// IMP=0x00000000000976d8
- (id)providerGroupAtIndexPath:(id)arg1;	// IMP=0x00000000000976a4
- (id)providerGroupAtSection:(long long)arg1;	// IMP=0x00000000000975fb
- (_Bool)isItemAtIndexPathAddItem:(id)arg1;	// IMP=0x0000000000097510
- (id)actionTitleForSection:(long long)arg1;	// IMP=0x000000000009737c
- (id)titleForSection:(long long)arg1;	// IMP=0x00000000000971fc
- (id)indexPathsToReloadForUpdatedGroup:(id)arg1;	// IMP=0x00000000000970b0
- (long long)sectionIndexForProviderGroupType:(long long)arg1;	// IMP=0x000000000009702c
- (long long)sectionIndexForProviderGroup:(id)arg1;	// IMP=0x0000000000096f6e
- (long long)numberOfItemsInSection:(long long)arg1;	// IMP=0x0000000000096e61
- (long long)numberOfSections;	// IMP=0x0000000000096e1d
@property(nonatomic) unsigned long long itemsPerRow;
- (void)loadProviderGroupsItemsForSize:(struct CGSize)arg1 itemsPerRow:(double)arg2 scale:(double)arg3 RTL:(_Bool)arg4;	// IMP=0x0000000000096bb0
- (id)initWithVisualIdentity:(id)arg1 contactViewCache:(id)arg2 providerGroups:(id)arg3 avatarStore:(id)arg4;	// IMP=0x00000000000969c7
- (id)initWithVisualIdentity:(id)arg1 contactViewCache:(id)arg2 photoPickerConfiguration:(id)arg3;	// IMP=0x0000000000096841

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
