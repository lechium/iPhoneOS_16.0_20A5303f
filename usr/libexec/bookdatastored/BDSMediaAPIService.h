//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface BDSMediaAPIService : NSObject
{
}

+ (void)fetchMixedAssetsWithBookIds:(id)arg1 audiobookIds:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x004000000004f589
+ (void)fetchAssetsWithAdamIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000004f1a4
+ (void)fetchAssetWithAdamID:(id)arg1 type:(int)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000004ef5c
+ (void)fetchAssetWithAdamID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000004ed32

@end
