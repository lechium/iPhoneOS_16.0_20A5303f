//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSXPCConnection.h>

@class _EXExtensionProcessHandle;

@interface NSXPCConnection (EXTransaction)
- (void)_EX_setTransaction:(id)arg1;	// IMP=0x0030000000023076
- (id)_EX_transaction;	// IMP=0x0030000000023065
@property(retain, setter=_EX_setExtensionProcess:) _EXExtensionProcessHandle *_EX_extensionProcess;
@end
