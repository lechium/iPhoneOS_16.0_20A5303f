//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface ODICycle : NSObject
{
}

+ (_Bool)mapIdentifier:(id)arg1 state:(id)arg2;	// IMP=0x008000000033e0b4
+ (_Bool)map2NodeWithState:(id)arg1;	// IMP=0x008000000033e8cb
+ (_Bool)map1NodeWithState:(id)arg1;	// IMP=0x008000000033e8c3
+ (void)mapTransition:(id)arg1 index:(unsigned int)arg2 state:(id)arg3;	// IMP=0x008000000033e8bd
+ (void)mapNode:(id)arg1 index:(unsigned int)arg2 state:(id)arg3;	// IMP=0x008000000033e8b7
+ (struct CGRect)mapGSpaceWithState:(id)arg1;	// IMP=0x008000000033e899
+ (struct CGRect)nodeBoundsWithIndex:(unsigned int)arg1 state:(id)arg2;	// IMP=0x008000000033e7ac
+ (struct CGRect)boundingBoxWithIsTight:(_Bool)arg1 state:(id)arg2;	// IMP=0x008000000033e682
+ (struct CGSize)nodeSizeWithState:(id)arg1;	// IMP=0x008000000033e66c
+ (unsigned long long)nodeCountWithState:(id)arg1;	// IMP=0x008000000033e5a0
+ (void)mapWithState:(id)arg1;	// IMP=0x008000000033e2fb

@end
