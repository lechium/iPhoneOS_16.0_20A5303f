//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class STKCallSetupSessionAction;

@interface STKSetupCallAlertViewController
{
}

- (id)alertText;	// IMP=0x00200000000095c5
- (void)dial:(id)arg1;	// IMP=0x00100000000094f2
- (void)dismiss:(id)arg1;	// IMP=0x0010000000009495
- (id)newBottomBar;	// IMP=0x0010000000009006
- (id)newTopBarForInstance;	// IMP=0x0010000000008ffe
- (_Bool)validateAction:(id)arg1;	// IMP=0x0010000000008fb3

// Remaining properties
@property(readonly, nonatomic) STKCallSetupSessionAction *sessionAction; // @dynamic sessionAction;

@end
