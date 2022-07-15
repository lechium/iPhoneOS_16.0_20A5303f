//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class GEOComposedRouteAdvisory, UIImageView, UILabel;

@interface CarAdvisoryView : UIView
{
    UILabel *_advisoryLabel;	// 8 = 0x8
    UIImageView *_advisoryImage;	// 16 = 0x10
    GEOComposedRouteAdvisory *_advisory;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000917594
@property(readonly, nonatomic) GEOComposedRouteAdvisory *advisory; // @synthesize advisory=_advisory;
@property(retain, nonatomic) UIImageView *advisoryImage; // @synthesize advisoryImage=_advisoryImage;
@property(retain, nonatomic) UILabel *advisoryLabel; // @synthesize advisoryLabel=_advisoryLabel;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x001000000091747a
- (void)_updateContent;	// IMP=0x0010000000917327
- (void)_setupViews;	// IMP=0x0010000000916bd4
- (id)initWithAdvisory:(id)arg1;	// IMP=0x0010000000916b2e
- (id)init;	// IMP=0x0010000000916acb

@end
