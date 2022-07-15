//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKUIViewElement.h"

__attribute__((visibility("hidden")))
@interface SKUICardViewElement : SKUIViewElement
{
    BOOL _enabled;	// 8 = 0x8
}

- (_Bool)isEnabled;	// IMP=0x00000000002e1e47
- (long long)pageComponentType;	// IMP=0x00000000002e1e3c
- (void)enumerateChildrenUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000002e1d1d
- (id)applyUpdatesWithElement:(id)arg1;	// IMP=0x00000000002e1c92
@property(readonly, nonatomic, getter=isAdCard) _Bool adCard;
@property(readonly, nonatomic) long long cardType;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;	// IMP=0x00000000002e1a3a

@end
