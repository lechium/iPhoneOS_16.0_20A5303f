//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class HFAccessoryBrowsingManager, HSDiscoveredAccessoryGridContentViewController, HSEntitlementContext, HSNetworkInterfaceManager, NSLayoutConstraint, NSString, UIAlertController;
@protocol HSDiscoveredAccessoryPickerViewControllerDelegate;

@interface HSDiscoveredAccessoryPickerViewController : UIViewController
{
    HFAccessoryBrowsingManager *_accessoryBrowsingManager;	// 8 = 0x8
    HSEntitlementContext *_entitlementContext;	// 16 = 0x10
    HSDiscoveredAccessoryGridContentViewController *_gridViewController;	// 24 = 0x18
    HSNetworkInterfaceManager *_networkInterfaceManager;	// 32 = 0x20
    UIAlertController *_enableBluetoothAndWiFiAlertController;	// 40 = 0x28
    NSLayoutConstraint *_gridHeightConstraint;	// 48 = 0x30
    id <HSDiscoveredAccessoryPickerViewControllerDelegate> _discoveredAccessoryPickerViewControllerDelegate;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x002000000000df18
@property __weak id <HSDiscoveredAccessoryPickerViewControllerDelegate> discoveredAccessoryPickerViewControllerDelegate; // @synthesize discoveredAccessoryPickerViewControllerDelegate=_discoveredAccessoryPickerViewControllerDelegate;
@property(retain, nonatomic) NSLayoutConstraint *gridHeightConstraint; // @synthesize gridHeightConstraint=_gridHeightConstraint;
@property(retain, nonatomic) UIAlertController *enableBluetoothAndWiFiAlertController; // @synthesize enableBluetoothAndWiFiAlertController=_enableBluetoothAndWiFiAlertController;
@property(retain, nonatomic) HSNetworkInterfaceManager *networkInterfaceManager; // @synthesize networkInterfaceManager=_networkInterfaceManager;
@property(retain, nonatomic) HSDiscoveredAccessoryGridContentViewController *gridViewController; // @synthesize gridViewController=_gridViewController;
@property(readonly, nonatomic) HSEntitlementContext *entitlementContext; // @synthesize entitlementContext=_entitlementContext;
@property(readonly, nonatomic) HFAccessoryBrowsingManager *accessoryBrowsingManager; // @synthesize accessoryBrowsingManager=_accessoryBrowsingManager;
- (id)_alertBaseLocalizationKeyForBluetoothInterfaceStatus:(unsigned long long)arg1 wiFiInterfaceStatus:(unsigned long long)arg2;	// IMP=0x001000000000ddb9
- (id)_alertLocalizedDescriptionForBluetoothInterfaceStatus:(unsigned long long)arg1 wiFiInterfaceStatus:(unsigned long long)arg2;	// IMP=0x001000000000dd2b
- (id)_alertLocalizedTitleForBluetoothInterfaceStatus:(unsigned long long)arg1 wiFiInterfaceStatus:(unsigned long long)arg2;	// IMP=0x001000000000dc9d
- (void)_updateBluetoothAndWiFiAlert;	// IMP=0x001000000000d6a0
- (void)networkInterfaceManager:(id)arg1 didUpdateWiFiInterfaceStatus:(unsigned long long)arg2;	// IMP=0x001000000000d68e
- (void)networkInterfaceManager:(id)arg1 didUpdateBluetoothInterfaceStatus:(unsigned long long)arg2;	// IMP=0x001000000000d67c
- (id)hu_preloadContent;	// IMP=0x001000000000d62c
- (void)discoveredAccessoryGrid:(id)arg1 didUpdateNumberOfDiscoveredAccessories:(unsigned long long)arg2;	// IMP=0x001000000000d58b
- (void)discoveredAccessoryGrid:(id)arg1 didSelectDiscoveredAccessory:(id)arg2;	// IMP=0x001000000000d4c8
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;	// IMP=0x001000000000d377
- (void)_setupConstraints;	// IMP=0x001000000000cf17
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x001000000000cead
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x001000000000ce6c
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x001000000000ce02
- (void)viewDidLoad;	// IMP=0x001000000000ca71
- (id)initWithAccessoryBrowsingManager:(id)arg1 entitlementContext:(id)arg2;	// IMP=0x001000000000c869

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

