//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSArray, NSString;

@interface STStatusRequest : CEMPayloadBase
{
    NSString *_requestType;	// 16 = 0x10
    NSString *_UDID;	// 24 = 0x18
    NSString *_userShortName;	// 32 = 0x20
    NSArray *_messages;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0040000000098955
+ (id)requestWithUDID:(id)arg1 withUserShortName:(id)arg2 withMessages:(id)arg3;	// IMP=0x001000000009852b
- (void).cxx_destruct;	// IMP=0x0020000000098d6c
@property(copy, nonatomic) NSArray *messages; // @synthesize messages=_messages;
@property(copy, nonatomic) NSString *userShortName; // @synthesize userShortName=_userShortName;
@property(copy, nonatomic) NSString *UDID; // @synthesize UDID=_UDID;
@property(copy, nonatomic) NSString *requestType; // @synthesize requestType=_requestType;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000098c0f
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000000989d6
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000009895d
- (id)serialize;	// IMP=0x0010000000098829
- (_Bool)loadStatusFromDictionary:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000985f3

@end
