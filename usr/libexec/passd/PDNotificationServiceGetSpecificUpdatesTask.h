//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface PDNotificationServiceGetSpecificUpdatesTask
{
    NSString *_dpanIdentifier;	// 32 = 0x20
    NSString *_lastUpdatedTag;	// 40 = 0x28
    NSString *_accountIdentifier;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00400000002a7715
+ (id)getSpecificUpdatesTaskWithNotificationService:(id)arg1 dpanIdentifier:(id)arg2 lastUpdatedTag:(id)arg3 accountIdentifier:(id)arg4;	// IMP=0x00100000002a7592
+ (id)getSpecificUpdatesTaskWithNotificationService:(id)arg1 dpanIdentifier:(id)arg2 lastUpdatedTag:(id)arg3;	// IMP=0x00100000002a7504
- (void).cxx_destruct;	// IMP=0x00200000002a80fe
@property(readonly, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property(retain, nonatomic) NSString *lastUpdatedTag; // @synthesize lastUpdatedTag=_lastUpdatedTag;
@property(retain, nonatomic, setter=setDPANIdentifier:) NSString *dpanIdentifier; // @synthesize dpanIdentifier=_dpanIdentifier;
- (_Bool)pertainsToNotificationService:(id)arg1 andDPANIdentifier:(id)arg2;	// IMP=0x00100000002a7fcc
- (_Bool)matchesTask:(id)arg1;	// IMP=0x00100000002a7eb7
- (id)description;	// IMP=0x00100000002a7d07
- (id)panIdentifierName;	// IMP=0x00100000002a7c8a
- (id)endpointComponents;	// IMP=0x00100000002a7afb
- (id)headerFields;	// IMP=0x00100000002a7a3f
- (id)queryFields;	// IMP=0x00100000002a799c
- (long long)taskType;	// IMP=0x00100000002a7991
- (_Bool)isValid;	// IMP=0x00100000002a78ff
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000002a7845
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000002a771d
- (id)initWithNotificationService:(id)arg1 dpanIdentifier:(id)arg2 lastUpdatedTag:(id)arg3 accountIdentifier:(id)arg4;	// IMP=0x00100000002a763c

@end
