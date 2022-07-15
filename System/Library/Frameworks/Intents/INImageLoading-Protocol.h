//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INImageServing-Protocol.h>

@class INImage, INPortableImageLoader;

@protocol INImageLoading <INImageServing>
- (void)loadDataImageFromImage:(INImage *)arg1 usingPortableImageLoader:(INPortableImageLoader *)arg2 scaledSize:(CDStruct_c3b9c2ee)arg3 completion:(void (^)(INImage *, NSError *))arg4;
- (_Bool)canLoadImageDataForImage:(INImage *)arg1;
@end
