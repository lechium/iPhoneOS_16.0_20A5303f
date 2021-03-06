//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_os_log;

__attribute__((visibility("hidden")))
@interface CNChangeHistoryTriageLogger : NSObject
{
    unsigned char _defaultLogType;	// 8 = 0x8
    unsigned char _destructiveLogType;	// 9 = 0x9
    NSObject<OS_os_log> *_os_log;	// 16 = 0x10
}

+ (id)log;	// IMP=0x001000000006614d
+ (id)fetchLogger;	// IMP=0x001000000006606c
+ (id)saveLogger;	// IMP=0x0010000000065f8e
- (void).cxx_destruct;	// IMP=0x0000000000067b7b
@property(readonly) unsigned char destructiveLogType; // @synthesize destructiveLogType=_destructiveLogType;
@property(readonly) unsigned char defaultLogType; // @synthesize defaultLogType=_defaultLogType;
@property(readonly) NSObject<OS_os_log> *os_log; // @synthesize os_log=_os_log;
- (void)visitDifferentMeCardEvent:(id)arg1;	// IMP=0x0000000000067a8a
- (void)visitPreferredContactForImageEvent:(id)arg1;	// IMP=0x000000000006799d
- (void)visitPreferredContactForNameEvent:(id)arg1;	// IMP=0x00000000000678b0
- (void)visitUnlinkContactEvent:(id)arg1;	// IMP=0x00000000000677c3
- (void)visitLinkContactsEvent:(id)arg1;	// IMP=0x0000000000067668
- (void)visitRemoveSubgroupFromGroupEvent:(id)arg1;	// IMP=0x000000000006750d
- (void)visitAddSubgroupToGroupEvent:(id)arg1;	// IMP=0x00000000000673b2
- (void)visitRemoveMemberFromGroupEvent:(id)arg1;	// IMP=0x0000000000067257
- (void)visitAddMemberToGroupEvent:(id)arg1;	// IMP=0x00000000000670fc
- (void)visitDeleteGroupEvent:(id)arg1;	// IMP=0x0000000000067033
- (void)visitUpdateGroupEvent:(id)arg1;	// IMP=0x0000000000066f46
- (void)visitAddGroupEvent:(id)arg1;	// IMP=0x0000000000066d56
- (void)visitDeleteContactEvent:(id)arg1;	// IMP=0x0000000000066c8d
- (void)visitUpdateContactEvent:(id)arg1;	// IMP=0x0000000000066ba0
- (void)visitAddContactEvent:(id)arg1;	// IMP=0x00000000000669b0
- (void)visitDropEverythingEvent:(id)arg1;	// IMP=0x000000000006695e
- (void)fetchDidFailToTranslateWithError:(id)arg1;	// IMP=0x0000000000066918
- (void)fetchDidFailWithError:(id)arg1;	// IMP=0x00000000000668d2
- (void)didFetchHistoryEventsCount:(long long)arg1 anchor:(id)arg2 truncated:(_Bool)arg3;	// IMP=0x00000000000667c7
- (void)didFetchHistoryEvents:(id)arg1 anchor:(id)arg2;	// IMP=0x00000000000665c9
- (void)willFetchHistoryWithRequest:(id)arg1;	// IMP=0x0000000000066330
- (void)didExecuteSaveRequest;	// IMP=0x00000000000662de
- (void)willExecuteSaveRequest;	// IMP=0x000000000006628c
- (id)initWithOSLog:(id)arg1 defaultLogType:(unsigned char)arg2 destructiveLogType:(unsigned char)arg3;	// IMP=0x00000000000661f8
- (id)init;	// IMP=0x00000000000661a9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

