//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class LPImage, LPLinkMetadata;
@protocol PUSharingHeaderDataProvider, PXDisplayAsset;

__attribute__((visibility("hidden")))
@interface PUSharingHeaderController : NSObject
{
    LPImage *_icloudLinkImage;	// 8 = 0x8
    LPImage *_placeholderImage;	// 16 = 0x10
    id <PXDisplayAsset> _sharingHeaderFrontAsset;	// 24 = 0x18
    id <PXDisplayAsset> _sharingHeaderBackAsset;	// 32 = 0x20
    id <PUSharingHeaderDataProvider> _dataProvider;	// 40 = 0x28
    LPLinkMetadata *_linkMetadata;	// 48 = 0x30
}

+ (id)new;	// IMP=0x0060000000171090
- (void).cxx_destruct;	// IMP=0x0000000000170e12
@property(retain, nonatomic) LPLinkMetadata *linkMetadata; // @synthesize linkMetadata=_linkMetadata;
@property(readonly, nonatomic) __weak id <PUSharingHeaderDataProvider> dataProvider; // @synthesize dataProvider=_dataProvider;
- (id)_linkPresentationImageForPerson:(id)arg1;	// IMP=0x0000000000170c84
- (id)createTextAttachmentForGlyphImageWithName:(id)arg1;	// IMP=0x0000000000170b64
- (id)_sharingHeaderStatus;	// IMP=0x000000000016f909
- (void)updateIfNeeded;	// IMP=0x000000000016ef0a
- (id)initWithDataProvider:(id)arg1;	// IMP=0x000000000016edde
- (id)init;	// IMP=0x000000000016ed64

@end
