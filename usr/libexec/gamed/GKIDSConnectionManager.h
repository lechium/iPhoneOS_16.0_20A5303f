//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSAccountController, NSString;
@protocol GKIDSConnectionManagerDelegate, OS_dispatch_queue;

@interface GKIDSConnectionManager : NSObject
{
    id <GKIDSConnectionManagerDelegate> _delegate;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_idsDelegateQueue;	// 16 = 0x10
    IDSAccountController *_gcArcadeAccountController;	// 24 = 0x18
    IDSAccountController *_gcAccountController;	// 32 = 0x20
}

+ (id)sharedManager;	// IMP=0x0020000000128e17
- (void).cxx_destruct;	// IMP=0x00200000001298cd
@property(retain, nonatomic) IDSAccountController *gcAccountController; // @synthesize gcAccountController=_gcAccountController;
@property(retain, nonatomic) IDSAccountController *gcArcadeAccountController; // @synthesize gcArcadeAccountController=_gcArcadeAccountController;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *idsDelegateQueue; // @synthesize idsDelegateQueue=_idsDelegateQueue;
@property(nonatomic) __weak id <GKIDSConnectionManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)accountController:(id)arg1 accountAdded:(id)arg2;	// IMP=0x00100000001295fc
- (void)fetchIDSDataForHandles:(id)arg1 maxBatchSize:(unsigned long long)arg2 queue:(id)arg3 service:(id)arg4 infoTypes:(unsigned long long)arg5 performingBlockPerBatch:(CDUnknownBlockType)arg6;	// IMP=0x00100000001290a6
- (_Bool)isReady;	// IMP=0x001000000012900a
- (void)dealloc;	// IMP=0x0010000000128fa9
- (id)init;	// IMP=0x0010000000128e6c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

