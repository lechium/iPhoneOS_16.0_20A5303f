//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSDCallHistoryController, CSDClientManager, NSString;
@protocol OS_dispatch_queue;

@interface CSDCallHistoryControllerXPCServer : NSObject
{
    int _clientsShouldConnectToken;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    CSDCallHistoryController *_callHistoryController;	// 24 = 0x18
    CSDClientManager *_clientManager;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000024d68
@property(nonatomic) int clientsShouldConnectToken; // @synthesize clientsShouldConnectToken=_clientsShouldConnectToken;
@property(readonly, nonatomic) CSDClientManager *clientManager; // @synthesize clientManager=_clientManager;
@property(readonly, nonatomic) CSDCallHistoryController *callHistoryController; // @synthesize callHistoryController=_callHistoryController;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (oneway void)allCallHistoryDeleted;	// IMP=0x0010000000024c29
- (oneway void)recentCallsDeleted:(id)arg1;	// IMP=0x0010000000024aa3
- (void)unregisterClient:(id)arg1;	// IMP=0x00100000000249a1
- (void)registerClient:(id)arg1;	// IMP=0x001000000002489f
- (void)notifyClientsToConnectIfNecessary;	// IMP=0x00100000000247f6
- (void)invalidate;	// IMP=0x00100000000246ed
- (void)dealloc;	// IMP=0x0010000000024660
- (id)initWithCallHistoryController:(id)arg1;	// IMP=0x001000000002410b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
