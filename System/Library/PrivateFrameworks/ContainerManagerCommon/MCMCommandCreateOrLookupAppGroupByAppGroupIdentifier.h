//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface MCMCommandCreateOrLookupAppGroupByAppGroupIdentifier
{
    NSString *_appGroupIdentifier;	// 8 = 0x8
}

+ (Class)incomingMessageClass;	// IMP=0x0010000000078226
+ (unsigned long long)command;	// IMP=0x00100000000781f0
- (void).cxx_destruct;	// IMP=0x00000000000781b2
@property(readonly, nonatomic) NSString *appGroupIdentifier; // @synthesize appGroupIdentifier=_appGroupIdentifier;
- (void)execute;	// IMP=0x0000000000077b6a
- (_Bool)preflightClientAllowed;	// IMP=0x0000000000077a33
- (id)initWithMessage:(id)arg1 context:(id)arg2 reply:(id)arg3;	// IMP=0x0000000000077977

@end

