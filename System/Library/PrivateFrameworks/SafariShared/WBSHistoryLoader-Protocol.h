//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafariShared/NSObject-Protocol.h>

@class NSURL;

@protocol WBSHistoryLoader <NSObject>
- (void)waitForLoadingToComplete;
- (void)startLoading;
- (id)initWithURL:(NSURL *)arg1 itemCountLimit:(unsigned long long)arg2 historyAgeLimit:(double)arg3 historyItemClass:(Class)arg4;
@end

