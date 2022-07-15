//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNContactFetchRequest;
@protocol CNAPITriageLogger, CNTimeProvider;

__attribute__((visibility("hidden")))
@interface CNAPITriageSession : NSObject
{
    id <CNAPITriageLogger> _logger;	// 8 = 0x8
    id <CNTimeProvider> _timeProvider;	// 16 = 0x10
    double _timeSessionBegan;	// 24 = 0x18
    double _timeSessionEnded;	// 32 = 0x20
    double _clientCalloutTime;	// 40 = 0x28
    _Bool _hasClientCalloutTime;	// 48 = 0x30
    CNContactFetchRequest *_request;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000118026
@property(readonly) id <CNTimeProvider> timeProvider; // @synthesize timeProvider=_timeProvider;
@property(readonly) id <CNAPITriageLogger> logger; // @synthesize logger=_logger;
@property(readonly) CNContactFetchRequest *request; // @synthesize request=_request;
- (void)closeWithContacts:(id)arg1 orError:(id)arg2;	// IMP=0x0000000000117fc2
- (void)closeWithResult:(id)arg1;	// IMP=0x0000000000117f17
- (void)closeWithError:(id)arg1;	// IMP=0x0000000000117ede
- (id)normalizeCollectionOfContacts:(id)arg1;	// IMP=0x0000000000117d36
- (void)closeWithContacts:(id)arg1;	// IMP=0x0000000000117bea
- (void)close;	// IMP=0x0000000000117b75
- (void)addClientCalloutTime:(double)arg1;	// IMP=0x0000000000117b61
- (void)open;	// IMP=0x0000000000117b25
- (id)initWithRequest:(id)arg1 triageLogger:(id)arg2 timeProvider:(id)arg3;	// IMP=0x0000000000117a58
- (id)initWithRequest:(id)arg1;	// IMP=0x0000000000117992
- (id)init;	// IMP=0x0000000000117955

@end
