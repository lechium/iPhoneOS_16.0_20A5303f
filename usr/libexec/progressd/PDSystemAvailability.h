//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PDSystemAvailability : NSObject
{
}

+ (_Bool)deviceIsUnlocked;	// IMP=0x0020000000168fb2
+ (void)waitUntilDeviceIsUnlockedAtleastOnce;	// IMP=0x0010000000168fa0
+ (_Bool)isDeviceUnlockedSinceBoot;	// IMP=0x0010000000168f98
+ (const char *)deviceLockStatusNotifyToken;	// IMP=0x0010000000168f8b

@end

