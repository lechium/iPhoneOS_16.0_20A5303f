//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface _UIContentEffectManager : NSObject
{
    NSMutableDictionary *_effects;	// 8 = 0x8
}

+ (id)sharedManager;	// IMP=0x006000000111c370
- (void).cxx_destruct;	// IMP=0x000000000111cd62
@property(readonly, nonatomic) NSMutableDictionary *effects; // @synthesize effects=_effects;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;	// IMP=0x000000000111ccd2
- (id)objectForKeyedSubscript:(id)arg1;	// IMP=0x000000000111cc4f
- (void)_stopManagingEffect:(id)arg1;	// IMP=0x000000000111cb83
- (id)compatibleEffectForDescriptor:(id)arg1;	// IMP=0x000000000111c9a3
- (id)compatibleEffectForKey:(id)arg1 descriptor:(id)arg2 constructor:(CDUnknownBlockType)arg3;	// IMP=0x000000000111c3ef

@end

