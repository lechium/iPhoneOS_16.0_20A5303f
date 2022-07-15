//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CRAddressHandlerIdentity;
@protocol CRAddressHandler;

@interface CRAddressHandler : NSObject
{
    id <CRAddressHandler> _handler;	// 8 = 0x8
    CRAddressHandlerIdentity *_identity;	// 16 = 0x10
}

+ (id)addressHandlerWithPrincipalClass:(Class)arg1;	// IMP=0x0040000000017aee
@property(retain, nonatomic) CRAddressHandlerIdentity *identity; // @synthesize identity=_identity;
- (id)externalAddressFromAddress:(id)arg1 kind:(id)arg2;	// IMP=0x0010000000017d24
- (id)addressFromExternalAddress:(id)arg1 kind:(id)arg2;	// IMP=0x0010000000017d0e
- (id)syncKeyForAddress:(id)arg1 kind:(id)arg2;	// IMP=0x0010000000017cf8
- (id)supportedAddressKinds;	// IMP=0x0010000000017ce2
- (id)description;	// IMP=0x0010000000017c4f
- (void)dealloc;	// IMP=0x0010000000017c05
- (id)initWithAddressHandler:(id)arg1;	// IMP=0x0010000000017b8c
- (id)initWithPrincipalClass:(Class)arg1;	// IMP=0x0010000000017b1d

@end
