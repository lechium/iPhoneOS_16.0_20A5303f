//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@class NSDate, NSDictionary, NSString;

@interface NSError (CPSafeDescription)
+ (id)errorWithSYError:(long long)arg1 userInfo:(id)arg2;	// IMP=0x0020000000016f60
+ (id)errorFromSYErrorInfo:(id)arg1;	// IMP=0x002000000009fd24
@property(readonly, nonatomic) NSString *CPSafeDescription;
- (id)initWithSYError:(long long)arg1 userInfo:(id)arg2;	// IMP=0x0010000000016fb8
@property(readonly, nonatomic, getter=isFromRequest) _Bool fromRequest;
@property(readonly, nonatomic) NSDictionary *persistentUserInfo;
@property(readonly, nonatomic) NSDate *messageSent;
@property(readonly, nonatomic) NSString *idsIdentifier;
@property(readonly, nonatomic) unsigned short messageID;
@end

