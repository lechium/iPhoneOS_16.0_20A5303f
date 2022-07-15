//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SCNManipulableItem.h"

__attribute__((visibility("hidden")))
@interface SCNNodeManipulableItem : SCNManipulableItem
{
}

+ (void)removeItemsFromScene:(id)arg1;	// IMP=0x0080000000117ec0
+ (void)addItems:(id)arg1 toScene:(id)arg2;	// IMP=0x0080000000117d49
+ (id)nodeManipulatorItemWithNode:(id)arg1 screenSize:(double)arg2;	// IMP=0x0080000000117965
- (void)validateClone;	// IMP=0x0000000000117fed
- (id)cloneForManipulators;	// IMP=0x0000000000117bc2
- (id)parentItem;	// IMP=0x0000000000117b2c
- (void)setPosition:(struct SCNVector3)arg1;	// IMP=0x0000000000117aec
- (struct SCNVector3)scale;	// IMP=0x0000000000117ac1
- (struct SCNMatrix4)worldTransform;	// IMP=0x0000000000117a70
- (void)setWorldTransform:(struct SCNMatrix4)arg1;	// IMP=0x0000000000117a45
- (void)setTransform:(struct SCNMatrix4)arg1;	// IMP=0x0000000000117a1a
- (struct SCNMatrix4)transform;	// IMP=0x00000000001179c9
- (_Bool)isNodeManipulator;	// IMP=0x00000000001179c1

@end
