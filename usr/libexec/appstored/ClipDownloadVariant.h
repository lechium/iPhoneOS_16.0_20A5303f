//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, NSURL;

@interface ClipDownloadVariant : NSObject
{
    NSURL *_assetURL;	// 8 = 0x8
    NSString *_assetToken;	// 16 = 0x10
    NSString *_md5;	// 24 = 0x18
    NSArray *_variantDeltas;	// 32 = 0x20
    NSArray *_variantDescriptors;	// 40 = 0x28
}

+ (id)_variantDescriptorsFromTargetArray:(id)arg1;	// IMP=0x0020000000026931
+ (id)_variantDeltasFromDeltasInfo:(id)arg1;	// IMP=0x0010000000026744
- (void).cxx_destruct;	// IMP=0x0020000000026b62
@property(readonly) NSArray *variantDescriptors; // @synthesize variantDescriptors=_variantDescriptors;
@property(readonly) NSArray *variantDeltas; // @synthesize variantDeltas=_variantDeltas;
@property(readonly) NSString *md5; // @synthesize md5=_md5;
@property(readonly) NSString *assetToken; // @synthesize assetToken=_assetToken;
@property(readonly) NSURL *assetURL; // @synthesize assetURL=_assetURL;
@property(readonly, copy) NSString *description;
- (id)variantDeltaFromAssetToken:(id)arg1;	// IMP=0x001000000002645a
@property(readonly) _Bool deltaUpdate;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00100000000262c4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
