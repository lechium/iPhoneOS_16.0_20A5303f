//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface UADiagnosticManager : NSObject
{
}

+ (id)sharedManager;	// IMP=0x004000000004a72a
- (unsigned long long)roundNum:(unsigned long long)arg1 to:(unsigned long long)arg2;	// IMP=0x004000000004b318
- (void)submitLocalPasteboardInfoWasCleared;	// IMP=0x001000000004b312
- (void)submitRemotePasteboardBecameUnavailable:(unsigned long long)arg1;	// IMP=0x001000000004b236
- (void)submitRemotePasteboardBecameAvailable;	// IMP=0x001000000004b12c
- (void)submitRemotePasteboardTypeInfoRequested:(id)arg1;	// IMP=0x001000000004b025
- (void)submitDidSendLocalPasteboard:(id)arg1;	// IMP=0x001000000004af1e
- (void)submitRemotePasteboardWasRequested:(id)arg1;	// IMP=0x001000000004ae17
- (id)firstPartyActivityTypeOrUnknown:(id)arg1;	// IMP=0x001000000004ace3
- (void)submitUserActivityWasContinuedInfo:(id)arg1;	// IMP=0x001000000004ab42
- (void)submitUserActivityWasSuggestedInfo:(id)arg1;	// IMP=0x001000000004aa48
- (void)submitUserActivityWasDiscovered:(id)arg1;	// IMP=0x001000000004a92e
- (void)submitUserActivityBecameCurrent:(id)arg1 withToken:(const CDStruct_4c969caf *)arg2;	// IMP=0x001000000004a7ae
- (id)init;	// IMP=0x001000000004a77f

@end
