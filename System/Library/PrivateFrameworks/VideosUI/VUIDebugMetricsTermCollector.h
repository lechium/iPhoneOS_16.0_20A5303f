//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface VUIDebugMetricsTermCollector : NSObject
{
}

@property(readonly, nonatomic) NSArray *filteredTerms;
- (id)pageRenderTerms;	// IMP=0x000000000017e63b
- (id)impressionsTerms;	// IMP=0x000000000017e62e
- (id)accountTerms;	// IMP=0x000000000017e621
- (id)searchTerms;	// IMP=0x000000000017e614
- (id)exitTerms;	// IMP=0x000000000017e607
- (id)enterTerms;	// IMP=0x000000000017e5fa
- (id)clickTerms;	// IMP=0x000000000017e5ed
- (id)dialogTerms;	// IMP=0x000000000017e5e0
- (id)pageTerms;	// IMP=0x000000000017e5d3
@property(readonly, nonatomic) NSDictionary *primaryTerms;
@property(readonly, nonatomic) NSArray *metricsKitTerms;
@property(readonly, nonatomic) NSArray *baseTerms;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

