//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewHeaderFooterView.h>

@class NSLayoutConstraint, NSString, UITextView;
@protocol _SFTableLinkableFooterViewDelegate;

__attribute__((visibility("hidden")))
@interface _SFTableLinkableFooterView : UITableViewHeaderFooterView
{
    UITextView *_textView;	// 8 = 0x8
    NSLayoutConstraint *_textViewLeadingConstraint;	// 16 = 0x10
    NSLayoutConstraint *_textViewTrailingConstraint;	// 24 = 0x18
    NSString *_text;	// 32 = 0x20
    NSString *_linkPlaceholderString;	// 40 = 0x28
    NSString *_linkReplacementString;	// 48 = 0x30
    id <_SFTableLinkableFooterViewDelegate> _delegate;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000000b898b
@property(nonatomic) __weak id <_SFTableLinkableFooterViewDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;	// IMP=0x00000000000b891f
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000000b8823
- (void)_updateAttributedString;	// IMP=0x00000000000b847d
- (void)setText:(id)arg1 linkPlaceholderString:(id)arg2 linkReplacementString:(id)arg3;	// IMP=0x00000000000b83af
- (void)_configureSubviewsAndConstraints;	// IMP=0x00000000000b7f8b
- (id)initWithReuseIdentifier:(id)arg1;	// IMP=0x00000000000b7f2d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
