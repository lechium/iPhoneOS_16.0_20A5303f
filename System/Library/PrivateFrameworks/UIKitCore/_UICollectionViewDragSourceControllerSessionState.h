//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol UIDragSession;

__attribute__((visibility("hidden")))
@interface _UICollectionViewDragSourceControllerSessionState : NSObject
{
    id <UIDragSession> _dragSession;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000003cdc3f
@property(retain, nonatomic) id <UIDragSession> dragSession; // @synthesize dragSession=_dragSession;
- (id)description;	// IMP=0x00000000003cdb65
@property(readonly, nonatomic) _Bool isActive;

@end

