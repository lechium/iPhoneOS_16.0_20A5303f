//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Photos/PHFace.h>

@interface PHFace (PhotosUICore)
+ (id)px_fetchKeyFaceForPerson:(id)arg1 options:(id)arg2;	// IMP=0x00600000005c7d45
- (struct CGPoint)px_normalizedCenterEyeLine;	// IMP=0x00100000005c7c2f
- (struct CGSize)px_faceTileSizeAdjustingForImageAspectRatio:(struct CGSize)arg1;	// IMP=0x00100000005c7b70
- (struct CGRect)px_cropRectWithCropFactor:(double)arg1 bounded:(_Bool)arg2;	// IMP=0x00100000005c787a
- (struct CGRect)px_cropRectWithCropFactor:(double)arg1;	// IMP=0x00100000005c7856
- (_Bool)px_cropRectForPortraitImage:(struct CGRect *)arg1;	// IMP=0x00100000005c7597
@end
