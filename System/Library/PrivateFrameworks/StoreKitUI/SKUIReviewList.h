//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface SKUIReviewList : NSObject
{
    NSDictionary *_dictionary;	// 8 = 0x8
    NSMutableArray *_reviews;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001f36c6
@property(readonly, nonatomic) NSArray *reviews; // @synthesize reviews=_reviews;
@property(readonly, nonatomic) NSMutableDictionary *cacheRepresentation;
- (id)initWithCacheRepresentation:(id)arg1;	// IMP=0x00000000001f320c
@property(readonly, nonatomic) NSURL *writeReviewURL;
@property(readonly, nonatomic) float userRating;
@property(readonly, nonatomic) long long twoStarRatingCount;
@property(readonly, nonatomic) long long threeStarRatingCount;
@property(readonly, nonatomic) long long ratingCount;
@property(readonly, nonatomic) long long oneStarRatingCount;
@property(readonly, nonatomic) long long numberOfPages;
@property(readonly, nonatomic) long long fourStarRatingCount;
@property(readonly, nonatomic) long long fiveStarRatingCount;
- (void)addReviews:(id)arg1;	// IMP=0x00000000001f2e07
- (id)initWithReviewListDictionary:(id)arg1;	// IMP=0x00000000001f2b46

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
