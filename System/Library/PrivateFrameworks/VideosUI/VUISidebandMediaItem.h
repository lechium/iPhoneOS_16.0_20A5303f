//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "VUIMediaItem.h"

@class VUISidebandMediaItemAssetController, VUIVideoManagedObject;

__attribute__((visibility("hidden")))
@interface VUISidebandMediaItem : VUIMediaItem
{
    VUIVideoManagedObject *_videoManagedObject;	// 8 = 0x8
    VUISidebandMediaItemAssetController *_assetController;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000002680e9
@property(retain, nonatomic) VUISidebandMediaItemAssetController *assetController; // @synthesize assetController=_assetController;
@property(retain, nonatomic) VUIVideoManagedObject *videoManagedObject; // @synthesize videoManagedObject=_videoManagedObject;
- (void)_videoManagedObjectPlaybackExpirationWillChange:(id)arg1;	// IMP=0x0000000000268099
- (id)imageLoadParamsWithImageType:(unsigned long long)arg1;	// IMP=0x000000000026802b
- (id)brandName;	// IMP=0x0000000000267dfb
- (id)brandID;	// IMP=0x0000000000267c7d
- (_Bool)renewsOfflineKeysAutomatically;	// IMP=0x0000000000267b0b
- (_Bool)allowsManualDownloadRenewal;	// IMP=0x00000000002679ca
- (id)availabilityEndDate;	// IMP=0x000000000026784c
- (id)downloadExpirationDate;	// IMP=0x00000000002676ce
- (id)episodeIndexInSeries;	// IMP=0x0000000000267503
- (id)fractionalEpisodeNumber;	// IMP=0x0000000000267338
- (id)episodeNumber;	// IMP=0x000000000026716d
- (id)showCanonicalID;	// IMP=0x0000000000266f73
- (id)seasonCanonicalID;	// IMP=0x0000000000266d79
- (id)seasonIdentifier;	// IMP=0x0000000000266a68
- (id)seasonTitle;	// IMP=0x000000000026686e
- (id)seasonNumber;	// IMP=0x0000000000266674
- (id)showIdentifier;	// IMP=0x000000000026641b
- (id)showTitle;	// IMP=0x0000000000266203
- (id)isPlayable;	// IMP=0x00000000002661f6
- (id)isLocal;	// IMP=0x0000000000266046
- (id)HLSColorCapability;	// IMP=0x0000000000266039
- (id)colorCapability;	// IMP=0x000000000026602c
- (id)storeID;	// IMP=0x0000000000265e69
- (id)releaseDate;	// IMP=0x0000000000265ceb
- (id)addedDate;	// IMP=0x0000000000265b6d
- (id)genreTitle;	// IMP=0x00000000002659e6
- (id)duration;	// IMP=0x0000000000265868
- (id)title;	// IMP=0x00000000002656c9
- (_Bool)markedAsDeleted;	// IMP=0x0000000000265588
- (id)canonicalID;	// IMP=0x00000000002653e5
- (void)dealloc;	// IMP=0x0000000000265370
- (id)initWithMediaLibrary:(id)arg1 videoManagedObject:(id)arg2 requestedProperties:(id)arg3;	// IMP=0x0000000000265093

@end
