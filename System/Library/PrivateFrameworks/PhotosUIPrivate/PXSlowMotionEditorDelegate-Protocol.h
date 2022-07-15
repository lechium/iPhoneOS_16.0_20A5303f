//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUIPrivate/NSObject-Protocol.h>

@class PXSlowMotionEditor;

@protocol PXSlowMotionEditorDelegate <NSObject>
- (void)slowMotionEditorRequestForceUnzoom:(PXSlowMotionEditor *)arg1;
- (_Bool)slowMotionEditorRequestForceZoom:(PXSlowMotionEditor *)arg1;
- (void)slowMotionEditorEndValueChanged:(PXSlowMotionEditor *)arg1;
- (void)slowMotionEditorStartValueChanged:(PXSlowMotionEditor *)arg1;
- (void)slowMotionEditorDidEndEditing:(PXSlowMotionEditor *)arg1;
- (void)slowMotionEditorDidBeginEditing:(PXSlowMotionEditor *)arg1 withStartHandle:(_Bool)arg2;
@end
