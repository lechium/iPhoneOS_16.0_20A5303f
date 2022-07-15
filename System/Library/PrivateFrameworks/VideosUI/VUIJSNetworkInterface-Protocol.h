//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VideosUI/JSExport-Protocol.h>

@class JSValue, NSArray, NSDictionary, NSString;

@protocol VUIJSNetworkInterface <JSExport>
- (void)invalidateConfiguration;
- (void)fetchConfiguration:(_Bool)arg1:(JSValue *)arg2;
- (void)cancelRequest:(NSString *)arg1;
- (void)upNextItemsReceived:(NSArray *)arg1:(NSString *)arg2;
- (JSValue *)makeMediaApiRequest:(NSDictionary *)arg1:(JSValue *)arg2;
- (JSValue *)makeStoreRequest:(NSDictionary *)arg1:(JSValue *)arg2;
- (JSValue *)makeUpNextRequest:(NSDictionary *)arg1:(JSValue *)arg2;
- (JSValue *)makeRequest:(NSDictionary *)arg1:(JSValue *)arg2;
@end
