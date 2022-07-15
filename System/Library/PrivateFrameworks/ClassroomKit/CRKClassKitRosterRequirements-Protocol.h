//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ClassroomKit/NSObject-Protocol.h>

@class NSArray, NSError, NSSet, NSString;
@protocol CRKClassKitClass, CRKClassKitPerson, CRKClassKitQuery;

@protocol CRKClassKitRosterRequirements <NSObject>
@property(readonly, nonatomic) long long accountState;
- (void)locationsWithObjectIDs:(NSSet *)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)locationsWithManagePermissionsForUserWithObjectID:(NSString *)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)removeClass:(id <CRKClassKitClass>)arg1 completion:(void (^)(NSError *))arg2;
- (void)saveClass:(id <CRKClassKitClass>)arg1 completion:(void (^)(NSError *))arg2;
- (id <CRKClassKitClass>)makeClassWithLocationID:(NSString *)arg1 name:(NSString *)arg2;
- (void)removeTrustedPerson:(id <CRKClassKitPerson>)arg1 fromClass:(id <CRKClassKitClass>)arg2;
- (void)addTrustedPerson:(id <CRKClassKitPerson>)arg1 toClass:(id <CRKClassKitClass>)arg2;
- (void)removePerson:(id <CRKClassKitPerson>)arg1 fromClass:(id <CRKClassKitClass>)arg2;
- (void)addPerson:(id <CRKClassKitPerson>)arg1 toClass:(id <CRKClassKitClass>)arg2;
- (void)executeQuery:(id <CRKClassKitQuery>)arg1;
- (id <CRKClassKitQuery>)makeQueryForPersonsWithIdentifiers:(NSArray *)arg1;
- (id <CRKClassKitQuery>)makeInstructorQueryForSearchString:(NSString *)arg1 locationIDs:(NSArray *)arg2 sortingGivenNameFirst:(_Bool)arg3 pageSize:(long long)arg4;
- (id <CRKClassKitQuery>)makeStudentQueryForSearchString:(NSString *)arg1 locationIDs:(NSArray *)arg2 sortingGivenNameFirst:(_Bool)arg3 pageSize:(long long)arg4;
- (void)trustedPersonsInClassWithObjectID:(NSString *)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)personsInClassWithObjectID:(NSString *)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)classesWithCompletion:(void (^)(NSArray *, NSError *))arg1;
- (void)currentUserWithCompletion:(void (^)(id <CRKClassKitCurrentUser>, NSError *))arg1;
- (NSSet *)objectIDsOfTrustedPersonsInClass:(id <CRKClassKitClass>)arg1;
- (NSSet *)objectIDsOfPersonsInClass:(id <CRKClassKitClass>)arg1;
- (void)removeObserver:(id)arg1;
- (id)addObserverForPersonIDs:(NSSet *)arg1 observerBlock:(void (^)(void))arg2;
- (id)addGeneralObserver:(void (^)(void))arg1;
- (_Bool)ownsError:(NSError *)arg1;
@end
