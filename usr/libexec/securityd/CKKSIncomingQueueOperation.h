//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKKSOperationDependencies, NSError, NSMutableSet, NSString;
@protocol OctagonStateString;

@interface CKKSIncomingQueueOperation
{
    _Bool _handleMismatchedViewItems;	// 8 = 0x8
    _Bool _newOutgoingEntries;	// 9 = 0x9
    _Bool _pendingClassAEntries;	// 10 = 0xa
    _Bool _missingKey;	// 11 = 0xb
    NSString<OctagonStateString> *_nextState;	// 16 = 0x10
    NSString<OctagonStateString> *_intendedState;	// 24 = 0x18
    CKKSOperationDependencies *_deps;	// 32 = 0x20
    unsigned long long _successfulItemsProcessed;	// 40 = 0x28
    unsigned long long _errorItemsProcessed;	// 48 = 0x30
    NSError *_pendingClassAEntriesError;	// 56 = 0x38
    NSMutableSet *_viewsToScan;	// 64 = 0x40
    NSString<OctagonStateString> *_stateIfClassAItemsRemaining;	// 72 = 0x48
}

+ (id)decryptCKKSItemToAttributes:(id)arg1 keyCache:(id)arg2 ckksOperationalDependencies:(id)arg3 error:(id *)arg4;	// IMP=0x00200000000789bf
- (void).cxx_destruct;	// IMP=0x0020000000076ac8
@property(retain) NSString<OctagonStateString> *stateIfClassAItemsRemaining; // @synthesize stateIfClassAItemsRemaining=_stateIfClassAItemsRemaining;
@property(retain) NSMutableSet *viewsToScan; // @synthesize viewsToScan=_viewsToScan;
@property _Bool missingKey; // @synthesize missingKey=_missingKey;
@property(retain) NSError *pendingClassAEntriesError; // @synthesize pendingClassAEntriesError=_pendingClassAEntriesError;
@property _Bool pendingClassAEntries; // @synthesize pendingClassAEntries=_pendingClassAEntries;
@property _Bool newOutgoingEntries; // @synthesize newOutgoingEntries=_newOutgoingEntries;
@property unsigned long long errorItemsProcessed; // @synthesize errorItemsProcessed=_errorItemsProcessed;
@property unsigned long long successfulItemsProcessed; // @synthesize successfulItemsProcessed=_successfulItemsProcessed;
@property _Bool handleMismatchedViewItems; // @synthesize handleMismatchedViewItems=_handleMismatchedViewItems;
@property(retain) CKKSOperationDependencies *deps; // @synthesize deps=_deps;
@property(readonly) NSString<OctagonStateString> *intendedState; // @synthesize intendedState=_intendedState;
@property(retain) NSString<OctagonStateString> *nextState; // @synthesize nextState=_nextState;
- (void)_onqueueHandleIQEDelete:(id)arg1 class:(const struct SecDbClass *)arg2 viewState:(id)arg3;	// IMP=0x0010000000075f75
- (_Bool)_onqueueHandleIQEChange:(id)arg1 item:(struct SecDbItem *)arg2 viewState:(id)arg3 sortedForThisView:(_Bool)arg4 keyCache:(id)arg5;	// IMP=0x00100000000749a6
- (void)_onqueueHandleIQEChange:(id)arg1 attributes:(id)arg2 class:(const struct SecDbClass *)arg3 viewState:(id)arg4 sortedForThisView:(_Bool)arg5 keyCache:(id)arg6;	// IMP=0x00100000000747a5
- (void)_onqueueGenerateNewUUIDPersistentRefOnSecItem:(struct SecDbItem *)arg1 viewState:(id)arg2;	// IMP=0x0010000000074610
- (_Bool)fixMismatchedViewItems:(id)arg1;	// IMP=0x0010000000074332
- (_Bool)loadAndProcessEntries:(id)arg1 withActionFilter:(id)arg2;	// IMP=0x0010000000074038
- (void)main;	// IMP=0x00100000000730d1
- (_Bool)_onqueueUpdateIQE:(id)arg1 withState:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000072f28
- (void)_onqueueHandleMismatchedViewItem:(id)arg1 secDbClass:(const struct SecDbClass *)arg2 attributes:(id)arg3 intendedView:(id)arg4 viewState:(id)arg5 keyCache:(id)arg6;	// IMP=0x001000000007278a
- (_Bool)intransaction:(id)arg1 processQueueEntries:(id)arg2;	// IMP=0x0010000000070fbb
- (_Bool)processNewCurrentItemPointers:(id)arg1 viewState:(id)arg2;	// IMP=0x0010000000070c0c
- (id)initWithDependencies:(id)arg1 intending:(id)arg2 pendingClassAItemsRemainingState:(id)arg3 errorState:(id)arg4 handleMismatchedViewItems:(_Bool)arg5;	// IMP=0x0010000000070aa7
- (id)init;	// IMP=0x0010000000070a99

@end
