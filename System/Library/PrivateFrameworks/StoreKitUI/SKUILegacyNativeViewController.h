//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKUIViewController.h"

@class NSData, NSString, NSURL, SKUICategoryController, SKUIStorePageViewController, SSVLoadURLOperation;

__attribute__((visibility("hidden")))
@interface SKUILegacyNativeViewController : SKUIViewController
{
    NSURL *_activeURL;	// 8 = 0x8
    SKUICategoryController *_categoryController;	// 16 = 0x10
    NSURL *_defaultURL;	// 24 = 0x18
    NSData *_initialData;	// 32 = 0x20
    SSVLoadURLOperation *_initialOperation;	// 40 = 0x28
    SKUIStorePageViewController *_storePageViewController;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000028fe29
- (id)_storePageViewController;	// IMP=0x000000000028fd8a
- (void)_reloadNavigationItem;	// IMP=0x000000000028fad1
- (void)_finishLoadWithResult:(_Bool)arg1 error:(id)arg2;	// IMP=0x000000000028f7b9
- (id)_categoryController;	// IMP=0x000000000028f6d1
- (id)activeMetricsController;	// IMP=0x000000000028f6b4
- (void)categoryController:(id)arg1 didSelectCategory:(id)arg2;	// IMP=0x000000000028f5c4
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;	// IMP=0x000000000028f50f
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000028f407
- (void)loadView;	// IMP=0x000000000028f2a5
- (void)reloadData;	// IMP=0x000000000028eec0
- (void)dealloc;	// IMP=0x000000000028ee75
- (id)initWithData:(id)arg1 fromOperation:(id)arg2;	// IMP=0x000000000028ed5a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

