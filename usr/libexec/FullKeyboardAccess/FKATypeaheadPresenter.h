//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AccessibilityUIUtilities/AXUIFloatingViewPresenter.h>

@class FKATypeaheadView, NSString;

@interface FKATypeaheadPresenter : AXUIFloatingViewPresenter
{
    FKATypeaheadView *_typeaheadView;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000018d2
@property(retain, nonatomic) FKATypeaheadView *typeaheadView; // @synthesize typeaheadView=_typeaheadView;
- (void)dismissFloatingView;	// IMP=0x001000000000186a
- (void)presentTypeaheadView;	// IMP=0x00100000000017c9
- (id)initWithContainingView:(id)arg1;	// IMP=0x0010000000001792

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

