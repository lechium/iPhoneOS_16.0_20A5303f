//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MFMailboxUid, NSString, NSURL;

@interface MFNanoBridgeSettingsAccountSpecificMailbox
{
    MFMailboxUid *_mailboxUid;	// 8 = 0x8
    long long _type;	// 16 = 0x10
    NSURL *_mailboxURL;	// 24 = 0x18
    NSString *_accountUniqueIdentifier;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000098b91
- (void).cxx_destruct;	// IMP=0x00200000000995b2
@property(readonly, nonatomic) NSURL *mailboxURL; // @synthesize mailboxURL=_mailboxURL;
@property(readonly, nonatomic) NSString *accountUniqueIdentifier; // @synthesize accountUniqueIdentifier=_accountUniqueIdentifier;
- (id)_mailboxUid;	// IMP=0x001000000009922c
@property(readonly, nonatomic) NSString *mailboxId;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000990b2
- (unsigned long long)hash;	// IMP=0x001000000009905a
- (_Bool)isValid;	// IMP=0x0010000000099027
- (unsigned long long)level;	// IMP=0x0010000000098faf
- (id)icon;	// IMP=0x0010000000098e64
- (id)displayName;	// IMP=0x0010000000098df7
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000098c76
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000098b99
@property(readonly, nonatomic) long long type;
- (void)invalidateCachedData;	// IMP=0x0010000000098b18
- (unsigned long long)mailboxFilterType;	// IMP=0x0010000000098b0d
- (id)initWithAccountUniqueIdentifier:(id)arg1 mailboxURL:(id)arg2;	// IMP=0x0010000000098a34
- (id)initWithMailboxUid:(id)arg1 account:(id)arg2;	// IMP=0x001000000009886f

@end

