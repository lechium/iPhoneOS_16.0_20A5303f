//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionReusableView.h>

@class GradientView, HairlineView;

@interface CompactGuidesSectionBackground : UICollectionReusableView
{
    GradientView *_backgroundGradientView;	// 8 = 0x8
    HairlineView *_topHairline;	// 16 = 0x10
    HairlineView *_bottomHairline;	// 24 = 0x18
}

+ (id)decorationViewKind;	// IMP=0x0040000000693746
- (void).cxx_destruct;	// IMP=0x00200000006944c8
@property(retain, nonatomic) HairlineView *bottomHairline; // @synthesize bottomHairline=_bottomHairline;
@property(retain, nonatomic) HairlineView *topHairline; // @synthesize topHairline=_topHairline;
@property(retain, nonatomic) GradientView *backgroundGradientView; // @synthesize backgroundGradientView=_backgroundGradientView;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x001000000069439a
- (void)updateBackgroundUI;	// IMP=0x00100000006941f5
- (void)setupGradientBackground;	// IMP=0x0010000000693da5
- (void)setupHairlines;	// IMP=0x00100000006937c5
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0010000000693753

@end
