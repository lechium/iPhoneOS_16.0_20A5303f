//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ATXFaceGalleryConfiguration, ATXFaceGalleryItem, ATXFaceSuggestionFocusMode, NSArray, NSDictionary, NSString;

@protocol ATXFaceSuggestionClientXPCInterface
- (void)logFaceGalleryDidAppearWithFaceGalleryConfiguration:(ATXFaceGalleryConfiguration *)arg1;
- (void)fetchComplicationSuggestionsModelDescriptionWithCompletion:(void (^)(NSString *, NSError *))arg1;
- (void)inputDescriptionForComplicationSuggestionSignal:(NSString *)arg1 completion:(void (^)(NSString *, NSError *))arg2;
- (void)posterBoardDidUpdateConfigurations:(NSArray *)arg1 completion:(void (^)(NSError *))arg2;
- (void)posterBoardDidUpdateDescriptors:(NSDictionary *)arg1 completion:(void (^)(_Bool))arg2;
- (void)fetchMetricsDescriptionWithCompletion:(void (^)(NSString *, NSError *))arg1;
- (void)fetchScoredComplicationDescriptionWithCompletion:(void (^)(NSString *, NSError *))arg1;
- (void)refreshComplicationsCacheWithCompletion:(void (^)(NSError *))arg1;
- (void)fetchInlineComplicationSetForFaceGalleryItem:(ATXFaceGalleryItem *)arg1 completion:(void (^)(ATXComplicationSet *, NSError *))arg2;
- (void)fetchComplicationSetsForFaceGalleryItem:(ATXFaceGalleryItem *)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)fetchPosterConfigurationsWithCompletion:(void (^)(NSArray *, NSError *))arg1;
- (void)fetchRankedPosterDescriptors:(void (^)(NSArray *, NSError *))arg1;
- (void)fetchPosterDescriptorsAndSuggestionDataWithCompletion:(void (^)(NSDictionary *, NSError *))arg1;
- (void)fetchFaceSuggestionsForFocusMode:(ATXFaceSuggestionFocusMode *)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)regenerateFaceGalleryConfigurationWithCompletion:(void (^)(ATXFaceGalleryConfiguration *, NSError *))arg1;
- (void)fetchFaceGalleryConfigurationWithCompletion:(void (^)(ATXFaceGalleryConfiguration *, NSError *))arg1;
@end

