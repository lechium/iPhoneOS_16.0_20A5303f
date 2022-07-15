//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ClassroomKit/NSObject-Protocol.h>

@class CRKCourse, NSArray, NSDictionary, NSSet, NSString;

@protocol CRKSettingsPaneInfoProvider <NSObject>
@property(readonly, copy, nonatomic) NSSet *activeInstructors;
@property(readonly, nonatomic) _Bool supportsRemoteLearning;
@property(readonly, nonatomic) NSDictionary *observingInstructorIdentifiersByCourseIdentifiers;
@property(readonly, copy, nonatomic) NSSet *acceptedInvitationIdentifiers;
@property(readonly, copy, nonatomic) NSArray *courseInvitations;
@property(readonly, copy, nonatomic) NSArray *courses;
- (NSSet *)instructorUsersForCourse:(CRKCourse *)arg1;
- (void)disconnectInstructorWithIdentifier:(NSString *)arg1 forCourse:(CRKCourse *)arg2;
- (_Bool)isInstructorWithIdentifier:(NSString *)arg1 observingStudentScreenForCourse:(CRKCourse *)arg2;
- (_Bool)isInstructorWithIdentifier:(NSString *)arg1 activeForCourse:(CRKCourse *)arg2;
- (_Bool)isInstructorWithIdentifier:(NSString *)arg1 disconnectableForCourse:(CRKCourse *)arg2;
- (_Bool)isStudentScreenBeingObservedForCourse:(CRKCourse *)arg1;
- (_Bool)isCourseActive:(CRKCourse *)arg1;
@end
