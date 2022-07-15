//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class NSArray, NSDate, NSError, NSProgress, PHPickerConfiguration, PXAssetsDataSourceManager;
@protocol PXPresentationEnvironment;

@protocol PXSharedLibrarySourceLibraryInfo <NSObject>
@property(readonly, nonatomic) _Bool isCloudPhotoLibraryInitialSyncCompleted;
@property(readonly, nonatomic) _Bool isCloudPhotoLibraryEnabled;
- (_Bool)presentCustomInformationForError:(NSError *)arg1 customTitle:(id *)arg2 customMessage:(id *)arg3;
- (void)createPreviewWithEmailAddresses:(NSArray *)arg1 phoneNumbers:(NSArray *)arg2 autoSharePolicy:(long long)arg3 startDate:(NSDate *)arg4 personUUIDs:(NSArray *)arg5 progress:(NSProgress *)arg6 presentationEnvironment:(id <PXPresentationEnvironment>)arg7 withCompletionHandler:(void (^)(id <PXSharedLibrary>, NSError *))arg8;
- (void)createSharedLibraryWithEmailAddresses:(NSArray *)arg1 phoneNumbers:(NSArray *)arg2 autoSharePolicy:(long long)arg3 startDate:(NSDate *)arg4 personUUIDs:(NSArray *)arg5 progress:(NSProgress *)arg6 presentationEnvironment:(id <PXPresentationEnvironment>)arg7 withCompletionHandler:(void (^)(id <PXSharedLibrary>, NSError *))arg8;
- (CDStruct_14f26992)assetsCountsForAssetLocalIdentifiers:(NSArray *)arg1;
- (PHPickerConfiguration *)pickerConfiguration;
- (PXAssetsDataSourceManager *)createDataSourceManager;
- (void)fetchEstimatedAssetsCountsForStartDate:(NSDate *)arg1 personUUIDs:(NSArray *)arg2 completion:(void (^)(struct))arg3;
- (NSDate *)fetchSuggestedStartDateForPersonUUIDs:(NSArray *)arg1;
@end
