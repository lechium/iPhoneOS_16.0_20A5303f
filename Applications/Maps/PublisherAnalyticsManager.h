//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol GEOCollectionPublisherAttribution;

@interface PublisherAnalyticsManager : NSObject
{
    struct PublisherEvent event;	// 8 = 0x8
    id <GEOCollectionPublisherAttribution> _attribution;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0020000000129107
- (void)cleanUp;	// IMP=0x0010000000129078
- (void)logEvent;	// IMP=0x0010000000128f46
- (void)publisherTryAgainTapped;	// IMP=0x0010000000128f11
- (void)publisherCollectionTapped:(id)arg1 atIndex:(unsigned long long)arg2 isCurrentlySaved:(_Bool)arg3;	// IMP=0x0010000000128e03
- (void)publisherFilterTappedWithValue:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0010000000128d59
- (void)publisherCollectionsScrolledUp;	// IMP=0x0010000000128d24
- (void)publisherCollectionsScrolledDown;	// IMP=0x0010000000128cef
- (void)publisherHeaderCloseButtonTapped;	// IMP=0x0010000000128cba
- (void)publisherHeaderWebsiteButtonTapped;	// IMP=0x0010000000128bc9
- (void)publisherHeaderShareButtonTapped;	// IMP=0x0010000000128ab1
- (void)publisherHeaderAppButtonTapped;	// IMP=0x00100000001289c0
- (void)publisherTrayRevealed;	// IMP=0x001000000012898b
- (id)initWithPublisherId:(id)arg1 usingAttribution:(id)arg2;	// IMP=0x00100000001288a9

@end

