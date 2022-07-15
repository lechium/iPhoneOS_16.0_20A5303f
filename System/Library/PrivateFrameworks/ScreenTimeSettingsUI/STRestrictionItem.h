//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface STRestrictionItem : NSObject
{
    NSString *_rmConfiguration;	// 8 = 0x8
    NSString *_payloadKey;	// 16 = 0x10
    NSString *_uiLabel;	// 24 = 0x18
    unsigned long long _restrictionType;	// 32 = 0x20
    id _otherInfo;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000003ce6e
@property(readonly, copy, nonatomic) id otherInfo; // @synthesize otherInfo=_otherInfo;
@property(readonly, nonatomic) unsigned long long restrictionType; // @synthesize restrictionType=_restrictionType;
@property(readonly, copy, nonatomic) NSString *uiLabel; // @synthesize uiLabel=_uiLabel;
@property(readonly, copy, nonatomic) NSString *payloadKey; // @synthesize payloadKey=_payloadKey;
@property(readonly, copy, nonatomic) NSString *rmConfiguration; // @synthesize rmConfiguration=_rmConfiguration;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003cde0
- (id)description;	// IMP=0x000000000003cd2a
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003cbf8
- (unsigned long long)hash;	// IMP=0x000000000003cb6b
- (id)initWithConfiguration:(id)arg1 restrictionKey:(id)arg2 labelName:(id)arg3 type:(unsigned long long)arg4 restrictionValue:(id)arg5;	// IMP=0x000000000003c8c4

@end
