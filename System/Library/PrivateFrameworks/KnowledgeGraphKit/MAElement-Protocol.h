//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <KnowledgeGraphKit/NSObject-Protocol.h>

@class NSDictionary, NSSet, NSString;
@protocol MAGraphProxy;

@protocol MAElement <NSObject>
- (NSString *)visualString;
- (void)enumeratePropertiesUsingBlock:(void (^)(NSString *, id, _Bool *))arg1;
- (NSDictionary *)propertyDictionary;
- (NSSet *)propertyKeys;
- (unsigned long long)propertiesCount;
- (_Bool)hasProperties;
- (_Bool)isIdentifiedByProperties:(NSDictionary *)arg1;
- (_Bool)hasProperties:(NSDictionary *)arg1;
- (id)propertyForKey:(NSString *)arg1 kindOfClass:(Class)arg2;
- (id)propertyForKey:(NSString *)arg1;
@property(nonatomic, readonly) float weight;
@property(nonatomic, readonly) unsigned short domain;
@property(nonatomic, readonly) NSString *label;
@property(nonatomic, readonly) unsigned long long identifier;
@property(nonatomic, readonly) id <MAGraphProxy> graph;
@end
