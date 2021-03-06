//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _UIStatusBarDisplayItemRelation : NSObject
{
}

+ (id)allRelationWithRelations:(id)arg1;	// IMP=0x0060000000f86a88
+ (id)anyRelationWithRelations:(id)arg1;	// IMP=0x0060000000f86a32
+ (id)requirementWithDisplayItemState:(id)arg1 placement:(id)arg2;	// IMP=0x0060000000f869f1
+ (id)exclusionWithDisplayItemState:(id)arg1 placement:(id)arg2;	// IMP=0x0060000000f86965
- (id)description;	// IMP=0x0000000000f86c2b
- (id)_ui_descriptionBuilder;	// IMP=0x0000000000f86b11
- (id)type;	// IMP=0x0000000000f86b09
@property(readonly, nonatomic) NSArray *itemStates;
@property(readonly, nonatomic, getter=isFulfilled) _Bool fulfilled;

@end

