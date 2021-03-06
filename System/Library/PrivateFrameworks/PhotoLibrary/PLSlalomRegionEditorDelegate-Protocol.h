//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoLibrary/NSObject-Protocol.h>

@class PLSlalomRegionEditor;

@protocol PLSlalomRegionEditorDelegate <NSObject>
- (void)slalomRegionEditorRequestForceUnzoom:(PLSlalomRegionEditor *)arg1;
- (_Bool)slalomRegionEditorRequestForceZoom:(PLSlalomRegionEditor *)arg1;
- (void)slalomRegionEditorEndValueChanged:(PLSlalomRegionEditor *)arg1;
- (void)slalomRegionEditorStartValueChanged:(PLSlalomRegionEditor *)arg1;
- (void)slalomRegionEditorDidEndEditing:(PLSlalomRegionEditor *)arg1;
- (void)slalomRegionEditorDidBeginEditing:(PLSlalomRegionEditor *)arg1 withStartHandle:(_Bool)arg2;
@end

