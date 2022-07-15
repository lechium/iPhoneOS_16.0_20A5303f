//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable, NSMutableDictionary;

@interface ContextManager : NSObject
{
    NSMapTable *_contextMap;	// 8 = 0x8
    NSMapTable *_contextProxyMap;	// 16 = 0x10
    NSMapTable *_contextByExternalizedContextMap;	// 24 = 0x18
    NSMutableDictionary *_modules;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x004000000000f106
- (void).cxx_destruct;	// IMP=0x002000000000fbff
- (id)loadModule:(long long)arg1 error:(id *)arg2;	// IMP=0x001000000000f771
- (void)_logClass:(Class)arg1 tag:(id)arg2 level:(int)arg3;	// IMP=0x001000000000f525
- (void)_logClass:(Class)arg1 tag:(id)arg2;	// IMP=0x001000000000f48e
- (id)_pathForModule:(long long)arg1 error:(id *)arg2;	// IMP=0x001000000000f34b
- (void)registerExternalizedContext:(id)arg1 forContext:(id)arg2;	// IMP=0x001000000000f32c
- (void)addContext:(id)arg1;	// IMP=0x001000000000f2bf
- (void)addContextProxy:(id)arg1;	// IMP=0x001000000000f25f
- (id)findContextForExternalizedContext:(id)arg1;	// IMP=0x001000000000f249
- (id)contextForUUID:(id)arg1;	// IMP=0x001000000000f233
- (id)init;	// IMP=0x001000000000f15b

@end
