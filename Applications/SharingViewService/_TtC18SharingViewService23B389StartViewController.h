//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE;

@interface _TtC18SharingViewService23B389StartViewController
{
    MISSING_TYPE *pairPressed_;	// 8 = 0x8
    MISSING_TYPE *player;	// 16 = 0x10
    MISSING_TYPE *mainBtn;	// 24 = 0x18
    MISSING_TYPE *playerYConstraint;	// 32 = 0x20
    MISSING_TYPE *topInfoLbl;	// 40 = 0x28
    MISSING_TYPE *bottomInfoLbl;	// 48 = 0x30
    MISSING_TYPE *bubbleMonitor;	// 56 = 0x38
    MISSING_TYPE *viewWillAppearTimestamp;	// 64 = 0x40
    MISSING_TYPE *bypassBatteryTooLowCheck;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x002000000006a1a0
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000006a120
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0010000000069fb0
- (id)initWithMainController:(id)arg1;	// IMP=0x0010000000069de0
- (void)handleTapOutside;	// IMP=0x0010000000069a10
- (void)continuePressed;	// IMP=0x00100000000698c0
- (void)dismissPressed;	// IMP=0x00100000000695d0
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0010000000069590
- (void)transitionOutOfMulti;	// IMP=0x00100000000694b0
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0010000000068060
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0010000000067df0
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x001000000006a240

@end

