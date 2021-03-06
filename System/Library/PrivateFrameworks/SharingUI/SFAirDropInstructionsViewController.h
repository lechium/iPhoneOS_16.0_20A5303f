//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSString, SFAirDropActiveIconView, SFCollectionViewLayout, UITextView;

__attribute__((visibility("hidden")))
@interface SFAirDropInstructionsViewController : UIViewController
{
    SFCollectionViewLayout *_collectionViewLayout;	// 8 = 0x8
    struct CGSize _minimumPreferredContentSize;	// 16 = 0x10
    UITextView *_instructionsTextView;	// 32 = 0x20
    SFAirDropActiveIconView *_airDropActiveIconView;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000003668b
@property(readonly, nonatomic) SFAirDropActiveIconView *airDropActiveIconView; // @synthesize airDropActiveIconView=_airDropActiveIconView;
@property(readonly, nonatomic) UITextView *instructionsTextView; // @synthesize instructionsTextView=_instructionsTextView;
- (struct CGSize)_cachedPreferredItemSize;	// IMP=0x000000000003656e
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 preferredSizeForItemAtIndexPath:(id)arg3;	// IMP=0x000000000003655c
- (id)attributedStringWithTitle:(id)arg1 content:(id)arg2;	// IMP=0x0000000000036108
- (id)_fontWithStyle:(id)arg1 maxSizeCategory:(id)arg2 traits:(unsigned int)arg3;	// IMP=0x0000000000035f58
- (void)_updateFontSizes;	// IMP=0x0000000000035eb6
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000035d65
- (void)updatePreferredContentSize;	// IMP=0x0000000000035c72
- (void)_layoutiOSSubviews;	// IMP=0x00000000000352d6
- (double)_titleLabelHeight;	// IMP=0x00000000000350cc
- (void)viewDidLayoutSubviews;	// IMP=0x0000000000035076
- (void)viewDidLoad;	// IMP=0x0000000000034cdb
- (id)_instructionsBaseFormatString;	// IMP=0x0000000000034cca
- (id)_airDropText;	// IMP=0x0000000000034cb9
- (id)_instructionsText;	// IMP=0x0000000000034ca8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

