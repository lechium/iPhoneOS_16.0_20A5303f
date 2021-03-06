//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class CARSettingsCellSpecifier, NSString, UIView;
@protocol CARSettingsPanelController;

@interface CARSettingsPanel : UIViewController
{
    CARSettingsCellSpecifier *_cellSpecifier;	// 8 = 0x8
    id <CARSettingsPanelController> _panelController;	// 16 = 0x10
    UIView *_phoneView;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000016669
@property(readonly, nonatomic) UIView *phoneView; // @synthesize phoneView=_phoneView;
@property(readonly, nonatomic) __weak id <CARSettingsPanelController> panelController; // @synthesize panelController=_panelController;
@property(readonly, nonatomic) CARSettingsCellSpecifier *cellSpecifier; // @synthesize cellSpecifier=_cellSpecifier;
- (void)invalidate;	// IMP=0x0010000000016628
- (id)navigationItem;	// IMP=0x001000000001657b
- (void)viewDidLoad;	// IMP=0x00100000000164e0
- (id)title;	// IMP=0x0010000000016490
- (id)initWithPanelController:(id)arg1;	// IMP=0x0010000000016401

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

