//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface _VNInferenceNetworkDescriptorInfo : NSObject
{
    NSArray *_detectorDescriptorIdentifierVersionTuples;	// 8 = 0x8
    NSDictionary *_descriptorIdentifierToVersionsArray;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x006000000016853a
- (void).cxx_destruct;	// IMP=0x0000000000168512
- (id)availableVersionsForIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000168453
- (Class)detectorClassForDescriptorIdentifier:(id)arg1 version:(id)arg2;	// IMP=0x00000000001681ac
- (id)initWithDetectorDescriptorIdentifierVersionTuples:(id)arg1 descriptorIdentifierToVersionsArray:(id)arg2;	// IMP=0x00000000001680b4

@end

