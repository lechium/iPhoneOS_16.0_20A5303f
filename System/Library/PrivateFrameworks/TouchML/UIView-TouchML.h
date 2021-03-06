//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSArray, NSDictionary, NSString, TMLContext;

@interface UIView (TouchML)
+ (id)tmlLoadViewFromPath:(id)arg1;	// IMP=0x0020000000019baa
+ (void)tmlLoadCategory;	// IMP=0x0020000000018567
- (void)tmlAccessibilityDecrement;	// IMP=0x0010000000019f09
- (void)tmlAccessibilityIncrement;	// IMP=0x0010000000019eee
- (_Bool)tmlAccessibilityActivate;	// IMP=0x0010000000019e69
- (void)tmlLoadReusableView:(id)arg1;	// IMP=0x001000000001980e
- (void)tmlLoadViewFromPath:(id)arg1;	// IMP=0x001000000001964f
- (void)tmlLoadView:(id)arg1;	// IMP=0x0010000000019490
- (void)tmlLoadView;	// IMP=0x0010000000019444
- (void)_tmlUnloadContext;	// IMP=0x00100000000193d1
- (void)_tmlEnsureContext:(CDUnknownBlockType)arg1;	// IMP=0x0010000000019130
@property(readonly, nonatomic) TMLContext *tmlContext;
@property(copy, nonatomic) NSDictionary *tmlObjects;
@property(readonly, nonatomic) NSString *tmlViewPath;
@property(copy, nonatomic) NSArray *gestureRecognizers;
@property(copy, nonatomic) NSArray *layoutGuides;
@property(copy, nonatomic) NSArray *constraints;
@property(copy, nonatomic) NSArray *subviews;
- (void)tmlTraitCollectionDidChange:(id)arg1;	// IMP=0x0010000000018914
- (void)tmlDidMoveToWindow;	// IMP=0x001000000001882b
@end

