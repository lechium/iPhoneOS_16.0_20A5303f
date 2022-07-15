//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURLAuthenticationChallenge;

@interface AuthenticationChallenge : NSObject
{
    NSURLAuthenticationChallenge *_challenge;	// 8 = 0x8
    NSString *_localizedMessage;	// 16 = 0x10
    NSString *_localizedTitle;	// 24 = 0x18
    NSString *_user;	// 32 = 0x20
}

+ (id)_titleForProtectionSpace:(id)arg1;	// IMP=0x0040000000035368
+ (id)_messageForProtectionSpace:(id)arg1;	// IMP=0x001000000003512f
- (void).cxx_destruct;	// IMP=0x00200000000353dd
@property(retain, nonatomic) NSString *user; // @synthesize user=_user;
@property(retain, nonatomic) NSString *localizedTitle; // @synthesize localizedTitle=_localizedTitle;
@property(retain, nonatomic) NSString *localizedMessage; // @synthesize localizedMessage=_localizedMessage;
- (id)initWithAuthenticationChallenge:(id)arg1;	// IMP=0x0010000000034ff3

@end
