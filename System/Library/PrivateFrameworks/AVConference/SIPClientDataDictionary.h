//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface SIPClientDataDictionary : NSObject
{
    NSMutableDictionary *allCalls;	// 8 = 0x8
}

- (void)setObject:(id)arg1 forKey:(id)arg2 forP2PID:(unsigned int)arg3;	// IMP=0x0000000000379494
- (id)copyObjectForKey:(id)arg1 p2pID:(unsigned int)arg2;	// IMP=0x00000000003793f7
- (void)dealloc;	// IMP=0x00000000003792fc
- (id)init;	// IMP=0x000000000037927b

@end
