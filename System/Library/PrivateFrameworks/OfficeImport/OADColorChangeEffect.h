//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class OADColor;

__attribute__((visibility("hidden")))
@interface OADColorChangeEffect
{
    OADColor *mFromColor;	// 16 = 0x10
    OADColor *mToColor;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000030a62e
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000030a4ea
- (unsigned long long)hash;	// IMP=0x000000000030a477
- (void)setStyleColor:(id)arg1;	// IMP=0x000000000030a39d
- (void)setToColor:(id)arg1;	// IMP=0x000000000016060a
- (id)toColor;	// IMP=0x000000000030a388
- (void)setFromColor:(id)arg1;	// IMP=0x00000000001605f6
- (id)fromColor;	// IMP=0x000000000030a373
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000030a27e
- (id)init;	// IMP=0x00000000001605c2

@end

