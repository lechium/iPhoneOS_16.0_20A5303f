//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface MCMCommandStageSharedContent
{
    NSString *_identifier;	// 8 = 0x8
    NSString *_sourceRelativePath;	// 16 = 0x10
    NSString *_destinationRelativePath;	// 24 = 0x18
}

+ (Class)incomingMessageClass;	// IMP=0x001000000004c178
+ (unsigned long long)command;	// IMP=0x001000000004c142
- (void).cxx_destruct;	// IMP=0x000000000004c0dd
@property(readonly, nonatomic) NSString *destinationRelativePath; // @synthesize destinationRelativePath=_destinationRelativePath;
@property(readonly, nonatomic) NSString *sourceRelativePath; // @synthesize sourceRelativePath=_sourceRelativePath;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)execute;	// IMP=0x000000000004ae4f
- (_Bool)preflightClientAllowed;	// IMP=0x000000000004adb6
- (id)initWithMessage:(id)arg1 context:(id)arg2 reply:(id)arg3;	// IMP=0x000000000004aca0

@end
