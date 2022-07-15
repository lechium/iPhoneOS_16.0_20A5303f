//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/SFCardSection-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, SFColor, SFLatLng, SFMapRegion;

@protocol SFMapCardSection <SFCardSection>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(copy, nonatomic) NSArray *pins;
@property(nonatomic) int pinBehavior;
@property(retain, nonatomic) SFMapRegion *boundingMapRegion;
@property(nonatomic) int sizeFormat;
@property(nonatomic) _Bool interactive;
@property(copy, nonatomic) NSString *footnote;
@property(copy, nonatomic) NSString *footnoteLabel;
@property(retain, nonatomic) SFColor *pinColor;
@property(retain, nonatomic) SFLatLng *location;
@property(retain, nonatomic) SFColor *backgroundColor;
@property(nonatomic) int separatorStyle;
@property(copy, nonatomic) NSString *type;
@property(nonatomic) _Bool hasBottomPadding;
@property(nonatomic) _Bool hasTopPadding;
@property(nonatomic) _Bool canBeHidden;
@property(copy, nonatomic) NSString *punchoutPickerDismissText;
@property(copy, nonatomic) NSString *punchoutPickerTitle;
@property(copy, nonatomic) NSArray *punchoutOptions;
@end
