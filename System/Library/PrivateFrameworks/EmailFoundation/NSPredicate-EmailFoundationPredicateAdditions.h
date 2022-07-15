//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSPredicate.h>

@interface NSPredicate (EmailFoundationPredicateAdditions)
+ (_Bool)ef_predicate:(id)arg1 containsSubpredicate:(id)arg2;	// IMP=0x002000000003335b
+ (id)ef_andCompoundPredicateForOptionalPredicate:(id)arg1 second:(id)arg2;	// IMP=0x002000000003323b
+ (id)ef_matchNothingPredicate;	// IMP=0x0020000000033220
+ (id)ef_matchEverythingPredicate;	// IMP=0x0020000000033202
+ (_Bool)ef_predicate:(id)arg1 containsKeyPath:(id)arg2;	// IMP=0x0020000000032cfa
@property(readonly, nonatomic) _Bool ef_matchesNothing;
@property(readonly, nonatomic) _Bool ef_matchesEverything;
- (_Bool)ef_containsKeyPath:(id)arg1;	// IMP=0x0010000000032cda
- (id)predicateNodeFromPropertyMapper:(id)arg1;	// IMP=0x0010000000048947
@end
