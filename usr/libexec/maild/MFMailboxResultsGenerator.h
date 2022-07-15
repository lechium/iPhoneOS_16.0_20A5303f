//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MFMailboxUid, NSSet;

@interface MFMailboxResultsGenerator
{
    MFMailboxUid *_mailboxUid;	// 8 = 0x8
    NSSet *_pushedMailboxUids;	// 16 = 0x10
}

+ (id)resultsDictionaryFromMailboxUid:(id)arg1 forKeys:(id)arg2;	// IMP=0x00400000000868d5
- (void).cxx_destruct;	// IMP=0x0020000000086d63
@property(retain, nonatomic) NSSet *pushedMailboxUids; // @synthesize pushedMailboxUids=_pushedMailboxUids;
@property(retain, nonatomic) MFMailboxUid *mailboxUid; // @synthesize mailboxUid=_mailboxUid;
- (id)_pushState:(id)arg1;	// IMP=0x0010000000086cbd
- (id)_level:(id)arg1;	// IMP=0x0010000000086c70
- (id)_type:(id)arg1;	// IMP=0x0010000000086c22
- (id)_relativePath:(id)arg1;	// IMP=0x0010000000086bf5
- (id)_displayName:(id)arg1;	// IMP=0x0010000000086bc8
- (CDUnknownBlockType)blockForKey:(id)arg1;	// IMP=0x00100000000869a8

@end
