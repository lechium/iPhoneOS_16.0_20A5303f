//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIVisualEffect.h"

@class _UIVisualEffectViewBackdropCaptureGroup;

__attribute__((visibility("hidden")))
@interface _UICopyEffect : UIVisualEffect
{
    _UIVisualEffectViewBackdropCaptureGroup *_captureGroup;	// 8 = 0x8
}

+ (id)copyEffectWithCaptureGroup:(id)arg1;	// IMP=0x006000000027e906
- (void).cxx_destruct;	// IMP=0x000000000027eb0c
- (id)description;	// IMP=0x000000000027ea8d
- (long long)_expectedUsage;	// IMP=0x000000000027ea82
- (void)_updateEffectDescriptor:(id)arg1 forEnvironment:(id)arg2 usage:(long long)arg3;	// IMP=0x000000000027e9f8
- (_Bool)_needsUpdateForTransitionFromEnvironment:(id)arg1 toEnvironment:(id)arg2 usage:(long long)arg3;	// IMP=0x000000000027e9f0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000027e976

@end
