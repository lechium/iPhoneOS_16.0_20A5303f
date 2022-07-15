//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString, PDDPDate;

@interface PDDPSurveyStep : PBCodable
{
    double _sliderMaximum;	// 8 = 0x8
    double _sliderMinimum;	// 16 = 0x10
    NSString *_answerFormatObjectId;	// 24 = 0x18
    int _answerFormatType;	// 32 = 0x20
    NSMutableArray *_classIds;	// 40 = 0x28
    PDDPDate *_dateCreated;	// 48 = 0x30
    PDDPDate *_dateLastModified;	// 56 = 0x38
    int _displayOrder;	// 64 = 0x40
    int _multipleChoiceType;	// 68 = 0x44
    NSString *_objectId;	// 72 = 0x48
    int _openResponseMaximumTextLength;	// 80 = 0x50
    int _openResponseMinimumTextLength;	// 84 = 0x54
    NSString *_openResponseTeacherProvidedText;	// 88 = 0x58
    int _openResponseType;	// 96 = 0x60
    NSMutableArray *_optionItems;	// 104 = 0x68
    NSString *_parentObjectId;	// 112 = 0x70
    NSString *_questionText;	// 120 = 0x78
    NSString *_sliderMaximumLabel;	// 128 = 0x80
    NSString *_sliderMiddleLabel;	// 136 = 0x88
    NSString *_sliderMinimumLabel;	// 144 = 0x90
    int _sliderType;	// 152 = 0x98
    int _surveyStepType;	// 156 = 0x9c
    int _version;	// 160 = 0xa0
    _Bool _openResponseAllowMedia;	// 164 = 0xa4
    struct {
        unsigned int sliderMaximum:1;
        unsigned int sliderMinimum:1;
        unsigned int answerFormatType:1;
        unsigned int displayOrder:1;
        unsigned int multipleChoiceType:1;
        unsigned int openResponseMaximumTextLength:1;
        unsigned int openResponseMinimumTextLength:1;
        unsigned int openResponseType:1;
        unsigned int sliderType:1;
        unsigned int surveyStepType:1;
        unsigned int version:1;
        unsigned int openResponseAllowMedia:1;
    } _has;	// 168 = 0xa8
}

+ (Class)classIdsType;	// IMP=0x00200000001a4a4a
+ (Class)optionItemsType;	// IMP=0x00100000001a453f
- (void).cxx_destruct;	// IMP=0x00200000001a7ed5
@property(retain, nonatomic) NSMutableArray *classIds; // @synthesize classIds=_classIds;
@property(nonatomic) int openResponseMaximumTextLength; // @synthesize openResponseMaximumTextLength=_openResponseMaximumTextLength;
@property(nonatomic) int openResponseMinimumTextLength; // @synthesize openResponseMinimumTextLength=_openResponseMinimumTextLength;
@property(nonatomic) _Bool openResponseAllowMedia; // @synthesize openResponseAllowMedia=_openResponseAllowMedia;
@property(retain, nonatomic) NSString *openResponseTeacherProvidedText; // @synthesize openResponseTeacherProvidedText=_openResponseTeacherProvidedText;
@property(retain, nonatomic) NSString *sliderMiddleLabel; // @synthesize sliderMiddleLabel=_sliderMiddleLabel;
@property(retain, nonatomic) NSString *sliderMaximumLabel; // @synthesize sliderMaximumLabel=_sliderMaximumLabel;
@property(retain, nonatomic) NSString *sliderMinimumLabel; // @synthesize sliderMinimumLabel=_sliderMinimumLabel;
@property(nonatomic) double sliderMaximum; // @synthesize sliderMaximum=_sliderMaximum;
@property(nonatomic) double sliderMinimum; // @synthesize sliderMinimum=_sliderMinimum;
@property(retain, nonatomic) NSMutableArray *optionItems; // @synthesize optionItems=_optionItems;
@property(retain, nonatomic) NSString *answerFormatObjectId; // @synthesize answerFormatObjectId=_answerFormatObjectId;
@property(nonatomic) int displayOrder; // @synthesize displayOrder=_displayOrder;
@property(retain, nonatomic) NSString *questionText; // @synthesize questionText=_questionText;
@property(nonatomic) int version; // @synthesize version=_version;
@property(retain, nonatomic) PDDPDate *dateLastModified; // @synthesize dateLastModified=_dateLastModified;
@property(retain, nonatomic) PDDPDate *dateCreated; // @synthesize dateCreated=_dateCreated;
@property(retain, nonatomic) NSString *parentObjectId; // @synthesize parentObjectId=_parentObjectId;
@property(retain, nonatomic) NSString *objectId; // @synthesize objectId=_objectId;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000001a7763
- (unsigned long long)hash;	// IMP=0x00100000001a7230
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000001a6d01
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000001a66e5
- (void)copyTo:(id)arg1;	// IMP=0x00100000001a62d3
- (void)writeTo:(id)arg1;	// IMP=0x00100000001a5e09
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000001a5dfc
- (id)dictionaryRepresentation;	// IMP=0x00100000001a4b0a
- (id)description;	// IMP=0x00100000001a4a5b
- (id)classIdsAtIndex:(unsigned long long)arg1;	// IMP=0x00100000001a4a2d
- (unsigned long long)classIdsCount;	// IMP=0x00100000001a4a10
- (void)addClassIds:(id)arg1;	// IMP=0x00100000001a49a6
- (void)clearClassIds;	// IMP=0x00100000001a4989
@property(nonatomic) _Bool hasOpenResponseMaximumTextLength;
@property(nonatomic) _Bool hasOpenResponseMinimumTextLength;
@property(nonatomic) _Bool hasOpenResponseAllowMedia;
@property(readonly, nonatomic) _Bool hasOpenResponseTeacherProvidedText;
- (int)StringAsOpenResponseType:(id)arg1;	// IMP=0x00100000001a47fa
- (id)openResponseTypeAsString:(int)arg1;	// IMP=0x00100000001a47b1
@property(nonatomic) _Bool hasOpenResponseType;
@property(nonatomic) int openResponseType; // @synthesize openResponseType=_openResponseType;
@property(readonly, nonatomic) _Bool hasSliderMiddleLabel;
@property(readonly, nonatomic) _Bool hasSliderMaximumLabel;
@property(readonly, nonatomic) _Bool hasSliderMinimumLabel;
@property(nonatomic) _Bool hasSliderMaximum;
@property(nonatomic) _Bool hasSliderMinimum;
- (int)StringAsSliderType:(id)arg1;	// IMP=0x00100000001a4612
- (id)sliderTypeAsString:(int)arg1;	// IMP=0x00100000001a45bd
@property(nonatomic) _Bool hasSliderType;
@property(nonatomic) int sliderType; // @synthesize sliderType=_sliderType;
- (id)optionItemsAtIndex:(unsigned long long)arg1;	// IMP=0x00100000001a4522
- (unsigned long long)optionItemsCount;	// IMP=0x00100000001a4505
- (void)addOptionItems:(id)arg1;	// IMP=0x00100000001a449b
- (void)clearOptionItems;	// IMP=0x00100000001a447e
- (int)StringAsMultipleChoiceType:(id)arg1;	// IMP=0x00100000001a43b3
- (id)multipleChoiceTypeAsString:(int)arg1;	// IMP=0x00100000001a436a
@property(nonatomic) _Bool hasMultipleChoiceType;
@property(nonatomic) int multipleChoiceType; // @synthesize multipleChoiceType=_multipleChoiceType;
- (int)StringAsAnswerFormatType:(id)arg1;	// IMP=0x00100000001a4250
- (id)answerFormatTypeAsString:(int)arg1;	// IMP=0x00100000001a4207
@property(nonatomic) _Bool hasAnswerFormatType;
@property(nonatomic) int answerFormatType; // @synthesize answerFormatType=_answerFormatType;
@property(readonly, nonatomic) _Bool hasAnswerFormatObjectId;
@property(nonatomic) _Bool hasDisplayOrder;
@property(readonly, nonatomic) _Bool hasQuestionText;
- (int)StringAsSurveyStepType:(id)arg1;	// IMP=0x00100000001a40c8
- (id)surveyStepTypeAsString:(int)arg1;	// IMP=0x00100000001a4073
@property(nonatomic) _Bool hasSurveyStepType;
@property(nonatomic) int surveyStepType; // @synthesize surveyStepType=_surveyStepType;
// Error: Property attributes should begin with the type ('T') attribute, property name: hasVersion
// Property attributes: (null)

@property(readonly, nonatomic) _Bool hasDateLastModified;
@property(readonly, nonatomic) _Bool hasDateCreated;
@property(readonly, nonatomic) _Bool hasParentObjectId;
@property(readonly, nonatomic) _Bool hasObjectId;

@end
