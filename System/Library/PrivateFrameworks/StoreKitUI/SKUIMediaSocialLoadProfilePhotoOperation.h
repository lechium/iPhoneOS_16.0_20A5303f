//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreServices/SSVComplexOperation.h>

@class NSLock, SKUIClientContext, SKUIMediaSocialProfile;

__attribute__((visibility("hidden")))
@interface SKUIMediaSocialLoadProfilePhotoOperation : SSVComplexOperation
{
    SKUIClientContext *_clientContext;	// 8 = 0x8
    NSLock *_lock;	// 16 = 0x10
    CDUnknownBlockType _outputBlock;	// 24 = 0x18
    SKUIMediaSocialProfile *_profile;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000356277
- (id)_silhouette;	// IMP=0x0000000000356206
- (void)_returnPhoto:(id)arg1 isFinal:(_Bool)arg2;	// IMP=0x00000000003560fc
- (void)_fetchProfile;	// IMP=0x0000000000355f0c
- (void)_fetchPhoto;	// IMP=0x0000000000355c95
- (void)_fetchMonogram;	// IMP=0x0000000000355a8f
- (void)main;	// IMP=0x0000000000355a32
@property(copy) CDUnknownBlockType outputBlock;
- (id)initWithClientContext:(id)arg1;	// IMP=0x0000000000355898

@end
