//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol _UISEGestureFeatureSettings;

__attribute__((visibility("hidden")))
@interface _UISEInitialEdgesFailGestureFeature
{
    id <_UISEGestureFeatureSettings> _settings;	// 8 = 0x8
    _Bool _useEdgeRegionSize;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000802012
- (void)_incorporateSample:(const struct _UISEGestureFeatureSample *)arg1;	// IMP=0x0000000000801e88
- (id)initWithSettings:(id)arg1 useEdgeRegionSize:(_Bool)arg2;	// IMP=0x0000000000801e21

@end
