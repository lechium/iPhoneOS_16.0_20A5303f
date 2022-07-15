//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class CNContact, CNMeCardSharingOnboardingAvatarCarouselItem, CNMeCardSharingOnboardingAvatarCarouselLayout, CNSharingProfileLogger, NSArray, NSString, PRMonogramColor, UICollectionView;
@protocol AVTAvatarRecord, CNMeCardSharingOnboardingAvatarCarouselViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface CNMeCardSharingOnboardingAvatarCarouselViewController : UIViewController
{
    id <CNMeCardSharingOnboardingAvatarCarouselViewControllerDelegate> _delegate;	// 8 = 0x8
    PRMonogramColor *_monogramColor;	// 16 = 0x10
    NSArray *_items;	// 24 = 0x18
    UICollectionView *_collectionView;	// 32 = 0x20
    CNMeCardSharingOnboardingAvatarCarouselLayout *_layout;	// 40 = 0x28
    id <AVTAvatarRecord> _avatarRecord;	// 48 = 0x30
    CNContact *_contact;	// 56 = 0x38
    CNMeCardSharingOnboardingAvatarCarouselItem *_photoPickerItem;	// 64 = 0x40
    CNMeCardSharingOnboardingAvatarCarouselItem *_animojiItem;	// 72 = 0x48
    CNMeCardSharingOnboardingAvatarCarouselItem *_photoItem;	// 80 = 0x50
    CNMeCardSharingOnboardingAvatarCarouselItem *_monogramItem;	// 88 = 0x58
    CNSharingProfileLogger *_logger;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00000000000cdce9
@property(readonly, nonatomic) CNSharingProfileLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) CNMeCardSharingOnboardingAvatarCarouselItem *monogramItem; // @synthesize monogramItem=_monogramItem;
@property(retain, nonatomic) CNMeCardSharingOnboardingAvatarCarouselItem *photoItem; // @synthesize photoItem=_photoItem;
@property(retain, nonatomic) CNMeCardSharingOnboardingAvatarCarouselItem *animojiItem; // @synthesize animojiItem=_animojiItem;
@property(retain, nonatomic) CNMeCardSharingOnboardingAvatarCarouselItem *photoPickerItem; // @synthesize photoPickerItem=_photoPickerItem;
@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) id <AVTAvatarRecord> avatarRecord; // @synthesize avatarRecord=_avatarRecord;
@property(retain, nonatomic) CNMeCardSharingOnboardingAvatarCarouselLayout *layout; // @synthesize layout=_layout;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(retain, nonatomic) PRMonogramColor *monogramColor; // @synthesize monogramColor=_monogramColor;
@property(nonatomic) __weak id <CNMeCardSharingOnboardingAvatarCarouselViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x00000000000cd98c
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x00000000000cd6ab
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x00000000000cd68e
- (void)scrollToItemAtIndex:(unsigned long long)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000cd5e6
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x00000000000cd5d4
@property(readonly, nonatomic) CNMeCardSharingOnboardingAvatarCarouselItem *selectedItem;
- (void)notifyDelegateOfUpdateToCenterMostItem;	// IMP=0x00000000000cd4d2
- (id)monogramImageItemWithContact:(id)arg1;	// IMP=0x00000000000cd316
- (id)contactImageItemWithContact:(id)arg1;	// IMP=0x00000000000cd1d6
- (void)reloadForUpdatedMonogram;	// IMP=0x00000000000cd184
- (void)reloadForUpdatedContactPhoto;	// IMP=0x00000000000cd020
- (id)standardItems;	// IMP=0x00000000000ccdff
- (id)itemsForNoAnimojiAndNoPhoto;	// IMP=0x00000000000ccc89
- (void)buildItems;	// IMP=0x00000000000ccc17
- (void)viewWillLayoutSubviews;	// IMP=0x00000000000cc78b
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000000cc74a
- (void)viewDidLoad;	// IMP=0x00000000000cc50d
- (id)initWithContact:(id)arg1 avatarRecord:(id)arg2 logger:(id)arg3;	// IMP=0x00000000000cc3d6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
