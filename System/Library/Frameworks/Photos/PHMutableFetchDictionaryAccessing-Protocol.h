//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Photos/PHFetchDictionaryAccessing-Protocol.h>

@protocol NSCopying;

@protocol PHMutableFetchDictionaryAccessing <PHFetchDictionaryAccessing>
- (void)setObject:(id)arg1 forKeyedSubscript:(id <NSCopying>)arg2;
- (void)setObject:(id)arg1 forKey:(id <NSCopying>)arg2;
- (void)removeObjectForKey:(id <NSCopying>)arg1;
@end
