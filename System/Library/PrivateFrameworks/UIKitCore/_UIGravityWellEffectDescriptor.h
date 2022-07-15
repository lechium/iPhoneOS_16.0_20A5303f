//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, UITargetedPreview;

__attribute__((visibility("hidden")))
@interface _UIGravityWellEffectDescriptor : NSObject
{
    UITargetedPreview *_primaryPreview;	// 8 = 0x8
    NSArray *_secondaryPreviews;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000003ee80c
@property(retain, nonatomic) NSArray *secondaryPreviews; // @synthesize secondaryPreviews=_secondaryPreviews;
@property(retain, nonatomic) UITargetedPreview *primaryPreview; // @synthesize primaryPreview=_primaryPreview;
@property(readonly, nonatomic) UITargetedPreview *targetedPreview;
- (_Bool)canTransitionInPlaceToEffectWithDescriptor:(id)arg1;	// IMP=0x00000000003ee704
@property(readonly, nonatomic) NSArray *compatibleDescriptors;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
