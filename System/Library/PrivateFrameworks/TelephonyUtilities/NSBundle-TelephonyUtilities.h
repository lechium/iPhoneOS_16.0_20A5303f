//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSBundle.h>

@class NSObject;
@protocol OS_tcc_identity;

@interface NSBundle (TelephonyUtilities)
+ (id)tu_assumedIdentityForBundleIdentifier:(id)arg1;	// IMP=0x002000000007e103
@property(readonly, copy, nonatomic) NSObject<OS_tcc_identity> *tu_assumedIdentity;
@end
