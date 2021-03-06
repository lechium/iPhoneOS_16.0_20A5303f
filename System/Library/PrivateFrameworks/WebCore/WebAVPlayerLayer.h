//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CALayer.h>

@class AVPlayerController, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface WebAVPlayerLayer : CALayer
{
    struct RefPtr<WebCore::VideoFullscreenInterfaceAVKit, WTF::RawPtrTraits<WebCore::VideoFullscreenInterfaceAVKit>, WTF::DefaultRefDerefTraits<WebCore::VideoFullscreenInterfaceAVKit>> _fullscreenInterface;	// 8 = 0x8
    struct RetainPtr<WebAVPlayerController> _avPlayerController;	// 16 = 0x10
    struct RetainPtr<CALayer> _videoSublayer;	// 24 = 0x18
    struct FloatRect _videoSublayerFrame;	// 32 = 0x20
    struct RetainPtr<NSString> _videoGravity;	// 48 = 0x30
    struct RetainPtr<NSString> _previousVideoGravity;	// 56 = 0x38
    _Bool _readyForDisplay;	// 64 = 0x40
    NSDictionary *_pixelBufferAttributes;	// 72 = 0x48
    struct CGSize _videoDimensions;	// 80 = 0x50
    struct CGRect _modelVideoLayerFrame;	// 96 = 0x60
}

+ (id)keyPathsForValuesAffectingVideoRect;	// IMP=0x0060000002402d80
- (id).cxx_construct;	// IMP=0x0000000002403010
- (void).cxx_destruct;	// IMP=0x0000000002402ef0
@property struct CGRect modelVideoLayerFrame; // @synthesize modelVideoLayerFrame=_modelVideoLayerFrame;
@property struct CGSize videoDimensions; // @synthesize videoDimensions=_videoDimensions;
@property(copy, nonatomic) NSDictionary *pixelBufferAttributes; // @synthesize pixelBufferAttributes=_pixelBufferAttributes;
@property(nonatomic, getter=isReadyForDisplay) _Bool readyForDisplay; // @synthesize readyForDisplay=_readyForDisplay;
- (struct CGRect)videoRect;	// IMP=0x0000000002402b70
@property(retain, nonatomic) NSString *videoGravity;
- (void)resolveBounds;	// IMP=0x00000000024027e0
- (void)layoutSublayers;	// IMP=0x0000000002402420
- (struct FloatRect)calculateTargetVideoFrame;	// IMP=0x00000000024021c0
@property(retain, nonatomic) CALayer *videoSublayer;
@property(retain, nonatomic) AVPlayerController *playerController;
@property(nonatomic) void *fullscreenInterface;
- (void)dealloc;	// IMP=0x0000000002401fa0
- (id)init;	// IMP=0x0000000002401ed0

@end

