//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "AVVideoOutputSettings.h"

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface AVPixelBufferAttributesVideoOutputSettings : AVVideoOutputSettings
{
    NSDictionary *_VTPixelAspectRatioDictionary;	// 16 = 0x10
    NSDictionary *_VTCleanApertureDictionary;	// 24 = 0x18
}

+ (id)_videoOutputSettingsWithVideoSettingsDictionary:(id)arg1 exceptionReason:(id *)arg2;	// IMP=0x0010000000138a20
+ (id)eligibleOutputSettingsDictionaryKeys;	// IMP=0x001000000013896f
@property(readonly, nonatomic) NSString *fieldMode;
@property(readonly, nonatomic) NSDictionary *pixelBufferAttributes;
- (_Bool)canFullySpecifyOutputFormatReturningReason:(id *)arg1;	// IMP=0x0000000000139a45
- (_Bool)encoderIsAvailableOnCurrentSystemReturningError:(id *)arg1;	// IMP=0x0000000000139a3d
- (_Bool)willYieldCompressedSamples;	// IMP=0x0000000000139a35
- (id)cleanApertureDictionary;	// IMP=0x0000000000139a24
- (id)pixelAspectRatioDictionary;	// IMP=0x0000000000139a13
- (int)height;	// IMP=0x00000000001399c7
- (int)width;	// IMP=0x000000000013997b
- (void)dealloc;	// IMP=0x0000000000139923
- (id)initWithTrustedPixelBufferAttributes:(id)arg1;	// IMP=0x000000000013985c
- (id)initWithPixelBufferAttributes:(id)arg1 exceptionReason:(id *)arg2;	// IMP=0x0000000000138a5c

@end

