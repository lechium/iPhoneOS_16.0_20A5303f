//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSCoder.h>

@interface NSCoder (LPExtras)
- (id)_lp_strictlyDecodeColorForKey:(id)arg1;	// IMP=0x00700000000a0c14
- (void)_lp_encodeColorIfNotNil:(id)arg1 forKey:(id)arg2;	// IMP=0x00700000000a0a67
- (void)_lp_encodeURLIfNotNilOrLocalFile:(id)arg1 forKey:(id)arg2;	// IMP=0x00700000000a09f1
- (void)_lp_encodeArrayIfNotEmpty:(id)arg1 forKey:(id)arg2;	// IMP=0x00700000000a097f
- (void)_lp_encodeObjectIfNotNil:(id)arg1 forKey:(id)arg2;	// IMP=0x00700000000a0966
- (id)_lp_strictlyDecodeDictionaryOfObjectsWithKeysOfClass:(Class)arg1 andObjectsOfClass:(Class)arg2 forKey:(id)arg3;	// IMP=0x00700000000a0731
- (id)_lp_strictlyDecodeArrayOfObjectsOfClasses:(id)arg1 forKey:(id)arg2;	// IMP=0x00700000000a036b
- (id)_lp_strictlyDecodeArrayOfObjectsOfClass:(Class)arg1 forKey:(id)arg2;	// IMP=0x00700000000a0126
- (id)_lp_strictlyDecodeTopLevelObjectOfClasses:(id)arg1 forKey:(id)arg2 error:(id *)arg3;	// IMP=0x007000000009ff61
- (id)_lp_strictlyDecodeTopLevelObjectOfClass:(Class)arg1 forKey:(id)arg2 error:(id *)arg3;	// IMP=0x007000000009fe8a
- (id)_lp_strictlyDecodeObjectOfClasses:(id)arg1 forKey:(id)arg2;	// IMP=0x007000000009fccb
- (id)_lp_strictlyDecodeObjectOfClass:(Class)arg1 forKey:(id)arg2;	// IMP=0x007000000009fbfc
- (id)_lp_strictlyDecodeLPVideoForKey:(id)arg1;	// IMP=0x007000000009fb49
- (id)_lp_strictlyDecodeArrayOfLPImagesForKey:(id)arg1;	// IMP=0x007000000009fa96
- (id)_lp_strictlyDecodeLPImageForKey:(id)arg1;	// IMP=0x007000000009f9e3
- (id)_lp_strictlyDecodeArrayOfLPARAssetsForKey:(id)arg1;	// IMP=0x007000000009f930
- (id)_lp_strictlyDecodeLPARAssetForKey:(id)arg1;	// IMP=0x007000000009f87d
- (id)_lp_strictlyDecodeNSAttributedStringForKey:(id)arg1;	// IMP=0x007000000009f7ca
- (id)_lp_strictlyDecodeNSStringForKey:(id)arg1;	// IMP=0x007000000009f717
- (id)_lp_strictlyDecodeNSDataForKey:(id)arg1;	// IMP=0x007000000009f664
@end

