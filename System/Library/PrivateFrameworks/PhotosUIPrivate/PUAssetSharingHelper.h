//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol PXAssetsSharingHelperDelegate;

__attribute__((visibility("hidden")))
@interface PUAssetSharingHelper : NSObject
{
    id <PXAssetsSharingHelperDelegate> _delegate;	// 8 = 0x8
}

+ (void)_prepareAssets:(id)arg1 forActivityType:(id)arg2 window:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000047a482
+ (void)prepareAssets:(id)arg1 forActivityType:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000047a3fc
+ (void)copyAssets:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000047a356
- (void).cxx_destruct;	// IMP=0x0000000000479b69
@property(nonatomic) __weak id <PXAssetsSharingHelperDelegate> delegate; // @synthesize delegate=_delegate;
- (void)ensureRenderingForAssetsWithDeferredProcessingInCollection:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000004799aa
- (void)ensureLocalAssetsForRendering:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000479834
- (void)ensureLocalAssetsForSyndicationSave:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000047975d
- (void)ensureLocalAssetsForCloudPhotoSharing:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000479686
- (void)copyAssets:(id)arg1;	// IMP=0x0000000000479630
- (void)_presentViewController:(id)arg1;	// IMP=0x00000000004795bb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
