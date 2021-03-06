//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MPCMediaRemoteController.h"

@class MPCFuture;

__attribute__((visibility("hidden")))
@interface _MPCMediaRemoteNullController : MPCMediaRemoteController
{
    MPCFuture *_playQueueIdentifiersFuture;	// 208 = 0xd0
    MPCFuture *_contentItemForIdentifierFuture;	// 216 = 0xd8
    MPCFuture *_contentItemArtworkForIdentifierFuture;	// 224 = 0xe0
}

+ (_Bool)_shouldRegisterForNotifications;	// IMP=0x00600000000ebc1f
- (void).cxx_destruct;	// IMP=0x00000000000ebbdd
- (void)invalidateAllTokens;	// IMP=0x00000000000ebb65
- (id)contentItemArtworkForContentItemIdentifier:(id)arg1 artworkIdentifier:(id)arg2 size:(struct CGSize)arg3;	// IMP=0x00000000000ebb50
- (long long)contentItemArtworkCacheStateForIdentifier:(id)arg1 size:(struct CGSize)arg2;	// IMP=0x00000000000ebb45
- (id)contentItemForIdentifier:(id)arg1;	// IMP=0x00000000000ebb30
- (long long)contentItemCacheStateForIdentifier:(id)arg1;	// IMP=0x00000000000ebb25
- (id)playingIdentifier;	// IMP=0x00000000000ebb17
- (long long)playingIdentifierCacheState;	// IMP=0x00000000000ebb0c
- (id)playQueueIdentifiersForRequest:(void *)arg1;	// IMP=0x00000000000ebaf7
- (id)playQueueIdentifiersForRange:(struct _MSVSignedRange)arg1;	// IMP=0x00000000000ebae2
- (long long)playQueueIdentifiersCacheStateForRange:(struct _MSVSignedRange)arg1;	// IMP=0x00000000000ebad7
- (void)sendCommand:(unsigned int)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000eba3b
- (id)supportedCommands;	// IMP=0x00000000000eba2d
- (long long)supportedCommandsCacheState;	// IMP=0x00000000000eba22
- (id)playbackState;	// IMP=0x00000000000eba14
- (long long)playbackStateCacheState;	// IMP=0x00000000000eba09
- (id)_init;	// IMP=0x00000000000eb57f

@end

