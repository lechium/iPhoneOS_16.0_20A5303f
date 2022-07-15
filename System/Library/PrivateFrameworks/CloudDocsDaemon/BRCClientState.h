//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BRCClientState : NSObject
{
    NSMutableDictionary *_dict;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000002cf2bb
- (id)description;	// IMP=0x00000000002cf233
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;	// IMP=0x00000000002cf221
- (id)objectForKeyedSubscript:(id)arg1;	// IMP=0x00000000002cf20f
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000002cf12e
- (id)objectForKey:(id)arg1;	// IMP=0x00000000002cefed
- (id)dictionary;	// IMP=0x00000000002ceed5
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000002cedde
- (id)init;	// IMP=0x00000000002cedc5

@end
