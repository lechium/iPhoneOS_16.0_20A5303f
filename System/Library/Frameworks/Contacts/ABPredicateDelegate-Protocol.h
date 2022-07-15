//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Contacts/NSObject-Protocol.h>

@class NSDictionary, NSPredicate;

@protocol ABPredicateDelegate <NSObject>
- (_Bool)predicateShouldContinue:(NSPredicate *)arg1 afterFindingRecord:(void *)arg2;
- (_Bool)predicateShouldContinue:(NSPredicate *)arg1;

@optional
- (_Bool)predicateShouldContinue:(NSPredicate *)arg1 afterFindingRecord:(void *)arg2 metadata:(NSDictionary *)arg3 moreComing:(_Bool)arg4;
- (_Bool)predicateShouldContinue:(NSPredicate *)arg1 afterFindingRecord:(void *)arg2 moreComing:(_Bool)arg3;
- (_Bool)predicateShouldContinue:(NSPredicate *)arg1 afterFindingRecord:(void *)arg2 metadata:(NSDictionary *)arg3;
@end
