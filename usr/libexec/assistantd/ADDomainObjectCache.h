//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface ADDomainObjectCache : NSObject
{
    NSMutableDictionary *_cacheEntriesByAceKey;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000eb213
- (void)reset;	// IMP=0x00100000000eb1fd
- (id)oldIdForKey:(id)arg1;	// IMP=0x00100000000eb1a9
- (void)setDomainObject:(id)arg1 forKey:(id)arg2;	// IMP=0x00100000000eb192
- (void)setDomainObject:(id)arg1 withOldId:(id)arg2 forKey:(id)arg3;	// IMP=0x00100000000eb08a
- (id)domainObjectForKey:(id)arg1;	// IMP=0x00100000000eb036
- (id)init;	// IMP=0x00100000000eafe0

@end

