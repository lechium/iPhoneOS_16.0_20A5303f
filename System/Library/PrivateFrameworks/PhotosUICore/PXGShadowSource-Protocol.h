//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXGLayoutContentSource-Protocol.h>

@class NSShadow, PXGLayout;

@protocol PXGShadowSource <PXGLayoutContentSource>
- (double)cornerRadiusForShadowSpriteAtIndex:(unsigned int)arg1 inLayout:(PXGLayout *)arg2;
- (NSShadow *)shadowForSpriteAtIndex:(unsigned int)arg1 inLayout:(PXGLayout *)arg2;
@end
