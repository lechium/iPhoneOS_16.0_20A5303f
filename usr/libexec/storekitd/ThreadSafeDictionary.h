//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, UnfairLock;

@interface ThreadSafeDictionary : NSObject
{
    NSMutableDictionary *_dictionary;	// 8 = 0x8
    UnfairLock *_lock;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000082680
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;	// IMP=0x001000000008259e
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x00100000000824bc
- (id)optionalForKey:(id)arg1;	// IMP=0x0010000000082304
- (id)objectForKeyedSubscript:(id)arg1;	// IMP=0x00100000000821ad
- (id)objectForKey:(id)arg1;	// IMP=0x0010000000082031
- (id)init;	// IMP=0x0010000000081fbc

@end

