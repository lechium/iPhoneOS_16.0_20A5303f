//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol NUImage, NUMutableImage, NUMutablePurgeableImage, NUPurgeableImage;

@protocol NUImageCopying
- (id <NUMutablePurgeableImage>)mutablePurgeableImageCopy;
- (id <NUPurgeableImage>)purgeableImageCopy;
- (id <NUMutableImage>)mutableImageCopy;
- (id <NUImage>)immutableImageCopy;
@end
