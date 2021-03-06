//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NotesShared/ICAttachmentSystemPaperModel.h>

@class UIImage;

@interface ICAttachmentSystemPaperModel (UI)
+ (void)generatePreviewsForAttachment:(id)arg1 paperIdentifier:(id)arg2;	// IMP=0x0020000000090657
+ (id)previewImageForAttachment:(id)arg1 fullImage:(struct CGImage *)arg2 scale:(double)arg3 appearanceInfo:(id)arg4;	// IMP=0x00200000000903f5
+ (id)generateImageForAttachment:(id)arg1 fullResolution:(_Bool)arg2 appearanceInfo:(id)arg3 outContentBounds:(struct CGRect *)arg4 outHasDeepLink:(_Bool *)arg5;	// IMP=0x0020000000090132
+ (id)generateEmptyImage;	// IMP=0x002000000009005f
- (void)drawPreviewInRect:(struct CGRect)arg1;	// IMP=0x001000000006d953
- (id)activityItems;	// IMP=0x001000000006d838
- (id)activityItem;	// IMP=0x001000000006d7cf
@property(readonly, nonatomic) UIImage *imageForActivityItem;
- (void)attachmentModelDealloc;	// IMP=0x001000000006d70f
- (_Bool)generatePreviewsInOperation:(id)arg1;	// IMP=0x001000000009130a
- (_Bool)needToGeneratePreviews;	// IMP=0x001000000008f914
- (_Bool)generatePreviewsDuringCloudActivity;	// IMP=0x001000000008f90c
@end

