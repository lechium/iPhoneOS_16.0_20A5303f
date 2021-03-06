//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class OADSubBlip;

__attribute__((visibility("hidden")))
@interface OADBlip : NSObject
{
    unsigned int mReferenceCount;	// 8 = 0x8
    OADSubBlip *mMainSubBlip;	// 16 = 0x10
    OADSubBlip *mAltSubBlip;	// 24 = 0x18
}

+ (id)pathExtensionForBlipType:(int)arg1;	// IMP=0x0060000000309ddd
- (void).cxx_destruct;	// IMP=0x0000000000309dfb
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000309d24
- (unsigned long long)hash;	// IMP=0x0000000000309ce5
- (unsigned int *)referenceCount;	// IMP=0x000000000001dad8
- (void)setAltSubBlip:(id)arg1;	// IMP=0x00000000001604ca
- (id)altSubBlip;	// IMP=0x00000000001b2e94
- (void)setMainSubBlip:(id)arg1;	// IMP=0x000000000001dac7
- (id)mainSubBlip;	// IMP=0x00000000000af314

@end

