//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface ESDRoot
{
    NSMutableArray *mChildren;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000032feed
- (void)writeToWriter:(struct OcWriter *)arg1;	// IMP=0x000000000032fe16
- (void)addChild:(id)arg1;	// IMP=0x000000000032fd96
- (id)childAt:(unsigned long long)arg1;	// IMP=0x0000000000017eb9
- (unsigned long long)childCount;	// IMP=0x0000000000017e9c
- (void *)eshRoot;	// IMP=0x000000000000c88b
- (id)initFromReader:(struct OcReader *)arg1;	// IMP=0x00000000000db473
- (id)init;	// IMP=0x000000000000c48b
- (id)initWithEshObject:(struct EshObject *)arg1;	// IMP=0x000000000000c790
- (id)pbReferenceWithID:(unsigned int)arg1;	// IMP=0x0000000000017da3
- (id)initWithPbState:(id)arg1;	// IMP=0x000000000000c2d5

@end
