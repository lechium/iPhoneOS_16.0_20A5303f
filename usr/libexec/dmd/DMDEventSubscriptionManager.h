//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface DMDEventSubscriptionManager : NSObject
{
    CDUnknownBlockType _eventsHandler;	// 8 = 0x8
    NSMutableDictionary *_eventSubscriptionsByIdentifier;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000507ef
@property(retain, nonatomic) NSMutableDictionary *eventSubscriptionsByIdentifier; // @synthesize eventSubscriptionsByIdentifier=_eventSubscriptionsByIdentifier;
@property(copy, nonatomic) CDUnknownBlockType eventsHandler; // @synthesize eventsHandler=_eventsHandler;
- (CDUnknownBlockType);	// IMP=0x00100000000507bb
- (id)eventStatusesByPayloadIdentifierSinceStartDate:(id)arg1 organizationIdentifier:(id)arg2;	// IMP=0x0010000000050589
- (_Bool)setEventSubscriptionRegistrations:(id)arg1 error:(id *)arg2;	// IMP=0x001000000004ff7b
- (id)init;	// IMP=0x001000000004ff25

@end
