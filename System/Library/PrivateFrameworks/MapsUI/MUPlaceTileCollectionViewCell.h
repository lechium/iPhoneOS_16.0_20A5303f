//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

@class MUPlaceTileCellConfiguration, NSString, UIImageView, UIView;
@protocol MUPlaceTileTemplateView, MUPlaceTileViewModel;

__attribute__((visibility("hidden")))
@interface MUPlaceTileCollectionViewCell : UICollectionViewCell
{
    UIView<MUPlaceTileTemplateView> *_tileContentView;	// 8 = 0x8
    MUPlaceTileCellConfiguration *_cellConfiguration;	// 16 = 0x10
}

+ (struct CGSize)preferredSizeForViewModels:(id)arg1 cellConfiguration:(id)arg2;	// IMP=0x00100000000a0e26
+ (id)reuseIdentifier;	// IMP=0x00100000000a0e14
- (void).cxx_destruct;	// IMP=0x00000000000a0ef0
@property(nonatomic) MUPlaceTileCellConfiguration *cellConfiguration; // @synthesize cellConfiguration=_cellConfiguration;
- (void)_updateTemplateViewWithOldCellConfiguration:(id)arg1;	// IMP=0x00000000000a0caa
@property(retain, nonatomic) id <MUPlaceTileViewModel> viewModel;
@property(readonly, nonatomic) UIImageView *tileImageView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

