//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UIView, _MKUILabel;

__attribute__((visibility("hidden")))
@interface MKThirdPartyPhotoBigAttributionView
{
    _MKUILabel *_firstLineLabel;	// 8 = 0x8
    _MKUILabel *_secondLineLabel;	// 16 = 0x10
    UIView *_labelsView;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000984f4
- (void)didEndAnimatingActivityIndicatorView;	// IMP=0x00000000000984cf
- (void)willStartAnimatingActivityIndicatorView;	// IMP=0x00000000000984af
- (void)didUpdateAttributionViewType;	// IMP=0x000000000009849d
- (void)didUpdateMapItem;	// IMP=0x000000000009848b
- (id)secondLineLabelFont;	// IMP=0x0000000000098438
- (id)firstLineLabelFont;	// IMP=0x00000000000983da
- (void)updateInfoAttributionString;	// IMP=0x0000000000097fa6
- (id)initWithContext:(long long)arg1;	// IMP=0x0000000000097480

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
