//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MCMContainerIdentity;

__attribute__((visibility("hidden")))
@interface MCMCommandDeleteContainerContent
{
    MCMContainerIdentity *_containerIdentity;	// 8 = 0x8
}

+ (Class)incomingMessageClass;	// IMP=0x001000000003da1c
+ (unsigned long long)command;	// IMP=0x001000000003d9e6
- (void).cxx_destruct;	// IMP=0x000000000003d9a8
@property(readonly, nonatomic) MCMContainerIdentity *containerIdentity; // @synthesize containerIdentity=_containerIdentity;
- (void)execute;	// IMP=0x000000000003d258
- (_Bool)preflightClientAllowed;	// IMP=0x000000000003d1bf
- (id)initWithMessage:(id)arg1 context:(id)arg2 reply:(id)arg3;	// IMP=0x000000000003d103
- (id)initWithContainerIdentity:(id)arg1 context:(id)arg2 resultPromise:(id)arg3;	// IMP=0x000000000003d05e

@end

