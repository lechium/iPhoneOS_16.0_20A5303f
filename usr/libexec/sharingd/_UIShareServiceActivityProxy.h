//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL, NSUUID, UISUIActivityExtensionItemDataRequest;

@interface _UIShareServiceActivityProxy : NSObject
{
    NSUUID *_activityUUID;	// 8 = 0x8
    NSString *_activityType;	// 16 = 0x10
    long long _activityCategory;	// 24 = 0x18
    UISUIActivityExtensionItemDataRequest *_underlyingActivityItemDataRequest;	// 32 = 0x20
    Class _remoteClass;	// 40 = 0x28
    struct CGSize _thumbnailSize;	// 48 = 0x30
    NSURL *_representationCacheURL;	// 64 = 0x40
    CDUnknownBlockType _didFinishPreparingForExecution;	// 72 = 0x48
    CDUnknownBlockType _didFinishPerformingActivityHandler;	// 80 = 0x50
}

+ (void)forwardInvocation:(id)arg1;	// IMP=0x00400000000e7a64
+ (id)activityProxyForServiceActivityDataRequest:(id)arg1;	// IMP=0x00100000000e77f0
- (void).cxx_destruct;	// IMP=0x00200000000e7f57
@property(copy, nonatomic) CDUnknownBlockType didFinishPerformingActivityHandler; // @synthesize didFinishPerformingActivityHandler=_didFinishPerformingActivityHandler;
@property(copy, nonatomic) CDUnknownBlockType didFinishPreparingForExecution; // @synthesize didFinishPreparingForExecution=_didFinishPreparingForExecution;
- (void)_loadItemProvidersFromActivityItems:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000e7e10
- (void)_willBePerformedOrPresented;	// IMP=0x00100000000e7e0a
- (struct CGSize)_thumbnailSize;	// IMP=0x00100000000e7dfa
- (_Bool)_activitySupportsPromiseURLs;	// IMP=0x00100000000e7de4
- (_Bool);	// IMP=0x00100000000e7ddc
- (_Bool)_managesOwnPresentation;	// IMP=0x00100000000e7dd4
- (_Bool)_dismissActivityFromViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000e7dcc
- (_Bool)_presentActivityOnViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000e7db8
- (id)_embeddedActivityViewController;	// IMP=0x00100000000e7db0
- (void)_cleanup;	// IMP=0x00100000000e7daa
- (void)activityDidFinish:(_Bool)arg1 items:(id)arg2 error:(id)arg3;	// IMP=0x00100000000e7cd6
- (void)activityDidFinish:(_Bool)arg1;	// IMP=0x00100000000e7cbf
- (void)_prepareWithActivityItems:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000e7c75
- (void)prepareWithActivityItems:(id)arg1;	// IMP=0x00100000000e7c6f
- (_Bool)canPerformWithActivityItems:(id)arg1;	// IMP=0x00100000000e7c67
- (id)activityViewController;	// IMP=0x00100000000e7c5f
- (id)activityImage;	// IMP=0x00100000000e7c57
- (id)activityTitle;	// IMP=0x00100000000e7c4f
- (_Bool)allowsEmbedding;	// IMP=0x00100000000e7c47
- (_Bool)_wantsInitialSocialText;	// IMP=0x00100000000e7c3f
- (_Bool)_wantsAttachmentURLItemData;	// IMP=0x00100000000e7c29
- (_Bool)_wantsThumbnailItemData;	// IMP=0x00100000000e7c13
- (void)forwardInvocation:(id)arg1;	// IMP=0x00100000000e7be9
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x00100000000e7b08
- (id)activityType;	// IMP=0x00100000000e7a56
- (id)activityUUID;	// IMP=0x00100000000e7a48
- (_Bool)_isExecutedInProcess;	// IMP=0x00100000000e7a40
- (_Bool)isKindOfClass:(Class)arg1;	// IMP=0x00100000000e7972
- (id)initWithUnderlyingActivityItemDataRequest:(id)arg1;	// IMP=0x00100000000e7869

@end

