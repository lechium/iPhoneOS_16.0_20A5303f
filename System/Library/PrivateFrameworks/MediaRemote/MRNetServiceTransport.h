//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MRExternalDeviceTransport.h"

@class MRDeviceInfo, NSNetService;

__attribute__((visibility("hidden")))
@interface MRNetServiceTransport : MRExternalDeviceTransport
{
    MRDeviceInfo *_deviceInfo;	// 16 = 0x10
    _Bool _requiresCustomPairing;	// 24 = 0x18
    NSNetService *_netService;	// 32 = 0x20
}

+ (id)createDeviceInfoFromTXTRecord:(id)arg1;	// IMP=0x00600000000e80d3
+ (id)createDeviceInfoFromNetService:(id)arg1;	// IMP=0x00600000000e7fa5
- (void).cxx_destruct;	// IMP=0x00000000000e88a0
@property(retain, nonatomic) NSNetService *netService; // @synthesize netService=_netService;
@property(nonatomic) _Bool requiresCustomPairing;
- (void)resetWithError:(id)arg1;	// IMP=0x00000000000e8869
- (_Bool)getInputStream:(id *)arg1 outputStream:(id *)arg2 userInfo:(id)arg3;	// IMP=0x00000000000e87e5
- (id)createConnectionWithUserInfo:(id)arg1;	// IMP=0x00000000000e873b
- (id)error;	// IMP=0x00000000000e8733
- (void)setShouldUseSystemAuthenticationPrompt:(_Bool)arg1;	// IMP=0x00000000000e872d
- (_Bool)shouldUseSystemAuthenticationPrompt;	// IMP=0x00000000000e8725
- (long long)connectionType;	// IMP=0x00000000000e871a
- (long long)port;	// IMP=0x00000000000e86fd
- (id)hostname;	// IMP=0x00000000000e86e0
- (id)name;	// IMP=0x00000000000e86c3
- (id)deviceInfo;	// IMP=0x00000000000e8663
- (void)updateDeviceInfoWithTXTRecord:(id)arg1;	// IMP=0x00000000000e8534
- (id)description;	// IMP=0x00000000000e7e17
- (void)dealloc;	// IMP=0x00000000000e7dd7
- (id)initWithNetService:(id)arg1;	// IMP=0x00000000000e7d5e

@end
