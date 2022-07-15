//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "VKMarker.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface VKLineMarker : VKMarker
{
    struct shared_ptr<md::LabelFeatureMarker> _labelFeatureMarker;	// 8 = 0x8
}

+ (id)markerWithLabelFeatureMarker:(const void *)arg1;	// IMP=0x006000000028f8cc
- (id).cxx_construct;	// IMP=0x000000000028fcb7
- (void).cxx_destruct;	// IMP=0x000000000028fca6
- (id)featureHandles;	// IMP=0x000000000028f9f2
@property(readonly, nonatomic) NSString *localizedName;
- (const void *)labelFeatureMarkerImpl;	// IMP=0x000000000028f936
- (id)initWithLabelFeatureMarkerPtr:(const void *)arg1;	// IMP=0x000000000028f7b2

@end
