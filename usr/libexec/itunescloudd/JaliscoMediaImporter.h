//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ICDJaliscoMediaFilter, NSArray;
@protocol ICDJaliscoSupportedMediaKindsHandler;

@interface JaliscoMediaImporter
{
    ICDJaliscoMediaFilter *_mediaFilter;	// 8 = 0x8
    NSArray *_supportedMediaKinds;	// 16 = 0x10
    id <ICDJaliscoSupportedMediaKindsHandler> _supportedMediaKindsHandler;	// 24 = 0x18
}

+ (id)oversizeLogCategory;	// IMP=0x00400000000cdd06
+ (id)logCategory;	// IMP=0x00100000000cdce6
- (void).cxx_destruct;	// IMP=0x00200000000cd3ca
- (id)_supportedMediaKindsDatabasePropertyValue;	// IMP=0x00100000000cd349
- (id)_importTracksFromRevision:(unsigned int)arg1 toRevision:(unsigned int)arg2 withItemsResponse:(id)arg3 clientIdentity:(id)arg4;	// IMP=0x00100000000cc96b
- (id)_chapterArtworkURLsForData:(id)arg1 baseURL:(id)arg2;	// IMP=0x00100000000cc567
- (id)_chapterDataFromURL:(id)arg1;	// IMP=0x00100000000cc4d9
- (id)updateLibraryFromRevision:(unsigned int)arg1 toRevision:(unsigned int)arg2 withResponse:(id)arg3 clientIdentity:(id)arg4;	// IMP=0x00100000000cc411
- (void)clearNeedsUpdateForTokens;	// IMP=0x00100000000cc3d2
- (_Bool)needsUpdateForTokens;	// IMP=0x00100000000cc1fe
- (id)supportedMediaKinds;	// IMP=0x00100000000cc183
- (id)metadataKeys;	// IMP=0x00100000000cbcf7
- (id)purchaseTokens;	// IMP=0x00100000000cb917
- (id)queryFilter;	// IMP=0x00100000000cb8c7
- (id)mediaFilter;	// IMP=0x00100000000cb809
- (_Bool)includePreorders;	// IMP=0x00100000000cb801
- (unsigned int)onDiskRevision;	// IMP=0x00100000000cb7bd
- (void)cancel;	// IMP=0x00100000000cb6d1
- (id)initWithConnection:(id)arg1 supportedMediaKindsHandler:(id)arg2;	// IMP=0x00100000000cb659

@end

