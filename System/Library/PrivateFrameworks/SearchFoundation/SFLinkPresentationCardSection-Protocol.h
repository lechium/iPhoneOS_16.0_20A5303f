//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/SFCardSection-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString;

@protocol SFLinkPresentationCardSection <SFCardSection>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(nonatomic) _Bool isHighlighted;
@property(copy, nonatomic) NSArray *peopleToBadge;
@property(copy, nonatomic) NSString *url;
@property(copy, nonatomic) NSString *coreSpotlightIdentifier;
@end

