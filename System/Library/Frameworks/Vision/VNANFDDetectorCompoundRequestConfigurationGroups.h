//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface VNANFDDetectorCompoundRequestConfigurationGroups : NSObject
{
    NSMutableDictionary *_regionOfInterestConfigurations;	// 8 = 0x8
}

+ (id)createCompoundConfigurationHashKeyForRequest:(id)arg1 compoundRequestRevision:(unsigned long long)arg2;	// IMP=0x006000000029ba2c
- (void).cxx_destruct;	// IMP=0x00000000002999d5
- (unsigned long long)count;	// IMP=0x00000000002999bf
- (id)allConfigurations;	// IMP=0x0000000000299937
- (id)configurationForRequest:(id)arg1;	// IMP=0x00000000002997a6
- (id)init;	// IMP=0x0000000000299720

@end

