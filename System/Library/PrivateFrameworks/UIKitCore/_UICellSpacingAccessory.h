//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _UICellSpacingAccessory
{
    struct CGSize _size;	// 40 = 0x28
}

+ (id)accessoryWithIdentifier:(id)arg1 size:(struct CGSize)arg2;	// IMP=0x006000000100e1ed
@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
- (id)view;	// IMP=0x000000000100e2f7
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000100e2df
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000100e251

@end
