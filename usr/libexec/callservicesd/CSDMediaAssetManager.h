//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface CSDMediaAssetManager : NSObject
{
}

- (void)saveVideoWithURL:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00200000000b8077
- (void)saveLivePhotoWithPhotoURL:(id)arg1 videoURL:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000b7bb6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
