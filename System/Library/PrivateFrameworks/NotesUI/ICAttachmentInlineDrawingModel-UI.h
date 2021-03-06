//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NotesShared/ICAttachmentInlineDrawingModel.h>

@class NSObject, UIImage;
@protocol OS_dispatch_queue;

@interface ICAttachmentInlineDrawingModel (UI)
+ (_Bool)handwritingRecognitionSupported;	// IMP=0x002000000003c468
+ (void)generatePreviewsForAttachment:(id)arg1 fromDrawing:(id)arg2;	// IMP=0x002000000013a4b0
+ (id)generateImageForAttachment:(id)arg1 fromDrawing:(id)arg2 fullResolution:(_Bool)arg3 appearanceInfo:(id)arg4;	// IMP=0x0020000000139bb3
+ (id)previewImageFromDrawing:(id)arg1 fullImage:(struct CGImage *)arg2 scale:(double)arg3;	// IMP=0x0020000000139276
+ (unsigned short)drawingPreviewVersion;	// IMP=0x0020000000139257
- (void)drawPreviewInRect:(struct CGRect)arg1;	// IMP=0x001000000000d27f
- (void)titleQuery:(id)arg1 didUpdateWithItem:(id)arg2;	// IMP=0x001000000000d008
- (id)titleQueryDrawingDispatchQueue:(id)arg1;	// IMP=0x001000000000cff6
- (void)setTitleQuery:(id)arg1;	// IMP=0x001000000000cfe0
- (id)titleQuery;	// IMP=0x001000000000cfcf
@property(nonatomic, getter=isTitleQueryEnabled) _Bool titleQueryEnabled;
- (void)setHandwritingRecognitionDrawingQueue:(id)arg1;	// IMP=0x001000000000ca84
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *handwritingRecognitionDrawingQueue;
@property(nonatomic, getter=isHandwritingRecognitionEnabled) _Bool handwritingRecognitionEnabled;
- (void)updateAfterLoadWithSubAttachmentIdentifierMap:(id)arg1;	// IMP=0x001000000000c793
- (id)mergeableDataForCopying:(id *)arg1;	// IMP=0x001000000000c74b
- (id)activityItems;	// IMP=0x001000000000c630
- (id)activityItem;	// IMP=0x001000000000c5c7
@property(readonly, nonatomic) UIImage *imageForActivityItem;
- (_Bool)actuallyMergeWithDrawing:(id)arg1;	// IMP=0x001000000000bafe
- (_Bool)mergeWithMergeableData:(id)arg1;	// IMP=0x001000000000b9af
- (_Bool)mergeWithDrawing:(id)arg1;	// IMP=0x001000000000b99d
- (void)attachmentModelDealloc;	// IMP=0x001000000000b951
- (_Bool)generatePreviewsInOperation:(id)arg1;	// IMP=0x001000000013b0d9
- (_Bool)needToGeneratePreviews;	// IMP=0x0010000000138ef1
- (_Bool)generatePreviewsDuringCloudActivity;	// IMP=0x0010000000138ee9
@end

