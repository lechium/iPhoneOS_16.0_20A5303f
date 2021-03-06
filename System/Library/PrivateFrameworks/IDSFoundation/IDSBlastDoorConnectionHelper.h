//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface IDSBlastDoorConnectionHelper : NSObject
{
    id _idsBlastDoor;	// 8 = 0x8
}

+ (id)getBlastDoorSharedConnection;	// IMP=0x006000000000d4ec
- (void).cxx_destruct;	// IMP=0x000000000000eb83
@property(retain, nonatomic) id idsBlastDoor; // @synthesize idsBlastDoor=_idsBlastDoor;
- (_Bool)commandEnabledForBlastDoor:(id)arg1 topic:(id)arg2;	// IMP=0x000000000000e63f
- (void)auditMissingHeaderKeys:(id)arg1 target:(id)arg2;	// IMP=0x000000000000e4e0
- (void)addAllowlistedKey:(id)arg1 toValidatedPayload:(id)arg2 fromOriginalPayload:(id)arg3;	// IMP=0x000000000000e12e
- (_Bool)removeAllowlistedKey:(id)arg1 fromPayload:(id)arg2;	// IMP=0x000000000000dc5f
- (void)diffuseAPSUserPayload:(id)arg1 topic:(id)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000000d5eb
- (id)init;	// IMP=0x000000000000d571

@end

