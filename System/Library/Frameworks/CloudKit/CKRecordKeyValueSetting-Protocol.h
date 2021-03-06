//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/NSObject-Protocol.h>

@class NSArray, NSString;
@protocol CKRecordValue;

@protocol CKRecordKeyValueSetting <NSObject>
- (NSArray *)changedKeys;
- (NSArray *)allKeys;
- (void)setObject:(id <CKRecordValue>)arg1 forKeyedSubscript:(NSString *)arg2;
- (id <CKRecordValue>)objectForKeyedSubscript:(NSString *)arg1;
- (void)setObject:(id <CKRecordValue>)arg1 forKey:(NSString *)arg2;
- (id <CKRecordValue>)objectForKey:(NSString *)arg1;
@end

