//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AXBaseSettings, NSMutableArray;

__attribute__((visibility("hidden")))
@interface AXSettingsObjectDestructionHelper : NSObject
{
    void *_listenerAddress;	// 8 = 0x8
    NSMutableArray *_selectorKeys;	// 16 = 0x10
    AXBaseSettings *_settings;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000008671
- (void)dealloc;	// IMP=0x00000000000084c4
- (void)addSelectorKey:(SEL)arg1;	// IMP=0x0000000000008455
- (id)initWithListenerAddress:(void *)arg1 forSettings:(id)arg2;	// IMP=0x00000000000083d3

@end

