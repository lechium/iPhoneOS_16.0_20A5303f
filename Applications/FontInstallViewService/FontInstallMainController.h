//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardUIServices/SBUIRemoteAlertServiceViewController.h>

@class NSString, NSXPCConnection, UIImage, UIViewController;

@interface FontInstallMainController : SBUIRemoteAlertServiceViewController
{
    UIViewController *_vcNav;	// 8 = 0x8
    NSXPCConnection *_connection;	// 16 = 0x10
    UIImage *_applicationIconImage;	// 24 = 0x18
    NSString *_applicationName;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000007f48
@property(readonly, retain, nonatomic) NSString *applicationName; // @synthesize applicationName=_applicationName;
@property(readonly, retain, nonatomic) UIImage *applicationIconImage; // @synthesize applicationIconImage=_applicationIconImage;
- (void)doneWithInstallFonts:(_Bool)arg1;	// IMP=0x0010000000007d97
- (void)prepareForActivationWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000007bb7
- (void)configureWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000007a36
- (void)connectToEndpoint:(id)arg1;	// IMP=0x0010000000007858
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00100000000077ee
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x001000000000776a
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x001000000000713f

@end

