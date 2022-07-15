//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSSet, TIImageCacheClient, _UIActionWhenIdle;

__attribute__((visibility("hidden")))
@interface UIKeyboardCache : NSObject
{
    TIImageCacheClient *_store;	// 8 = 0x8
    NSSet *_layouts;	// 16 = 0x10
    NSMutableSet *_activeRenderers;	// 24 = 0x18
    _UIActionWhenIdle *_idleAction;	// 32 = 0x20
}

+ (_Bool)enabled;	// IMP=0x0060000000a62c42
+ (id)sharedInstance;	// IMP=0x0060000000a62c05
- (void).cxx_destruct;	// IMP=0x0000000000a6566e
@property(retain, nonatomic) _UIActionWhenIdle *idleAction; // @synthesize idleAction=_idleAction;
- (void)decrementExpectedRender:(id)arg1;	// IMP=0x0000000000a65573
- (void)incrementExpectedRender:(id)arg1;	// IMP=0x0000000000a654f5
- (void)updateCacheForInputModes:(id)arg1;	// IMP=0x0000000000a6537a
- (id)uniqueLayoutsFromInputModes:(id)arg1;	// IMP=0x0000000000a651c9
- (void)_didIdleAndShouldWait;	// IMP=0x0000000000a6513e
- (void)_didIdle;	// IMP=0x0000000000a6510d
- (id)displayImagesForView:(id)arg1 fromLayout:(id)arg2 imageFlags:(id)arg3;	// IMP=0x0000000000a63a05
- (void)drawCachedImage:(id)arg1 alpha:(double)arg2 inContext:(struct CGContext *)arg3;	// IMP=0x0000000000a638a5
- (struct CGImage *)cachedCompositeImageForCacheKeys:(id)arg1 fromLayout:(id)arg2 opacities:(id)arg3;	// IMP=0x0000000000a6312a
- (struct CGImage *)cachedImageForKey:(id)arg1 fromLayout:(id)arg2;	// IMP=0x0000000000a63065
- (void)purge;	// IMP=0x0000000000a6304f
- (void)clearNonPersistentCache;	// IMP=0x0000000000a63036
- (void)commitTransaction;	// IMP=0x0000000000a6301d
- (void)dealloc;	// IMP=0x0000000000a62f92
- (id)init;	// IMP=0x0000000000a62d56

@end
