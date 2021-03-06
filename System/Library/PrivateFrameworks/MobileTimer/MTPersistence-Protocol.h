//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileTimer/NSObject-Protocol.h>

@class NSString;

@protocol MTPersistence <NSObject>
- (void)setFloat:(float)arg1 forKey:(NSString *)arg2;
- (void)setObject:(id)arg1 forKey:(NSString *)arg2;
- (float)floatForKey:(NSString *)arg1;
- (id)objectForKey:(NSString *)arg1 defaultValue:(id)arg2;
- (id)objectForKey:(NSString *)arg1;
@end

