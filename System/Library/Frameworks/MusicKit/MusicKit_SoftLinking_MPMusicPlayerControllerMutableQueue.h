//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPMusicPlayerControllerMutableQueue;

__attribute__((visibility("hidden")))
@interface MusicKit_SoftLinking_MPMusicPlayerControllerMutableQueue : NSObject
{
    MPMusicPlayerControllerMutableQueue *_underlyingMutableQueue;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000328b
- (void)removeItemWithIdentifier:(id)arg1;	// IMP=0x0000000000003275
- (void)insertQueueDescriptor:(id)arg1 afterItemWithIdentifier:(id)arg2;	// IMP=0x00000000000031fc
@property(readonly, nonatomic) MPMusicPlayerControllerMutableQueue *_underlyingMutableQueue;
- (id)_initWithUnderlyingMutableQueue:(id)arg1;	// IMP=0x0000000000003183

@end
