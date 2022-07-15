//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/NSObject-Protocol.h>

@protocol PXSharedLibraryImageProvider <NSObject>
- (void)cancelRequestWithIdentifier:(long long)arg1;
- (long long)requestImageWithTargetSize:(struct CGSize)arg1 displayScale:(double)arg2 isRTL:(_Bool)arg3 completionHandler:(void (^)(UIImage *, NSError *))arg4;
@end
