//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AXAssetController, AXAssetPolicy, AXManagedAssetTaskContext, AXManagedAssetTaskRestorationState, NSString;

@interface AXManagedAssetTask : NSObject
{
    _Bool _finished;	// 8 = 0x8
    CDUnknownBlockType _taskBlock;	// 16 = 0x10
    NSString *_name;	// 24 = 0x18
    AXAssetPolicy *_policy;	// 32 = 0x20
    AXManagedAssetTaskRestorationState *_restorationState;	// 40 = 0x28
    AXAssetController *_assetController;	// 48 = 0x30
    AXManagedAssetTaskContext *_context;	// 56 = 0x38
}

+ (id)taskWithName:(id)arg1 policy:(id)arg2 context:(id)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x0020000000000fa2
- (void).cxx_destruct;	// IMP=0x00200000000018a9
@property(retain, nonatomic) AXManagedAssetTaskContext *context; // @synthesize context=_context;
@property(retain, nonatomic) AXAssetController *assetController; // @synthesize assetController=_assetController;
@property(retain, nonatomic) AXManagedAssetTaskRestorationState *restorationState; // @synthesize restorationState=_restorationState;
@property(nonatomic) _Bool finished; // @synthesize finished=_finished;
@property(retain, nonatomic) AXAssetPolicy *policy; // @synthesize policy=_policy;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) CDUnknownBlockType taskBlock; // @synthesize taskBlock=_taskBlock;
- (_Bool)_deferIfNeeded;	// IMP=0x001000000000166f
- (id)_restorationExitStatusForResult:(unsigned long long)arg1;	// IMP=0x0010000000001644
- (void)_completeWithResult:(unsigned long long)arg1;	// IMP=0x001000000000135d
@property(readonly, copy) NSString *description;
- (id)initWithName:(id)arg1 policy:(id)arg2 context:(id)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x001000000000104c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

