//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSLayoutConstraint, NSMutableArray, NSNumberFormatter, UIView, _TtC12CoreAudioKit13AUKnobControl, _TtC12CoreAudioKit18AULimiterGraphView, _TtC12CoreAudioKit21AULimiterControlsView, _TtC12CoreAudioKit21CAAdjustingHeaderView;

__attribute__((visibility("hidden")))
@interface AUPeakLimiterViewController
{
    _TtC12CoreAudioKit21CAAdjustingHeaderView *headerView;	// 80 = 0x50
    _TtC12CoreAudioKit18AULimiterGraphView *graphView;	// 88 = 0x58
    _TtC12CoreAudioKit21AULimiterControlsView *controlsView;	// 96 = 0x60
    UIView *viewContainer;	// 104 = 0x68
    _TtC12CoreAudioKit13AUKnobControl *attackKnob;	// 112 = 0x70
    _TtC12CoreAudioKit13AUKnobControl *releaseKnob;	// 120 = 0x78
    _TtC12CoreAudioKit13AUKnobControl *gainKnob;	// 128 = 0x80
    NSNumberFormatter *wholeNumberFormatter;	// 136 = 0x88
    NSMutableArray *permanentConstraints;	// 144 = 0x90
    NSMutableArray *temporaryConstraints;	// 152 = 0x98
    struct CGSize previousSize;	// 160 = 0xa0
    long long displayMode;	// 176 = 0xb0
    NSLayoutConstraint *attackSpacer;	// 184 = 0xb8
    NSLayoutConstraint *gainSpacer;	// 192 = 0xc0
    unsigned int loopIndex;	// 200 = 0xc8
    float maxPeak;	// 204 = 0xcc
}

- (void).cxx_destruct;	// IMP=0x000000000000e37f
- (void)priv_eventListener:(void *)arg1 event:(const struct AudioUnitEvent *)arg2 value:(float)arg3;	// IMP=0x000000000000e2a0
- (void)setWithParameter:(unsigned int)arg1 value:(float)arg2;	// IMP=0x000000000000e04d
- (id)unitLabelFor:(unsigned int)arg1;	// IMP=0x000000000000e005
- (id)shortNameFor:(unsigned int)arg1;	// IMP=0x000000000000dff3
- (id)nameFor:(unsigned int)arg1;	// IMP=0x000000000000dfab
- (void)viewWillLayoutSubviews;	// IMP=0x000000000000de0c
- (void)knobReleased:(id)arg1;	// IMP=0x000000000000ddee
- (void)knobTouched:(id)arg1;	// IMP=0x000000000000db47
- (void)knobValueChanged:(id)arg1;	// IMP=0x000000000000d9b0
- (void)doRealtimeDrawing;	// IMP=0x000000000000d857
- (float)limitAmount:(unsigned int)arg1;	// IMP=0x000000000000d765
- (void)registerParameters;	// IMP=0x000000000000d712
- (void)prepareData;	// IMP=0x000000000000d5db
- (void)configureViewFor:(id)arg1;	// IMP=0x000000000000d2ee
- (void)setupConstraints;	// IMP=0x000000000000bd1b
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000000ba4b
- (void)cleanup;	// IMP=0x000000000000b97d
- (void)viewDidLoad;	// IMP=0x000000000000abf7

@end

