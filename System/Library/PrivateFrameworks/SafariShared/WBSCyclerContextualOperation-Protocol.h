//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafariShared/NSObject-Protocol.h>

@class WBSCyclerOperationContext;

@protocol WBSCyclerContextualOperation <NSObject>
- (void)executeWithContext:(WBSCyclerOperationContext *)arg1 completionHandler:(void (^)(WBSCyclerItemListRepresentation *))arg2;
@end
