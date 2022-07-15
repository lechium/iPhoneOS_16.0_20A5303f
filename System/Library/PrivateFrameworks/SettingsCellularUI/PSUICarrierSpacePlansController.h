//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSListController.h>

@class CTCarrierSpaceClient, NSObject, NSString, RemoteUIController;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface PSUICarrierSpacePlansController : PSListController
{
    NSObject<OS_dispatch_queue> *_carrierSpaceQueue;	// 192 = 0xc0
    RemoteUIController *_remoteUIController;	// 200 = 0xc8
    CTCarrierSpaceClient *_carrierSpaceClient;	// 208 = 0xd0
}

- (void).cxx_destruct;	// IMP=0x0000000000050837
@property(retain, nonatomic) CTCarrierSpaceClient *carrierSpaceClient; // @synthesize carrierSpaceClient=_carrierSpaceClient;
- (id)getLogger;	// IMP=0x00000000000507f2
- (void)remoteUIController:(id)arg1 willPresentModalNavigationController:(id)arg2;	// IMP=0x0000000000050732
- (void)dismissPlanDetail;	// IMP=0x00000000000506ee
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000000050450
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;	// IMP=0x000000000004ff74
- (id)stringFromGroupCategory:(long long)arg1;	// IMP=0x000000000004fd96
- (id)detailForPlanOption:(id)arg1;	// IMP=0x000000000004fac3
- (void)moreDetailsButtonTapped:(id)arg1;	// IMP=0x000000000004f903
- (id)specifiers;	// IMP=0x000000000004eeaf
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000004eca4
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000000004ea7c
- (void)carrierSpaceChanged;	// IMP=0x000000000004e9bd
- (void)simStatusChanged;	// IMP=0x000000000004e889

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
