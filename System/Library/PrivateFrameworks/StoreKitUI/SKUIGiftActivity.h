//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIActivity.h>

@class NSString, SKUIClientContext, SKUIProductPageItem;

__attribute__((visibility("hidden")))
@interface SKUIGiftActivity : UIActivity
{
    SKUIClientContext *_clientContext;	// 8 = 0x8
    SKUIProductPageItem *_item;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000204aa2
- (void)giftViewController:(id)arg1 didFinishWithResult:(_Bool)arg2;	// IMP=0x0000000000204a8e
- (_Bool)canPerformWithActivityItems:(id)arg1;	// IMP=0x0000000000204a86
- (id)_beforeActivity;	// IMP=0x0000000000204a72
- (id)activityViewController;	// IMP=0x00000000002049d6
- (id)activityType;	// IMP=0x00000000002049c9
- (id)activityTitle;	// IMP=0x0000000000204969
- (id)activityImage;	// IMP=0x00000000002048f2
- (id)initWithItem:(id)arg1 clientContext:(id)arg2;	// IMP=0x0000000000204850

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

