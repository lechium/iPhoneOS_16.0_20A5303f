//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSString, RCPTimelineView, RCPVizualizerView, SSSScreenshot, UINavigationBar;

@interface SSSRecapViewController : UIViewController
{
    RCPTimelineView *_timelineView;	// 8 = 0x8
    RCPVizualizerView *_traceView;	// 16 = 0x10
    UINavigationBar *_topBar;	// 24 = 0x18
    SSSScreenshot *_screenshot;	// 32 = 0x20
}

+ (_Bool)recapAvailable;	// IMP=0x0020000000039b48
- (void).cxx_destruct;	// IMP=0x002000000003b382
@property(readonly, nonatomic) SSSScreenshot *screenshot; // @synthesize screenshot=_screenshot;
- (void)tapToRadar:(id)arg1 screenshot:(id)arg2;	// IMP=0x001000000003b101
- (id)tapToRadarURL;	// IMP=0x001000000003af3e
- (void)_sharePushed:(id)arg1;	// IMP=0x001000000003ad39
- (int)_preferredStatusBarVisibility;	// IMP=0x001000000003acf5
- (void)viewDidLayoutSubviews;	// IMP=0x001000000003aaae
- (long long)positionForBar:(id)arg1;	// IMP=0x001000000003aaa3
- (void)_donePushed:(id)arg1;	// IMP=0x001000000003aa8a
- (void)viewDidLoad;	// IMP=0x001000000003a6d0
- (void)finishLoadingScreenshot;	// IMP=0x001000000003a309
- (void)loadScreenshot;	// IMP=0x0010000000039c15
- (id)initWithScreenshot:(id)arg1;	// IMP=0x0010000000039bb9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

