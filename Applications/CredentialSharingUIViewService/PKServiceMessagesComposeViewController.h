//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class MFMessageComposeViewController, NSArray, NSString;

@interface PKServiceMessagesComposeViewController : UIViewController
{
    NSArray *_recipientAddresses;	// 8 = 0x8
    MFMessageComposeViewController *_messageComposeViewController;	// 16 = 0x10
}

+ (id)_remoteViewControllerInterface;	// IMP=0x0020000000001f33
+ (id)_exportedInterface;	// IMP=0x0010000000001f29
- (void).cxx_destruct;	// IMP=0x0020000000002503
@property(retain, nonatomic) MFMessageComposeViewController *messageComposeViewController; // @synthesize messageComposeViewController=_messageComposeViewController;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;	// IMP=0x001000000000248c
- (void)setPartialShareInvite:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000022d9
- (void)setConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000020d6
- (void)setRecipientAddresses:(id)arg1;	// IMP=0x00100000000020c2
- (void)setDisplayPropertiesWithScreenSize:(struct CGSize)arg1 scale:(double)arg2;	// IMP=0x0010000000001fdd
- (void)_hostApplicationDidEnterBackground;	// IMP=0x0010000000001fae
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(_Bool)arg2;	// IMP=0x0010000000001f7f
- (void)loadView;	// IMP=0x0010000000001f50
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x0010000000001f45
- (_Bool)shouldAutorotate;	// IMP=0x0010000000001f3d
- (id)init;	// IMP=0x0010000000001eb4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

