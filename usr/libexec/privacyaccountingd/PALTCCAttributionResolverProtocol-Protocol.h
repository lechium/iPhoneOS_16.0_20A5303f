//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSObject, PATCCAccess;
@protocol OS_tcc_identity;

@protocol PALTCCAttributionResolverProtocol <NSObject>
- (PATCCAccess *)resolveAttributionForTCCAccess:(PATCCAccess *)arg1 clientProvidedIdentity:(NSObject<OS_tcc_identity> *)arg2;
@end
