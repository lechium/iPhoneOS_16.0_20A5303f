//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FileProvider/NSObject-Protocol.h>

@class NSArray, NSProgress, NSString;

@protocol NSFileProviderCustomAction <NSObject>
- (NSProgress *)performActionWithIdentifier:(NSString *)arg1 onItemsWithIdentifiers:(NSArray *)arg2 completionHandler:(void (^)(NSError *))arg3;
@end

