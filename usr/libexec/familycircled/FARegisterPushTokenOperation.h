//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface FARegisterPushTokenOperation
{
    NSData *_pushToken;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000163d4
@property(readonly) NSData *pushToken; // @synthesize pushToken=_pushToken;
- (id)registerToken;	// IMP=0x0010000000015fda
- (id)pushTokenString;	// IMP=0x0010000000015ef0
- (id)initWithNetworkService:(id)arg1 pushToken:(id)arg2;	// IMP=0x0010000000015e78

@end

