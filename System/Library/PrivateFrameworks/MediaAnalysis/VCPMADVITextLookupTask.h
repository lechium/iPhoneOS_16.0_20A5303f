//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MADVITextLookupRequest, NSString, VCPMADServiceImageAsset;
@protocol MTLDevice, OS_dispatch_queue, VICancellable;

__attribute__((visibility("hidden")))
@interface VCPMADVITextLookupTask : NSObject
{
    MADVITextLookupRequest *_request;	// 8 = 0x8
    VCPMADServiceImageAsset *_imageAsset;	// 16 = 0x10
    NSString *_signpostPayload;	// 24 = 0x18
    id <MTLDevice> _preferredMetalDevice;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_cancelQueue;	// 40 = 0x28
    struct atomic<bool> _canceled;	// 48 = 0x30
    id <VICancellable> _cancellable;	// 56 = 0x38
}

+ (id)dependencies;	// IMP=0x00100000000c5033
+ (id)taskWithRequest:(id)arg1 imageAsset:(id)arg2 andSignpostPayload:(id)arg3;	// IMP=0x00100000000c4e4a
- (void).cxx_destruct;	// IMP=0x00000000000c63a4
- (int)run;	// IMP=0x00000000000c53a5
- (id)createQueryContextWithError:(id *)arg1;	// IMP=0x00000000000c50ee
- (void)cancel;	// IMP=0x00000000000c5067
- (_Bool)autoCancellable;	// IMP=0x00000000000c505f
- (float)resourceRequirement;	// IMP=0x00000000000c5051
- (void)setPreferredMetalDevice:(id)arg1;	// IMP=0x00000000000c5040
- (id)initWithRequest:(id)arg1 imageAsset:(id)arg2 andSignpostPayload:(id)arg3;	// IMP=0x00000000000c4d50

@end
