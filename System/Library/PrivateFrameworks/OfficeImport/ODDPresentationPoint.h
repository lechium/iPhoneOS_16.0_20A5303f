//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface ODDPresentationPoint
{
    ODDPresentationPoint *mParent;	// 40 = 0x28
    NSMutableArray *mChildren;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000003345fe
- (void)addChild:(id)arg1 order:(unsigned long long)arg2;	// IMP=0x00000000001e73cc
- (id)children;	// IMP=0x00000000003345e9
- (id)parent;	// IMP=0x00000000003345d0
- (void)setType:(int)arg1;	// IMP=0x00000000001e66f3

@end

