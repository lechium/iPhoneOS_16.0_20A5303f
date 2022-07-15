//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "VUIDeviceMediaLibrary.h"

@class VUISidebandMediaLibrary;

__attribute__((visibility("hidden")))
@interface VUIAggregateMediaLibrary : VUIDeviceMediaLibrary
{
    VUIDeviceMediaLibrary *_deviceMediaLibrary;	// 8 = 0x8
    VUISidebandMediaLibrary *_sidebandMediaLibrary;	// 16 = 0x10
}

+ (id)keyPathsForValuesAffectingConnectionState;	// IMP=0x00600000002bed1c
- (void).cxx_destruct;	// IMP=0x00000000002bed82
@property(readonly, nonatomic) VUISidebandMediaLibrary *sidebandMediaLibrary; // @synthesize sidebandMediaLibrary=_sidebandMediaLibrary;
@property(readonly, nonatomic) VUIDeviceMediaLibrary *deviceMediaLibrary; // @synthesize deviceMediaLibrary=_deviceMediaLibrary;
- (void)_sidebandMediaLibraryContentsDidChangeNotification:(id)arg1;	// IMP=0x00000000002bed4e
- (void)_deviceMediaLibraryContentsDidChange:(id)arg1;	// IMP=0x00000000002bed3c
- (id)_imageLoadOperationWithParams:(id)arg1 scaleToSize:(struct CGSize)arg2 cropToFit:(_Bool)arg3;	// IMP=0x00000000002bec7c
- (id)_imageLoadParamsForImageLoaderObject:(id)arg1;	// IMP=0x00000000002bebf9
- (id)_imageLoaderIdentifier;	// IMP=0x00000000002beba9
- (id)saveMediaEntity:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000002beab5
- (id)enqueueFetchRequests:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000002bdf57
- (id)enqueueMediaItemEntityTypesFetchWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000002bd834
- (void)connectWithCompletionHandler:(CDUnknownBlockType)arg1 progressHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000002bd7ae
- (unsigned long long)connectionState;	// IMP=0x00000000002bd76a
- (id)title;	// IMP=0x00000000002bd71a
- (void)updateFromCloudWithReason:(long long)arg1;	// IMP=0x00000000002bd6ce
- (void)updateProgressWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000002bd65c
- (_Bool)isInitialUpdateInProgress;	// IMP=0x00000000002bd5d3
- (_Bool)isUpdating;	// IMP=0x00000000002bd54a
- (void)dealloc;	// IMP=0x00000000002bd4d5
- (id)initWithManager:(id)arg1 deviceMediaLibrary:(id)arg2 sidebandMediaLibrary:(id)arg3;	// IMP=0x00000000002bd358

@end
