//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIActivity.h>

@class NSString, NSUUID, UIImage, UISUIActivityConfiguration;

@interface SUIHostActivityProxy : UIActivity
{
    _Bool _activitySupportsPromiseURLs;	// 8 = 0x8
    _Bool _appIsDocumentTypeOwner;	// 9 = 0x9
    NSString *_activityTitle;	// 16 = 0x10
    NSString *_activityType;	// 24 = 0x18
    UIImage *_activityImage;	// 32 = 0x20
    UISUIActivityConfiguration *_activityConfiguration;	// 40 = 0x28
    NSUUID *_hostActivityUUID;	// 48 = 0x30
    NSString *_fallbackActivityType;	// 56 = 0x38
    NSString *_positionBeforeActivityType;	// 64 = 0x40
    long long _defaultSortGroup;	// 72 = 0x48
    UIImage *_actionImage;	// 80 = 0x50
    NSString *_systemImageName;	// 88 = 0x58
    struct CGSize _preferredThumbnailSize;	// 96 = 0x60
}

+ (Class)activityProxyClassForActivityCategory:(long long)arg1;	// IMP=0x004000000000558c
+ (id)newWithActivityConfiguration:(id)arg1;	// IMP=0x001000000000551b
+ (id)activitiesForConfigurations:(id)arg1;	// IMP=0x0010000000005361
- (void).cxx_destruct;	// IMP=0x0020000000005b9a
@property(retain, nonatomic) NSString *systemImageName; // @synthesize systemImageName=_systemImageName;
@property(retain, nonatomic) UIImage *actionImage; // @synthesize actionImage=_actionImage;
@property(nonatomic) _Bool appIsDocumentTypeOwner; // @synthesize appIsDocumentTypeOwner=_appIsDocumentTypeOwner;
@property(nonatomic) long long defaultSortGroup; // @synthesize defaultSortGroup=_defaultSortGroup;
@property(nonatomic) _Bool activitySupportsPromiseURLs; // @synthesize activitySupportsPromiseURLs=_activitySupportsPromiseURLs;
@property(retain, nonatomic) NSString *positionBeforeActivityType; // @synthesize positionBeforeActivityType=_positionBeforeActivityType;
@property(nonatomic) struct CGSize preferredThumbnailSize; // @synthesize preferredThumbnailSize=_preferredThumbnailSize;
@property(retain, nonatomic) NSString *fallbackActivityType; // @synthesize fallbackActivityType=_fallbackActivityType;
@property(retain, nonatomic) NSUUID *hostActivityUUID; // @synthesize hostActivityUUID=_hostActivityUUID;
@property(retain, nonatomic) UISUIActivityConfiguration *activityConfiguration; // @synthesize activityConfiguration=_activityConfiguration;
@property(retain, nonatomic) UIImage *activityImage; // @synthesize activityImage=_activityImage;
@property(retain, nonatomic) NSString *activityType; // @synthesize activityType=_activityType;
@property(retain, nonatomic) NSString *activityTitle; // @synthesize activityTitle=_activityTitle;
- (id)debugDescription;	// IMP=0x00100000000058e7
- (void)activityDidFinish:(_Bool)arg1;	// IMP=0x00100000000058e1
- (void)performActivity;	// IMP=0x00100000000058db
- (void)prepareWithActivityItems:(id)arg1;	// IMP=0x00100000000058d5
- (_Bool)canPerformWithActivityItems:(id)arg1;	// IMP=0x00100000000058cd
- (id)_systemImageName;	// IMP=0x00100000000058b8
- (id)_actionImage;	// IMP=0x00100000000058a3
- (_Bool)_appIsDocumentTypeOwner;	// IMP=0x0010000000005893
- (long long)_defaultSortGroup;	// IMP=0x0010000000005882
- (_Bool)_activitySupportsPromiseURLs;	// IMP=0x0010000000005872
- (struct CGSize)_thumbnailSize;	// IMP=0x001000000000585a
- (id)_beforeActivity;	// IMP=0x0010000000005845
- (id)_activityTypeUsingFallbackActivityTypeIfNecessary;	// IMP=0x001000000000581d
@property(readonly, nonatomic) NSUUID *activityUUID;
- (id)initWithAttributesFromActivityConfiguration:(id)arg1;	// IMP=0x00100000000055c4

@end
