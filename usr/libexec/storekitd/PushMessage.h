//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APSIncomingMessage, NSDictionary, NSNumber;

@interface PushMessage : NSObject
{
    APSIncomingMessage *_message;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x001000000003a8c1
- (id)description;	// IMP=0x001000000003a6da
- (unsigned long long)hash;	// IMP=0x001000000003a692
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000003a62b
- (id)valueForUserInfoKey:(id)arg1;	// IMP=0x001000000003a5a7
- (_Bool)isEqualToMessage:(id)arg1;	// IMP=0x001000000003a510
@property(readonly) NSDictionary *userInfo;
@property(readonly) unsigned long long actionType;
@property(readonly) NSNumber *accountID;
- (id)initWithMessage:(id)arg1;	// IMP=0x001000000003a3de
- (id)getRevokedProductsMap;	// IMP=0x00100000000804b4

@end

