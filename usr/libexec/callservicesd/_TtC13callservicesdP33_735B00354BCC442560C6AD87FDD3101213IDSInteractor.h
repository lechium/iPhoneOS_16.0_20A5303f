//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC13callservicesdP33_735B00354BCC442560C6AD87FDD3101213IDSInteractor : NSObject
{
    MISSING_TYPE *service;	// 8 = 0x8
    MISSING_TYPE *delegate;	// 16 = 0x10
    MISSING_TYPE *knownDestinations;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00400000002ee890
- (id)init;	// IMP=0x00100000002ee830
- (void)service:(id)arg1 account:(id)arg2 incomingData:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00100000002ee6f0
- (void)service:(id)arg1 activeAccountsChanged:(id)arg2;	// IMP=0x00100000002ee620
- (void)service:(id)arg1 devicesChanged:(id)arg2;	// IMP=0x00100000002ee5a0

@end
