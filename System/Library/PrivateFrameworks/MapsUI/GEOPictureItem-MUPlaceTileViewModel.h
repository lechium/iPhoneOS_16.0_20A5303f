//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/GEOPictureItem.h>

@class NSString, UIImage;

@interface GEOPictureItem (MUPlaceTileViewModel)
@property(readonly, nonatomic) unsigned long long expectedNumberOfFooterLines;
- (id)footerAttributedStringForFont:(id)arg1;	// IMP=0x00200000000d0a6c
- (id)subtitleAttributedStringForFont:(id)arg1;	// IMP=0x00200000000d0a64
@property(readonly, nonatomic) UIImage *fallbackImage;
@property(readonly, nonatomic) UIImage *badgeIcon;
- (void)fetchImageTilewWithSize:(struct CGSize)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00200000000d0741
- (id)tileSubtitle;	// IMP=0x00200000000d072f
@property(readonly, nonatomic) NSString *tileName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

