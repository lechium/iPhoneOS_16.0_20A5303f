//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UILabel;

@interface CarFocusGuideDebugView
{
    unsigned long long _direction;	// 8 = 0x8
    UILabel *_directionLabel;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000066036c
- (void)setEnabled:(_Bool)arg1;	// IMP=0x001000000066032b
- (id)_colorForDirection:(unsigned long long)arg1;	// IMP=0x00100000006602f1
- (void)_updateColors;	// IMP=0x0010000000660174
- (id)initWithDirection:(unsigned long long)arg1;	// IMP=0x001000000065fe4c

@end

