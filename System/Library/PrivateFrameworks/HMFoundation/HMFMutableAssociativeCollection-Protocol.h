//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFAssociativeCollection-Protocol.h>

@class NSArray;
@protocol NSCopying;

@protocol HMFMutableAssociativeCollection <HMFAssociativeCollection>
- (void)removeObjectsForKeys:(NSArray *)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id <NSCopying>)arg2;
- (void)setObject:(id)arg1 forKey:(id <NSCopying>)arg2;
@end

