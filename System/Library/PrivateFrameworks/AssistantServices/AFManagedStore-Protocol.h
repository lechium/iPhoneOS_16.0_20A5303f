//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AssistantServices/NSObject-Protocol.h>

@class NSData, NSDictionary, NSString;

@protocol AFManagedStore <NSObject>
- (void)resetKnowledgeStoreWithName:(NSString *)arg1;
- (void)setData:(NSData *)arg1 forKey:(NSString *)arg2 inKnowledgeStoreWithName:(NSString *)arg3;
- (NSData *)dataForKey:(NSString *)arg1 inKnowledgeStoreWithName:(NSString *)arg2;
- (void)setDomainObject:(NSDictionary *)arg1 forKey:(NSString *)arg2;
- (NSDictionary *)domainObjectForKey:(NSString *)arg1;
@end

