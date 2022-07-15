//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXActivity.h>

@class NSString;
@protocol PXActivityItemSourceController;

__attribute__((visibility("hidden")))
@interface PUCopyLinkActivity : PXActivity
{
}

+ (long long)activityCategory;	// IMP=0x001000000011758d
+ (_Bool)wantsMomentShareLinkForAssetCount:(long long)arg1;	// IMP=0x0010000000117583
- (void)performActivity;	// IMP=0x0000000000117655
- (_Bool)canPerformWithActivityItems:(id)arg1;	// IMP=0x00000000001175c7
- (id)_systemImageName;	// IMP=0x00000000001175ba
- (id)activityTitle;	// IMP=0x00000000001175a9
- (id)activityType;	// IMP=0x0000000000117595

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak id <PXActivityItemSourceController> itemSourceController;
@property(readonly) Class superclass;

@end
