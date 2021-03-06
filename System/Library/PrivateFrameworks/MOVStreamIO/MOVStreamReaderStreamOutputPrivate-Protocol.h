//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MOVStreamIO/NSObject-Protocol.h>

@class AVAssetReader, AVAssetTrack, MOVStreamReader, NSArray, NSString, Version;
@protocol MOVStreamReaderDelegate;

@protocol MOVStreamReaderStreamOutputPrivate <NSObject>
- (id)initWithMetadataTrack:(AVAssetTrack *)arg1 assetReader:(AVAssetReader *)arg2 version:(Version *)arg3 unknownStreamId:(NSString *)arg4 reader:(MOVStreamReader *)arg5 delegate:(id <MOVStreamReaderDelegate>)arg6 error:(id *)arg7;
- (id)initWithSceneTrack:(AVAssetTrack *)arg1 assetReader:(AVAssetReader *)arg2 associatedMetadataTracks:(NSArray *)arg3 version:(Version *)arg4 unknownStreamId:(NSString *)arg5 reader:(MOVStreamReader *)arg6 delegate:(id <MOVStreamReaderDelegate>)arg7 error:(id *)arg8;
- (id)initWithAudioTrack:(AVAssetTrack *)arg1 assetReader:(AVAssetReader *)arg2 associatedMetadataTracks:(NSArray *)arg3 version:(Version *)arg4 unknownStreamId:(NSString *)arg5 reader:(MOVStreamReader *)arg6 delegate:(id <MOVStreamReaderDelegate>)arg7 error:(id *)arg8;
- (id)initWithVideoTrack:(AVAssetTrack *)arg1 assetReader:(AVAssetReader *)arg2 associatedMetadataTracks:(NSArray *)arg3 version:(Version *)arg4 unknownStreamId:(NSString *)arg5 reader:(MOVStreamReader *)arg6 delegate:(id <MOVStreamReaderDelegate>)arg7 error:(id *)arg8;
@end

