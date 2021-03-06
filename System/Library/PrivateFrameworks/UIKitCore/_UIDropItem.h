//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIDragItem.h"

@class NSItemProvider;

__attribute__((visibility("hidden")))
@interface _UIDropItem : UIDragItem
{
    UIDragItem *_localDragItem;	// 128 = 0x80
    NSItemProvider *_dropItemProvider;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x0000000000623a36
@property(retain, nonatomic, getter=_dropItemProvider, setter=_setDropItemProvider:) NSItemProvider *dropItemProvider; // @synthesize dropItemProvider=_dropItemProvider;
@property(retain, nonatomic, getter=_localDragItem, setter=_setLocalDragItem:) UIDragItem *localDragItem; // @synthesize localDragItem=_localDragItem;
- (void)_setPrivateLocalContext:(id)arg1;	// IMP=0x000000000062397a
- (id)_privateLocalContext;	// IMP=0x000000000062392a
- (void)setLocalObject:(id)arg1;	// IMP=0x00000000006238b8
- (id)localObject;	// IMP=0x0000000000623868
- (id)itemProvider;	// IMP=0x000000000062380f

@end

