//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SiriUI/SiriUIAceObjectViewControllerDelegate-Protocol.h>

@class NSArray, NSDate, NSSet, NSUUID, SAStartLocalRequest, SiriUISashItem, SiriUISnippetViewController, UIViewController;
@protocol SiriSharedUIViewControlling;

@protocol SiriUISnippetViewControllerDelegate <SiriUIAceObjectViewControllerDelegate>
- (double)boundingWidthForSnippetViewController:(SiriUISnippetViewController *)arg1;
- (void)siriSnippetViewController:(SiriUISnippetViewController *)arg1 requestPasscodeUnlockWithCompletion:(void (^)(long long))arg2;
- (_Bool)siriSnippetViewControllerIsVisible:(id <SiriSharedUIViewControlling>)arg1;
- (void)siriSnippetViewController:(id <SiriSharedUIViewControlling>)arg1 didShowGuideStartDate:(NSDate *)arg2 endDate:(NSDate *)arg3;
- (void)siriSnippetViewController:(id <SiriSharedUIViewControlling>)arg1 shouldPresentPicker:(UIViewController *)arg2 completion:(void (^)(_Bool))arg3;
- (void)siriSnippetViewController:(id <SiriSharedUIViewControlling>)arg1 setStatusBarHidden:(_Bool)arg2 animated:(_Bool)arg3 completion:(void (^)(_Bool))arg4;
- (void)siriSnippetViewController:(id <SiriSharedUIViewControlling>)arg1 setStatusBarHidden:(_Bool)arg2 animated:(_Bool)arg3;
- (void)siriSnippetViewControllerViewDidLoad:(id <SiriSharedUIViewControlling>)arg1;
- (void)siriSnippetViewControllerWillBecomeFirstResponder:(id <SiriSharedUIViewControlling>)arg1;
- (void)siriSnippetViewController:(id <SiriSharedUIViewControlling>)arg1 pushSirilandSnippets:(NSArray *)arg2;

@optional
- (void)siriSnippetViewController:(id <SiriSharedUIViewControlling>)arg1 performAceCommands:(NSArray *)arg2 sashItem:(SiriUISashItem *)arg3;
- (void)userTouchedSnippet;
- (void)siriSnippetViewController:(id <SiriSharedUIViewControlling>)arg1 handleStartLocalRequest:(SAStartLocalRequest *)arg2 turnIdentifier:(NSUUID *)arg3;
- (void)siriSnippetViewController:(id <SiriSharedUIViewControlling>)arg1 setTypeToSiriViewHidden:(_Bool)arg2;
- (unsigned long long)navigationIndexOfSnippetViewController:(SiriUISnippetViewController *)arg1;
- (NSSet *)siriEnabledAppListForSiriViewController:(id <SiriSharedUIViewControlling>)arg1;
- (unsigned long long)siriDeviceLockStateForSnippetViewController:(id <SiriSharedUIViewControlling>)arg1;
- (void)siriSnippetViewControllerRequestsPinning:(SiriUISnippetViewController *)arg1;
@end
