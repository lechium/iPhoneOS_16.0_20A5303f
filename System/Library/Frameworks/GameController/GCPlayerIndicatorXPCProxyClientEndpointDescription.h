//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GCPlayerIndicatorXPCProxyClientEndpoint, NSString;
@protocol NSObject><NSCopying><NSSecureCoding;

__attribute__((visibility("hidden")))
@interface GCPlayerIndicatorXPCProxyClientEndpointDescription : NSObject
{
    long long _initialPlayerIndex;	// 8 = 0x8
    GCPlayerIndicatorXPCProxyClientEndpoint *_materializedObject;	// 16 = 0x10
    id <NSObject><NSCopying><NSSecureCoding> _identifier;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000c337c
- (void).cxx_destruct;	// IMP=0x00000000000c3859
@property(readonly) id <NSObject><NSCopying><NSSecureCoding> identifier; // @synthesize identifier=_identifier;
- (id)materializeWithContext:(id)arg1;	// IMP=0x00000000000c3560
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000c34ee
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000c3427
- (id)init;	// IMP=0x00000000000c3404
- (id)initWithIdentifier:(id)arg1 initialPlayerIndex:(long long)arg2;	// IMP=0x00000000000c3384

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

