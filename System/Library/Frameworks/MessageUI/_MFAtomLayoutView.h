//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@protocol MFAtomTextViewAtomLayout;

__attribute__((visibility("hidden")))
@interface _MFAtomLayoutView : UIView
{
    UIView<MFAtomTextViewAtomLayout> *_delegateView;	// 8 = 0x8
}

+ (id)layoutViewWithDelegateView:(id)arg1;	// IMP=0x0060000000015f37
- (void).cxx_destruct;	// IMP=0x00000000000168a5
@property(retain, nonatomic) UIView<MFAtomTextViewAtomLayout> *delegateView; // @synthesize delegateView=_delegateView;
- (struct CGRect)boundsForTextContainer:(id)arg1 proposedLineFragment:(struct CGRect)arg2 glyphPosition:(struct CGPoint)arg3 characterIndex:(unsigned long long)arg4;	// IMP=0x00000000000166d9
- (struct CGRect)selectionBounds;	// IMP=0x0000000000016661
- (void)layoutSubviews;	// IMP=0x0000000000016555
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000000164d2
- (id)viewForLastBaselineLayout;	// IMP=0x00000000000164b5
@property(readonly, nonatomic) struct UIEdgeInsets atomInsets;
- (void)setMaskBounds:(struct CGRect)arg1;	// IMP=0x0000000000016286
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x0000000000016271
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x00000000000161ff
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x00000000000161aa
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001613b
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000160ec
- (id)init;	// IMP=0x000000000001609d
- (id)initWithDelegateView:(id)arg1;	// IMP=0x0000000000015f94

@end

