//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SNDirectionOfArrivalEstimator : NSObject
{
    shared_ptr_f6ac7592 _graph;	// 8 = 0x8
    NSString *_tuningPrefix;	// 24 = 0x18
    float _azimuth;	// 32 = 0x20
}

- (id).cxx_construct;	// IMP=0x0000000000003dd8
- (void).cxx_destruct;	// IMP=0x0000000000003db2
@property(readonly, nonatomic) void *resultsBox;
- (_Bool)adaptToSystemConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000039cc
- (id)sharedProcessorConfiguration;	// IMP=0x00000000000039c4
- (id)resultsFromBox:(void *)arg1 renderedWithFrameCount:(int)arg2;	// IMP=0x0000000000003655
@property(readonly, nonatomic) shared_ptr_f6ac7592 graph;
- (id)initWithTuningPrefix:(id)arg1;	// IMP=0x00000000000035b4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

