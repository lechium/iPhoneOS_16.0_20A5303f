//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@class NSArray;

@interface NSString (UserNotificationsInternal)
+ (id)localizedUserNotificationStringForKey:(id)arg1 arguments:(id)arg2;	// IMP=0x002000000000c290
- (id)un_stringWithMaxLength:(unsigned long long)arg1;	// IMP=0x0010000000008d8e
- (unsigned long long)un_unsignedLongLongValue;	// IMP=0x0010000000008d26
- (_Bool)un_isFirstPartyIdentifier;	// IMP=0x001000000000c2a9
@property(readonly, copy, nonatomic) NSString *un_localizedStringValue;
@property(readonly, copy, nonatomic) NSString *un_localizedStringKey;
@property(readonly, copy, nonatomic) NSArray *un_localizedStringArguments;
- (id)un_logDigest;	// IMP=0x001000000001bac6
@end
