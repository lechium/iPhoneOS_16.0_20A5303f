//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class PXGEngine, PXGLayout, PXGSpriteDataStore;

@protocol PXGEngineDelegate <NSObject>
- (_Bool)engine:(PXGEngine *)arg1 shouldRenderLayout:(PXGLayout *)arg2 sprites:(PXGSpriteDataStore *)arg3;
- (void)engineSetNeedsUpdate:(PXGEngine *)arg1;

@optional
- (void)engine:(PXGEngine *)arg1 updateDebugHUDWithStats:(CDStruct_58b866b9 *)arg2;
@end
