//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NotesUI/NSObject-Protocol.h>

@protocol TTTextStorageScrollClampingDelegate <NSObject>
- (void)didEndPostLayoutFixupAfterEditing;
- (void)willBeginPostLayoutFixupAfterEditing;
- (void)unclampTextView;
- (void)clampTextView;
@end
