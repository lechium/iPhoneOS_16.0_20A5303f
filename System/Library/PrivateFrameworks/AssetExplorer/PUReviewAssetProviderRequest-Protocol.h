//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AssetExplorer/NSProgressReporting-Protocol.h>

@protocol PUDisplayAsset;

@protocol PUReviewAssetProviderRequest <NSProgressReporting>
@property(readonly, nonatomic) id <PUDisplayAsset> sourceAsset;
- (void)cancelReviewAssetRequest;
- (void)requestReviewAssetWithCompletionHandler:(void (^)(_Bool, _Bool, NSError *, PUReviewAsset *))arg1;
@end
