//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@class _UIForcedOrientationTransactionToken;

@protocol _UIForcedOrientationTransactionHandler <NSObject>
- (void)cancelOrientationTransaction:(_UIForcedOrientationTransactionToken *)arg1;
- (void)commitOrientationTransaction:(_UIForcedOrientationTransactionToken *)arg1 animated:(_Bool)arg2;
@end
