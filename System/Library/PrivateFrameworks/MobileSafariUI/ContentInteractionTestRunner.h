//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface ContentInteractionTestRunner
{
    int _iterations;	// 80 = 0x50
}

@property(nonatomic) int iterations; // @synthesize iterations=_iterations;
- (void)stopSubtest:(id)arg1;	// IMP=0x000000000013300b
- (void)startSubtest:(id)arg1;	// IMP=0x0000000000132f8c
- (void)endTrackingFrameRate;	// IMP=0x0000000000132f39
- (void)startTrackingFrameRate;	// IMP=0x0000000000132ee6
- (_Bool)startPageAction:(id)arg1;	// IMP=0x0000000000132e6c
- (id)pageWebView;	// IMP=0x0000000000132dc7
- (id)initWithTestName:(id)arg1 browserController:(id)arg2;	// IMP=0x0000000000132d73

@end

