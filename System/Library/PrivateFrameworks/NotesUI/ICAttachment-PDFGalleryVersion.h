//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NotesShared/ICAttachment.h>

@class ICDocCamImageQuad, ICNotePasteboardData, LPLinkMetadata, NSString, UIImage;

@interface ICAttachment (PDFGalleryVersion)
+ (id)imageCache;	// IMP=0x00200000000e7325
+ (id)imageLoadingOperationQueue;	// IMP=0x00200000000e6560
+ (id)thumbnailOperationQueue;	// IMP=0x00200000000e64ce
@property(readonly, nonatomic) long long docCamPDFVersion;
- (id)dataForTypeIdentifier:(id)arg1;	// IMP=0x0010000000039ff9
- (id)fileURLForTypeIdentifier:(id)arg1;	// IMP=0x0010000000039ce7
- (id)fallbackMapMetadata;	// IMP=0x00100000000e2447
- (id)fallbackWebMetadata;	// IMP=0x00100000000e2378
- (id)mapPreviewGenerationQueue;	// IMP=0x00100000000e2321
- (id)webPreviewGenerationQueue;	// IMP=0x00100000000e22ca
- (id)filePreviewGenerationQueue;	// IMP=0x00100000000e2273
- (id)archiveLinkmetadata:(id)arg1;	// IMP=0x00100000000e1fa6
- (id)lpImageFromPreviewImage:(id)arg1;	// IMP=0x00100000000e1d04
@property(readonly, nonatomic) NSString *quotedText;
- (void)requestFileMetadataIfNecessary;	// IMP=0x00100000000e1a7b
@property(readonly, nonatomic) LPLinkMetadata *loadingAttachmentsMetadata;
- (void)requestRemoteMetadata;	// IMP=0x00100000000e18da
@property(readonly, nonatomic) LPLinkMetadata *plainURLMetadata;
@property(readonly, nonatomic) LPLinkMetadata *fallbackRemoteAttachmentMetadata;
@property(readonly, nonatomic) LPLinkMetadata *synapseBasedMetadata;
@property(readonly, nonatomic) LPLinkMetadata *fileMetadata;
@property(readonly, nonatomic) LPLinkMetadata *scannedDocumentsMetadata;
- (void)addPreviewImageToMetadata:(id)arg1;	// IMP=0x00100000000e1065
@property(readonly, nonatomic) _Bool alwaysUsesSmallSize;
@property(readonly, nonatomic) _Bool usesLinkPresentation;
@property(readonly, nonatomic) _Bool metadataExists;
- (void)persistLinkMetadata:(id)arg1;	// IMP=0x00100000000e0d25
- (id)retrieveLinkMetadata;	// IMP=0x00100000000e0782
- (void)redactAuthorAttributionsToCurrentUser;	// IMP=0x00100000000e8527
- (void)notifyDocCamFrameworkAttachmentWasDeleted;	// IMP=0x00100000000e850b
- (_Bool)fetchThumbnailImageWithMinSize:(struct CGSize)arg1 scale:(double)arg2 appearanceInfo:(id)arg3 cache:(id)arg4 cacheKey:(id)arg5 processingBlock:(CDUnknownBlockType)arg6 completionBlock:(CDUnknownBlockType)arg7 fallbackBlock:(CDUnknownBlockType)arg8 aboutToLoadHandler:(CDUnknownBlockType)arg9;	// IMP=0x00100000000e8173
- (_Bool)thumbnailImage:(id *)arg1 minSize:(struct CGSize)arg2 scale:(double)arg3 appearanceType:(unsigned long long)arg4 requireAppearance:(_Bool)arg5 imageScaling:(unsigned long long *)arg6 showAsFileIcon:(_Bool *)arg7 isMovie:(_Bool *)arg8 movieDuration:(CDStruct_198678f7 *)arg9;	// IMP=0x00100000000e7eb8
- (_Bool)thumbnailImage:(id *)arg1 minSize:(struct CGSize)arg2 scale:(double)arg3 imageScaling:(unsigned long long *)arg4 showAsFileIcon:(_Bool *)arg5 isMovie:(_Bool *)arg6 movieDuration:(CDStruct_198678f7 *)arg7;	// IMP=0x00100000000e7e89
- (id)updateAttachmentPreviewImageWithImage:(id)arg1 scale:(double)arg2 appearanceType:(unsigned long long)arg3 scaleWhenDrawing:(_Bool)arg4 metadata:(id)arg5 sendNotification:(_Bool)arg6;	// IMP=0x00100000000e7da0
- (id)updateAttachmentPreviewImageWithImage:(id)arg1 scale:(double)arg2 scaleWhenDrawing:(_Bool)arg3 metadata:(id)arg4 sendNotification:(_Bool)arg5;	// IMP=0x00100000000e7d76
- (id)deviceInfosWithoutPreviewImagesFromDeviceInfos:(id)arg1;	// IMP=0x00100000000e7bc7
@property(readonly, nonatomic) NSString *movieDurationForSpeaking;
@property(readonly, nonatomic) NSString *modificationDateForSpeaking;
- (id)activityItems;	// IMP=0x00100000000e7800
@property(readonly, nonatomic) ICNotePasteboardData *pasteboardData;
- (id)attributedString;	// IMP=0x00100000000e7459
- (id)cachedImage;	// IMP=0x00100000000e73d2
- (void)setCachedImage:(id)arg1;	// IMP=0x00100000000e7337
- (CDUnknownBlockType)loadImage:(CDUnknownBlockType)arg1 aboutToLoadHandler:(CDUnknownBlockType)arg2 forceFullSizeImage:(_Bool)arg3;	// IMP=0x00100000000e6bd7
- (CDUnknownBlockType)loadImage:(CDUnknownBlockType)arg1;	// IMP=0x00100000000e6bc0
@property(copy, nonatomic) ICDocCamImageQuad *croppingQuad;
@property(readonly, nonatomic) UIImage *unprocessedDocumentImage;
@property(readonly, nonatomic) UIImage *image;
@property(readonly, nonatomic) _Bool isUnsupportedOnCurrentPlatform;
- (id)inlineAttachmentWithTTAttachment:(id)arg1;	// IMP=0x00100000000e8cd5
- (id)inlineAttachmentFromObject:(id)arg1 createIfNecessary:(_Bool)arg2;	// IMP=0x00100000000e892d
- (void)filterInlineAttachmentsInTableColumnTextStorage:(id)arg1 range:(struct _NSRange)arg2;	// IMP=0x00100000000e8594
@end
