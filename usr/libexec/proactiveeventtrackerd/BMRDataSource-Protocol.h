//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@protocol BMRDataSource <NSObject>
- (void)enumerateKeyValuePairsWithBlock:(void (^)(BMRKeyValuePair *, _Bool *))arg1 onError:(void (^)(NSError *, _Bool *))arg2 onCompletion:(void (^)(NSError *))arg3;
@end
