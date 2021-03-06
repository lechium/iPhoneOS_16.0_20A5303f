//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSIndexSet.h>

@class NSString;

@interface NSIndexSet (EDServerMessagePersistence)
@property(readonly, nonatomic) NSString *ed_logDescription;
@property(readonly, nonatomic) NSString *ed_uidQueryExpression;
- (id)ed_nextRangesWithRangeCountLimit:(unsigned long long)arg1 reverseEnumeration:(_Bool)arg2;	// IMP=0x00300000001732c2
- (void)ed_enumerateUIDsWithLimit:(unsigned long long)arg1 reverseEnumeration:(_Bool)arg2 queryRangeCountLimit:(unsigned long long)arg3 batchLimit:(unsigned long long)arg4 usingBlock:(CDUnknownBlockType)arg5;	// IMP=0x0030000000172c82
- (void)ed_enumerateUIDsWithLimit:(unsigned long long)arg1 reverseEnumeration:(_Bool)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x0030000000172c57
@end

