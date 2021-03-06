//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface MCCloudConfigurationWriter : NSObject
{
}

+ (id)sharedInstance;	// IMP=0x004000000006aa55
- (_Bool)finalizeCloudConfigurationOutError:(id *)arg1;	// IMP=0x004000000006c6cb
- (_Bool)saveCloudConfigurationDetails:(id)arg1 outError:(id *)arg2;	// IMP=0x001000000006bb02
- (_Bool)_validateDetails:(id)arg1 outReasonWhyInvalid:(id *)arg2;	// IMP=0x001000000006ae63
- (_Bool)_isCloudConfigurationAvailableInDEP;	// IMP=0x001000000006abcf
- (_Bool)_isCloudConfigurationActuallyAvailable;	// IMP=0x001000000006aba9
- (void)faceTimeSignInAttemptDidFinish;	// IMP=0x001000000006aaf2
- (_Bool)_writeDetails:(id)arg1 toFile:(id)arg2;	// IMP=0x001000000006aada
- (_Bool)_isActivated;	// IMP=0x001000000006aad0
- (_Bool)_activationRecordIndicatesCloudConfigurationIsAvailable;	// IMP=0x001000000006aaaa

@end

