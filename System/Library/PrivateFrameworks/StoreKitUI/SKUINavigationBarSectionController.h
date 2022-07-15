//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SKUINavigationBarContext, SKUIViewElementLayoutContext, UIView;

__attribute__((visibility("hidden")))
@interface SKUINavigationBarSectionController : NSObject
{
    SKUINavigationBarContext *_navigationBarContext;	// 8 = 0x8
    SKUIViewElementLayoutContext *_viewLayoutContext;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000002f75bb
@property(retain, nonatomic) SKUINavigationBarContext *context; // @synthesize context=_navigationBarContext;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;	// IMP=0x00000000002f759a
- (void)willAppearInNavigationBar;	// IMP=0x00000000002f7594
@property(readonly, nonatomic) SKUIViewElementLayoutContext *viewLayoutContext;
- (id)viewForElementIdentifier:(id)arg1;	// IMP=0x00000000002f7430
@property(readonly, nonatomic) UIView *view;
- (void)reloadSectionViews;	// IMP=0x00000000002f7422
- (void)reloadAfterDocumentUpdateWithNavigationItem:(id)arg1;	// IMP=0x00000000002f741c
- (id)barButtonItemForElementIdentifier:(id)arg1;	// IMP=0x00000000002f7414
- (void)dealloc;	// IMP=0x00000000002f73d0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
