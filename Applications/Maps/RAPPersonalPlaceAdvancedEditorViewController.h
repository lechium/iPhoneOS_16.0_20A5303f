//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

@class ACAccount, NSString, RAPCommentPartHeaderView, RAPDisplayUserContentTableViewCell, RAPPersonalPlaceCorrectionsQuestion, RAPPhotoCarouselTableViewCell, RAPPhotoPickerController, RAPReport, RAPReportComposerCommentTableViewCell, RAPUserContentTableViewFooterView, UGCPhotoCarouselController;

@interface RAPPersonalPlaceAdvancedEditorViewController : UITableViewController
{
    RAPReport *_report;	// 8 = 0x8
    RAPPersonalPlaceCorrectionsQuestion *_question;	// 16 = 0x10
    CDUnknownBlockType _completion;	// 24 = 0x18
    RAPPhotoPickerController *_photoPicker;	// 32 = 0x20
    UGCPhotoCarouselController *_photoCarouselController;	// 40 = 0x28
    RAPPhotoCarouselTableViewCell *_photoCell;	// 48 = 0x30
    RAPReportComposerCommentTableViewCell *_commentCell;	// 56 = 0x38
    RAPCommentPartHeaderView *_commentsHeaderView;	// 64 = 0x40
    RAPDisplayUserContentTableViewCell *_userInfoCell;	// 72 = 0x48
    RAPUserContentTableViewFooterView *_userContentFooterView;	// 80 = 0x50
    ACAccount *_account;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00200000007eac27
@property(readonly, nonatomic) int analyticTarget;
- (void)photoCarouselController:(id)arg1 requestsRemovingImageForIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000007eab83
- (void)photoCarouselControllerRequestsAddingNewPhoto:(id)arg1;	// IMP=0x00100000007eab0c
- (id)_photoTableViewCell;	// IMP=0x00100000007eaa91
- (id)_commentsHeaderView;	// IMP=0x00100000007ea9e6
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x00100000007ea9a2
- (id)_commentCell;	// IMP=0x00100000007ea78a
- (id)_userContentFooterView;	// IMP=0x00100000007ea6b5
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;	// IMP=0x00100000007ea671
- (id)_userInfoCell;	// IMP=0x00100000007ea61c
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00100000007ea593
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00100000007ea588
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00100000007ea56d
- (void)_initPhotoPicker;	// IMP=0x00100000007ea31f
- (id)initWithReport:(id)arg1 question:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000007ea1c3
- (void)_presentPrivacyView;	// IMP=0x00100000007ea15c
- (void)_send;	// IMP=0x00100000007ea137
- (void)_cancel;	// IMP=0x00100000007ea115
- (void)viewDidLoad;	// IMP=0x00100000007e9ec8

// Remaining properties
@property(readonly, nonatomic) int backAction;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *eventValue;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
