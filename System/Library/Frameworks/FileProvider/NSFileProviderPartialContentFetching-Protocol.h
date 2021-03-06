//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FileProvider/NSObject-Protocol.h>

@class NSFileProviderItemVersion, NSFileProviderRequest, NSProgress, NSString;

@protocol NSFileProviderPartialContentFetching <NSObject>
- (NSProgress *)fetchPartialContentsForItemWithIdentifier:(NSString *)arg1 version:(NSFileProviderItemVersion *)arg2 request:(NSFileProviderRequest *)arg3 minimalRange:(struct _NSRange)arg4 aligningTo:(unsigned long long)arg5 options:(unsigned long long)arg6 completionHandler:(void (^)(NSURL *, id <NSFileProviderItem>, struct _NSRange, unsigned long long, NSError *))arg7;
@end

