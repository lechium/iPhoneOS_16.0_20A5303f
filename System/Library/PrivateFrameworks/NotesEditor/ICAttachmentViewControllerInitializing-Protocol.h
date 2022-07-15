//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NotesEditor/NSObject-Protocol.h>

@class ICAbstractTextAttachment, NSLayoutManager;

@protocol ICAttachmentViewControllerInitializing <NSObject>
- (id)initWithTextAttachment:(ICAbstractTextAttachment *)arg1 forManualRendering:(_Bool)arg2 layoutManager:(NSLayoutManager *)arg3;

@optional
- (id)initWithTextAttachment:(ICAbstractTextAttachment *)arg1 forManualRendering:(_Bool)arg2 layoutManager:(NSLayoutManager *)arg3 initialCharacterIndex:(unsigned long long)arg4;
@end
