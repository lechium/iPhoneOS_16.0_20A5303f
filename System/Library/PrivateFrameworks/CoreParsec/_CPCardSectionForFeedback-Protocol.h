//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreParsec/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, _CPButtonForFeedback, _CPCardSectionForFeedback;

@protocol _CPCardSectionForFeedback <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(copy, nonatomic) NSArray *buttons;
@property(copy, nonatomic) NSString *cardSectionDetail;
@property(nonatomic) int cardSectionType;
@property(copy, nonatomic) NSArray *cardSections;
@property(copy, nonatomic) NSString *commandDetail;
@property(nonatomic) int commandType;
@property(copy, nonatomic) NSString *resultId;
@property(copy, nonatomic) NSString *actionDestination;
@property(copy, nonatomic) NSString *actionTarget;
@property(copy, nonatomic) NSString *cardSectionId;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (_CPButtonForFeedback *)buttonsAtIndex:(unsigned long long)arg1;
- (unsigned long long)buttonsCount;
- (void)addButtons:(_CPButtonForFeedback *)arg1;
- (void)clearButtons;
- (_CPCardSectionForFeedback *)cardSectionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)cardSectionsCount;
- (void)addCardSections:(_CPCardSectionForFeedback *)arg1;
- (void)clearCardSections;
@end
