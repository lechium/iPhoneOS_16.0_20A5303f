//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ApplicationTest, CalendarModel, NSMutableDictionary, NSString, UIWindow;

@interface ApplicationTester : NSObject
{
    NSMutableDictionary *_testNamesToTestClasses;	// 8 = 0x8
    ApplicationTest *_currentlyRunningTest;	// 16 = 0x10
    CalendarModel *_model;	// 24 = 0x18
}

+ (_Bool)testingSessionStarted;	// IMP=0x00200000000aa03d
- (void).cxx_destruct;	// IMP=0x00200000000aa3ce
@property(retain, nonatomic) CalendarModel *model; // @synthesize model=_model;
- (Class)_testClassForTestName:(id)arg1;	// IMP=0x00100000000aa274
@property(readonly, nonatomic) NSString *extendedLaunchTestName;
- (_Bool)application:(id)arg1 runTest:(id)arg2 options:(id)arg3;	// IMP=0x00100000000aa049
- (id)initWithModel:(id)arg1;	// IMP=0x00100000000a9fd2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIWindow *window;

@end
