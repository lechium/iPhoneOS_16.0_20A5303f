//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CKDOperation.h"

@interface CKDSaveUserPrivacySettingsOperation : CKDOperation
{
    long long _discoverable;	// 8 = 0x8
}

+ (long long)isPredominatelyDownload;	// IMP=0x00600000002ef167
@property(nonatomic) long long discoverable; // @synthesize discoverable=_discoverable;
- (int)operationType;	// IMP=0x00000000002ef386
- (void)main;	// IMP=0x00000000002ef16f
- (_Bool)shouldCheckAppVersion;	// IMP=0x00000000002ef15f
- (id)activityCreate;	// IMP=0x00000000002ef136
- (id)initWithOperationInfo:(id)arg1 container:(id)arg2;	// IMP=0x00000000002ef0b9

@end

