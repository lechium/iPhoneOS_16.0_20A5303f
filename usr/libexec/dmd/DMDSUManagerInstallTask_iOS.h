//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SUManagerClient;

@interface DMDSUManagerInstallTask_iOS
{
    SUManagerClient *softwareUpdateServices;	// 8 = 0x8
}

+ (id)_dmfStatusErrorFromSUStatusError:(id)arg1;	// IMP=0x004000000007d208
+ (id)_dmfInstallErrorFromSUInstallError:(id)arg1;	// IMP=0x001000000007cec8
+ (id)_dmfDownloadErrorFromSUDownloadError:(id)arg1;	// IMP=0x001000000007caaf
+ (id)defaultProductKey;	// IMP=0x001000000007caa2
- (void).cxx_destruct;	// IMP=0x002000000007e863
@property(retain, nonatomic) SUManagerClient *softwareUpdateServices; // @synthesize softwareUpdateServices;
- (id)currentStatusWithError:(id *)arg1;	// IMP=0x001000000007e411
- (_Bool)startInstallWithError:(id *)arg1;	// IMP=0x001000000007e0f6
- (_Bool)startDownloadWithError:(id *)arg1;	// IMP=0x001000000007dd7b
- (id)availableUpdateWithVersion:(id)arg1 useDelay:(_Bool)arg2 error:(id *)arg3;	// IMP=0x001000000007d72a
- (_Bool)removeUpdateWithError:(id *)arg1;	// IMP=0x001000000007d359
- (id)init;	// IMP=0x001000000007d2d5

@end

