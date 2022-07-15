//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_BRCOperation.h"

@class NSObject, NSString;
@protocol BROperationClient;

__attribute__((visibility("hidden")))
@interface _BRCFrameworkOperation : _BRCOperation
{
    _Bool _startedFinish;	// 224 = 0xe0
    _Bool _ignoreMissingRemoteClientProxy;	// 225 = 0xe1
    NSObject<BROperationClient> *_remoteClientProxy;	// 232 = 0xe8
}

- (void).cxx_destruct;	// IMP=0x0000000000010e98
@property(nonatomic) _Bool ignoreMissingRemoteClientProxy; // @synthesize ignoreMissingRemoteClientProxy=_ignoreMissingRemoteClientProxy;
@property(retain, nonatomic) NSObject<BROperationClient> *remoteClientProxy; // @synthesize remoteClientProxy=_remoteClientProxy;
- (void)finishWithResult:(id)arg1 error:(id)arg2;	// IMP=0x0000000000010e19
- (void)start;	// IMP=0x0000000000010d91
- (oneway void)invalidate;	// IMP=0x0000000000010d53
- (id)descriptionAdditionalStringWithContext:(id)arg1;	// IMP=0x0000000000010c2f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
