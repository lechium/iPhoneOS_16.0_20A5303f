//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SYDRemotePreferencesSource;

__attribute__((visibility("hidden")))
@interface CFPDCloudSource
{
    SYDRemotePreferencesSource *cloudSource;	// 152 = 0x98
    struct __CFString *_configurationPath;	// 160 = 0xa0
}

- (void)processEndOfMessageIntendingToRemoveSource:(_Bool *)arg1;	// IMP=0x000000000006fadb
- (int)validateMessage:(id)arg1 withNewKey:(id)arg2 newValue:(id)arg3 plistIsAvailableToRead:(_Bool)arg4 containerPath:(const char *)arg5 fileUID:(unsigned int)arg6 mode:(unsigned short)arg7 diagnosticMessage:(const char **)arg8;	// IMP=0x000000000006fad5
- (struct __CFString *)cloudConfigurationPath;	// IMP=0x000000000006fac9
- (struct __CFString *)debugDump;	// IMP=0x000000000006fa1f
- (id)copyPropertyListValidatingPlist:(_Bool)arg1;	// IMP=0x000000000006fa18
- (void)synchronizeWithCloud:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000006f953
- (id)initWithDomain:(struct __CFString *)arg1 userName:(struct __CFString *)arg2 storeName:(id)arg3 configurationPath:(struct __CFString *)arg4 containerPath:(struct __CFString *)arg5 shmemIndex:(short)arg6 daemon:(id)arg7;	// IMP=0x000000000006f73b

@end
