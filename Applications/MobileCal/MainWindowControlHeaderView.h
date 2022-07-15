//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class MISSING_TYPE, NSArray, UIBarButtonItem, UIToolbar;
@protocol MainWindowControlHeaderDelegate;

@interface MainWindowControlHeaderView : UIView
{
    UIToolbar *_toolbar;	// 8 = 0x8
    UIBarButtonItem *_calendarBarButton;	// 16 = 0x10
    UIBarButtonItem *_badgedCalendarBarButton;	// 24 = 0x18
    UIBarButtonItem *_inboxBarButton;	// 32 = 0x20
    UIBarButtonItem *_badgedInboxBarButton;	// 40 = 0x28
    UIBarButtonItem *_listViewBarButton;	// 48 = 0x30
    UIBarButtonItem *_newEventBarButton;	// 56 = 0x38
    NSArray *_spacers;	// 64 = 0x40
    unsigned long long _inboxCount;	// 72 = 0x48
    _Bool _hasError;	// 80 = 0x50
    MISSING_TYPE *_calendarSelected;	// 81 = 0x51
    _Bool _inboxSelected;	// 82 = 0x52
    id <MainWindowControlHeaderDelegate> _delegate;	// 88 = 0x58
}

+ (double)spacerWidthForWindowWidth:(double)arg1;	// IMP=0x0040000000096577
+ (id)spacer;	// IMP=0x0010000000096525
+ (id)badgedCalendarIcon:(_Bool)arg1;	// IMP=0x0010000000095fa1
+ (id)inboxImageForCount:(unsigned long long)arg1 selected:(_Bool)arg2;	// IMP=0x00100000000954dc
+ (struct CGImage *)maskImageForImage:(id)arg1 atPoint:(struct CGPoint)arg2 withSize:(struct CGSize)arg3;	// IMP=0x0010000000095242
+ (struct CGImage *)imageForString:(id)arg1 atRect:(struct CGRect)arg2 withSize:(struct CGSize)arg3;	// IMP=0x0010000000094fac
- (void).cxx_destruct;	// IMP=0x0020000000097b2a
@property(nonatomic) id <MainWindowControlHeaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)newEventButtonTapped:(id)arg1;	// IMP=0x0010000000097aeb
- (void)listButtonTapped;	// IMP=0x0010000000097ace
- (void)inboxButtonTapped;	// IMP=0x0010000000097ab1
- (void)calendarButtonTapped;	// IMP=0x0010000000097a94
- (id)customBadgedButtonWithImage:(id)arg1 action:(SEL)arg2;	// IMP=0x0010000000097609
- (void)updateErrorState:(_Bool)arg1;	// IMP=0x001000000009747b
- (void)updateInboxCount:(unsigned long long)arg1;	// IMP=0x001000000009723a
- (void)updateToolbarItems;	// IMP=0x00100000000970b9
- (void)updateButtonStateForSidebar:(unsigned long long)arg1;	// IMP=0x0010000000096bf3
- (void)layoutForWidth:(double)arg1;	// IMP=0x0010000000096a9f
- (id)newEventBarButtonItem;	// IMP=0x0010000000096a89
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00100000000965b4

@end
