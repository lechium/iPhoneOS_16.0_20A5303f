//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUIApps/NSObject-Protocol.h>

@class NSString, PXStoryExportConfiguration;
@protocol PXDisplayAsset, PXDisplayCollection;

@protocol PXStoryExportActivityHelper <NSObject>
- (void)didEndExportWithConfiguration:(PXStoryExportConfiguration *)arg1;
- (void)didBeginExportWithConfiguration:(PXStoryExportConfiguration *)arg1;
- (void)requestExportConfigurationWithCompletionHandler:(void (^)(PXStoryExportConfiguration *, NSError *))arg1;
@property(nonatomic, readonly) id <PXDisplayCollection> collection;
@property(nonatomic, readonly) NSString *preferredExportFilename;
@property(nonatomic, readonly) id <PXDisplayAsset> iconAsset;
@end

