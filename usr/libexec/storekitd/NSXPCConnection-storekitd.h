//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSXPCConnection.h>

@class NSData, NSString;

@interface NSXPCConnection (storekitd)
@property(nonatomic, readonly) NSData *sk_auditTokenData;
@property(nonatomic, readonly) NSString *sk_clientID;
- (_Bool)sk_allowGaletteMode:(long long)arg1;	// IMP=0x00100000000b2200
@property(nonatomic, readonly) _Bool sk_allowPaymentRequestData;
@property(nonatomic, readonly) _Bool sk_allowClientOverride;
@property(nonatomic, readonly) _Bool sk_allowArcade;
@end
