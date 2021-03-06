//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MCMContainerIdentity;

__attribute__((visibility("hidden")))
@interface MCMCommandLinkExists
{
    MCMContainerIdentity *_containerAIdentity;	// 8 = 0x8
    MCMContainerIdentity *_containerBIdentity;	// 16 = 0x10
    unsigned long long _attributes;	// 24 = 0x18
}

+ (Class)incomingMessageClass;	// IMP=0x00100000000bcaf1
+ (unsigned long long)command;	// IMP=0x00100000000bcabb
- (void).cxx_destruct;	// IMP=0x00000000000bca67
@property(readonly, nonatomic) unsigned long long attributes; // @synthesize attributes=_attributes;
@property(readonly, nonatomic) MCMContainerIdentity *containerBIdentity; // @synthesize containerBIdentity=_containerBIdentity;
@property(readonly, nonatomic) MCMContainerIdentity *containerAIdentity; // @synthesize containerAIdentity=_containerAIdentity;
- (void)execute;	// IMP=0x00000000000bc22e
- (_Bool)preflightClientAllowed;	// IMP=0x00000000000bbf92
- (id)initWithMessage:(id)arg1 context:(id)arg2 reply:(id)arg3;	// IMP=0x00000000000bbe8f

@end

