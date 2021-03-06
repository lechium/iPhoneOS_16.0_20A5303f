//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSMutableDictionary, NSString, VSOptional, VSViewControllerFactory, VSViewServiceRemoteViewController;
@protocol VSViewServiceHostViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface VSViewServiceHostViewController : UIViewController
{
    _Bool _hasRetriedOnce;	// 8 = 0x8
    _Bool _hasRequestedPresentation;	// 9 = 0x9
    id <VSViewServiceHostViewControllerDelegate> _delegate;	// 16 = 0x10
    NSMutableDictionary *_requestsByID;	// 24 = 0x18
    VSOptional *_currentRequest;	// 32 = 0x20
    VSViewServiceRemoteViewController *_remoteViewController;	// 40 = 0x28
    VSViewControllerFactory *_viewControllerFactory;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000004437
@property(retain, nonatomic) VSViewControllerFactory *viewControllerFactory; // @synthesize viewControllerFactory=_viewControllerFactory;
@property(nonatomic) _Bool hasRequestedPresentation; // @synthesize hasRequestedPresentation=_hasRequestedPresentation;
@property(nonatomic) _Bool hasRetriedOnce; // @synthesize hasRetriedOnce=_hasRetriedOnce;
@property(retain, nonatomic) VSViewServiceRemoteViewController *remoteViewController; // @synthesize remoteViewController=_remoteViewController;
@property(retain, nonatomic) VSOptional *currentRequest; // @synthesize currentRequest=_currentRequest;
@property(retain, nonatomic) NSMutableDictionary *requestsByID; // @synthesize requestsByID=_requestsByID;
@property(nonatomic) __weak id <VSViewServiceHostViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_addRemoteViewControllerAsChildViewController;	// IMP=0x00000000000041fa
- (void)_removeRemoteViewControllerAsChildViewController;	// IMP=0x0000000000004130
- (void)_connectToViewServiceForRequest:(id)arg1;	// IMP=0x0000000000003b50
- (void)viewServiceRemoteViewController:(id)arg1 didSelectProviderWithIdentifier:(id)arg2 vetoHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000003b03
- (void)viewServiceRemoteViewController:(id)arg1 didCancelRequest:(id)arg2;	// IMP=0x0000000000003aae
- (void)viewServiceRemoteViewController:(id)arg1 didChooseAdditionalProvidersForRequest:(id)arg2;	// IMP=0x0000000000003a59
- (void)viewServiceRemoteViewController:(id)arg1 request:(id)arg2 didFailWithError:(id)arg3;	// IMP=0x00000000000039f5
- (void)viewServiceRemoteViewController:(id)arg1 didTerminateWithError:(id)arg2;	// IMP=0x000000000000366b
- (void)viewServiceRemoteViewController:(id)arg1 request:(id)arg2 didFinishWithResponse:(id)arg3;	// IMP=0x0000000000003607
- (void)dismissViewServiceRemoteViewController:(id)arg1;	// IMP=0x00000000000035be
- (void)presentViewServiceRemoteViewController:(id)arg1;	// IMP=0x0000000000003569
- (_Bool)isModalInPresentation;	// IMP=0x0000000000003561
- (long long)modalPresentationStyle;	// IMP=0x0000000000003556
- (void)_cancelButtonPressed:(id)arg1;	// IMP=0x000000000000338e
- (_Bool)_shouldAuthenticateAccountProviderWithIdentifier:(id)arg1;	// IMP=0x0000000000003314
- (void)_dismissViewServiceHostViewController;	// IMP=0x00000000000032c8
- (void)_presentViewServiceHostViewController;	// IMP=0x000000000000327c
- (void)_didChooseAdditionalProvidersForRequest:(id)arg1;	// IMP=0x0000000000003185
- (void)_didCancelRequest:(id)arg1;	// IMP=0x000000000000308e
- (void)_request:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x0000000000002f4c
- (void)_request:(id)arg1 didFinishWithResponse:(id)arg2;	// IMP=0x0000000000002e0a
- (void)_didCompleteRequest:(id)arg1;	// IMP=0x0000000000002b85
- (id)_requestForID:(id)arg1;	// IMP=0x0000000000002ad5
- (void)enqueueViewServiceRequest:(id)arg1 withIdentifier:(id)arg2;	// IMP=0x000000000000293c
- (void)dealloc;	// IMP=0x0000000000002906
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000000000281a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

