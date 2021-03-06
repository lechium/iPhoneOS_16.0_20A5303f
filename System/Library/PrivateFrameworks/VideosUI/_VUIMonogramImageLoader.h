//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface _VUIMonogramImageLoader : NSObject
{
    NSDictionary *_generatorByType;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x001000000008f3e0
- (void).cxx_destruct;	// IMP=0x000000000008fc09
- (id)_imageLoadError;	// IMP=0x000000000008fbdc
- (void)cancelLoad:(id)arg1;	// IMP=0x000000000008fb31
- (id)loadImageForObject:(id)arg1 scaleToSize:(struct CGSize)arg2 cropToFit:(_Bool)arg3 imageDirection:(long long)arg4 requestLoader:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x000000000008f753
- (id)URLForObject:(id)arg1;	// IMP=0x000000000008f6b8
- (id)imageKeyForObject:(id)arg1;	// IMP=0x000000000008f5be
- (id)init;	// IMP=0x000000000008f435

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

