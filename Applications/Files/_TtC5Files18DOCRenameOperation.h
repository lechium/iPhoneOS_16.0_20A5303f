//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FileProvider/FPRenameOperation.h>

@class MISSING_TYPE, NSString;

@interface _TtC5Files18DOCRenameOperation : FPRenameOperation
{
    MISSING_TYPE *item;	// 8 = 0x8
    MISSING_TYPE *newDisplayName;	// 16 = 0x10
    MISSING_TYPE *newFileName;	// 32 = 0x20
    MISSING_TYPE *oldDisplayName;	// 48 = 0x30
    MISSING_TYPE *oldFileName;	// 64 = 0x40
    MISSING_TYPE *undoManager;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x004000000030a170
- (id)initWithItem:(id)arg1 newDisplayName:(id)arg2;	// IMP=0x001000000030a0e0
- (id)initWithItem:(id)arg1 newFileName:(id)arg2;	// IMP=0x001000000030a0c0
- (id)initWithItem:(id)arg1 newName:(id)arg2;	// IMP=0x001000000030a0a0
- (void)registerUndo;	// IMP=0x001000000030a080
- (id)operationForUndoing;	// IMP=0x001000000030a040
- (id)operationForRedoing;	// IMP=0x0010000000309e40
@property(nonatomic, readonly) NSString *actionNameForUndoing;

@end
