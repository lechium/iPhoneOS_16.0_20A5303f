//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CKTwoButtonInlineNotificationView, NSString;
@protocol CKUnexpectedlyLoggedOutNotificationViewDelegate;

__attribute__((visibility("hidden")))
@interface CKUnexpectedlyLoggedOutNotificationView : UIView
{
    id <CKUnexpectedlyLoggedOutNotificationViewDelegate> _delegate;	// 8 = 0x8
    CKTwoButtonInlineNotificationView *_inlineNotificationView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000aa32a
@property(retain, nonatomic) CKTwoButtonInlineNotificationView *inlineNotificationView; // @synthesize inlineNotificationView=_inlineNotificationView;
@property(nonatomic) __weak id <CKUnexpectedlyLoggedOutNotificationViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setVisible:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000aa25b
@property(nonatomic) _Bool visible; // @dynamic visible;
- (void)inlineNotificationView:(id)arg1 didChangeRequestedHeight:(double)arg2;	// IMP=0x00000000000aa175
- (void)inlineNotificationViewDidReceiveRightButtonTap:(id)arg1;	// IMP=0x00000000000aa107
- (void)inlineNotificationViewDidReceiveLeftButtonTap:(id)arg1;	// IMP=0x00000000000aa036
- (void)layoutSubviews;	// IMP=0x00000000000a9fbe
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000000a9f50
- (void)dealloc;	// IMP=0x00000000000a9f05
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000a9b29

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
