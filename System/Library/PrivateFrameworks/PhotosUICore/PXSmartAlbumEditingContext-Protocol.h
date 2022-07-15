//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class NSArray, NSNumberFormatter;

@protocol PXSmartAlbumEditingContext <NSObject>
@property(readonly, nonatomic) NSArray *personNames;
@property(readonly, nonatomic) NSArray *keywordValues;
@property(readonly, nonatomic) NSArray *lensModels;
@property(readonly, nonatomic) NSArray *cameraModels;
@property(readonly, nonatomic) NSArray *albumValues;
@property(readonly, nonatomic) NSArray *conditionTypeValues;
- (NSArray *)shutterSpeedValuesWithFormatter:(NSNumberFormatter *)arg1;
- (NSArray *)ISOValuesWithFormatter:(NSNumberFormatter *)arg1;
- (NSArray *)focalLengthValuesWithFormatter:(NSNumberFormatter *)arg1;
- (NSArray *)apertureValuesWithFormatter:(NSNumberFormatter *)arg1;
@end
