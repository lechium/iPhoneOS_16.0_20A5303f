//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardUIServices/SBUIRemoteAlertServiceViewController.h>

@class AXMChartDescriptor, UIViewController;

@interface AXSBUIAudiographRootViewController : SBUIRemoteAlertServiceViewController
{
    AXMChartDescriptor *_chartDescriptor;	// 8 = 0x8
    UIViewController *_hostingController;	// 16 = 0x10
}

+ (_Bool)_isSecureForRemoteViewService;	// IMP=0x0020000000013634
- (void).cxx_destruct;	// IMP=0x0020000000013cfa
@property(retain, nonatomic) UIViewController *hostingController; // @synthesize hostingController=_hostingController;
@property(retain, nonatomic) AXMChartDescriptor *chartDescriptor; // @synthesize chartDescriptor=_chartDescriptor;
- (_Bool)accessibilityPostScreenChangedForChildViewController:(id)arg1 isAddition:(_Bool)arg2;	// IMP=0x0010000000013ca8
- (void)_setupRemoteProxy;	// IMP=0x0010000000013c11
- (void)dismiss;	// IMP=0x0010000000013b82
- (void)toggleAudiographPlaybackState:(id)arg1;	// IMP=0x0010000000013b17
- (void)selectedSeriesChanged:(id)arg1;	// IMP=0x0010000000013aac
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0010000000013850
- (void)viewDidLoad;	// IMP=0x001000000001377c
- (void)configureWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000001364e
- (void)prepareForActivationWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000001363c

@end

