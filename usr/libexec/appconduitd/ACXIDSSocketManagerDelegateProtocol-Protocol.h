//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSError, NSObject;

@protocol ACXIDSSocketManagerDelegateProtocol <NSObject>
- (void)socketDidCloseWithError:(NSError *)arg1;
- (void)receivedDictionaryOrData:(NSObject *)arg1;
@end

