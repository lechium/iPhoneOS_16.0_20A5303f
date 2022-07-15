//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafariSharedUI/NSObject-Protocol.h>

@class WBSSiteMetadataRequest, WBSSiteMetadataResponse;
@protocol WBSSiteMetadataProviderDelegate;

@protocol WBSSiteMetadataProvider <NSObject>
@property __weak id <WBSSiteMetadataProviderDelegate> providerDelegate;
- (void)prepareResponseForRequest:(WBSSiteMetadataRequest *)arg1 allowDelayedResponse:(_Bool)arg2;
- (WBSSiteMetadataResponse *)responseForRequest:(WBSSiteMetadataRequest *)arg1 willProvideUpdates:(_Bool *)arg2;
- (_Bool)canHandleRequest:(WBSSiteMetadataRequest *)arg1;

@optional
@property(readonly, nonatomic) _Bool providesFavicons;
- (void)purgeUnneededCacheEntries;
- (void)savePendingChangesBeforeTermination;
- (void)emptyCaches;
- (void)stopWatchingUpdatesForRequest:(WBSSiteMetadataRequest *)arg1;
@end
