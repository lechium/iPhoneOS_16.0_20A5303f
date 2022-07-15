//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Portrait/NSObject-Protocol.h>

@protocol MTLCommandBuffer, MTLTexture;

@protocol PTAbstractDisparityFilter <NSObject>
- (void)reset;
- (int)temporalDisparityFilter:(id <MTLCommandBuffer>)arg1 inDisplacement:(id <MTLTexture>)arg2 inDisparityPrev:(id <MTLTexture>)arg3 inDisparity:(id <MTLTexture>)arg4 outDisparity:(id <MTLTexture>)arg5 disparityBias:(float)arg6;
- (int)temporalDisparityFilter:(id <MTLCommandBuffer>)arg1 inDisplacement:(id <MTLTexture>)arg2 inStatePrev:(id <MTLTexture>)arg3 inDisparity:(id <MTLTexture>)arg4 outDisparity:(id <MTLTexture>)arg5 outState:(id <MTLTexture>)arg6;
- (int)prepareFilter:(id <MTLCommandBuffer>)arg1 inRGBA:(id <MTLTexture>)arg2 outDisplacement:(id <MTLTexture>)arg3;
@end
