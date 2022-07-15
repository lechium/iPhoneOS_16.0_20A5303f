//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Social/NSObject-Protocol.h>

@class NSData, NSDate, NSDictionary, NSError, NSString, NSURLResponse;

@protocol SLWebOAuth2TokenResponse <NSObject>
@property(readonly) NSString *GUID;
@property(readonly) NSString *errorMessage;
@property(readonly) NSError *error;
@property(readonly) NSDate *expiryDate;
@property(readonly) NSString *idToken;
@property(readonly) NSString *refreshToken;
@property(readonly) NSString *token;
@property(readonly) NSDictionary *data;
@property(readonly) long long statusCode;
- (id)initWithData:(NSData *)arg1 urlResponse:(NSURLResponse *)arg2 error:(NSError *)arg3;
@end
