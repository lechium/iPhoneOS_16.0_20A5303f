//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BoardServices/NSObject-Protocol.h>

@class NSSet, RBSService;

@protocol RBSServiceDelegate <NSObject>
- (void)service:(RBSService *)arg1 didLoseInheritances:(NSSet *)arg2;
- (void)service:(RBSService *)arg1 didReceiveInheritances:(NSSet *)arg2;
@end

