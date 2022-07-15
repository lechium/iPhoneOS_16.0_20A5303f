//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MUHeaderButtonsView, NSString, UIView;
@protocol ParkedCarHeaderButtonsDelegate;

@interface ParkedCarHeaderButtonsSectionController
{
    MUHeaderButtonsView *_headerButtonsView;	// 8 = 0x8
    UIView *_sectionView;	// 16 = 0x10
    id <ParkedCarHeaderButtonsDelegate> _actionDelegate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000009e8ac5
@property(nonatomic) __weak id <ParkedCarHeaderButtonsDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
- (id)sectionView;	// IMP=0x00100000009e89e0
- (void)headerButtonsView:(id)arg1 didSelectPrimaryType:(unsigned long long)arg2 withPresentationOptions:(id)arg3;	// IMP=0x00100000009e8983
- (void)_commonInit;	// IMP=0x00100000009e8753
- (id)initWithParkedCar:(id)arg1;	// IMP=0x00100000009e8707

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
