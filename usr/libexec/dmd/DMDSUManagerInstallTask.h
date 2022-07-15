//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface DMDSUManagerInstallTask : NSObject
{
}

+ (id)productKeyOrDefaultFromStatus:(id)arg1;	// IMP=0x002000000007c772
+ (id)productKeyFromStatus:(id)arg1;	// IMP=0x001000000007c6e3
+ (id)_dmfStatusErrorFromSUStatusError:(id)arg1;	// IMP=0x001000000007c616
+ (id)defaultProductKey;	// IMP=0x001000000007c609
+ (id)sharedInstallTask;	// IMP=0x001000000007c5b4
- (id)currentStatusWithError:(id *)arg1;	// IMP=0x004000000007c7db
- (_Bool)startInstallWithError:(id *)arg1;	// IMP=0x001000000007c7d3
- (_Bool)startDownloadWithError:(id *)arg1;	// IMP=0x001000000007c7cb
- (id)availableUpdateWithVersion:(id)arg1 useDelay:(_Bool)arg2 error:(id *)arg3;	// IMP=0x001000000007c7c3
- (_Bool)removeUpdateWithError:(id *)arg1;	// IMP=0x001000000007c7bb

@end
