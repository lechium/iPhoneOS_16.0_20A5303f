//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface PDSharingRelayServerCreateMailboxResponse
{
    _Bool _supportsPushNotifications;	// 8 = 0x8
    NSString *_mailboxURL;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000239eb6
@property(retain, nonatomic) NSString *mailboxURL; // @synthesize mailboxURL=_mailboxURL;
@property(nonatomic) _Bool supportsPushNotifications; // @synthesize supportsPushNotifications=_supportsPushNotifications;
- (id)initWithData:(id)arg1;	// IMP=0x0010000000239bc7

@end
