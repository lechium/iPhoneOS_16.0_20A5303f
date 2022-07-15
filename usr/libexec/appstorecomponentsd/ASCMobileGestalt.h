//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface ASCMobileGestalt : NSObject
{
}

+ (_Bool)hasCapabilities:(id)arg1;	// IMP=0x002000000001586f
+ (_Bool)isAppleSiliconMac;	// IMP=0x0010000000015867
+ (id)activePairedSystemVersion;	// IMP=0x0010000000015772
+ (_Bool)isStandaloneWatch;	// IMP=0x001000000001576a
+ (_Bool)isPad;	// IMP=0x001000000001574d
+ (struct CGSize)mainScreenPointSize;	// IMP=0x00100000000156c8
+ (double)mainScreenCornerRadius;	// IMP=0x00100000000156aa
+ (double)mainScreenScale;	// IMP=0x001000000001568c
+ (struct CGSize)mainScreenSize;	// IMP=0x00100000000155e0
+ (_Bool)hasHEVCDecoding;	// IMP=0x00100000000155cf
+ (id)productType;	// IMP=0x00100000000155be
+ (id)deviceClass;	// IMP=0x00100000000155ad
+ (_Bool)wapiCapability;	// IMP=0x001000000001559c
+ (_Bool)hasVenice;	// IMP=0x001000000001558b
+ (_Bool)hasSystemTelephonyOfAnyKind;	// IMP=0x001000000001557a

@end
