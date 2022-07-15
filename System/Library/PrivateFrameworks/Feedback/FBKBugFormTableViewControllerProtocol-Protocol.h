//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FBKAttachment, FBKBugFormTableViewController, FBKDeviceDiagnosticsController, FBKDraftingController, FBKFormResponse, FBKUser, NSError;

@protocol FBKBugFormTableViewControllerProtocol
- (void)controller:(FBKBugFormTableViewController *)arg1 didRequestDismissalWithSavedDraft:(_Bool)arg2;
- (void)controller:(FBKBugFormTableViewController *)arg1 didFailToLoadDraftWithError:(NSError *)arg2;
- (void)controller:(FBKBugFormTableViewController *)arg1 didFinishSubmissionWithError:(NSError *)arg2;
- (void)controller:(FBKBugFormTableViewController *)arg1 didAttachLocalFile:(FBKAttachment *)arg2;
- (void)controller:(FBKBugFormTableViewController *)arg1 didFinishLoadingDraft:(FBKFormResponse *)arg2 devicesController:(FBKDeviceDiagnosticsController *)arg3 draftingController:(FBKDraftingController *)arg4;
- (void)controller:(FBKBugFormTableViewController *)arg1 didClickSwitchAccountsWithCurrentUser:(FBKUser *)arg2;
@end
