//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NotesShared/NSObject-Protocol.h>

@class ICManagedObjectContextUpdater, NSManagedObjectID;

@protocol ICManagedObjectContextUpdaterDelegate <NSObject>
- (void)managedObjectContextUpdater:(ICManagedObjectContextUpdater *)arg1 objectDidChange:(NSManagedObjectID *)arg2;
@end
