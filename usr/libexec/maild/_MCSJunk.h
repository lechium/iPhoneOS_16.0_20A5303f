//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface _MCSJunk
{
    NSArray *_operations;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000046ee9
- (_Bool)willUnflag;	// IMP=0x0010000000046e86
- (_Bool)willFlag;	// IMP=0x0010000000046e23
- (_Bool)willMarkUnread;	// IMP=0x0010000000046dc0
- (_Bool)willMarkRead;	// IMP=0x0010000000046d5d
- (_Bool)commitToMessages:(id)arg1 failures:(id)arg2 newMessages:(id)arg3;	// IMP=0x0010000000046c16
- (id)applyPendingChangeToObjects:(id)arg1;	// IMP=0x0010000000046a08
- (id)description;	// IMP=0x00100000000469e3
- (id)initWithSpecialDestination:(int)arg1 markAsRead:(_Bool)arg2 flagsToSet:(id)arg3 flagsToClear:(id)arg4;	// IMP=0x0010000000046782

@end
