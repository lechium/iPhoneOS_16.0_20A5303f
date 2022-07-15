//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSDictionary, NSString;

@interface STStatusRequest_MessagesItemStatesItemReasonItem : CEMPayloadBase
{
    NSString *_code;	// 16 = 0x10
    NSDictionary *_ANY;	// 24 = 0x18
}

+ (id)buildRequiredOnlyWithCode:(id)arg1;	// IMP=0x002000000009a8b2
+ (id)buildWithCode:(id)arg1;	// IMP=0x001000000009a85c
+ (id)allowedKeys;	// IMP=0x001000000009a7b9
- (void).cxx_destruct;	// IMP=0x002000000009af9f
@property(copy, nonatomic) NSDictionary *ANY; // @synthesize ANY=_ANY;
@property(copy, nonatomic) NSString *code; // @synthesize code=_code;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000009aec6
- (id)serializePayload;	// IMP=0x001000000009ac96
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;	// IMP=0x001000000009a908

@end
