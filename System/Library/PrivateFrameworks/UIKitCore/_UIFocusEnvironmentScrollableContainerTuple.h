//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol UIFocusEnvironment, UIFocusItemScrollableContainer;

__attribute__((visibility("hidden")))
@interface _UIFocusEnvironmentScrollableContainerTuple : NSObject
{
    id <UIFocusEnvironment> _owningEnvironment;	// 8 = 0x8
    id <UIFocusItemScrollableContainer> _scrollableContainer;	// 16 = 0x10
}

+ (id)tupleWithScrollView:(id)arg1;	// IMP=0x00600000006e2ffe
+ (id)tupleWithOwningEnvironment:(id)arg1 scrollableContainer:(id)arg2;	// IMP=0x00600000006e2f92
- (void).cxx_destruct;	// IMP=0x00000000006e35ef
@property(readonly, nonatomic) id <UIFocusItemScrollableContainer> scrollableContainer; // @synthesize scrollableContainer=_scrollableContainer;
@property(readonly, nonatomic) id <UIFocusEnvironment> owningEnvironment; // @synthesize owningEnvironment=_owningEnvironment;
- (id)description;	// IMP=0x00000000006e355e
- (unsigned long long)hash;	// IMP=0x00000000006e34d1
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000006e304a
- (id)initWithOwningEnvironment:(id)arg1 scrollableContainer:(id)arg2;	// IMP=0x00000000006e2d6c

@end
