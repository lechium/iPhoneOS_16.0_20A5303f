//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PlugInKit/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSURL;
@protocol PKApplicationWorkspaceObserverProtocol;

@protocol PKApplicationWorkspaceProxy <NSObject>
- (void)getKnowledgeUUID:(id *)arg1 andSequenceNumber:(id *)arg2;
- (_Bool)unregisterPlugin:(NSURL *)arg1;
- (_Bool)registerPlugin:(NSURL *)arg1;
- (NSArray *)pluginsMatchingQuery:(NSDictionary *)arg1 applyFilter:(_Bool (^)(NSString *, NSDictionary *))arg2;
- (void)removeObserver:(id <PKApplicationWorkspaceObserverProtocol>)arg1;
- (void)addObserver:(id <PKApplicationWorkspaceObserverProtocol>)arg1;
- (NSArray *)installedPlugins;
@end
