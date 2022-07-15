//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ALAssetsFilter, ALAssetsLibrary, NSMutableDictionary, NSString, PLPhotoLibrary;
@protocol PLAlbumProtocol;

__attribute__((visibility("hidden")))
@interface ALAssetsGroupPrivate : NSObject
{
    _Bool _loadedAssets;	// 8 = 0x8
    ALAssetsLibrary *_library;	// 16 = 0x10
    _Bool _isValid;	// 24 = 0x18
    _Bool _isCloudSharedGroup;	// 25 = 0x19
    _Bool _applyHyperionFilter;	// 26 = 0x1a
    NSObject<PLAlbumProtocol> *_album;	// 32 = 0x20
    ALAssetsFilter *_assetsFilter;	// 40 = 0x28
    unsigned long long _groupType;	// 48 = 0x30
    NSMutableDictionary *_propertyValues;	// 56 = 0x38
    PLPhotoLibrary *_photoLibrary;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000000c51f
@property(nonatomic) _Bool applyHyperionFilter; // @synthesize applyHyperionFilter=_applyHyperionFilter;
@property(nonatomic) _Bool isCloudSharedGroup; // @synthesize isCloudSharedGroup=_isCloudSharedGroup;
@property(retain, nonatomic) PLPhotoLibrary *_photoLibrary; // @synthesize _photoLibrary;
@property(retain, nonatomic) NSMutableDictionary *propertyValues; // @synthesize propertyValues=_propertyValues;
@property(nonatomic) _Bool isValid; // @synthesize isValid=_isValid;
@property(nonatomic) unsigned long long groupType; // @synthesize groupType=_groupType;
@property(retain, nonatomic) ALAssetsFilter *assetsFilter; // @synthesize assetsFilter=_assetsFilter;
@property(retain, nonatomic) NSObject<PLAlbumProtocol> *album; // @synthesize album=_album;
- (void)_performBlockAndWait:(CDUnknownBlockType)arg1;	// IMP=0x000000000000c28e
- (void)libraryDidChange;	// IMP=0x000000000000c27c
@property(nonatomic) ALAssetsLibrary *library;
- (void)setValue:(id)arg1 forProperty:(id)arg2;	// IMP=0x000000000000c203
- (id)valueForProperty:(id)arg1;	// IMP=0x000000000000c196
- (void)populateAssets;	// IMP=0x000000000000c178
- (void)updateAlbumFiltering;	// IMP=0x000000000000c12c
- (void)resetAssets;	// IMP=0x000000000000c0e6
- (int)albumFilter;	// IMP=0x000000000000c06b
- (void)dealloc;	// IMP=0x000000000000bfb7
- (id)initWithAlbum:(id)arg1 library:(id)arg2;	// IMP=0x000000000000bedb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
