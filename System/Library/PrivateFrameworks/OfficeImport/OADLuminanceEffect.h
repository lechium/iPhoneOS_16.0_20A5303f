//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface OADLuminanceEffect
{
    float mBrightness;	// 12 = 0xc
    float mContrast;	// 16 = 0x10
}

- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000030a196
- (unsigned long long)hash;	// IMP=0x000000000030a109
- (void)setContrast:(float)arg1;	// IMP=0x0000000000102a5a
- (float)contrast;	// IMP=0x000000000030a0f7
- (void)setBrightness:(float)arg1;	// IMP=0x0000000000102a88
- (float)brightness;	// IMP=0x000000000030a0e5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000030a050
- (id)init;	// IMP=0x0000000000102a09

@end
