//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol SHMatcher;

__attribute__((visibility("hidden")))
@interface SHManagedShazamCatalog
{
    _Bool _sendNotifications;	// 8 = 0x8
    id <SHMatcher> _daemonMatcher;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000eff3
@property(retain, nonatomic) id <SHMatcher> daemonMatcher; // @synthesize daemonMatcher=_daemonMatcher;
@property(nonatomic) _Bool sendNotifications; // @synthesize sendNotifications=_sendNotifications;
- (id)_createMatcher;	// IMP=0x000000000000ef36
- (void)stop;	// IMP=0x000000000000ee9c
- (void)startMatchingUntilResultFound;	// IMP=0x000000000000ee16
- (void)startMatchingUntilDeadline:(id)arg1;	// IMP=0x000000000000ed6c
- (void)startMatching;	// IMP=0x000000000000ecb8
- (void)startOneMatchAttempt;	// IMP=0x000000000000ec32
- (id)_initWithInstallationID:(id)arg1;	// IMP=0x000000000000ec03
- (id)init;	// IMP=0x000000000000eb88

@end
