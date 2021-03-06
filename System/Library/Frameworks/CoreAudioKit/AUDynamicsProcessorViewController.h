//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSLayoutConstraint, UILabel, UIView, _TtC12CoreAudioKit13AUKnobControl, _TtC12CoreAudioKit17CACompressionView, _TtC12CoreAudioKit18AULabeledMeterView, _TtC12CoreAudioKit21CAAdjustingHeaderView;

__attribute__((visibility("hidden")))
@interface AUDynamicsProcessorViewController
{
    _TtC12CoreAudioKit21CAAdjustingHeaderView *headerView;	// 80 = 0x50
    UIView *viewContainer;	// 88 = 0x58
    _TtC12CoreAudioKit17CACompressionView *graphView;	// 96 = 0x60
    UIView *edgeControlSection;	// 104 = 0x68
    UILabel *inputLabel;	// 112 = 0x70
    UILabel *outputLabel;	// 120 = 0x78
    UILabel *meterLabel;	// 128 = 0x80
    _TtC12CoreAudioKit18AULabeledMeterView *meter;	// 136 = 0x88
    _TtC12CoreAudioKit13AUKnobControl *attackKnob;	// 144 = 0x90
    _TtC12CoreAudioKit13AUKnobControl *releaseKnob;	// 152 = 0x98
    _TtC12CoreAudioKit13AUKnobControl *gainKnob;	// 160 = 0xa0
    struct CGRect curveFrame;	// 168 = 0xa8
    struct CGSize previousSize;	// 200 = 0xc8
    NSLayoutConstraint *rightWidthConstraint;	// 216 = 0xd8
    struct AudioUnitFrequencyResponseBin *_frequencyData;	// 224 = 0xe0
}

- (void).cxx_destruct;	// IMP=0x000000000001d187
@property struct AudioUnitFrequencyResponseBin *frequencyData; // @synthesize frequencyData=_frequencyData;
- (void)priv_eventListener:(void *)arg1 event:(const struct AudioUnitEvent *)arg2 value:(float)arg3;	// IMP=0x000000000001d06f
- (void)viewDidLayoutSubviews;	// IMP=0x000000000001d000
- (id)colorWithParameter:(unsigned int)arg1;	// IMP=0x000000000001cdd9
- (id)multiply:(id)arg1 multiplier:(double)arg2;	// IMP=0x000000000001cd1e
- (id)add:(id)arg1 to:(id)arg2;	// IMP=0x000000000001cbf2
- (void)setWithParameter:(unsigned int)arg1 value:(float)arg2;	// IMP=0x000000000001c9a7
- (id)unitLabelFor:(unsigned int)arg1;	// IMP=0x000000000001c930
- (id)shortNameFor:(unsigned int)arg1;	// IMP=0x000000000001c854
- (id)nameFor:(unsigned int)arg1;	// IMP=0x000000000001c777
- (void)updateCurve:(_Bool)arg1;	// IMP=0x000000000001c712
- (struct AudioUnitFrequencyResponseBin *)prepareDataForDrawing:(struct AudioUnitFrequencyResponseBin *)arg1;	// IMP=0x000000000001c4e9
- (void)knobReleased:(id)arg1;	// IMP=0x000000000001c4a1
- (void)knobTouched:(id)arg1;	// IMP=0x000000000001c214
- (void)knobValueChanged:(id)arg1;	// IMP=0x000000000001c0bf
- (void)graphControlTouched:(id)arg1;	// IMP=0x000000000001bc58
- (void)doRealtimeDrawing;	// IMP=0x000000000001bbd6
- (void)auParameterValueChanged:(id)arg1;	// IMP=0x000000000001b8bf
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000001b514
- (void)registerParameters;	// IMP=0x000000000001b4c1
- (void)prepareData;	// IMP=0x000000000001b14a
- (void)dealloc;	// IMP=0x000000000001b109
- (void)cleanup;	// IMP=0x000000000001b03b
- (void)addConstraints;	// IMP=0x00000000000199d9
- (void)viewDidLoad;	// IMP=0x000000000001848c

@end

