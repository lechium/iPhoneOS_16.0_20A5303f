//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

@class COSManualPairingHeader, COSPasskeyEntryViewController, NSMutableArray, NSString, NSTimer;

@interface COSManualPairingViewController : UITableViewController
{
    NSMutableArray *_displayedDeviceNames;	// 8 = 0x8
    NSTimer *_tableUpdateTimer;	// 16 = 0x10
    COSManualPairingHeader *_headerView;	// 24 = 0x18
    COSPasskeyEntryViewController *_passkeyEntryController;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000003c840
@property(retain, nonatomic) COSPasskeyEntryViewController *passkeyEntryController; // @synthesize passkeyEntryController=_passkeyEntryController;
@property(retain, nonatomic) COSManualPairingHeader *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) NSTimer *tableUpdateTimer; // @synthesize tableUpdateTimer=_tableUpdateTimer;
@property(retain, nonatomic) NSMutableArray *displayedDeviceNames; // @synthesize displayedDeviceNames=_displayedDeviceNames;
- (id)didSelectRowAtIndexPath:(id)arg1;	// IMP=0x001000000003c70b
- (id)cellNameForRow:(long long)arg1;	// IMP=0x001000000003c665
- (void)endDiscovery;	// IMP=0x001000000003c5c6
- (void)beginDiscovery;	// IMP=0x001000000003c527
- (_Bool)updateDiscoveredDevices;	// IMP=0x001000000003c486
- (Class)headerClass;	// IMP=0x001000000003c3e5
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x001000000003c1de
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x001000000003c1c1
- (void);	// IMP=0x001000000003c0f9
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x001000000003c010
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x001000000003bffb
- (void)controllerCancelled:(id)arg1;	// IMP=0x001000000003bf83
- (void)_reloadDataForUI;	// IMP=0x001000000003bf2a
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x001000000003beb6
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x001000000003be1e
- (id)initWithStyle:(long long)arg1;	// IMP=0x001000000003bb0b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

