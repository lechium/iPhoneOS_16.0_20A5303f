//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSUserActivity.h>

@class CSSearchableItemAttributeSet, NSDate, NSUUID;

@interface NSUserActivity (CSSearchableItemAttributeSet)
+ (_Bool)_registerAsProxyForApplication:(int)arg1 options:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x00200000000426a7
+ (_Bool)_currentUserActivityProxiesWithOptions:(id)arg1 matching:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x002000000004299f
@property(copy) CSSearchableItemAttributeSet *contentAttributeSet; // @dynamic contentAttributeSet;
- (void)_sendToCoreSpotlightIndexer;	// IMP=0x00100000000296bc
- (void)_updateForwardToCoreSpotlightIndexer:(BOOL)arg1;	// IMP=0x001000000002961a
- (void)_setDirty:(_Bool)arg1 identifier:(id)arg2;	// IMP=0x0010000000029da5
- (void)_setPayloadIdentifier:(id)arg1 object:(id)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000029b4a
- (void)_setPayload:(id)arg1 object:(id)arg2 identifier:(id)arg3 dirty:(_Bool)arg4;	// IMP=0x0010000000029aa5
- (void)_setPayload:(id)arg1 object:(id)arg2 identifier:(id)arg3;	// IMP=0x0010000000029a10
- (CDUnknownBlockType)_payloadUpdateBlockForIdentifier:(id)arg1;	// IMP=0x001000000002985c
- (id)_objectForIdentifier:(id)arg1;	// IMP=0x00100000000297d9
- (id)_payloadForIdentifier:(id)arg1;	// IMP=0x0010000000029756
- (void)_forceSave;	// IMP=0x0010000000042722
- (_Bool)_finishUserInfoUpdate;	// IMP=0x0010000000042611
- (unsigned long long)_beginUserInfoUpdate:(id)arg1;	// IMP=0x0010000000042561
@property(getter=_isUniversalLink) _Bool _universalLink;
@property(readonly) unsigned long long _userInfoChangeCount;
- (id)_copyWithNewUUID;	// IMP=0x0010000000042377
@property(readonly, copy) NSDate *_sentToIndexerDate;
@property(readonly, copy) NSDate *_madeInitiallyCurrentDate;
@property(readonly) double _madeCurrentInterval;
@property(readonly, copy) NSDate *_madeCurrentEndDate;
@property(readonly, copy) NSDate *_madeCurrentDate;
@property(readonly, copy) NSUUID *_originalUniqueIdentifier;
- (id)_createUserActivityDataWithSaving:(_Bool)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000042911
- (id)_createUserActivityStringsWithSaving:(_Bool)arg1 options:(id)arg2 string:(id *)arg3 optionalString:(id *)arg4 data:(id *)arg5 error:(id *)arg6;	// IMP=0x001000000004286c
- (_Bool)doSaveUserActivityWithTimeout:(double)arg1 isCurrent:(_Bool)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000042aa3
- (_Bool)_supportsSynchronizeActivityWithTimeout;	// IMP=0x00100000000429b8
@end
