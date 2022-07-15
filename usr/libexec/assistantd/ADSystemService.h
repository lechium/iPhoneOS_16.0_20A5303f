//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface ADSystemService
{
    struct __CFDictionary *_commandMap;	// 8 = 0x8
    struct __CFDictionary *_commandMapV2;	// 16 = 0x10
}

- (void)handleResponse:(id)arg1 toCommand:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x002000000009b43b
- (void)handleCommand:(id)arg1 forDomain:(id)arg2 executionContext:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x001000000009a900
- (id)controlCenterLockRestrictedCommands;	// IMP=0x001000000009a8f8
- (_Bool)implementsCommand:(id)arg1 forDomain:(id)arg2;	// IMP=0x001000000009a816
- (id)commandsForDomain:(id)arg1;	// IMP=0x001000000009a6f3
- (id)domains;	// IMP=0x001000000009a6a3
- (id)handle;	// IMP=0x001000000009a69a
- (_Bool)isSystemService;	// IMP=0x001000000009a692
- (id)_systemDomains;	// IMP=0x001000000009a5e5
- (void)dealloc;	// IMP=0x001000000009a58a
- (id)init;	// IMP=0x001000000009a537

@end
