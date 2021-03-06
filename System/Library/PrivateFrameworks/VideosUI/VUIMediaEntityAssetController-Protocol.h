//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VideosUI/NSObject-Protocol.h>

@class OS_dispatch_queue, VUIMediaEntityAssetControllerState, VUIMediaEntityType;
@protocol VUIMediaEntityAssetControllerDelegate, VUIMediaEntityIdentifier;

@protocol VUIMediaEntityAssetController <NSObject>
- (void)cancelKeyFetch;
- (void)cancelAndRemoveDownload;
- (void)resumeDownload;
- (void)pauseDownload;
- (void)fetchNewKeysForDownloadedVideo;
- (void)deleteAndRedownloadAllowingCellular:(_Bool)arg1 quality:(long long)arg2 shouldMarkAsDeletedOnCancellationOrFailure:(_Bool)arg3 completion:(void (^)(_Bool, NSError *))arg4;
- (void)startDownloadAllowingCellular:(_Bool)arg1 quality:(long long)arg2 shouldMarkAsDeletedOnCancellationOrFailure:(_Bool)arg3 completion:(void (^)(_Bool, NSError *))arg4;
- (void)invalidate;
@property(nonatomic, readonly) _Bool contentAllowsCellularDownload;
@property(nonatomic, retain) OS_dispatch_queue *completionDispatchQueue;
@property(nonatomic, readonly) VUIMediaEntityAssetControllerState *state;
@property(nonatomic, readonly) _Bool supportsRedownloadingContent;
@property(nonatomic, readonly) _Bool supportsStartingDownload;
@property(nonatomic) __weak id <VUIMediaEntityAssetControllerDelegate> delegate;
@property(nonatomic, readonly) VUIMediaEntityType *mediaEntityType;
@property(nonatomic, readonly) id <VUIMediaEntityIdentifier> mediaEntityIdentifier;
@end

