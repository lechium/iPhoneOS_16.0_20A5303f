//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@protocol GCUserDefaultsXPCProxyServiceRemoteClientInterface
- (void)stopObservingKeyPath:(NSString *)arg1;
- (void)observeKeyPath:(NSString *)arg1;
- (void)setBool:(_Bool)arg1 forKey:(NSString *)arg2;
- (void)boolForKey:(NSString *)arg1 withReply:(void (^)(_Bool))arg2;
- (void)setDouble:(double)arg1 forKey:(NSString *)arg2;
- (void)doubleForKey:(NSString *)arg1 withReply:(void (^)(double))arg2;
- (void)setFloat:(float)arg1 forKey:(NSString *)arg2;
- (void)floatForKey:(NSString *)arg1 withReply:(void (^)(float))arg2;
- (void)setInteger:(long long)arg1 forKey:(NSString *)arg2;
- (void)integerForKey:(NSString *)arg1 withReply:(void (^)(long long))arg2;
- (void)dataForKey:(NSString *)arg1 withReply:(void (^)(NSData *))arg2;
- (void)dictionaryForKey:(NSString *)arg1 withReply:(void (^)(NSDictionary *))arg2;
- (void)arrayForKey:(NSString *)arg1 withReply:(void (^)(NSArray *))arg2;
- (void)stringForKey:(NSString *)arg1 withReply:(void (^)(NSString *))arg2;
- (void)setObject:(id)arg1 forKey:(NSString *)arg2;
- (void)objectForKey:(NSString *)arg1 withReply:(void (^)(id))arg2;
@end
