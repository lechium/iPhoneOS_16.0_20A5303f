//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlayer/MPVolumeSlider.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC9SeymourUI12VolumeSlider : MPVolumeSlider
{
    MISSING_TYPE *appearance;	// 8 = 0x8
    MISSING_TYPE *$__lazy_storage_$_symbolConfiguration;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000030260
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2 endpointRoute:(id)arg3 outputDeviceRoute:(id)arg4;	// IMP=0x00000000000301f0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000301c0
- (struct CGRect)thumbRectForBounds:(struct CGRect)arg1 trackRect:(struct CGRect)arg2 value:(float)arg3;	// IMP=0x0000000000030100
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000030040
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;	// IMP=0x0000000000030010
- (id)init;	// IMP=0x000000000002fb80

@end
