//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class AKDServerUIContext, NSDictionary;

@protocol AKDServerUIDelegate <NSObject>
- (void)serverUIContext:(AKDServerUIContext *)arg1 processAdditionalData:(NSDictionary *)arg2 completion:(void (^)(AKAuthenticationServerResponse *, NSDictionary *, NSError *))arg3;
- (_Bool)shouldProcessAdditionalServerUIData:(NSDictionary *)arg1;
@end

