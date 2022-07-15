//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CLSSurvey, NSArray, NSMutableArray, NSMutableDictionary, NSMutableSet;

@interface PDPublishSurveyAnswersOperation
{
    CLSSurvey *_survey;	// 24 = 0x18
    NSArray *_answers;	// 32 = 0x20
    NSArray *_assets;	// 40 = 0x28
    NSMutableArray *_answersFromServer;	// 48 = 0x30
    NSMutableDictionary *_answersByError;	// 56 = 0x38
    NSMutableSet *_deletedAnswerItemIDs;	// 64 = 0x40
    NSMutableSet *_deletedAnswerAssetIDs;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0020000000084d59
@property(retain, nonatomic) NSMutableSet *deletedAnswerAssetIDs; // @synthesize deletedAnswerAssetIDs=_deletedAnswerAssetIDs;
@property(retain, nonatomic) NSMutableSet *deletedAnswerItemIDs; // @synthesize deletedAnswerItemIDs=_deletedAnswerItemIDs;
@property(retain, nonatomic) NSMutableDictionary *answersByError; // @synthesize answersByError=_answersByError;
@property(retain, nonatomic) NSMutableArray *answersFromServer; // @synthesize answersFromServer=_answersFromServer;
@property(readonly, nonatomic) NSArray *assets; // @synthesize assets=_assets;
@property(readonly, nonatomic) NSArray *answers; // @synthesize answers=_answers;
@property(readonly, copy, nonatomic) CLSSurvey *survey; // @synthesize survey=_survey;
- (int)_assetCreateOrUpdatePayloadAction:(id)arg1;	// IMP=0x0010000000084c72
- (int)_convertActionToPayloadAction:(long long)arg1;	// IMP=0x0010000000084c60
- (id)errorWithUserInfo;	// IMP=0x0010000000084a2c
- (_Bool)_deleteDeletedEntityWithIDs:(id)arg1;	// IMP=0x001000000008490a
- (_Bool)processPayloadFromResponse:(id)arg1 error:(id *)arg2;	// IMP=0x001000000008428c
- (_Bool)processResponseObject:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000084150
- (id)requestData;	// IMP=0x001000000008291f
- (id)initWithDatabase:(id)arg1 survey:(id)arg2 answers:(id)arg3 assets:(id)arg4;	// IMP=0x00100000000827c2
- (_Bool)stopProcessingIfResponseStatusPayloadFailed;	// IMP=0x00100000000827ba
- (Class)expectedResponseClass;	// IMP=0x00100000000827a9
- (id)acceptContentType;	// IMP=0x001000000008279c
- (id)requestContentType;	// IMP=0x001000000008278f
- (id)endpointIdentifier;	// IMP=0x0010000000082782
- (_Bool)acceptsPayloadType:(int)arg1;	// IMP=0x0010000000082767
- (id)logSubsystem;	// IMP=0x0010000000082753

@end
