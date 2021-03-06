//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GEOComposedRouteStep, NSData, TransitDirectionsListItem;

@interface RAPInstructionCorrectionQuestion
{
    NSData *_cellScreenshotImageData;	// 8 = 0x8
    GEOComposedRouteStep *_composedRouteStep;	// 16 = 0x10
    TransitDirectionsListItem *_listItem;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000825d21
@property(readonly, nonatomic) TransitDirectionsListItem *listItem; // @synthesize listItem=_listItem;
@property(readonly, nonatomic) GEOComposedRouteStep *composedRouteStep; // @synthesize composedRouteStep=_composedRouteStep;
@property(copy, nonatomic) NSData *cellScreenshotImageData; // @synthesize cellScreenshotImageData=_cellScreenshotImageData;
- (id)initWithReport:(id)arg1 parentQuestion:(id)arg2 composedRouteStep:(id)arg3 listItem:(id)arg4;	// IMP=0x0010000000825be5
- (id)_commentsPlaceholderText;	// IMP=0x0010000000825b7d
- (id)commentsTitle;	// IMP=0x0010000000825b64
- (void)fillIndexesForResponse:(id)arg1 problemAticRouteIndex:(id)arg2 correction:(id)arg3;	// IMP=0x0010000000825647
- (void)_fillSubmissionParameters:(id)arg1;	// IMP=0x0010000000824feb
- (unsigned long long)maximumNumberOfPhotos;	// IMP=0x0010000000824fe0

@end

