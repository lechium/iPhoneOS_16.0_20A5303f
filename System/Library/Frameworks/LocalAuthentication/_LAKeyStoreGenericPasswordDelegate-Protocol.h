//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocalAuthentication/NSObject-Protocol.h>

@class NSData, _LAKeyStoreGenericPassword;

@protocol _LAKeyStoreGenericPasswordDelegate <NSObject>
- (void)keyStoreGenericPassword:(_LAKeyStoreGenericPassword *)arg1 fetchKeyWithPublicKeyHash:(NSData *)arg2 completion:(void (^)(id <LAKeyStoreKey>, NSError *))arg3;
@end
