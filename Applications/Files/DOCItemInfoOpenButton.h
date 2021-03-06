//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSLayoutConstraint, UIButton;

@interface DOCItemInfoOpenButton
{
    UIButton *_openButton;	// 56 = 0x38
    UIButton *_downloadButton;	// 64 = 0x40
    NSLayoutConstraint *_progressViewHeightConstraint;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00200000000049b5
@property(nonatomic) __weak NSLayoutConstraint *progressViewHeightConstraint; // @synthesize progressViewHeightConstraint=_progressViewHeightConstraint;
@property(nonatomic) __weak UIButton *downloadButton; // @synthesize downloadButton=_downloadButton;
@property(nonatomic) __weak UIButton *openButton; // @synthesize openButton=_openButton;
- (void)updateProgressViewSizeConstraints;	// IMP=0x00100000000047bd
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0010000000004697
- (void)userDidTapOpenButton;	// IMP=0x0010000000004499
- (void)updateForState;	// IMP=0x00100000000042b4
- (void)setItemCanBeOpened:(_Bool)arg1;	// IMP=0x0010000000004232
- (void)setItem:(id)arg1;	// IMP=0x00100000000041b0
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x00100000000040d9
- (void)commonInit;	// IMP=0x00100000000038b4

@end

