//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOPlaceCollection, MISSING_TYPE;

@interface CuratedCollectionViewAnalyticsController : NSObject
{
    _Bool _saved;	// 8 = 0x8
    int _target;	// 12 = 0xc
    unsigned long long _collectionMUID;	// 16 = 0x10
    MISSING_TYPE *_curatedCollection;	// 24 = 0x18
}

+ (id)_eventValueForMediaType:(long long)arg1;	// IMP=0x0040000000b49d37
- (void).cxx_destruct;	// IMP=0x0020000000b49d9b
@property(nonatomic) _Bool saved; // @synthesize saved=_saved;
@property(retain, nonatomic) GEOPlaceCollection *curatedCollection; // @synthesize curatedCollection=_curatedCollection;
@property(readonly, nonatomic) int target; // @synthesize target=_target;
@property(nonatomic) unsigned long long collectionMUID; // @synthesize collectionMUID=_collectionMUID;
- (void)_captureCollectionViewEvent:(struct CuratedCollectionViewEvent)arg1;	// IMP=0x0010000000b49b4d
- (struct CuratedCollectionViewEvent)_createBaseEvent;	// IMP=0x0010000000b499b2
- (void)logRevealAppClipWithURL:(id)arg1;	// IMP=0x0010000000b49898
- (void)logOpenAppClipWithURL:(id)arg1;	// IMP=0x0010000000b49772
- (void)logOpenWebsite;	// IMP=0x0010000000b496a5
- (void)logDiscoverMoreFromPublisher;	// IMP=0x0010000000b495d8
- (void)logSavePlaceItemToCuratedCollectionWithMUID:(unsigned long long)arg1;	// IMP=0x0010000000b494a7
- (void)logPunchOutUsingAppWithIdentifier:(id)arg1;	// IMP=0x0010000000b493ab
- (void)logPunchOutToURL:(id)arg1;	// IMP=0x0010000000b49298
- (void)logTapMediaAppWithIdentifier:(id)arg1;	// IMP=0x0010000000b49195
- (void)logShowMediaAppMenu;	// IMP=0x0010000000b490c8
- (void)logTapMediaIntegrationWithType:(long long)arg1 verticalIndex:(long long)arg2;	// IMP=0x0010000000b48f82
- (void)logReportAProblem;	// IMP=0x0010000000b48eb5
- (void)logPunchOutToPublisherReviewWithIndex:(unsigned long long)arg1;	// IMP=0x0010000000b48dad
- (void)logRemoveCuratedCollection;	// IMP=0x0010000000b48ce7
- (void)logSaveCuratedCollection;	// IMP=0x0010000000b48c21
- (void)logPullUpCuratedCollectionView;	// IMP=0x0010000000b48b54
- (void)logTapCollectionItem:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0010000000b48976
- (void)logTapShowLessDescription;	// IMP=0x0010000000b488a9
- (void)logTapShowMoreDescription;	// IMP=0x0010000000b487dc
- (void)logTryAgain;	// IMP=0x0010000000b4870f
- (void)logClose;	// IMP=0x0010000000b48642
- (void)logScrollDown;	// IMP=0x0010000000b48575
- (void)logScrollUp;	// IMP=0x0010000000b484a8
- (void)logRevealCuratedCollectionView;	// IMP=0x0010000000b483ad
- (void)logShareCuratedCollection;	// IMP=0x0010000000b4825a
- (void)updateWithPlaceCollection:(id)arg1;	// IMP=0x0010000000b48188
- (id)initWithCollectionIdentifier:(id)arg1;	// IMP=0x0010000000b480a3

@end

