//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AutoLayoutScrollView, MeCardShortcutView, ModalCardHeaderView, NSLayoutConstraint, OverridenBackgroundColorButton, ShortcutEditSession, UIButton, UILabel, UIView;
@protocol ShortcutEditSessionController;

@interface MeCardShortcutViewController
{
    ModalCardHeaderView *_modalHeaderView;	// 8 = 0x8
    ShortcutEditSession *_shortcutEditSession;	// 16 = 0x10
    AutoLayoutScrollView *_scrollView;	// 24 = 0x18
    UIView *_meCardContainerView;	// 32 = 0x20
    UILabel *_titleLabel;	// 40 = 0x28
    UILabel *_subtitleLabel;	// 48 = 0x30
    OverridenBackgroundColorButton *_contactCardButton;	// 56 = 0x38
    NSLayoutConstraint *_contactCardButtonHeightConstraint;	// 64 = 0x40
    MeCardShortcutView *_meCardAvatar;	// 72 = 0x48
    id <ShortcutEditSessionController> _sessionController;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x002000000080ea78
@property(nonatomic) __weak id <ShortcutEditSessionController> sessionController; // @synthesize sessionController=_sessionController;
- (void)_doneAction:(id)arg1;	// IMP=0x001000000080e9a6
- (void)_close;	// IMP=0x001000000080e95a
- (void)_updateFonts;	// IMP=0x001000000080e710
- (void)_contentSizeCategoryDidChange:(id)arg1;	// IMP=0x001000000080e6fe
- (void)_buildContent;	// IMP=0x001000000080dcc9
- (_Bool)_isMapUserShortcut;	// IMP=0x001000000080dc80
- (id)shortcut;	// IMP=0x001000000080dc63
- (void)updateContact;	// IMP=0x001000000080dbef
@property(readonly, nonatomic) UIButton *contactCardButton;
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x001000000080db41
- (void)_updatePreferredContentSize;	// IMP=0x001000000080da6f
- (void)viewDidLoad;	// IMP=0x001000000080cab5
- (id)initWithShortcutEditSession:(id)arg1;	// IMP=0x001000000080c9be

@end
