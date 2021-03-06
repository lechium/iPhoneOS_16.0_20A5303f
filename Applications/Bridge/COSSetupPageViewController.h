//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <OnBoardingKit/OBTableWelcomeController.h>

@class NSString, NSUserActivity;
@protocol COSBuddyControllerDelegate;

@interface COSSetupPageViewController : OBTableWelcomeController
{
    id <COSBuddyControllerDelegate> _delegate;	// 8 = 0x8
    NSUserActivity *_tapToRadarActivity;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000011bb20
@property(retain, nonatomic) NSUserActivity *tapToRadarActivity; // @synthesize tapToRadarActivity=_tapToRadarActivity;
@property(nonatomic) __weak id <COSBuddyControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_endTapToRadarActivity;	// IMP=0x001000000011ba8c
- (void)_startTapToRadarActivity;	// IMP=0x001000000011b9a4
- (void)openTapToRadar;	// IMP=0x001000000011b94b
- (id)tapToRadarMetadata;	// IMP=0x001000000011b920
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x001000000011b8df
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x001000000011b89e
- (id)titleLabel;	// IMP=0x001000000011b6f3
- (id)init;	// IMP=0x001000000011b6b8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

