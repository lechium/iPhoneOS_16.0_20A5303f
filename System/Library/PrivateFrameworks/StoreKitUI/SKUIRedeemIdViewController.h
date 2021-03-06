//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSMutableDictionary, NSString, SKUIClientContext, SKUIRedeemIdManager, UIBarButtonItem, UITableView;
@protocol SKUIRedeemIdDelegate;

__attribute__((visibility("hidden")))
@interface SKUIRedeemIdViewController : UIViewController
{
    id <SKUIRedeemIdDelegate> _delegate;	// 8 = 0x8
    SKUIRedeemIdManager *_manager;	// 16 = 0x10
    SKUIClientContext *_clientContext;	// 24 = 0x18
    UITableView *_tableView;	// 32 = 0x20
    UIBarButtonItem *_nextButton;	// 40 = 0x28
    NSMutableDictionary *_fields;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000000dc53
@property(retain, nonatomic) NSMutableDictionary *fields; // @synthesize fields=_fields;
@property(retain, nonatomic) UIBarButtonItem *nextButton; // @synthesize nextButton=_nextButton;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
@property(retain, nonatomic) SKUIRedeemIdManager *manager; // @synthesize manager=_manager;
@property(nonatomic) __weak id <SKUIRedeemIdDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_adjustInsetsForKeyboardFrameValue:(id)arg1;	// IMP=0x000000000000d89d
- (void)_keyboardDidHide:(id)arg1;	// IMP=0x000000000000d6fd
- (void)_keyboardWillShow:(id)arg1;	// IMP=0x000000000000d681
- (void)_subscribeToKeyboardEvents;	// IMP=0x000000000000d5c7
- (void)_nextPressed;	// IMP=0x000000000000d521
- (void)_cancelPressed;	// IMP=0x000000000000d4d5
- (void)_initializeNavigationItem;	// IMP=0x000000000000d227
- (void)_initializeTableView;	// IMP=0x000000000000d06b
- (void)_initializeManager;	// IMP=0x000000000000cfb8
- (id)_finalOutputFields;	// IMP=0x000000000000cd9d
- (struct UIEdgeInsets)_edgeInsetsFromInsets:(struct UIEdgeInsets)arg1 usingNewTopInset:(double)arg2;	// IMP=0x000000000000cd7e
- (void)_reloadFooter;	// IMP=0x000000000000cd03
- (_Bool)_validateForm;	// IMP=0x000000000000cb66
- (void)_refreshNavigationItem;	// IMP=0x000000000000cb09
- (id)_fieldForIndexPath:(id)arg1;	// IMP=0x000000000000ca7b
- (void)_updateFieldAtIndexPath:(id)arg1 withText:(id)arg2;	// IMP=0x000000000000c9d2
- (void)redeemIdManager:(id)arg1 didChangeToText:(id)arg2 forCellAtIndexPath:(id)arg3;	// IMP=0x000000000000c9bd
- (void)redeemIdManager:(id)arg1 movedToRowAtIndexPath:(id)arg2;	// IMP=0x000000000000c9ab
- (void)redeemIdManager:(id)arg1 didReturnText:(id)arg2 forCellAtIndexPath:(id)arg3;	// IMP=0x000000000000c996
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x000000000000c805
- (void)viewDidLayoutSubviews;	// IMP=0x000000000000c730
- (id)initWithClientContext:(id)arg1;	// IMP=0x000000000000c657

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

