//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SchoolTime/NSObject-Protocol.h>

@class SCLSchoolModeServer, SCLState;

@protocol SCLSchoolModeServerObserver <NSObject>
- (void)server:(SCLSchoolModeServer *)arg1 didUpdateState:(SCLState *)arg2 fromState:(SCLState *)arg3;
@end
