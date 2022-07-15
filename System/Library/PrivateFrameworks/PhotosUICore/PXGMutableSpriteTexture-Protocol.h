//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXGSpriteTexture-Protocol.h>

@class PXGChangeDetails;

@protocol PXGMutableSpriteTexture <PXGSpriteTexture>
@property(nonatomic) _Bool isDegraded;
- (void)removeSpriteIndex:(unsigned int)arg1;
- (void)processPendingTextureRequestIDsWithHandler:(unsigned int (^)(int, unsigned int))arg1;
- (_Bool)removePendingSpriteWithTextureRequestID:(int)arg1 ifDeliveredBefore:(unsigned int)arg2;
- (void)addSpriteWithTextureRequestID:(int)arg1 deliveryOrder:(unsigned int)arg2;
- (void)applyChangeDetails:(PXGChangeDetails *)arg1;
@end
