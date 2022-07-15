//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString;

@interface ALSLocationDelegate : NSObject
{
    NSMutableSet *fRequestersWithOutstandingRequests;	// 8 = 0x8
    void *fRequester;	// 16 = 0x10
}

- (void)addRequesterWithOutstandingRequest:(id)arg1;	// IMP=0x00200000001f2b12
- (void)processWireless:(id)arg1 inRange:(struct _NSRange)arg2 timeReceived:(double)arg3 requestType:(int)arg4 tag:(int)arg5 surroundingWifiBands:(const void *)arg6;	// IMP=0x00100000001f1a56
- (void)processScdmaCells:(id)arg1 inRange:(struct _NSRange)arg2 timeReceived:(double)arg3 requestType:(int)arg4 tag:(int)arg5;	// IMP=0x00100000001f1055
- (void)processCells:(id)arg1 inRange:(struct _NSRange)arg2 timeReceived:(double)arg3 requestType:(int)arg4 tag:(int)arg5;	// IMP=0x00100000001f04a7
- (void)finished:(id)arg1;	// IMP=0x00100000001f02af
- (void)requester:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x00100000001efc10
- (void)requesterDidFinish:(id)arg1;	// IMP=0x00100000001ef952
- (void)requester:(id)arg1 didReceiveResponse:(id)arg2 forRequest:(id)arg3;	// IMP=0x00100000001ec586
- (void)dealloc;	// IMP=0x00100000001ec43d
- (id)initWithRequester:(void *)arg1;	// IMP=0x00100000001ec3e6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
