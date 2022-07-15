//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSInvocation, NSSet, NSString;

@interface MCSChange : NSObject
{
    NSInvocation *_invocation;	// 8 = 0x8
    unsigned int _isFinalized:1;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000044012
- (void)setInvocation:(id)arg1;	// IMP=0x0010000000044001
- (id)invocation;	// IMP=0x0010000000043ff3
- (_Bool)isFinalized;	// IMP=0x0010000000043fe8
- (id)mailboxParentForMove;	// IMP=0x0010000000043fe0
- (id)mailboxToMoveOrRename;	// IMP=0x0010000000043fd8
- (id)modifiedMailboxName;	// IMP=0x0010000000043fd0
- (id)mailboxToRemove;	// IMP=0x0010000000043fc8
@property(readonly, nonatomic) NSSet *messagesSet;
- (unsigned long long)adjustUnreadCount:(unsigned long long)arg1 withCriterion:(id)arg2;	// IMP=0x0010000000043f5c
- (id)copyChangeSetForFullPath:(id)arg1;	// IMP=0x0010000000043ef8
- (long long)localizedChangeDescriptionPriority;	// IMP=0x0010000000043ec5
- (id)localizedChangeDescription;	// IMP=0x0010000000043e92
- (id)localizedErrorTitle;	// IMP=0x0010000000043e5f
- (id)localizedErrorDescription;	// IMP=0x0010000000043e2c
- (id)accounts;	// IMP=0x0010000000043df9
- (id)stores;	// IMP=0x0010000000043dc6
- (id)URLStrings;	// IMP=0x0010000000043d93
- (_Bool)commit;	// IMP=0x0010000000043d60
- (id)applyPendingChangeToObjects:(id)arg1;	// IMP=0x0010000000043cfc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
