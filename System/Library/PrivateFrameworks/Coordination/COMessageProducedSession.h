//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "COMessageSession.h"

@class COMessageSessionProducer;

__attribute__((visibility("hidden")))
@interface COMessageProducedSession : COMessageSession
{
    COMessageSessionProducer *_producer;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000030a6
@property(readonly, nonatomic) __weak COMessageSessionProducer *producer; // @synthesize producer=_producer;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000305e
- (unsigned long long)hash;	// IMP=0x000000000000302f
- (id)description;	// IMP=0x0000000000002f66
- (id)initWithMember:(id)arg1 producer:(id)arg2;	// IMP=0x0000000000002ef5

@end
