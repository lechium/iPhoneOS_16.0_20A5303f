//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VSPreferences, VSUserAccountRegistry;

__attribute__((visibility("hidden")))
@interface VSUserAccountService
{
    VSPreferences *_preferences;	// 8 = 0x8
    VSUserAccountRegistry *_registry;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000002dc03
@property(retain, nonatomic) VSUserAccountRegistry *registry; // @synthesize registry=_registry;
@property(retain, nonatomic) VSPreferences *preferences; // @synthesize preferences=_preferences;
- (id)_securityTaskForCurrentConnection;	// IMP=0x000000000002dba0
- (void)performMigrationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000002d47b
- (id)init;	// IMP=0x000000000002d2c6

@end
