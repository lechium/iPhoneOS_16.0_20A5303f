//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString, SKUICommentPostBarTextField, UIButton, UILabel;
@protocol SKUICommentDelegate;

__attribute__((visibility("hidden")))
@interface SKUICommentPostBarView : UIView
{
    UIButton *_postButton;	// 8 = 0x8
    SKUICommentPostBarTextField *_postTextField;	// 16 = 0x10
    NSString *_commenter;	// 24 = 0x18
    UILabel *_asLabel;	// 32 = 0x20
    UIButton *_asNameButton;	// 40 = 0x28
    NSString *_asText;	// 48 = 0x30
    id <SKUICommentDelegate> _delegate;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000221d58
@property(nonatomic) __weak id <SKUICommentDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *commenter; // @synthesize commenter=_commenter;
- (void)_postComment;	// IMP=0x0000000000221c00
- (id)_asLabel;	// IMP=0x0000000000221adb
- (id)_asNameButton;	// IMP=0x0000000000221984
- (void)tintColorDidChange;	// IMP=0x00000000002218b5
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000221892
- (_Bool)resignFirstResponder;	// IMP=0x0000000000221841
- (void)layoutSubviews;	// IMP=0x00000000002210d7
- (_Bool)canBecomeFirstResponder;	// IMP=0x00000000002210ba
- (_Bool)becomeFirstResponder;	// IMP=0x000000000022109d
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;	// IMP=0x0000000000220f74
- (void)setPostButtonVisible:(_Bool)arg1;	// IMP=0x0000000000220f35
- (void)setText:(id)arg1;	// IMP=0x0000000000220e68
- (void)setPostButtonText:(id)arg1;	// IMP=0x0000000000220e49
- (void)setPlaceholderText:(id)arg1;	// IMP=0x0000000000220e2c
- (void)setAsText:(id)arg1;	// IMP=0x0000000000220d86
- (void)_changeCommenter:(id)arg1;	// IMP=0x0000000000220ca5
- (void)_post:(id)arg1;	// IMP=0x0000000000220c77
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000220829

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

