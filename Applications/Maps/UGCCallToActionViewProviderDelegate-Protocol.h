//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSURL, UGCCallToActionViewProvider;

@protocol UGCCallToActionViewProviderDelegate
- (void)callToActionViewProviderDidUpdateWithPreferredUserUploadedPhoto:(NSURL *)arg1 numberOfPhotos:(long long)arg2;
- (void)callToActionViewProviderDidFinishClearingExistingState:(UGCCallToActionViewProvider *)arg1;
- (void)callToActionViewProviderDidFinishResolvingEditState:(UGCCallToActionViewProvider *)arg1;
- (void)callToActionViewProviderInitialLoadingStateDidChange:(UGCCallToActionViewProvider *)arg1;
@end
