//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MFMailboxUid, NSMutableArray, NSString;

@interface MailboxHierarchyNode : NSObject
{
    NSMutableArray *_children;	// 8 = 0x8
    MFMailboxUid *_mailbox;	// 16 = 0x10
    MFMailboxUid *_parentMailbox;	// 24 = 0x18
    NSString *_displayName;	// 32 = 0x20
    int _level;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000036d9a
@property(retain) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain) MFMailboxUid *parentMailbox; // @synthesize parentMailbox=_parentMailbox;
- (id)description;	// IMP=0x0010000000036c84
- (int)level;	// IMP=0x0010000000036c7b
- (void)setLevel:(int)arg1;	// IMP=0x0010000000036c72
- (id)findNodeForMailbox:(id)arg1;	// IMP=0x0010000000036c4e
- (id)removeNodeForMailbox:(id)arg1;	// IMP=0x0010000000036c27
- (id)_findNodeForMailbox:(id)arg1 removeNode:(_Bool)arg2;	// IMP=0x0010000000036909
- (void)addChild:(id)arg1;	// IMP=0x00100000000366e7
- (id)mailbox;	// IMP=0x00100000000366d9
- (id)children;	// IMP=0x00100000000366cb
- (id)initWithMailbox:(id)arg1;	// IMP=0x00100000000365d4

@end

