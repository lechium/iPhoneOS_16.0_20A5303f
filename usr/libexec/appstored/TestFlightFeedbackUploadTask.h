//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class BetaAppFeedbackMemoryEntity, TestFlightFeedbackDatabaseStore;

@interface TestFlightFeedbackUploadTask
{
    TestFlightFeedbackDatabaseStore *_dataStore;	// 8 = 0x8
    BetaAppFeedbackMemoryEntity *_entity;	// 16 = 0x10
    TestFlightFeedbackDatabaseStore *_databaseStore;	// 24 = 0x18
}

+ (id)taskWithDatabaseStore:(id)arg1 andEntity:(id)arg2;	// IMP=0x0040000000111458
- (void).cxx_destruct;	// IMP=0x0020000000112a0c
@property(retain, nonatomic) TestFlightFeedbackDatabaseStore *databaseStore; // @synthesize databaseStore=_databaseStore;
@property(readonly, nonatomic) BetaAppFeedbackMemoryEntity *entity; // @synthesize entity=_entity;
- (void)_uploadImagesForFeedbackEntity:(id)arg1;	// IMP=0x00100000001123a4
- (void)_updateEntity:(id)arg1 shouldContinue:(_Bool)arg2;	// IMP=0x0010000000112149
- (void)_submitFeedbackEntity:(id)arg1;	// IMP=0x0010000000111ea4
- (void)_markHasSharedFeedbackForEntity:(id)arg1;	// IMP=0x0010000000111d6e
- (void)_fetchImageUploadURLsForFeedbackEntity:(id)arg1;	// IMP=0x0010000000111718
- (void)_continueFeedbackSubmissionForFeedbackEntity:(id)arg1;	// IMP=0x00100000001116c5
- (void)main;	// IMP=0x0010000000111550
- (id)initWithEntity:(id)arg1;	// IMP=0x00100000001114e2

@end

