//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSReading/NSObject-Protocol.h>

@class TSDBackgroundLayoutAndRenderState;

@protocol TSDBackgroundLayoutAndRenderStateDelegate <NSObject>
- (void)backgroundLayoutAndRenderStateDidPerformBackgroundWork:(TSDBackgroundLayoutAndRenderState *)arg1;
- (_Bool)backgroundLayoutAndRenderState:(TSDBackgroundLayoutAndRenderState *)arg1 shouldDispatchBackgroundWork:(void (^)(void))arg2;
- (void)backgroundLayoutAndRenderState:(TSDBackgroundLayoutAndRenderState *)arg1 performWorkInBackgroundTilingOnly:(_Bool)arg2;
@end

