//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSError, SDAirDropListener, SDNetworkOperation;

@protocol SDAirDropListenerDelegate <NSObject>
- (void)listener:(SDAirDropListener *)arg1 informationDidChange:(NSDictionary *)arg2;
- (void)listener:(SDAirDropListener *)arg1 didReceiveNewRequest:(SDNetworkOperation *)arg2;
- (void)listener:(SDAirDropListener *)arg1 didReceiveError:(NSError *)arg2;
@end
