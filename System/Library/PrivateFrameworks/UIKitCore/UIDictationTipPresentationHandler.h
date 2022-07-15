//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface UIDictationTipPresentationHandler : NSObject
{
    _Bool _isShowingTip;	// 8 = 0x8
    _Bool _tipPresentedInCurrentDictationSession;	// 9 = 0x9
    long long _dictationTipSignaled;	// 16 = 0x10
}

@property(nonatomic) _Bool tipPresentedInCurrentDictationSession; // @synthesize tipPresentedInCurrentDictationSession=_tipPresentedInCurrentDictationSession;
@property(nonatomic) long long dictationTipSignaled; // @synthesize dictationTipSignaled=_dictationTipSignaled;
@property(nonatomic) _Bool isShowingTip; // @synthesize isShowingTip=_isShowingTip;
- (_Bool)dictationModelessInputTipShown;	// IMP=0x00000000009f720b
- (_Bool)dictationStopTipShown;	// IMP=0x00000000009f71b6
- (_Bool)dictationSelectionTipShown;	// IMP=0x00000000009f7161
- (_Bool)dictationEmojiTipShown;	// IMP=0x00000000009f710c
- (_Bool)dictationInsertionTipShown;	// IMP=0x00000000009f70b7
- (_Bool)dictationDeletionTipShown;	// IMP=0x00000000009f7062
- (_Bool)dictationReplacementTipShown;	// IMP=0x00000000009f700d
- (_Bool)dictationCommandTipsEnabled;	// IMP=0x00000000009f6fb8
- (_Bool)tipShownLastDay;	// IMP=0x00000000009f6e93
- (void)resetDictationTipSignal;	// IMP=0x00000000009f6e85
- (void)resetHandler;	// IMP=0x00000000009f6e55
- (void)signalTipPresentedInCurrentDictationSession;	// IMP=0x00000000009f6e4b
- (long long)getDictationTipSignaled;	// IMP=0x00000000009f6e41
- (_Bool)shouldSignalDictationTip:(long long)arg1;	// IMP=0x00000000009f6cb9
- (_Bool)dictationTipShown:(long long)arg1;	// IMP=0x00000000009f6c96
- (id)init;	// IMP=0x00000000009f6c46

@end
