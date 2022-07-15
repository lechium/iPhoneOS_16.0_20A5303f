//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <EmailDaemon/NSObject-Protocol.h>

@class EAEmailAddressSet, EMObjectID, NSSet;
@protocol EMVIPManagerObserver;

@protocol EMVIPManagerInterface <NSObject>
- (void)removeVIPsWithEmailAddresses:(EAEmailAddressSet *)arg1;
- (void)removeVIPsWithIdentifiers:(NSSet *)arg1;
- (void)saveVIPs:(NSSet *)arg1;
- (void)cancelObservation:(EMObjectID *)arg1;
- (void)registerObserver:(id <EMVIPManagerObserver>)arg1 observationIdentifier:(EMObjectID *)arg2;
@end
