//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SQLitePredicate : NSObject
{
}

- (_Bool)isEqual:(id)arg1;	// IMP=0x00400000000831f2
- (unsigned long long)hash;	// IMP=0x00100000000831d8
- (id)SQLJoinClausesForEntityClass:(Class)arg1;	// IMP=0x00100000000831d0
- (id)SQLForEntityClass:(Class)arg1;	// IMP=0x00100000000831c8
- (void)bindToStatement:(struct sqlite3_stmt *)arg1 bindingIndex:(inout int *)arg2;	// IMP=0x00100000000831c2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000831b7

@end

