//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, VUICircularProgress;

__attribute__((visibility("hidden")))
@interface VUITransactionButton
{
    _Bool _waitingForTransactionToStart;	// 8 = 0x8
    _Bool _monitorTransaction;	// 9 = 0x9
    NSString *_transactionID;	// 16 = 0x10
    VUICircularProgress *_progressIndicator;	// 24 = 0x18
    NSString *_textContentTitleBackup;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000002ab223
@property(copy, nonatomic) NSString *textContentTitleBackup; // @synthesize textContentTitleBackup=_textContentTitleBackup;
@property(retain, nonatomic) VUICircularProgress *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
@property(nonatomic) _Bool monitorTransaction; // @synthesize monitorTransaction=_monitorTransaction;
@property(nonatomic, getter=isWaitingForTransactionToStart) _Bool waitingForTransactionToStart; // @synthesize waitingForTransactionToStart=_waitingForTransactionToStart;
@property(copy, nonatomic) NSString *transactionID; // @synthesize transactionID=_transactionID;
- (void)_handleTransactionDidFinishNotification:(id)arg1;	// IMP=0x00000000002ab007
- (void)_handleTransactionDidStartNotification:(id)arg1;	// IMP=0x00000000002aaed5
- (void)_unregisterTransactionNotifications;	// IMP=0x00000000002aae29
- (void)_registerForTransactionNotification;	// IMP=0x00000000002aad6f
- (void)_startListeningForTransactionWithTransactionID:(id)arg1;	// IMP=0x00000000002aac3c
- (void)_addProgressIndicatorWithFrame:(struct CGRect)arg1;	// IMP=0x00000000002aab04
- (void)_updateProgressIndicatorTintColor:(id)arg1;	// IMP=0x00000000002aaa2f
- (void)_buttonTapped:(id)arg1 eventName:(id)arg2;	// IMP=0x00000000002aa8b3
- (void)_layoutProgressIndicatorIfNeeded;	// IMP=0x00000000002aa627
- (id)_carouselView;	// IMP=0x00000000002aa54e
- (void)vui_traitCollectionDidChange:(id)arg1;	// IMP=0x00000000002aa2c2
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00000000002aa1cd
- (struct CGSize)vui_layoutSubviews:(struct CGSize)arg1 computationOnly:(_Bool)arg2;	// IMP=0x00000000002aa0f0
- (void)dealloc;	// IMP=0x00000000002aa061
- (id)initWithType:(unsigned long long)arg1 interfaceStyle:(unsigned long long)arg2;	// IMP=0x00000000002a9f30

@end
